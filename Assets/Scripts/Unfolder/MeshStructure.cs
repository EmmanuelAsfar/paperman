using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Unfolder
{
    public class MeshStructure
    {
        public readonly Vector3[] vertices;
        private readonly Dictionary<int, HashSet<Side>> sides;
        private readonly Dictionary<Segment, HashSet<Side>> sidesBySegment;
        public readonly HashSet<Triangle> triangles;
        public readonly int subMeshCount;

        public MeshStructure(GameObject object3D)
        {
            sides = new Dictionary<int, HashSet<Side>>();
            sidesBySegment = new Dictionary<Segment, HashSet<Side>>();
            triangles = new HashSet<Triangle>();

            Debug.Log("Developing " + object3D.name);
            Mesh mesh3D = object3D.GetComponent<MeshFilter>().mesh;
            vertices = mesh3D.vertices;

            // On ramène les coordonnées dans un référentiel absolu
            for (int i = 0; i < vertices.Length; i++)
            {
                vertices[i] = object3D.transform.TransformPoint(vertices[i]) - object3D.transform.position;
            }

            int[] map = MapVertice(vertices); // On map les vertices sur un indice unique

            subMeshCount = mesh3D.subMeshCount;
            for (int submeshId = 0; submeshId < mesh3D.subMeshCount; submeshId++)
            {
                int[] triangleIndexes = mesh3D.GetTriangles(submeshId);

                for (int t = 0; t < triangleIndexes.Length / 3; t++)
                {
                    int oa = triangleIndexes[3 * t + 0];
                    int ob = triangleIndexes[3 * t + 1];
                    int oc = triangleIndexes[3 * t + 2];

                    int a = map[oa];
                    int b = map[ob];
                    int c = map[oc];

                    Triangle triangle = new Triangle(a, b, c, oa, ob, oc, vertices, null, submeshId);
                    if (!triangle.IsEmpty()) AddTriangle(triangle);

                }
                Debug.Log(object3D.name + " submesh #" + submeshId + " done. Total = " + triangles.Count + " triangles");
            }
            Debug.Log("Fixing face orientation...");
            int f = FixFaceOrientation();
            Debug.Log(""+f+" face orientation fixed.");
        }

        private int FixFaceOrientation() // TODO Bug car Fox a des faces flipped no trouvéess
        {
            int f = 0;
            foreach (var triangle in triangles)
                foreach (var side in triangle.sides)
                    foreach (var opposite in side.GetConnectedSides())
                    {
                        if (opposite.segment.x == side.segment.x)
                        {
                            Debug.Log("Triangle " + opposite + " will be flipped.");
                            RemoveTriangle(opposite.triangle);
                            AddTriangle(opposite.triangle.Flip());
                            f++;
                        }
            }
            return f;
        }

        private void AddSide(int vertex, Side side)
        {
            HashSet<Side> sidesForVertice;
            if (sides.ContainsKey(vertex))
                sidesForVertice = sides[vertex];
            else
            {
                sidesForVertice = new HashSet<Side>();
                sides.Add(vertex, sidesForVertice);
            }
            sidesForVertice.Add(side);
        }

        private void AddSideBySegment(Segment segment, Side side)
        {
            HashSet<Side> sidesForSegment;
            if (sidesBySegment.ContainsKey(segment))
                sidesForSegment = sidesBySegment[segment];
            else
            {
                sidesForSegment = new HashSet<Side>();
                sidesBySegment.Add(segment, sidesForSegment);
            }
            sidesForSegment.Add(side);
        }


        private void AddTriangle(Triangle triangle)
        {
            triangles.Add(triangle);
            foreach (var side in triangle.sides)
            {
                AddSide(side.segment.x, side);
                AddSide(side.segment.y, side);
                AddSideBySegment(side.segment, side);
            }
        }

        private void RemoveTriangle(Triangle triangle)
        {
            triangles.Remove(triangle);
            foreach (var side in triangle.sides) {
                sides[side.segment.x].Remove(side);
                sides[side.segment.y].Remove(side);
                sidesBySegment[side.segment].Remove(side);
            }
        }

        public HashSet<Side> GetSides(Segment segment)
        {
            if (!sidesBySegment.ContainsKey(segment)) return Side.empty;
            return sidesBySegment[segment];
        }

        public HashSet<Side> GetSides(int vertex)
        {
            if (!sides.ContainsKey(vertex)) return Side.empty;
            return sides[vertex];
        }

        public static int[] MapVertice(Vector3[] vertices)
        {
            int[] map = new int[vertices.Length];
            for (int i = 0; i < vertices.Length; i++)
            {
                map[i] = i;
                for (int j = 0; j < i; j++)
                {
                    if ((vertices[i] - vertices[j]).sqrMagnitude < 1E-2)
                    {
                        map[i] = j;
                        break;
                    }
                }
            }
            return map;
        }

        public HashSet<Side> GetConnectedSides(Side side)
        {
            HashSet<Side> others = new HashSet<Side>(GetSides(side.segment));
            others.Remove(side);
            return others;
        }

        public Side GetFirstOppositeSide(Side side)
        {
            HashSet<Side> others = new HashSet<Side>(GetSides(side.segment));
            others.Remove(side);
            return others.Count == 0 ? null : others.First();
        }
    }
}