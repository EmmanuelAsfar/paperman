using System;
using UnityEngine;

namespace Unfolder
{
    public class Geometry
    {
        private static float Sign(Vector2 p1, Vector2 p2, Vector2 p3)
        {
            return (p1.x - p3.x) * (p2.y - p3.y) - (p2.x - p3.x) * (p1.y - p3.y);
        }

        public static bool PointInTriangle(Vector2 pt, Vector2 v1, Vector2 v2, Vector2 v3)
        {
            float d1, d2, d3;
            bool has_neg, has_pos;

            d1 = Sign(pt, v1, v2);
            d2 = Sign(pt, v2, v3);
            d3 = Sign(pt, v3, v1);

            has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
            has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

            return !(has_neg && has_pos);
        }

        // Returns the interesection point, otherwise null
        public static bool HasIntersection(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3)
        {
            if (Triangle.NearPoints(p0, p2) || Triangle.NearPoints(p0, p3)) return false;
            if (Triangle.NearPoints(p1, p2) || Triangle.NearPoints(p1, p3)) return false;

            float s1_x, s1_y, s2_x, s2_y;
            s1_x = p1.x - p0.x; s1_y = p1.y - p0.y;
            s2_x = p3.x - p2.x; s2_y = p3.y - p2.y;

            float s, t;
            s = (-s1_y * (p0.x - p2.x) + s1_x * (p0.y - p2.y)) / (-s2_x * s1_y + s1_x * s2_y);
            t = (s2_x * (p0.y - p2.y) - s2_y * (p0.x - p2.x)) / (-s2_x * s1_y + s1_x * s2_y);

            if (s > 0 && s < 1 && t > 0 && t < 1)
            {
                // Collision detected
                Vector2 intersection = new Vector2(p0.x + (t * s1_x), p0.y + (t * s1_y));
                return true;
            }

            return false; // No collision
        }
    }
}