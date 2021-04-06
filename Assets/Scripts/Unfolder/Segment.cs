using System;
using UnityEngine;

namespace Unfolder
{
    public class Segment
    {
        public readonly int x, y;
        public Vector3[] vertices;

        public Vector3 X3D { get => vertices[x]; }
        public Vector3 Y3D { get => vertices[y]; }

        public float Magnitude { get => (Y3D - X3D).magnitude; }

        public Segment(int x, int y, Vector3[] vertices)
        {
            this.x = x;
            this.y = y;
            this.vertices = vertices;
        }

        public bool Has(int z) => x == z || y == z;

        public bool Connected(Segment other) => Has(other.x) || Has(other.y);

        public override int GetHashCode() => x + y;

        public override bool Equals(object obj)
        {
            Segment o = (Segment)obj;
            return (x == o.x && y == o.y) || (x == o.y && y == o.x);
        }
    }
}
