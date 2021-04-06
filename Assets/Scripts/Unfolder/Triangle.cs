using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;

namespace Unfolder
{
    public class Triangle
    {
        public Vector3[] vertices;

        protected int a, b, c;
        protected int oa, ob, oc;
        public Side ab, bc, ca;

        public Vector2 aLocal2D, bLocal2D, cLocal2D;

        public Vector3 A3D { get => vertices[a]; }
        public Vector3 B3D { get => vertices[b]; }
        public Vector3 C3D { get => vertices[c]; }

        public int OA { get => oa; }
        public int OB { get => ob; }
        public int OC { get => oc; }

        public int A { get => a; }
        public int B { get => b; }
        public int C { get => c; }

        public Vector2 A2D() => shape == null ? aLocal2D : shape.GetA(this);

        public Vector2 B2D() => shape == null ? bLocal2D : shape.GetB(this);

        public Vector2 C2D() => shape == null ? cLocal2D : shape.GetC(this);

        public readonly Side[] sides;

        public int subMeshId;

        public Shape shape;

        public Triangle(int a, int b, int c, int oa, int ob, int oc, Vector3[] vertices, Shape shape, int subMeshId)
        {
            this.a = a;
            this.b = b;
            this.c = c;
            this.oa = oa;
            this.ob = ob;
            this.oc = oc;
            this.vertices = vertices;
            this.subMeshId = subMeshId;
            this.shape = shape;

            this.ab = new Side(this, SideType.AB, new Segment(a, b, vertices));
            this.bc = new Side(this, SideType.BC, new Segment(b, c, vertices));
            this.ca = new Side(this, SideType.CA, new Segment(c, a, vertices));

            this.sides = new Side[] { ab, bc, ca };

            BuildLocalCoordinates();
        }

        private void BuildLocalCoordinates()
        {
            Vector3 triangleNormal = Vector3.Cross(B3D - C3D, A3D - C3D);
            Quaternion toXYPlan = Quaternion.FromToRotation(triangleNormal, Vector3.forward);

            Matrix4x4 t = Matrix4x4.TRS(C3D, toXYPlan, Vector3.one);

            aLocal2D = t.MultiplyVector(A3D); // Coordonnée relative en 2D du point A
            bLocal2D = t.MultiplyVector(B3D); // Coordonnée relative en 2D du point B
            cLocal2D = t.MultiplyVector(C3D); // le point c est la référence du 0

            Vector2 reference = cLocal2D;

            aLocal2D -= reference;
            bLocal2D -= reference;
            cLocal2D -= reference;
        }

        public float Perimeter { get => (A3D - B3D).magnitude + (B3D - C3D).magnitude + (C3D - A3D).magnitude; }

        public static bool NearPoints(Vector3 p1, Vector3 p2) => p1.Equals(p2) || (p1 - p2).sqrMagnitude < 1E-3; // TODO Mettre seuil en constante


        public override string ToString()
        {
            return "(" + vertices[a] + "," + vertices[b] + "," + vertices[c] + ")";
        }

        public bool HasVertices(Triangle t)
        {
            return HasVertex(t.a) && HasVertex(t.b) && HasVertex(t.c);
        }

        public bool HasSegment(Segment segment)
        {
            foreach (Side side in sides) 
                if (segment.Equals(side.segment)) return true;
            return false;
        }

        public override int GetHashCode() => a + b + c;

        public override bool Equals(System.Object obj)
        {
            Triangle other= (Triangle)obj;
            return (other.a == a && other.b == b && other.c == c) || HasVertices((Triangle)obj) && ((Triangle)obj).HasVertices(this);
        }

        public Triangle Flip() => new Triangle(c, b, a, oc, ob, oa, vertices, shape, subMeshId);


        public void RotateCTowards(int x) // TODO enlever
        {
            int a0 = a;
            int b0 = b;
            int c0 = c;
            int oa0 = oa;
            int ob0 = ob;
            int oc0 = oc;

            if (b == x) {
                a = c0;
                b = a0;
                c = b0;
                oa = oc0;
                ob = oa0;
                oc = ob0;
                BuildLocalCoordinates();
            }
            else if (a == x) {
                a = b0;
                b = c0;
                c = a0;
                oa = ob0;
                ob = oc0;
                oc = oa0;
                BuildLocalCoordinates();
            } else if (c == x) {
                // Ne rien faire les sommets est dans le bon ordre
            }
            else throw new System.Data.EvaluateException("Le vertex x n'est pas dans ce triangle");
        }

        public bool HasVertex(int x) => a == x || b == x || c == x;

        public class ByPerimeter : IComparer<Triangle>
        {
            public int Compare(Triangle x, Triangle y) => (int)Math.Round(1E5 *(x.Perimeter - y.Perimeter)); // TODO remplacer par if dans tous les compare
        }

        public bool IsEmpty() {
            return Vector3.Cross(A3D - B3D, A3D - C3D).magnitude / 2 < 1E-3; // TODO Factoriser la constante surface
        }

    }
}