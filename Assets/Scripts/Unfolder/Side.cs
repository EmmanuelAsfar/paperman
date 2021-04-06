using System.Collections.Generic;
using UnityEngine;
using System;

namespace Unfolder
{
    public enum SideType { AB, BC, CA }
    public enum StripType { Male, Female, Unset }

    public class Side
    {
        public readonly static HashSet<Side> empty = new HashSet<Side>();

        public readonly Triangle triangle;
        public readonly Segment segment;
        public readonly SideType sideType;

        public int stripId;
        public StripType stripType;

        public Side(Triangle triangle, SideType sideType, Segment segment)
        {
            this.triangle = triangle;
            this.sideType = sideType;
            this.segment = segment;
            this.stripType = StripType.Unset;
        }

        public override int GetHashCode() => triangle.GetHashCode() + segment.GetHashCode();

        public override bool Equals(object obj)
        {
            Side other = (Side)obj;
            return triangle.Equals(other.triangle) && segment.Equals(other.segment);
        }

        public override string ToString() => "("+X2D+","+Y2D+")";

        public Vector2 LocalX2D
        {
            get => sideType == SideType.AB ? triangle.aLocal2D : sideType == SideType.BC ? triangle.bLocal2D : triangle.cLocal2D;
        }

        public Vector2 LocalY2D
        {
            get => sideType == SideType.AB ? triangle.bLocal2D : sideType == SideType.BC ? triangle.cLocal2D : triangle.aLocal2D;
        }

        public Vector2 LocalZ2D
        {
            get => sideType == SideType.AB ? triangle.cLocal2D : sideType == SideType.BC ? triangle.aLocal2D : triangle.bLocal2D;
        }

        public Side Flip() => sideType == SideType.AB ? triangle.Flip().ab : sideType == SideType.BC ? triangle.Flip().bc : triangle.Flip().ca;

        public Vector2 X2D { get => triangle.shape == null ? LocalX2D : sideType == SideType.AB ? triangle.shape.GetA(triangle) : sideType == SideType.BC ? triangle.shape.GetB(triangle) : triangle.shape.GetC(triangle); }
        public Vector2 Y2D { get => triangle.shape == null ? LocalY2D : sideType == SideType.AB ? triangle.shape.GetB(triangle) : sideType == SideType.BC ? triangle.shape.GetC(triangle) : triangle.shape.GetA(triangle); }
        public Vector2 Z2D { get => triangle.shape == null ? LocalZ2D : sideType == SideType.AB ? triangle.shape.GetC(triangle) : sideType == SideType.BC ? triangle.shape.GetA(triangle) : triangle.shape.GetB(triangle); }

        public Vector3 X3D { get => sideType == SideType.AB ? triangle.A3D : sideType == SideType.BC ? triangle.B3D : triangle.C3D; }
        public Vector3 Y3D { get => sideType == SideType.AB ? triangle.B3D : sideType == SideType.BC ? triangle.C3D : triangle.A3D; }
        public Vector3 Z3D { get => sideType == SideType.AB ? triangle.C3D : sideType == SideType.BC ? triangle.A3D : triangle.B3D; }

        public float GetAngle(Side side2)
        {
            Side side1 = this;
            if (side2 == null) return 0;

            Vector3 t1Normal = Vector3.Cross(side1.triangle.B3D - side1.triangle.C3D, side1.triangle.A3D - side1.triangle.C3D).normalized;
            Vector3 t2Normal = Vector3.Cross(side2.triangle.B3D - side2.triangle.C3D, side2.triangle.A3D - side2.triangle.C3D).normalized;

            Vector3 Side = segment.Y3D - segment.X3D;

            return Vector3.SignedAngle(t2Normal, t1Normal, Side);
        }

        public HashSet<Side> GetConnectedSides()
        {
            if (triangle.shape == null) return empty;
            return triangle.shape.pattern.meshStructure.GetConnectedSides(this);
        }

        public Side GetFirstOppositeSide()
        {
            if (triangle.shape == null) return null;
            return triangle.shape.pattern.meshStructure.GetFirstOppositeSide(this);
        }

        public Side GetNextSide(int vertex)
        {
            foreach (var otherSide in triangle.sides)
            {
                if (Equals(otherSide)) continue;
                if (otherSide.HasVertex(vertex)) return otherSide;
            }
            return null;
        }

        public float GetPolyAngle2D(int vertex) // Retourne l'angle formé par le segment avec la shape autour du vertex
        {
            Vector2 v0 = vertex == segment.x ? Y2D - X2D : X2D - Y2D;

            Side nextSide = GetNextBorderInPoly(vertex);

            if (nextSide.segment.x == vertex) return Vector2.Angle(v0, nextSide.Y2D - nextSide.X2D);
            if (nextSide.segment.y == vertex) return Vector2.Angle(v0, nextSide.X2D - nextSide.Y2D);

            throw new Exception("Le vertex n'est pas dans le côté");
        }

        public Side GetNextBorderInPoly(int vertex) // Retourne le bord du polygone en partant dans un sens du côté oppoosé au segment selon le vertex
        {
            Side nextSide = this;
            while (true)
            {
                nextSide = nextSide.GetNextSide(vertex);
                Side opposite = nextSide.GetFirstOppositeSide();
                if (opposite == null || Equals(opposite) || Math.Abs(nextSide.GetAngle(opposite)) > 1E-2) break; // TODO Sortir constante
                if (!triangle.shape.triangles.Contains(opposite.triangle) || !opposite.ShareSegment2D(nextSide)) break;
                nextSide = opposite;
            }

            return nextSide;

            throw new Exception("Le vertex n'est pas dans le côté");
        }

        public Vector2 ToLocal(Vector2 absolutePoint)
        {
            return triangle.shape.GetTransformation(triangle).inverse.MultiplyPoint(absolutePoint);
        }

        public Vector2[] GetStripPoints(float stripHeight, float stripAngle)
        {
            Side opposite = GetFirstOppositeSide();
            float angleX = Math.Min(stripAngle, opposite == null ? stripAngle : opposite.GetPolyAngle2D(opposite.segment.y));
            float angleY = Math.Min(stripAngle, opposite == null ? stripAngle : opposite.GetPolyAngle2D(opposite.segment.x));
            Vector2 xAxis = (Y2D - X2D).normalized;
            Vector2 yAxis = Vector3.Cross(Vector3.forward, Y2D - X2D).normalized;
            float height = Math.Min(stripHeight, (Y2D - X2D).magnitude / (1/((float)Math.Tan(Mathf.Deg2Rad * angleX)) + 1 / (float)Math.Tan(Mathf.Deg2Rad * angleY)));
            float xX = height / ((float)Math.Tan(Mathf.Deg2Rad * angleX));
            float yX = height / ((float)Math.Tan(Mathf.Deg2Rad * angleY));
            Vector2 x2 = X2D + xAxis * xX + height * yAxis;
            Vector2 y2 = Y2D - xAxis * yX + height * yAxis;
            return new Vector2[] { x2, y2 };
        }

        public class ByLength : IComparer<Side>
        {
            public int Compare(Side x, Side y) => x.segment.Magnitude < y.segment.Magnitude ? -1 : 1;
        }

        // Renvoie le côté dans l'alignement de side de l'autre côté de vertex s'il est dans l'alignement et dans la même shape
        private int GetEndVertexInStraightLineInShape(int vertex)
        {
            Side endSide = this;
            int endVertex = vertex;
            bool hasChanged = true;
            while (hasChanged) {
                hasChanged = false;
                foreach (var candidate in triangle.shape.pattern.meshStructure.GetSides(endVertex))
                {
                    if (candidate.triangle.shape == null) continue;
                    if (candidate.triangle.shape.shapeId != triangle.shape.shapeId) continue;
                    if (candidate.ShareSegment(endSide)) continue;
                    if (candidate.segment.x == candidate.segment.y) continue;
                    // Alignement à 180° donc dans l'axe
                    if (Math.Abs(Vector3.Angle(candidate.segment.Y3D - candidate.segment.X3D, endSide.segment.Y3D - endSide.segment.X3D)) > 1E-2)
                        continue;
                    endVertex = candidate.segment.x == endVertex ? candidate.segment.y : candidate.segment.x;
                    endSide = candidate;
                    hasChanged = true;
                    break;
                }
            }
            return endVertex;
        }

        // Renvoie la longueur du segment complet en incluants les voisins en ligne droite
        public float GetMaxStraightLength() { 
            int leftVertex = GetEndVertexInStraightLineInShape(segment.x);
            int rightVertex = GetEndVertexInStraightLineInShape(segment.y);
            Vector3[] vertices = triangle.shape.pattern.meshStructure.vertices;
            return (vertices[leftVertex] - vertices[rightVertex]).magnitude;
        }

        public float LengthByShapesPerimeters() // Renvoie un ratio de rapport entre la longeur du segment et les deux shapes autour. 1 étant le maximum
        {
            float perimeter1 = triangle.shape.Perimeter;
            Side opposite = this.GetFirstOppositeSide();
            float perimeter2 = opposite == null ? 0 : opposite.triangle.shape.Perimeter;
            return 2 * triangle.shape.GetFullLength(this)/Mathf.Pow(perimeter1 + perimeter2, 2);
        }

        public class ByLengthToPerimeterRatioDesc : IComparer<Side>
        {
            public int Compare(Side x, Side y) => (int)Math.Round(1E5*(y.LengthByShapesPerimeters() - x.LengthByShapesPerimeters()));
        }

        public bool IsMale() => stripType == StripType.Male;
        public bool IsFemale() => stripType == StripType.Female;

        public float GetLength() => segment.Magnitude;

        public bool ShareVertex(Side other) => segment.Connected(other.segment);

        public bool HasVertex(int vertex) => segment.Has(vertex);

        public bool ShareSegment(Side other) => segment.Equals(other.segment);

        public bool ShareSegment2D(Side other) {
            return (Triangle.NearPoints(X2D, other.X2D) && Triangle.NearPoints(Y2D, other.Y2D))
                || (Triangle.NearPoints(X2D, other.Y2D) && Triangle.NearPoints(Y2D, other.X2D));
        }
    }
}