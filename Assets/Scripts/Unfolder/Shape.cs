using System;
using System.Linq;
using System.Collections.Generic;
using UnityEngine;

namespace Unfolder
{
    public class Shape
    {
        public readonly Pattern pattern;

        public readonly HashSet<Triangle> triangles;
        private readonly Dictionary<Triangle, Matrix4x4> triangleTransformations;
        private readonly Dictionary<Triangle, Vector2[]> trianglePositions;
        private readonly HashSet<Side> borders;
        public readonly HashSet<Side> stuckBorders;
        public readonly int shapeId;

        private Vector2 boxMin;
        private Vector2 boxMax;

        private Matrix4x4 shapeTransformation;

        private float perimeter;

        // Persiste les longueur complète des segments çàd incluant les segments adjacent s'ils sont alignés. Pas d'entrée si le segment n'est pas concerné
        private Dictionary<Side, float> borderFullLength;

        public Shape(Triangle triangle, Pattern pattern, int shapeId)
        {
            this.pattern = pattern;
            this.shapeId = shapeId;
            triangles = new HashSet<Triangle>();
            borders = new HashSet<Side>();
            stuckBorders = new HashSet<Side>();
            triangleTransformations = new Dictionary<Triangle, Matrix4x4>();
            trianglePositions = new Dictionary<Triangle, Vector2[]>();
            shapeTransformation = Matrix4x4.identity;

            AddTriangle(triangle, Matrix4x4.identity);
            AdjustBorders(triangle);
            ComputePerimeterAndSize();
            ComputePositions();
        }

        public override string ToString()
        {
            String s = ""+shapeId+":";
            foreach (var side in GetBordersInOrder())
            {
                s += side.X2D+" | ";
            }
            return s;
        }

        private bool PointIn(Vector2 pt, Triangle t)
        {
            if (Triangle.NearPoints(pt, t.A2D()) || Triangle.NearPoints(pt, t.B2D()) || Triangle.NearPoints(pt, t.C2D()))
                return false;
            return Geometry.PointInTriangle(pt, t.A2D(), t.B2D(), t.C2D());
        }

        private bool Intersect(Vector2 p0, Vector2 p1, Triangle t) // Vrai si Le segment p0 <-> p1 coupe un des côté de node 
        {
            return (Geometry.HasIntersection(p0, p1, t.A2D(), t.B2D())
                 || Geometry.HasIntersection(p0, p1, t.B2D(), t.C2D())
                 || Geometry.HasIntersection(p0, p1, t.C2D(), t.A2D()));
        }

        private bool OverlapTriangle(Triangle t1, Triangle t2) // Vrai si les triangles se superposent
        {
            if (PointIn(t1.A2D(), t2) || PointIn(t1.B2D(), t2) || PointIn(t1.C2D(), t2)) return true; // Un des sommets de l'un est dans l'autre
            if (PointIn(t2.A2D(), t1) || PointIn(t2.B2D(), t1) || PointIn(t2.C2D(), t1)) return true; // Ou l'inverse

            if (Intersect(t1.A2D(), t1.B2D(), t2) || Intersect(t1.B2D(), t1.C2D(), t2) || Intersect(t1.C2D(), t1.A2D(), t2))
                return true; // Un des segments de l'un croise dans l'autre (la reciproque est évidente donc pas besoin de tester)

            return false;
        }

        private bool OverlapShape(Triangle newTriangle)
        {
            foreach (Triangle triangle in triangles)
            {
                // On vérifie le superposition des triangle
                if (triangle.Equals(newTriangle)) continue;
                if (OverlapTriangle(newTriangle, triangle)) return true;
            }
            return false;
        }

        private bool OverlapShape(Shape otherShape)
        {
            foreach (var newTriangle in otherShape.triangles)
                if (OverlapShape(newTriangle)) return true;
            return false;
        }

        private bool OverlapStripes(Shape otherShape, Side sideToAdd) // TODO Fusionner avec OverlapShape
        {
            foreach (var otherBorder in otherShape.GetBorders())
            {
                if (sideToAdd.Equals(otherBorder)) continue;
                Vector2[] otherStripPoints = otherBorder.GetStripPoints(pattern.stripMinHeight, pattern.stripMinAngle);
                foreach (var border in GetBorders())
                {
                    if (border.GetConnectedSides().Contains(otherBorder) && border.ShareSegment2D(otherBorder)) continue; // Ces deux bords sont en réalités connecté, donc c'est ok
                    if (PointIn(otherStripPoints[0], border.triangle)) return true;
                    if (PointIn(otherStripPoints[1], border.triangle)) return true;

                    Vector2[] stripPoints = border.GetStripPoints(pattern.stripMinHeight, pattern.stripMinAngle);
                    if (Geometry.PointInTriangle(otherStripPoints[0], border.X2D, border.Y2D, stripPoints[1])) return true;
                    if (Geometry.PointInTriangle(otherStripPoints[0], border.X2D, stripPoints[0], stripPoints[1])) return true;
                }
            }
            return false;
        }

        private void AdjustBorders(Triangle newTriangle)
        {
            foreach (var side in newTriangle.sides)
            {
                bool newBorder = true;
                var otherSides = side.GetConnectedSides();
                foreach (var otherSide in otherSides)
                {
                    if (triangles.Contains(otherSide.triangle) && side.ShareSegment2D(otherSide))
                    {
                        borders.Remove(otherSide);
                        newBorder = false;
                    }
                }
                if (newBorder) borders.Add(side);
            }
        }

        private void AddTriangle(Triangle triangle, Matrix4x4 transformation)
        {
            triangles.Add(triangle);
            triangleTransformations[triangle] = transformation;
            ComputePosition(triangle);
            triangle.shape = this;
        }

        private void RemoveTriangle(Triangle triangle)
        {
            triangles.Remove(triangle);
            triangleTransformations.Remove(triangle);
            trianglePositions.Remove(triangle);
            triangle.shape = null;
        }

        private Matrix4x4 GetTransformationFromTo(Side fromSide, Side toSide, bool flip)
        {
            float angle = Vector2.SignedAngle(fromSide.X2D - fromSide.Y2D, (toSide.Y2D - toSide.X2D) * (flip ? - 1 : 1));
            Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            Vector2 translation = (flip ? toSide.X2D : toSide.Y2D) + (Vector2)(rotation * ( - fromSide.X2D));
            return  Matrix4x4.TRS(translation, rotation, Vector3.one);
        }

        public bool AddTriangleToBorder(Side border, Side candidate, bool flip)
        {
            if (candidate.triangle.shape != null) return false; // Le triangle est déjà dans une shape
            if (!IsBorder(border)) throw new Exception(border + " is not a border. Another triangle already connected");
            if (!pattern.acceptMixedMaterials && candidate.triangle.subMeshId != border.triangle.subMeshId) return false;

            if (candidate.segment.x == border.segment.x)
            {
                Debug.Log("Triangles are reversed : cannot be sticked together");
                return false; // Les faces sont inversées elles ne peuvent être collées
            }

            var transformation = GetTransformationFromTo(candidate, border, flip);
            AddTriangle(candidate.triangle, transformation);
            ComputeSize();

            if (OverlapShape(candidate.triangle) || ShapeToBigForSheet(null))
            {
                RemoveTriangle(candidate.triangle);
                ComputeSize();
                return false;
            }
            else {
                AdjustBorders(candidate.triangle);
                ComputePerimeterAndSize();
                ComputeMaxStraightLength();
                return true;
            }
        }

        private void MergeShape(Shape otherShape)
        {
            foreach (var triangle in otherShape.triangles)
            {
                AddTriangle(triangle, otherShape.GetTransformation(triangle));
                AdjustBorders(triangle);
            }
            ComputePerimeterAndSize();
            foreach (var side in otherShape.borderFullLength.Keys)
                borderFullLength.Add(side, otherShape.borderFullLength[side]);
        }

        public Shape AddShapeToBorder(Side border, Side candidate, bool flip)
        {
            if (stuckBorders.Contains(border)) return null;
            if (triangles.Contains(candidate.triangle)) {
                stuckBorders.Add(border);
                return null; // Cela veut dire que la shape à ajouté est égale à this
            }
            if (!IsBorder(border)) throw new Exception(border + " is not a border. Another triangle already connected");

            Shape shapeToAdd = candidate.triangle.shape;
            if (!pattern.acceptMixedMaterials && candidate.triangle.subMeshId != border.triangle.subMeshId) {
                stuckBorders.Add(border);
                shapeToAdd.stuckBorders.Add(candidate);
                return null;
            }

            if (candidate.segment.x == border.segment.x) {
                Debug.Log("Shape are reversed : cannot be sticked together");
                // TODO A traiter
                return null; // Les faces sont inversées elles ne peuvent être collées
            }

            shapeToAdd.SetShapeTransformation(GetTransformationFromTo(candidate, border, flip));

            if (OverlapShape(shapeToAdd) || OverlapStripes(shapeToAdd, candidate) || ShapeToBigForSheet(shapeToAdd))
            {
                shapeToAdd.SetShapeTransformation(Matrix4x4.identity);
                stuckBorders.Add(border);
                shapeToAdd.stuckBorders.Add(candidate);
                return null;
            }
            else
            {
                MergeShape(shapeToAdd);
                return shapeToAdd;
            }
        }

        private bool IsBorder(Side side)
        {
            return borders.Contains(side);
        }

        public HashSet<Side> GetBorders() => borders;

        private Side GetNextBorder(Vector2 y2D, HashSet<Side> remainingBorders)
        {
            foreach (var candidate in remainingBorders)
                if (Triangle.NearPoints(candidate.X2D, y2D)) return candidate;
            return null;
        }

        public List<Side> GetBordersInOrder()
        {
            var bordersInOrder = new List<Side>();
            var bordersRemaining = new HashSet<Side>(borders);
            Side nextBorder = null;
            while (bordersRemaining.Count > 0)
            {
                if (nextBorder == null) nextBorder = bordersRemaining.First();
                bordersRemaining.Remove(nextBorder);
                bordersInOrder.Add(nextBorder);
                nextBorder = GetNextBorder(nextBorder.Y2D, bordersRemaining);
            }
           return bordersInOrder;
        }

        public List<Vector2> GetPolygon()
        {
            var polygon = new List<Vector2>();
            var borders = GetBordersInOrder();
            foreach (var border in borders)
            {
                polygon.Add(border.X2D);
                //if (border.HasStrip())
                //{
                //    Vector2[] stripPoints = border.GetStripPoints(pattern.stripHeight, pattern.stripAngle);
                //    polygon.Add(stripPoints[0]);
                //    polygon.Add(stripPoints[1]);
                //}
                polygon.Add(border.Y2D);
            }
            polygon.Add(polygon.First());
            return polygon;
        }

        public bool ShapeToBigForSheet(Shape newShape)
        {
            Vector2 boxMin = Vector2.Min(GetBoxMin(), newShape == null ? Vector2.positiveInfinity : newShape.GetBoxMin());
            Vector2 boxMax = Vector2.Max(GetBoxMax(), newShape == null ? Vector2.negativeInfinity : newShape.GetBoxMax());
            Vector2 boxSize = boxMax - boxMin;
            float ratio = newShape == null ? 1 : pattern.shapeMaxSizeRatio; // Si on est en surface plate, maximiser la shape dans la feuille
            // TODO Bug : tester avec vaisseau taille 35
            return (boxSize.x + 4 * pattern.stripHeight > (pattern.sheetSize.x - 2 * pattern.sheetMargin.x) * ratio
                || boxSize.y + 4 * pattern.stripHeight > (pattern.sheetSize.y - 2 * pattern.sheetMargin.y) * ratio)

                && (boxSize.x + 4 * pattern.stripHeight > (pattern.sheetSize.y - 2 * pattern.sheetMargin.y) * ratio
                || boxSize.y + 4 * pattern.stripHeight > (pattern.sheetSize.x - 2 * pattern.sheetMargin.x) * ratio); // On teste la rotation à 90 aussi
        }

        private void ComputePerimeterAndSize()
        {
            ComputePerimeter();
            ComputeSize();
        }

        public float GetFullLength(Side border)
        {
            return borderFullLength.ContainsKey(border) ? borderFullLength[border] : border.GetLength();
        }

        private void ComputeMaxStraightLength()
        {
            borderFullLength = new Dictionary<Side, float>();
            foreach (var side in borders)
                borderFullLength[side] = side.GetMaxStraightLength();
        }

        private void ComputePerimeter()
        {
            perimeter = 0;
            borderFullLength = new Dictionary<Side, float>();
            foreach (var side in borders)
                perimeter += side.segment.Magnitude;
        }

        public void ComputeSize()
        {
            boxMin = Vector2.positiveInfinity;
            boxMax = Vector2.negativeInfinity;
            foreach (var border in borders)
            {
                boxMin = Vector2.Min(border.X2D, boxMin);
                boxMax = Vector2.Max(border.X2D, boxMax);
            }
        }

        public Vector3 ExplodeDirection()
        {
            Vector3 normal = Vector3.zero;
            foreach (var border in borders) {
                Vector3 ortho = Vector3.Cross(border.triangle.B3D - border.triangle.A3D, border.triangle.C3D - border.triangle.A3D).normalized;
                normal += Vector3.Cross(ortho, border.Y3D - border.X3D) + ortho.normalized;
            }
            return normal.normalized;
        }

        private void ComputePosition(Triangle triangle)
        {
            Vector2[] trianglePosition = new Vector2[3];
            trianglePosition[0] = GetTransformation(triangle).MultiplyPoint(triangle.aLocal2D);
            trianglePosition[1] = GetTransformation(triangle).MultiplyPoint(triangle.bLocal2D);
            trianglePosition[2] = GetTransformation(triangle).MultiplyPoint(triangle.cLocal2D);
            trianglePositions[triangle] = trianglePosition;
        }

        private void ComputePositions()
        {
            trianglePositions.Clear();
            foreach (var triangle in triangles)
                ComputePosition(triangle);
        }

        public class ByPerimeter : IComparer<Shape>
        {
            public int Compare(Shape x, Shape y) => (int)Math.Round(1E5*(y.perimeter - x.perimeter));
        }

        public class ByPattern : IComparer<Shape>
        {
            public int Compare(Shape x, Shape y) {
                int patternId = y.triangles.First().subMeshId;
                return (y.triangles.First().subMeshId - x.triangles.First().subMeshId);
            }
        }

        public Vector2 BoxSize { get => boxMax - boxMin; }

        public float Perimeter { get => perimeter; }

        public void SetShapeTransformation(Matrix4x4 transformation)
        {
            shapeTransformation = transformation;
            ComputePositions();
            ComputeSize();
        }

        public Matrix4x4 GetShapeTransformation()
        {
            return shapeTransformation;
        }

        public Vector2 GetBoxMin() => boxMin;
        public Vector2 GetBoxMax() => boxMax;

        public Vector2 GetA(Triangle triangle) => trianglePositions[triangle][0];
        public Vector2 GetB(Triangle triangle) => trianglePositions[triangle][1];
        public Vector2 GetC(Triangle triangle) => trianglePositions[triangle][2];

        public Matrix4x4 GetTransformation(Triangle triangle) => shapeTransformation * triangleTransformations[triangle];

        private static void AddTriangle(Vector3 a, Vector3 b, Vector3 c, int oa, int ob, int oc, List<int>[] triangles, List<Vector3> vertices, List<Vector2> uvs, Vector2[] initialUVs, int subMeshId, int zLayer, bool reverse)
        {
            int index = vertices.Count;
            // On ajoute les sommets
            float z = (float)(zLayer * 1E-3); // TODO Sortir la constante
            Vector3 zShift = -Vector3.Cross(a - c, b - c).normalized * z;
            vertices.Add(a + zShift);
            vertices.Add(b + zShift);
            vertices.Add(c + zShift);

            // On applique la texture // TODO Crade, mettre les UV des lignes avec les lignes et triangles avec triangles
            bool hasUv = initialUVs.Length > 0;
            uvs.Add(hasUv ? initialUVs[oa] : Vector2.zero);
            uvs.Add(hasUv ? initialUVs[ob] : Vector2.zero);
            uvs.Add(hasUv ? initialUVs[oc] : Vector2.zero);
            // On applique le triangle
            triangles[subMeshId].Add(index + 0);
            triangles[subMeshId].Add(index + (reverse ? 2 : 1));
            triangles[subMeshId].Add(index + (reverse ? 1 : 2));
        }

        private static void AddLine(Vector3 x, Vector3 y, Vector3 zAxis, float lineThickness, bool endThickness, List<int>[] triangles, List<Vector3> vertices, List<Vector2> uvs, Vector2[] initialUVs, int subMeshId, int zLayer, bool reverse)
        {
            Vector3 xAxis = (y - x).normalized;
            Vector3 yAxis = Vector3.Cross(zAxis, y - x).normalized;
            Vector3 xThick = endThickness ? xAxis * lineThickness / 4: Vector3.zero;
            Vector3 x1 = x + yAxis * lineThickness / 2 - xThick;
            Vector3 y1 = y + yAxis * lineThickness / 2 + xThick;
            Vector3 x2 = x - yAxis * lineThickness / 2 - xThick;
            Vector3 y2 = y - yAxis * lineThickness / 2 + xThick;

            float width = (x1 - y1).magnitude;
            int nbPoints = 3; // 10 dash per cm // TODO Sortir la constante

            int index = vertices.Count;
            // On ajoute les sommets
            float z = (float)(zLayer * 1E-3); // TODO Sortir la constante
            Vector3 zShift = zAxis.normalized * z;

            vertices.Add(x1 + zShift);
            vertices.Add(y2 + zShift);
            vertices.Add(x2 + zShift);

            uvs.Add(Vector2.zero);
            uvs.Add(new Vector2(nbPoints * width, 1));
            uvs.Add(new Vector2(0, 1));

            triangles[subMeshId].Add(index + 0);
            triangles[subMeshId].Add(index + (reverse ? 2 : 1));
            triangles[subMeshId].Add(index + (reverse ? 1 : 2));

            index = vertices.Count;

            vertices.Add(x1 + zShift);
            vertices.Add(y1 + zShift);
            vertices.Add(y2 + zShift);

            uvs.Add(Vector2.zero);
            uvs.Add(new Vector2(nbPoints * width, 0));
            uvs.Add(new Vector2(nbPoints * width, 1));

            triangles[subMeshId].Add(index + 0);
            triangles[subMeshId].Add(index + (reverse ? 2 : 1));
            triangles[subMeshId].Add(index + (reverse ? 1 : 2));
        }

        public GameObject BuildShape2D(GameObject object3D)
        {
            Vector2[] initialUVs = pattern.object3D.GetComponent<MeshFilter>().mesh.uv;
            GameObject currentSheet = new GameObject(pattern.object3D.name+"_"+shapeId);
            MeshRenderer renderer2D = currentSheet.AddComponent<MeshRenderer>();
            Mesh sheetMesh = new Mesh();
            int subMeshCount = pattern.meshStructure.subMeshCount;

            int stripSubMeshId = subMeshCount;
            int valleyFoldSubMeshId = subMeshCount + 1;
            int mountainFoldSubMeshId = subMeshCount + 2;
            int flatFoldSubMeshId = subMeshCount + 3;
            int cutSubMeshId = subMeshCount + 4;
            int backSubMeshId = subMeshCount + 5;
            int newSubMeshCount = subMeshCount + 6; // On ajoute un subMesh pour les languettes et deux pour les contours vallées et montagne et plat
            sheetMesh.subMeshCount = newSubMeshCount;

            List<Vector3> vertices = new List<Vector3>();
            List<Vector2> uvs = new List<Vector2>();
            List<int>[] trianglesId = new List<int>[newSubMeshCount];
            for (int i = 0; i < newSubMeshCount; i++) trianglesId[i] = new List<int>();
            trianglesId.Initialize();

            Vector3 zAxis = Vector3.forward;

            // On ajoute les surfaces
            foreach (var triangle in triangles)
            {
                Vector3 a = triangle.A2D();
                Vector3 b = triangle.B2D();
                Vector3 c = triangle.C2D();
                AddTriangle(a, b, c, triangle.OA, triangle.OB, triangle.OC, trianglesId, vertices, uvs, initialUVs, triangle.subMeshId, +1, true);
                AddTriangle(a, b, c, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, backSubMeshId, -3, false);
            }

            // On ajoute les lignes de pliage ou de découpe
            foreach (var triangle in triangles)
            {
                foreach (var side in triangle.sides)
                {
                    Side opposite = side.GetFirstOppositeSide();
                    Vector2 x = side.X2D;
                    Vector2 y = side.Y2D;
                    if (!IsBorder(side) || side.IsMale())
                    {
                        float angle = side.GetAngle(opposite);
                        if (Math.Abs(angle) > 2) { // TODO Mettre en constante
                            int foldSubMeshId =  Math.Abs(angle) < pattern.foldLimitAngle ? flatFoldSubMeshId : angle > 0 ? valleyFoldSubMeshId : mountainFoldSubMeshId;
                            AddLine(x, y, zAxis, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, foldSubMeshId, -5, false);
                        }
                    }
                    else
                    {
                        AddLine(x, y, zAxis, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, -5, false);
                    }
                }
            }

            // On ajoute les languettes et numéros
            foreach (var side in GetBordersInOrder())
            {
                Side opposite = side.GetFirstOppositeSide();
                if (opposite == null) continue;
                Vector2 x = side.X2D;
                Vector2 y = side.Y2D;
                Vector2[] stripPoints = side.GetStripPoints(pattern.stripHeight, pattern.stripAngle);
                Vector2 x2 = stripPoints[0];
                Vector2 y2 = stripPoints[1];
                Vector2 xAxis = (x - y).normalized;
                Vector2 yAxis = Vector3.Cross(Vector3.forward, y - x).normalized;

                if (side.IsMale())
                {
                    // Contour des languettes
                    AddLine(x, x2, zAxis, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, -1, false);
                    AddLine(x2, y2, zAxis, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, -1, false);
                    AddLine(y2, y, zAxis, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, -1, false);

                    // Languettes
                    AddTriangle(x, x2, y, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, stripSubMeshId, -2, false);
                    AddTriangle(y, x2, y2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, stripSubMeshId, -2, false);
                }

                Vector3 zLayer = (float)(-4 * 1E-2) * Vector3.forward; // TODO Sortir la constante
                Add2DText(side, zLayer, currentSheet);
            }

            sheetMesh.SetVertices(vertices);
            sheetMesh.uv = uvs.ToArray();
            for (int i = 0; i < newSubMeshCount; i++)
                sheetMesh.SetTriangles(trianglesId[i].ToArray(), i);

            sheetMesh.RecalculateNormals(0);
            sheetMesh.RecalculateBounds();
            sheetMesh.RecalculateTangents();
            sheetMesh.Optimize();

            currentSheet.AddComponent<MeshFilter>().mesh = sheetMesh;

            // Add materials to the result
            MeshRenderer renderer = object3D.GetComponent<MeshRenderer>();
            List<Material> materials = renderer.materials.ToList();
            foreach (var material in materials)
            {
                if (material.GetTexture("_MainTex") != null) material.shader = pattern.unlitTextureShader;
                else if (material.HasProperty("_Color")) material.shader = pattern.unlitColorShader;
            }
            var targetMaterials = new List<Material>();
            for (int i = 0; i < subMeshCount; i++)
            {
                targetMaterials.Add(materials.Count > i ? materials[i] : pattern.backMaterial);
            }

            targetMaterials.Add(pattern.stripMaterial); // Attention a l'ordre des materiaux
            targetMaterials.Add(pattern.valleyMaterial); // Attention a l'ordre des materiaux
            targetMaterials.Add(pattern.mountainMaterial); // Attention a l'ordre des materiaux
            targetMaterials.Add(pattern.flatMaterial); // Attention a l'ordre des materiaux
            targetMaterials.Add(pattern.cutMaterial); // Attention a l'ordre des materiaux
            targetMaterials.Add(pattern.backMaterial); // Attention a l'ordre des materiaux
            renderer2D.materials = targetMaterials.ToArray();

            return currentSheet;
        }

        private GameObject Create3DText(String text, GameObject alphabet, Material material)
        {
            GameObject textObject = new GameObject(text);
            textObject.AddComponent<MeshRenderer>();
            float spacing = 1.05f; // 5%
            char[] chars = text.ToCharArray();
            float offset = 0;
            for (int i = 0; i < chars.Length; i++)
            {
                GameObject charObject = GameObject.Instantiate(alphabet.transform.Find(chars[i].ToString())).gameObject;
                charObject.GetComponent<MeshRenderer>().sharedMaterial = material;
                charObject.transform.position = new Vector3(offset, 0, 0);
                charObject.transform.parent = textObject.transform;
                offset += charObject.GetComponent<MeshRenderer>().bounds.size.x * spacing;
            }
            return textObject;
        }

        private void Add3DText(Side side, Vector3 zThickness, Vector3 edgeCenter, GameObject currentSheet, GameObject alphabet, Material material)
        {
            int stripId = side.stripId;
            if (stripId == 0) return;
            Vector3 xyAxis = (side.Y2D - side.X2D).normalized;
            Vector3 yAxis = Vector3.Cross(Vector3.forward, side.Y2D - side.X2D).normalized;
            GameObject stripTextObject = Create3DText(""+stripId, alphabet, material);
            Bounds b = UnityUtil.GetMaxBounds(stripTextObject);
            float textHeight = b.size.y;
            float textWidth = b.size.x;
            float textThick = b.size.z;
            if (textHeight == 0 || textWidth == 0) {
                throw new Exception("Error"); // TODO bug ... ?
            }
            float scale = Math.Min(0.6f * pattern.stripHeight / textHeight, 1f * (side.Y2D - side.X2D).magnitude / textWidth); // TODO Mettre en constante le 0.6
            float scaleZ = scale * 0.3f;
            stripTextObject.transform.position = zThickness + edgeCenter - xyAxis * textWidth * scale / 2 - yAxis * textHeight * scale * 1.3f - 0.5f*textThick * Vector3.forward * scaleZ;
            stripTextObject.transform.localScale = new Vector3(scale, scale, scaleZ);
            stripTextObject.transform.localRotation = Quaternion.AngleAxis(Vector2.SignedAngle(Vector2.right, xyAxis), Vector3.forward);
            stripTextObject.transform.parent = currentSheet.transform;
        }

        private void Add2DText(Side side, Vector3 zThickness, GameObject currentSheet)
        {
            int stripId = side.stripId;
            if (stripId == 0) return;
            Vector3 xyAxis = (side.Y2D - side.X2D).normalized;
            Vector3 yAxis = Vector3.Cross(Vector3.forward, side.Y2D - side.X2D).normalized;
            GameObject stripTextObject = new GameObject("Strip_" + stripId);
            TextMesh tm = stripTextObject.AddComponent<TextMesh>();
            MeshRenderer mr = stripTextObject.GetComponent<MeshRenderer>();
            tm.color = Color.black;
            tm.fontSize = 100;
            tm.text = stripId == 0 ? "" : "" + stripId;
            mr.material.shader = pattern.textShader;
            float textHeight = mr.bounds.size.y;
            float textWidth = mr.bounds.size.x;
            float scale = Math.Min(0.6f * pattern.stripHeight / textHeight, 0.5f * (side.Y2D - side.X2D).magnitude / textWidth); // TODO Mettre en constante le 0.6
            stripTextObject.transform.position = zThickness + (Vector3)(side.X2D + side.Y2D)/2 - xyAxis * textWidth * scale / 2 - yAxis * textHeight / 5 * scale * 1f;
            stripTextObject.transform.localScale = new Vector3(scale, scale);
            stripTextObject.transform.localRotation = Quaternion.AngleAxis(Vector2.SignedAngle(Vector2.right, xyAxis), Vector3.forward);
            stripTextObject.transform.parent = currentSheet.transform;
        }

        public GameObject BuildShape25D(GameObject object3D, GameObject alphabet)
        {
            Vector2[] initialUVs = pattern.object3D.GetComponent<MeshFilter>().mesh.uv;
            GameObject currentSheet = new GameObject(pattern.object3D.name + "_" + shapeId);
            MeshRenderer renderer2D = currentSheet.AddComponent<MeshRenderer>();
            Mesh sheetMesh = new Mesh();
            int subMeshCount = pattern.meshStructure.subMeshCount;
            int stripSubMeshId = subMeshCount;
            int valleyFoldSubMeshId = subMeshCount + 1;
            int mountainFoldSubMeshId = subMeshCount + 2;
            int flatFoldSubMeshId = subMeshCount + 3;
            int cutSubMeshId = subMeshCount + 4;
            int backSubMeshId = subMeshCount + 5;
            int newSubMeshCount = subMeshCount + 6; // On ajoute un subMesh pour les languettes et deux pour les contours vallées et montagne et plat
            sheetMesh.subMeshCount = newSubMeshCount;

            // Add materials to the result
            MeshRenderer renderer = object3D.GetComponent<MeshRenderer>();
            List<Material> materials = renderer.materials.ToList();

            materials.Add(pattern.stripMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.valleyMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.mountainMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.flatMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.cutMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.backMaterial); // Attention a l'ordre des materiaux
            renderer2D.materials = materials.ToArray();


            List<Vector3> vertices = new List<Vector3>();
            List<Vector2> uvs = new List<Vector2>();
            List<int>[] trianglesId = new List<int>[newSubMeshCount];
            for (int i = 0; i < newSubMeshCount; i++) trianglesId[i] = new List<int>();
            trianglesId.Initialize();

            // On ajoute les surfaces
            foreach (var triangle in triangles)
            {
                Vector3 a = triangle.A2D();
                Vector3 b = triangle.B2D();
                Vector3 c = triangle.C2D();

                AddTriangle(a, b, c, triangle.OA, triangle.OB, triangle.OC, trianglesId, vertices, uvs, initialUVs, triangle.subMeshId, 0, true);
            }

            Vector3 zThickness = -pattern.foldThickness * Vector3.forward;
            // On ajoute les lignes de pliage ou de découpe
            foreach (var tri in triangles)
            {
                int i = 0;
                var points = new Vector3[2,3];
                var insideFlatPoly = new List<Side>();
                foreach (var side in tri.sides) // On calcule le point xz d'interseection entre les deux plan inclinés autour de x
                {
                    Side side2 = side.GetNextSide(side.segment.x);
                    Side border2 = side.GetNextBorderInPoly(side.segment.x); // On cherche le bord opposé dans le polygone adjacent à vertex
                    Side border1 = border2.GetNextBorderInPoly(side.segment.x); // Puis on chechee l'autre bord opposé par avoir les deux bords
                    if (!side.Equals(border1) && !side.Equals(border2)) insideFlatPoly.Add(side); // Si le segment n'est pas un bord du polygone, on le met de côté car on n'ajoutera pas la face

                    Vector3 x = side.X2D;
                    Vector3 y1 = border1.segment.x == side.segment.x ? border1.Y2D : border1.X2D;
                    Vector3 y2 = border2.segment.x == side.segment.x ? border2.Y2D : border2.X2D;

                    float xy1Angle = (180 + border1.GetAngle(border1.GetFirstOppositeSide())) / 2;
                    float xy2Angle = (180 + border2.GetAngle(border2.GetFirstOppositeSide())) / 2;

                    if (xy1Angle > 90 || xy2Angle > 90)
                    {
                        Debug.Log("" + xy1Angle);
                    }

                    if (!IsBorder(side) && !insideFlatPoly.Contains(side))
                    {
                        //xy1Angle = Math.Min(pattern.stripAngle, xy1Angle);
                    }
                    if (!IsBorder(side2) && !insideFlatPoly.Contains(side2))
                    {
                        //xy2Angle = Math.Min(pattern.stripAngle, xy2Angle);
                    }

                    Vector3 xy1Axis = (y1 - x).normalized;
                    Vector3 xy2Axis = (x - y2).normalized;

                    //Vector3 xy1NAxis = Vector3.Cross(Vector3.forward, xy1Axis).normalized; // Axe sur plan horiszontal perpendiculaire à ab
                    //Vector3 xy2NAxis = Vector3.Cross(Vector3.forward, xy2Axis).normalized; // Axe sur plan horiszontal perpendiculaire à bc
                    
                    Vector3 xy1zNAxis = Quaternion.AngleAxis(xy1Angle, xy1Axis) * Vector3.forward; // Vecteur normal au plan byssectrice sur ab
                    Vector3 xy2zNAxis = Quaternion.AngleAxis(xy2Angle, xy2Axis) * Vector3.forward;// Vecteur normal au plan byssectrice sur bc
                    
                    Vector3 xzAxis = Vector3.SignedAngle(xy1zNAxis, xy2zNAxis, Vector3.forward) <= 0 ?
                        Vector3.Cross(xy1zNAxis, xy2zNAxis).normalized :
                        Vector3.Cross(xy2zNAxis, xy1zNAxis).normalized; // Axe de l'arrête intersection des deux plans bissectrice

                    //float stripMax = 1000; // TODO remplacer par la vrai intersection du sommet du triangle
                
                    Vector3 xz = x + xzAxis * Math.Min(2*pattern.pieceThickness, pattern.pieceThickness / Math.Abs(Vector3.Dot(xzAxis, Vector3.forward)));
                    if (xz.z > 0)
                    {
                        Debug.Log("" + xy1Angle);
                    }
                    points[0, i] = x;
                    points[1, i] = xz;
                    i++;
                }
                Vector3 a = points[0,0];
                Vector3 b = points[0,1];
                Vector3 c = points[0,2];
                Vector3 az = points[1,0];
                Vector3 bz = points[1,1];
                Vector3 cz = points[1,2];
                AddTriangle(az + zThickness, bz + zThickness, cz + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, 0, false);

                if (!insideFlatPoly.Contains(tri.ab))
                {
                    AddEdge(currentSheet, tri.ab, a + zThickness, b + zThickness, az + zThickness, bz + zThickness, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, materials[tri.subMeshId]);
                }
                if (!insideFlatPoly.Contains(tri.bc))
                {
                    AddEdge(currentSheet, tri.bc, b + zThickness, c + zThickness, bz + zThickness, cz + zThickness, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, materials[tri.subMeshId]);
                    //AddTriangle(b + zThickness, c + zThickness, cz + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, 0, false);
                    //AddTriangle(b + zThickness, cz + zThickness, bz + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, 0, false);
                }
                if (!insideFlatPoly.Contains(tri.ca))
                {
                    AddEdge(currentSheet, tri.ca, c + zThickness, a + zThickness, cz + zThickness, az + zThickness, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, materials[tri.subMeshId]);
                    //AddTriangle(c + zThickness, a + zThickness, az + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, 0, false);
                    //AddTriangle(c + zThickness, az + zThickness, cz + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, tri.subMeshId, 0, false);
                }
                Add3DText(tri.ab, zThickness, (az + bz) / 2, currentSheet, alphabet, materials[tri.subMeshId]);
                Add3DText(tri.bc, zThickness, (bz + cz) / 2, currentSheet, alphabet, materials[tri.subMeshId]);
                Add3DText(tri.ca, zThickness, (cz + az) / 2, currentSheet, alphabet, materials[tri.subMeshId]);
            }

            // On ajoute l'epaisseur minimum du modèle
            foreach (var side in GetBordersInOrder())
            {
                Vector3 x = side.X2D;
                Vector3 y = side.Y2D;
                AddTriangle(x, y, y + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, side.triangle.subMeshId, 0, false);
                AddTriangle(x, y + zThickness, x + zThickness, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, side.triangle.subMeshId, 0, false);
            }

            sheetMesh.SetVertices(vertices);
            sheetMesh.uv = uvs.ToArray();
            for (int i = 0; i < newSubMeshCount; i++)
                sheetMesh.SetTriangles(trianglesId[i].ToArray(), i);

            sheetMesh.RecalculateNormals(0);
            sheetMesh.RecalculateBounds();
            sheetMesh.RecalculateTangents();
            sheetMesh.Optimize();

            currentSheet.AddComponent<MeshFilter>().mesh = sheetMesh;

            //UnityUtil.AdvancedMerge(currentSheet);
            return currentSheet;
        }

        private void AddEdge(GameObject parent, Side xy, Vector3 x, Vector3 y, Vector3 x2, Vector3 y2, List<int>[] trianglesId, List<Vector3> vertices, List<Vector2> uvs, Vector2[] initialUVs, int subMeshId, Material material)
        {
            Vector3 xAxis = (y-x).normalized;
            Vector3 zAxis = Vector3.Cross(y - x, x2 - x);
            Vector3 yAxis = Vector3.Cross(zAxis, xAxis);
            float xOffset = Vector3.Dot(x2 - x, xAxis);
            float yOffset = Vector3.Dot(y2 - y, xAxis);
            Vector3 x1 = x + xOffset * xAxis;
            Vector3 y1 = y + yOffset * xAxis;
            Vector3 x3 = x2 - xOffset * xAxis;
            Vector3 y3 = y2 - yOffset * xAxis;
            float width = ((xOffset > 0 ? x1 : x) - (yOffset > 0 ? y : y1)).magnitude;
            //float width = (y1-x1).magnitude;
            float height = (y2 - y1).magnitude;
            if (xy.IsFemale() || xy.IsMale())
            {
                if (xOffset > 0) AddTriangle(x, x1, x2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, subMeshId, 0, false);
                else AddTriangle(x, x3, x2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, subMeshId, 0, false);

                if (yOffset < 0) AddTriangle(y, y2, y1, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, subMeshId, 0, false);
                else AddTriangle(y, y2, y3, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, subMeshId, 0, false);

                GameObject snap = GameObject.Instantiate(xy.IsMale() ? pattern.snapMale : pattern.snapFemale);
                //UnityUtil.AdvancedMerge(snap);
                snap.name = "Snap_"+ xy.stripId + (xy.IsFemale() ? "F" : "M");
                foreach (var mr in snap.GetComponentsInChildren<MeshRenderer>())
                    mr.sharedMaterial = material;
                snap.transform.parent = parent.transform;
                Bounds b = UnityUtil.GetMaxBounds(snap);
                float ratio = height / b.size.z;
                snap.transform.localScale = new Vector3(width / b.size.x, ratio, ratio);
                snap.transform.position = xOffset > 0 ? x1 : x;
                float angleZ = Vector3.SignedAngle(Vector3.right, xAxis, Vector3.forward);
                Quaternion rot = Quaternion.AngleAxis(angleZ, Vector3.forward);
                float angle = -Vector3.SignedAngle(zAxis, Vector3.forward, xAxis);
                rot = rot * Quaternion.AngleAxis(angle, Vector3.right);
                snap.transform.rotation = rot;
            } else
            {
                AddTriangle(x, y, y2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, subMeshId, 0, false);
                AddTriangle(x, y2, x2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, subMeshId, 0, false);
            }
        }

        private Quaternion GetRotation(Vector3 x0, Vector3 y0, Vector3 x1, Vector3 y1)
        {
            Vector3 z0 = Vector3.Cross(x0, y0);
            Vector3 z1 = Vector3.Cross(x1, y1);
            Quaternion alignZ = Quaternion.FromToRotation(z0, z1);
            Vector3 newY = alignZ * y0;
            Quaternion alignY = Quaternion.AngleAxis(Vector3.SignedAngle(newY, y1, z1), z1);

            return alignY * alignZ;
        }

        public GameObject BuildShape3D(GameObject object3D)
        {
            Vector2[] initialUVs = pattern.object3D.GetComponent<MeshFilter>().mesh.uv;
            GameObject currentSheet = new GameObject(pattern.object3D.name + "_" + shapeId);
            MeshRenderer renderer2D = currentSheet.AddComponent<MeshRenderer>();
            renderer2D.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            renderer2D.receiveShadows = false;
            Mesh sheetMesh = new Mesh();
            int subMeshCount = pattern.meshStructure.subMeshCount;
            int stripSubMeshId = subMeshCount;
            int valleyFoldSubMeshId = subMeshCount + 1;
            int mountainFoldSubMeshId = subMeshCount + 2;
            int flatFoldSubMeshId = subMeshCount + 3;
            int cutSubMeshId = subMeshCount + 4;
            int backSubMeshId = subMeshCount + 5;
            int newSubMeshCount = subMeshCount + 6; // On ajoute un subMesh pour les languettes et deux pour les contours vallées et montagne et plat
            sheetMesh.subMeshCount = newSubMeshCount;

            List<Vector3> vertices = new List<Vector3>();
            List<Vector2> uvs = new List<Vector2>();
            List<int>[] trianglesId = new List<int>[newSubMeshCount];
            for (int i = 0; i < newSubMeshCount; i++) trianglesId[i] = new List<int>();
            trianglesId.Initialize();

            // On ajoute les surfaces
            foreach (var triangle in triangles)
            {
                Vector3 a = triangle.A3D;
                Vector3 b = triangle.B3D;
                Vector3 c = triangle.C3D;
                AddTriangle(a, b, c, triangle.OA, triangle.OB, triangle.OC, trianglesId, vertices, uvs, initialUVs, triangle.subMeshId, 0, false);
                AddTriangle(a, b, c, triangle.OA, triangle.OB, triangle.OC, trianglesId, vertices, uvs, initialUVs, backSubMeshId, 0, true);
                // TODO Passer une UV Map normale pour les back faces
            }

            // On ajoute les lignes de pliage ou de découpe
            foreach (var triangle in triangles)
            {
                foreach (var side in triangle.sides)
                {
                    Side opposite = side.GetFirstOppositeSide();
                    Vector3 x = side.X3D;
                    Vector3 y = side.Y3D;
                    Vector3 z = side.Z3D;
                    Vector3 zAxis1 = Vector3.Cross(x - y, z - x).normalized;
                    Vector3 yAxis1 = Vector3.Cross(zAxis1, y - x).normalized;
                    Vector3 zAxis2 = opposite == null ? zAxis1 : Vector3.Cross(y - x, opposite.Z3D - x).normalized;
                    Vector3 yAxis2 = Vector3.Cross(zAxis2, y - x).normalized;

                    if (!IsBorder(side) || side.IsMale())
                    {
                        //float angle = side.GetAngle(opposite);
                        //if (Math.Abs(angle) > 2)
                        //{ // TODO Mettre en constante
                        //    int foldSubMeshId = Math.Abs(angle) < foldLimitAngle ? flatFoldSubMeshId : angle > 0 ? valleyFoldSubMeshId : mountainFoldSubMeshId;
                        //    AddLine(x, y, zAxis1, zAxis2, lineThickness, trianglesId, vertices, uvs, initialUVs, foldSubMeshId, -4, false);
                        //}
                    }
                    if (IsBorder(side) && !side.IsMale())
                    {
                        AddLine(x - pattern.lineThickness / 2 * yAxis1, y - pattern.lineThickness / 2 * yAxis1, zAxis1, pattern.lineThickness, false, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, 0, false);
                        AddLine(x + pattern.lineThickness / 2 * yAxis2, y + pattern.lineThickness / 2 * yAxis2, zAxis2, pattern.lineThickness, false, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, 0, false);
                    }
                }
            }

            // On ajoute les languettes et numéros
            foreach (var side in GetBordersInOrder())
            {
                Side opposite = side.GetFirstOppositeSide();
                if (opposite == null) continue;

                Vector3 x = side.X3D;
                Vector3 y = side.Y3D;
                Vector3 z = side.Z3D;
                Vector3 zStrip = opposite.Z3D;
                
                Vector3 xAxis = (y - x).normalized;
                Vector3 zAxis = Vector3.Cross(y - x, z - x).normalized;
                Vector3 yAxis = Vector3.Cross(zAxis, x - y).normalized;

                Vector3 zAxisStrip = Vector3.Cross(y - x, zStrip - x).normalized;
                Vector3 yAxisStrip = Vector3.Cross(zAxisStrip, y - x).normalized;
                

                Vector2[] stripPoints = side.GetStripPoints(pattern.stripHeight, pattern.stripAngle);
                float xLength = (stripPoints[0] - side.X2D).magnitude;
                float yLength = (stripPoints[1] - side.Y2D).magnitude;
                float xAngleR = Vector2.Angle(stripPoints[0] - side.X2D, side.Y2D - side.X2D) * Mathf.Deg2Rad;
                float yAngleR = Vector2.Angle(stripPoints[1] - side.Y2D, side.Y2D - side.X2D) * Mathf.Deg2Rad;

                Vector3 x2 = x + xLength * ((float)Math.Cos(xAngleR) * xAxis + (float)Math.Sin(xAngleR) * yAxisStrip);
                Vector3 y2 = y + yLength * ((float)Math.Cos(yAngleR) * xAxis + (float)Math.Sin(yAngleR) * yAxisStrip);

                if (side.IsMale())
                {
                    // Contour des languettes
                    AddLine(x, x2, zAxisStrip, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, 4, false);
                    AddLine(x2, y2, zAxisStrip, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, 4, false);
                    AddLine(y2, y, zAxisStrip, pattern.lineThickness, true, trianglesId, vertices, uvs, initialUVs, cutSubMeshId, 4, false);

                    // Languettes
                    AddTriangle(x, x2, y, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, stripSubMeshId, 4, false);
                    AddTriangle(y, x2, y2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, stripSubMeshId, 4, false);
                    AddTriangle(x, x2, y, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, stripSubMeshId, 4, true);
                    AddTriangle(y, x2, y2, 0, 0, 0, trianglesId, vertices, uvs, initialUVs, stripSubMeshId, 4, true);
                }
                //Add2DText(side, zLayer, currentSheet); TODO Factoriser avec AddText2D
                int stripId = side.stripId;
                GameObject stripTextObject = new GameObject("Strip_" + stripId);
                TextMesh tm = stripTextObject.AddComponent<TextMesh>();
                MeshRenderer mr = stripTextObject.GetComponent<MeshRenderer>();
                mr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                mr.receiveShadows = false;
                tm.color = Color.black;
                tm.fontSize = 100;
                tm.text = stripId == 0 ? "" : "" + stripId;
                //mr.material.EnableKeyword("_Cull");
                //mr.material.SetFloat(Shader.PropertyToID("_Cull"), 1);
                mr.material.shader = pattern.textShader;
                float textHeight = 2 * mr.bounds.extents.y;
                float textWidth = 2 * mr.bounds.extents.x;
                float scale = Math.Min(0.6f * pattern.stripHeight / textHeight, 1f * (x - y).magnitude / textWidth); // TODO Mettre en constante le 0.6
                int zLayer = -1;
                float zShift = (float)(zLayer * 1E-2); // TODO Sortir la constante
                stripTextObject.transform.position = (Vector3)((x + y) / 2 - xAxis * textWidth * scale / 2 - yAxis * textHeight * scale/5 * 1f) - zAxis * zShift;
                stripTextObject.transform.localScale = new Vector3(scale, scale);
                stripTextObject.transform.localRotation = GetRotation(Vector3.right, Vector3.up, xAxis, yAxis);
                stripTextObject.transform.parent = currentSheet.transform;
            }

            sheetMesh.SetVertices(vertices);
            sheetMesh.uv = uvs.ToArray();
            for (int i = 0; i < newSubMeshCount; i++)
                sheetMesh.SetTriangles(trianglesId[i].ToArray(), i);

            sheetMesh.RecalculateNormals(pattern.angleNoFold);
            sheetMesh.RecalculateBounds();
            sheetMesh.RecalculateTangents();
            sheetMesh.Optimize(); // TODO Corriger

            currentSheet.AddComponent<MeshFilter>().mesh = sheetMesh;

            // Add materials to the result
            MeshRenderer renderer = object3D.GetComponent<MeshRenderer>();
            List<Material> materials = renderer.materials.ToList();
            foreach (var material in materials)
            {
                //material.shader = pattern.outlineShader;
                if (!material.HasProperty("_Color")) continue;
                Color c = material.color;
                c.a = 0.95f;
                material.color = c;
                material.SetOverrideTag("RenderType", "Transparent");
                material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
                material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
                //material.SetInt("_ZWrite", 0);
                material.DisableKeyword("_ALPHATEST_ON");
                material.EnableKeyword("_ALPHABLEND_ON");
                material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
                material.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
            }
            materials.Add(pattern.strip3DMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.valleyMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.mountainMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.flatMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.cut3DMaterial); // Attention a l'ordre des materiaux
            materials.Add(pattern.back3DMaterial); // Attention a l'ordre des materiaux

            renderer2D.materials = materials.ToArray();

            return currentSheet;
        }
    }
}