using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.Rendering;
using System.Linq;
using NestingLibPort.Util;
using NestingLibPort.Data;
using NestingLibPort;
using System.Diagnostics;
using System.Threading;

namespace Unfolder
{

    public class Pattern
    {
        public int iterations;
        public int totalShapesToCompute;
        public int shapesComputed;

        // Pour model
        public float polyReduceFactor = 1f;
        public bool acceptMixedMaterials = true;

        // Pour nesting and layout
        public float shapeMaxSizeRatio = 0.7f;
        public int maxShapesPerBatch = 300;
        public Vector2 sheetSize = new Vector2(29.7f, 21f);
        public Vector2 sheetMargin = new Vector2(1.3f, 1.5f);
        public float sheetMarginFactor = 1.1f; // Ecart entre les feuilles de 10%

        // Pour impression carton
        public float stripHeight = 0.75f;
        public float stripAngle = 80f;
        public float angleNoFold = 15f;
        public float stripMinHeight = 0.5f;
        public float stripMinAngle = 15f;
        public float lineThickness = 0.01f;

        // Pour impression3D
        public float foldLimitAngle = 5f;
        public float pieceThickness = 0.35f;
        public float foldThickness = 0.08f;

        public readonly Material stripMaterial;
        public readonly Material strip3DMaterial;
        public readonly Material mountainMaterial;
        public readonly Material valleyMaterial;
        public readonly Material flatMaterial;
        public readonly Material cutMaterial;
        public readonly Material cut3DMaterial;
        public readonly Material backMaterial;
        public readonly Material back3DMaterial;
        
        public readonly Shader textShader;
        public readonly Shader unlitColorShader;
        public readonly Shader unlitTextureShader;

        private readonly GameObject alphabet;
        public readonly GameObject snapMale;
        public readonly GameObject snapFemale;
        public readonly GameObject object3D;
        public readonly MeshStructure meshStructure;
        public readonly Dictionary<int, Shape> shapes;
        public readonly List<List<Shape>> sheets;

        private Dictionary<int, GameObject> shape3DById;
        public int sheetCount;
        private Nest nest;
        private TaskProgress taskProgress;

        public Pattern(GameObject object3D, TaskProgress taskProgress)
        {
            this.object3D = object3D;
            this.taskProgress = taskProgress;

            alphabet = Resources.Load("Alphabet", typeof(GameObject)) as GameObject;
            snapFemale = Resources.Load("SnapFemale", typeof(GameObject)) as GameObject;
            snapMale = Resources.Load("SnapMale", typeof(GameObject)) as GameObject;
            stripMaterial = Resources.Load("Material/StripMaterial", typeof(Material)) as Material;
            strip3DMaterial = Resources.Load("Material/Strip3DMaterial", typeof(Material)) as Material;
            valleyMaterial = Resources.Load("Material/ValleyMaterial", typeof(Material)) as Material;
            mountainMaterial = Resources.Load("Material/MountainMaterial", typeof(Material)) as Material;
            flatMaterial = Resources.Load("Material/FlatMaterial", typeof(Material)) as Material;
            cutMaterial = Resources.Load("Material/CutMaterial", typeof(Material)) as Material;
            cut3DMaterial = Resources.Load("Material/Cut3DMaterial", typeof(Material)) as Material;
            backMaterial = Resources.Load("Material/BackMaterial", typeof(Material)) as Material;
            back3DMaterial = Resources.Load("Material/Back3DMaterial", typeof(Material)) as Material;
            textShader = Resources.Load("Shader/OneSideTextShader", typeof(Shader)) as Shader;
            unlitColorShader = Shader.Find("Unlit/Color");
            unlitTextureShader = Shader.Find("Unlit/Texture");

            meshStructure = new MeshStructure(object3D);
            shapes = new Dictionary<int, Shape>();
            sheets = new List<List<Shape>>();
        }

        public void Destroy()
        {
            GameObject.Destroy(object3D);
        }

        public void Compute()
        {
            taskProgress.progressMessage = "Computing artcraft preview";
            CreateShapes();
            ExpandShapes();
            BuildStrips();
            BuildStripsIds();
        }

        private Shape AddShape(Triangle triangle)
        {
            int shapeId = shapes.Count;
            Shape shape = new Shape(triangle, this, shapeId);
            shapes.Add(shapeId, shape);
            return shape;
        }

        public void CreateShapes()
        {
            var remainingTriangles = new List<Triangle>(meshStructure.triangles);
            //remainingTriangles.Sort(new Triangle.ByPerimeter());
            while (remainingTriangles.Count > 0)
            {
                Triangle first = remainingTriangles.First();
                remainingTriangles.Remove(first);
                Shape shape = AddShape(first);
                bool added = true;
                while (added) {
                    added = false;
                    foreach (var border in shape.GetBorders().ToList())
                    {
                        if (taskProgress.requestInterruption) throw new ThreadInterruptedException("Operation create shapes cancelled by user");
                        foreach (var opposite in border.GetConnectedSides())
                        {
                            if (Math.Abs(border.GetAngle(opposite)) > 1E-2) continue; // TODO Sortir constante
                            if (shape.AddTriangleToBorder(border, opposite, false))
                            {
                                added = true;
                                remainingTriangles.Remove(opposite.triangle);
                                break;
                            }
                        }
                    }
                }
            }
        }

        public void ExpandShapes()
        {
            bool added = true;
            int i = 1;
            while (added && (iterations == 0 || i < iterations))
            {
                added = false;
                var borders = new List<Side>();
                foreach (var shape in shapes.Values)
                {
                    borders.AddRange(shape.GetBorders());
                    borders.Except(shape.stuckBorders);
                }
                borders.Sort(new Side.ByLengthToPerimeterRatioDesc());
                if (i == 1) totalShapesToCompute = shapes.Count;
                else shapesComputed = totalShapesToCompute - shapes.Count;
                UnityEngine.Debug.Log("Computed : "+ shapesComputed + " / "+ totalShapesToCompute);
                taskProgress.progressAmount = (1.0f * shapesComputed) / totalShapesToCompute;
                foreach (var border in borders)
                {
                    Shape shape1 = border.triangle.shape;
                    if (!shapes.ContainsKey(shape1.shapeId)) continue;
                    if (taskProgress.requestInterruption) throw new ThreadInterruptedException("Operation expand shapes cancelled by user");
                    foreach (var opposite in border.GetConnectedSides())
                    {
                        Shape addedShape = shape1.AddShapeToBorder(border, opposite, false);
                        if (addedShape != null)
                        {
                            i++;
                            shapes.Remove(addedShape.shapeId);
                            //UnityEngine.Debug.Log("Shape "+addedShape.shapeId+" added to "+shape1.shapeId);
                            //UnityEngine.Debug.Log("Total border size = "+border.GetMaxStraightLength() + " size = "+border.GetLength());
                            added = true;
                            break;
                        }
                    }
                    if (added) break;
                }
            }
        }

        public void RequestInterruption()
        {
            taskProgress.requestInterruption = true;
        }

        public void BuildStripsIds()
        {
            int stripId = 1;
            HashSet<Side> usedSide = new HashSet<Side>();
            var borders = new List<Side>();
            foreach (var shape in shapes.Values)
            {
                borders.AddRange(shape.GetBorders());
                borders.Except(shape.stuckBorders);
            }
            borders.Sort(new Side.ByLength());
            foreach (var side in borders)
            {
                if (taskProgress.requestInterruption) throw new ThreadInterruptedException("Operation build strips IDs cancelled by user");
                if (usedSide.Contains(side)) continue;
                bool oppositeExist = false;
                foreach (var opposite in side.GetConnectedSides())
                {
                    if (usedSide.Contains(opposite)) continue;
                    oppositeExist = true;
                    side.stripId = stripId;
                    opposite.stripId = stripId;
                    usedSide.Add(opposite);
                }
                usedSide.Add(side);
                if (oppositeExist) stripId++;
            }
        }

        public void BuildStrips()
        {
            HashSet<Side> usedSide = new HashSet<Side>();
            foreach (var shape in shapes.Values)
            {
                bool lastMale = false;
                List<Side> sides = shape.GetBordersInOrder();
                foreach (var side in sides)
                {
                    if (usedSide.Contains(side)) continue;
                    foreach (var opposite in side.GetConnectedSides())
                    {
                        if (taskProgress.requestInterruption) throw new ThreadInterruptedException("Operation create strips cancelled by user");
                        if (usedSide.Contains(opposite)) continue;
                        side.stripType = lastMale ? StripType.Female : StripType.Male;
                        opposite.stripType = lastMale ? StripType.Male : StripType.Female;
                        usedSide.Add(opposite);
                    }
                    lastMale = !lastMale;
                    usedSide.Add(side);
                }
            }
            foreach (var shape in shapes.Values)
                shape.ComputeSize();
        }

        public Dictionary<int, List<Shape>> GetShapesByColor()
        {
            var shapesByColor = new Dictionary<int, List<Shape>>();
            foreach (var shape in shapes.Values)
            {
                int colorId = shape.triangles.First().subMeshId;
                List<Shape> subShapes;
                if (shapesByColor.ContainsKey(colorId))
                    subShapes = shapesByColor[colorId];
                else
                {
                    subShapes = new List<Shape>();
                    shapesByColor.Add(colorId, subShapes);
                }
                subShapes.Add(shape);
            }
            return shapesByColor;
        }

        public List<List<Shape>> GetShapeBatches(IEnumerable<Shape> shapesToBatch, int maxShapePerBatch)
        {
            var batches = new List<List<Shape>>();
            var sortedShapes = new List<Shape>(shapesToBatch);
            sortedShapes.Sort(new Shape.ByPerimeter());
            bool first = false;
            while (sortedShapes.Count > 0)
            {
                List<Shape> batch = new List<Shape>();
                batches.Add(batch);
                while (batch.Count < maxShapePerBatch && sortedShapes.Count > 0)
                {
                    Shape shape = first ? sortedShapes.First() : sortedShapes.Last();
                    batch.Add(shape);
                    sortedShapes.Remove(shape);
                    first = !first;
                }
            }
            return batches;
        }

        public List<List<Shape>> GetShapeBatches(int maxShapePerBatch)
        {
            var result = new List<List<Shape>>();
            var shapesByColor = new List<List<Shape>>(GetShapesByColor().Values);
            shapesByColor.Sort((x, y) => y.Count - x.Count);
            if (!acceptMixedMaterials) {
                foreach (var shapesOfColor in shapesByColor)
                    result.AddRange(GetShapeBatches(shapesOfColor, maxShapePerBatch));
                return result;
            }
            else
                return GetShapeBatches(shapes.Values, maxShapePerBatch);
        }



        public void NestShapes(TaskProgress taskProgress)
        {
            OrganizeShapes(true);
            sheets.Clear();
            float factor = 10f;
            int page = 0;
            var batches = GetShapeBatches(maxShapesPerBatch);
            foreach (var shapeBatch in batches) {
                if (iterations != 0) throw new Exception ("No nesting because debug mode for testing iterations");

                List<NestPath> nestPaths = new List<NestPath>();
                var mapShape = new int[shapes.Count + 1];
                int i = 0;
                foreach (var shape in shapeBatch)
                {
                    i++;
                    NestPath polygon = new NestPath();
                    foreach (var point in shape.GetPolygon())
                        polygon.add(point.x * factor, point.y * factor);
                    polygon.bid = shape.shapeId;
                    mapShape[i] = shape.shapeId;
                    polygon.setRotation(4);
                    nestPaths.Add(polygon);
                }
                NestPath bin = new NestPath();
                double binWidth = (sheetSize.x - 2 * sheetMargin.x) * factor;
                double binHeight = (sheetSize.y - 2 * sheetMargin.y) * factor;
                bin.add(0, 0);
                bin.add(binWidth, 0);
                bin.add(binWidth, binHeight);
                bin.add(0, binHeight);
                Config config = new Config();
                Config.CLIIPER_SCALE = 10000;
                config.SPACING = (stripHeight * 2 + lineThickness) * factor;
                config.POPULATION_SIZE = 10;
                Config.CURVE_TOLERANCE = 0.01;
                config.MUTATION_RATE = 8;
                config.CONCAVE = false;
                config.USE_HOLE = false;

                UnityEngine.Debug.Log("Configuring Nest");
                nest = new Nest(bin, nestPaths, config, 1);
                UnityEngine.Debug.Log("Performing Nest");

                List<List<Placement>> appliedPlacement = nest.startNest(taskProgress);
                
                foreach (var placements in appliedPlacement)
                {
                    List<Shape> shapeSheet = new List<Shape>();
                    foreach (var placement in placements)
                    {
                        int shapeId = placement.bid; // TODO
                        Vector2 translation = new Vector2((float)placement.translate.getX(), (float)placement.translate.getY())/factor + sheetMargin;
                        float angle = (float)placement.rotate;
                        Matrix4x4 newTransformation = Matrix4x4.TRS(translation, Quaternion.AngleAxis(angle, Vector3.forward), Vector3.one) * shapes[shapeId].GetShapeTransformation();
                        shapes[shapeId].SetShapeTransformation(newTransformation);
                        shapeSheet.Add(shapes[shapeId]);
                    }
                    sheets.Add(shapeSheet);
                    page++;
                }
                nest = null;
            }
            sheetCount = page;
        }

        public void OrganizeShapes(bool shifted)
        {
            Vector2 nextCorner = Vector2.zero;
            var shapesBySize = new List<Shape>(shapes.Values);
            shapesBySize.Sort(new Shape.ByPerimeter());
            foreach (var shape in shapesBySize)
            {
                shape.SetShapeTransformation(Matrix4x4.Translate(nextCorner - shape.GetBoxMin()));
                if (shifted) nextCorner = new Vector2(nextCorner.x + shape.BoxSize.x + 3*stripHeight, nextCorner.y);
            }
        }

        public void AddTriangle(Vector3 a, Vector3 b, Vector2 c, int oa, int ob, int oc, List<int>[] triangles, List<Vector3> vertices, List<Vector2> uvs, Vector2[] initialUVs, int subMeshId, int zLayer)
        {
            int index = vertices.Count;
            // On ajoute les sommets
            float z = (float)(zLayer * 1E-2); // TODO Sortir la constante
            vertices.Add(new Vector3(a.x, a.y, z));
            vertices.Add(new Vector3(b.x, b.y, z));
            vertices.Add(new Vector3(c.x, c.y, z));

            // On applique la texture
            if (initialUVs.Length > 0)
            {
                uvs.Add(initialUVs[oa]);
                uvs.Add(initialUVs[ob]);
                uvs.Add(initialUVs[oc]);
            }

            // On applique le triangle
            triangles[subMeshId].Add(index + 0);
            triangles[subMeshId].Add(index + 1);
            triangles[subMeshId].Add(index + 2);
        }

        public GameObject Build2DPatternObject()
        {
            GameObject object3DCopy = GameObject.Instantiate(object3D);
            GameObject allSheets = new GameObject(object3D.name + "2D");
            int sheetId = 0;
            foreach (var shapeSheet in sheets)
            {
                GameObject sheet = new GameObject("Sheet_"+(sheetId+1));
                GameObject sheetBack = GameObject.CreatePrimitive(PrimitiveType.Quad);
                sheetBack.GetComponent<MeshRenderer>().sharedMaterial = backMaterial;
                sheetBack.name = "sheetBg";
                sheetBack.transform.localScale = new Vector3(sheetSize.x, sheetSize.y, 1);
                sheetBack.transform.position = sheetSize / 2;
                sheetBack.transform.parent = sheet.transform;
                GameObject sheetFront = GameObject.CreatePrimitive(PrimitiveType.Quad);
                sheetFront.GetComponent<MeshRenderer>().sharedMaterial = backMaterial;
                sheetFront.name = "sheetFg";
                sheetFront.transform.localScale = new Vector3(sheetSize.x, sheetSize.y, 1);
                sheetFront.transform.position = sheetSize / 2;
                sheetFront.transform.rotation = Quaternion.AngleAxis(180, Vector3.up);
                sheetFront.transform.parent = sheet.transform;
                foreach (var shape in shapeSheet)
                {
                    GameObject shape2D = shape.BuildShape2D(object3DCopy);
                    shape2D.transform.parent = sheet.transform;
                }
                sheet.transform.parent = allSheets.transform;
                sheet.transform.position = sheetId * sheetMarginFactor * sheetSize.x * Vector3.right;
                sheetId++;
            }
            GameObject.Destroy(object3DCopy);
            return allSheets;
        }

        public GameObject Build25DPatternObject()
        {
            GameObject object3DCopy = GameObject.Instantiate(object3D);

            GameObject allSheets = new GameObject(object3D.name + "2.5D");
            int sheetId = 0;
            foreach (var shapeSheet in sheets)
            {
                GameObject sheet = new GameObject("Sheet_" + (sheetId + 1));
                foreach (var shape in shapeSheet)
                {
                    GameObject shape2D = shape.BuildShape25D(object3DCopy, alphabet);
                    shape2D.transform.parent = sheet.transform;
                }
                sheet.transform.parent = allSheets.transform;
                sheet.transform.position = sheetId * sheetSize.x * Vector3.right;
                sheetId++;
            }
            GameObject.Destroy(object3DCopy);
            //allSheets.transform.position = new Vector2(0, sheetSize.y+sheetMargin.y);
            allSheets.transform.rotation = Quaternion.AngleAxis(90, Vector3.right);
            return allSheets;
        }

        public GameObject Build3DPatternObject()
        {
            shape3DById = new Dictionary<int, GameObject>();
            GameObject object3DCopy = GameObject.Instantiate(object3D);
            object3DCopy.transform.position = Vector3.zero;
            GameObject allShapes = new GameObject(object3D.name + "3D");
            foreach (var shape in shapes.Values)
            {
                GameObject shape3D = shape.BuildShape3D(object3DCopy);
                shape3DById[shape.shapeId] = shape3D;
                shape3D.transform.parent = allShapes.transform;
            }
            GameObject.Destroy(object3DCopy);
            //Bounds b = object3DCopy.GetComponent<MeshRenderer>().bounds;
            // allSheets.transform.position = new Vector2(-b.max.x - 5, b.max.y);
            allShapes.AddComponent<ObjectExploder>();
            return allShapes;
        }
    }
}