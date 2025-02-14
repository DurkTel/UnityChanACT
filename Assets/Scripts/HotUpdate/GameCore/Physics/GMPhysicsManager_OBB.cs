using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class OBBCollision : ICollision, IDisposable
    {
        public Vector3 Position;

        public Quaternion Rotation;

        public Vector3 Scale;
        public Vector3 P0 { get { return LocalToWorld(new Vector3(-1, -1, -1)); } }
        public Vector3 P1 { get { return LocalToWorld(new Vector3(1, -1, -1)); } }
        public Vector3 P2 { get { return LocalToWorld(new Vector3(1, 1, -1)); } }
        public Vector3 P3 { get { return LocalToWorld(new Vector3(-1, 1, -1)); } }
        public Vector3 P4 { get { return LocalToWorld(new Vector3(-1, -1, 1)); } }
        public Vector3 P5 { get { return LocalToWorld(new Vector3(1, -1, 1)); } }
        public Vector3 P6 { get { return LocalToWorld(new Vector3(1, 1, 1)); } }
        public Vector3 P7 { get { return LocalToWorld(new Vector3(-1, 1, 1)); } }
        public Vector3 XAxis { get { return Rotation * Vector3.right; } }
        public Vector3 YAxis { get { return Rotation * Vector3.up; } }
        public Vector3 ZAxis { get { return Rotation * Vector3.forward; } }

        private readonly HashSet<int> m_InCollision;
        public HashSet<int> InCollision { get { return m_InCollision; } }

        private int m_CollisionType;
        public int CollisionType { get { return m_CollisionType; } set { m_CollisionType = value; } }

        private int m_SourceId;
        public int SourceId { get { return m_SourceId; } set { m_SourceId = value; } }

        private int m_EntityId;
        public int EntityId { get { return m_EntityId; } set { m_EntityId = value; } }

        private Vector3 m_HitPoint;
        public Vector3 HitPoint { get { return m_HitPoint; } }

        private List<Vector3> m_CollisionPoints;
        public UnityEvent<int> OnCollisionEnter { get; set; }
        public UnityEvent<int> OnCollisionExit { get; set; }

        public OBBCollision()
        {
            m_InCollision = new HashSet<int>();
            OnCollisionEnter = new UnityEvent<int>();
            OnCollisionExit = new UnityEvent<int>();
            m_CollisionPoints = new List<Vector3>();
        }

        public void Dispose()
        {
            OnCollisionEnter.RemoveAllListeners();
            OnCollisionExit.RemoveAllListeners();
        }

        public bool Intersects(ICollision other)
        {
            if (other is not OBBCollision obb)
                return false;

            var isNotIntersect = false;
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, XAxis);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, YAxis);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, ZAxis);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, obb.XAxis);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, obb.YAxis);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, obb.ZAxis);

            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(XAxis, obb.XAxis).normalized);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(XAxis, obb.YAxis).normalized);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(XAxis, obb.ZAxis).normalized);

            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(YAxis, obb.XAxis).normalized);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(YAxis, obb.YAxis).normalized);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(YAxis, obb.ZAxis).normalized);

            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(ZAxis, obb.XAxis).normalized);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(ZAxis, obb.YAxis).normalized);
            isNotIntersect |= ProjectionIsNotIntersect(this, obb, Vector3.Cross(ZAxis, obb.ZAxis).normalized);

            //m_HitPoint = isNotIntersect ? Vector3.zero : GetCollisionPoint(obb);

            return isNotIntersect ? false : true;
        }

        private Vector3 LocalToWorld(Vector3 axis)
        {
            Vector3 localPoint = new Vector3(Scale.x * 0.5f * axis.x, Scale.y * 0.5f * axis.y, Scale.z * 0.5f * axis.z);
            Vector3 rotatedPoint = Rotation * localPoint;

            return Position + rotatedPoint;
        }

        private float GetSignProjectValue(Vector3 point, Vector3 axis)
        {
            var projectPoint = Vector3.Project(point, axis);
            var result = projectPoint.magnitude * Mathf.Sign(Vector3.Dot(projectPoint, axis));

            return result;
        }

        private bool ProjectionIsNotIntersect(OBBCollision x, OBBCollision y, Vector3 axis)
        {
            var x_p0 = GetSignProjectValue(x.P0, axis);
            var x_p1 = GetSignProjectValue(x.P1, axis);
            var x_p2 = GetSignProjectValue(x.P2, axis);
            var x_p3 = GetSignProjectValue(x.P3, axis);
            var x_p4 = GetSignProjectValue(x.P4, axis);
            var x_p5 = GetSignProjectValue(x.P5, axis);
            var x_p6 = GetSignProjectValue(x.P6, axis);
            var x_p7 = GetSignProjectValue(x.P7, axis);

            var y_p0 = GetSignProjectValue(y.P0, axis);
            var y_p1 = GetSignProjectValue(y.P1, axis);
            var y_p2 = GetSignProjectValue(y.P2, axis);
            var y_p3 = GetSignProjectValue(y.P3, axis);
            var y_p4 = GetSignProjectValue(y.P4, axis);
            var y_p5 = GetSignProjectValue(y.P5, axis);
            var y_p6 = GetSignProjectValue(y.P6, axis);
            var y_p7 = GetSignProjectValue(y.P7, axis);

            var xMin = Mathf.Min(x_p0, Mathf.Min(x_p1, Mathf.Min(x_p2, Mathf.Min(x_p3, Mathf.Min(x_p4, Mathf.Min(x_p5, Mathf.Min(x_p6, x_p7)))))));
            var xMax = Mathf.Max(x_p0, Mathf.Max(x_p1, Mathf.Max(x_p2, Mathf.Max(x_p3, Mathf.Max(x_p4, Mathf.Max(x_p5, Mathf.Max(x_p6, x_p7)))))));
            var yMin = Mathf.Min(y_p0, Mathf.Min(y_p1, Mathf.Min(y_p2, Mathf.Min(y_p3, Mathf.Min(y_p4, Mathf.Min(y_p5, Mathf.Min(y_p6, y_p7)))))));
            var yMax = Mathf.Max(y_p0, Mathf.Max(y_p1, Mathf.Max(y_p2, Mathf.Max(y_p3, Mathf.Max(y_p4, Mathf.Max(y_p5, Mathf.Max(y_p6, y_p7)))))));

            if (yMin >= xMin && yMin <= xMax) return false;
            if (yMax >= xMin && yMax <= xMax) return false;
            if (xMin >= yMin && xMin <= yMax) return false;
            if (xMax >= yMin && xMax <= yMax) return false;

            return true;
        }

        public Vector3 GetCollisionPoint(OBBCollision other)
        {
            // Step 1: 确定最小重叠的轴（从所有可能的分离轴中找到最小重叠轴）
            Vector3[] axes = new Vector3[]
            {
                XAxis, YAxis, ZAxis,
                other.XAxis, other.YAxis, other.ZAxis,
                Vector3.Cross(XAxis, other.XAxis).normalized,
                Vector3.Cross(XAxis, other.YAxis).normalized,
                Vector3.Cross(XAxis, other.ZAxis).normalized,
                Vector3.Cross(YAxis, other.XAxis).normalized,
                Vector3.Cross(YAxis, other.YAxis).normalized,
                Vector3.Cross(YAxis, other.ZAxis).normalized,
                Vector3.Cross(ZAxis, other.XAxis).normalized,
                Vector3.Cross(ZAxis, other.YAxis).normalized,
                Vector3.Cross(ZAxis, other.ZAxis).normalized,
            };

            float minOverlap = float.MaxValue;
            Vector3 minOverlapAxis = Vector3.zero;

            foreach (var axis in axes)
            {
                if (axis == Vector3.zero) continue; // 忽略无效的轴

                float overlap = GetAxisOverlap(this, other, axis);
                if (overlap < minOverlap)
                {
                    minOverlap = overlap;
                    minOverlapAxis = axis;
                }
            }

            // Step 2: 投影 OBB 顶点到最小重叠的轴上，找出距离最近的顶点
            Vector3[] thisVertices = new Vector3[] { P0, P1, P2, P3, P4, P5, P6, P7 };
            Vector3[] otherVertices = new Vector3[] { other.P0, other.P1, other.P2, other.P3, other.P4, other.P5, other.P6, other.P7 };

            Vector3 closestPointThis = FindClosestPointOnAxis(thisVertices, other, minOverlapAxis);
            Vector3 closestPointOther = FindClosestPointOnAxis(otherVertices, this, minOverlapAxis);

            // Step 3: 返回两者中最靠近的碰撞点
            return (closestPointThis + closestPointOther) / 2;
        }

        private float GetAxisOverlap(OBBCollision obb1, OBBCollision obb2, Vector3 axis)
        {
            // 计算两个OBB在指定轴上的投影重叠量
            float obb1Min = GetMinProjection(obb1, axis);
            float obb1Max = GetMaxProjection(obb1, axis);
            float obb2Min = GetMinProjection(obb2, axis);
            float obb2Max = GetMaxProjection(obb2, axis);

            if (obb2Max < obb1Min || obb2Min > obb1Max)
            {
                return float.MaxValue; // 没有重叠
            }

            return Mathf.Min(obb1Max, obb2Max) - Mathf.Max(obb1Min, obb2Min); // 计算重叠量
        }

        private float GetMinProjection(OBBCollision obb, Vector3 axis)
        {
            Vector3[] vertices = new Vector3[] { obb.P0, obb.P1, obb.P2, obb.P3, obb.P4, obb.P5, obb.P6, obb.P7 };
            float min = float.MaxValue;
            foreach (var vertex in vertices)
            {
                float projection = Vector3.Dot(vertex, axis);
                if (projection < min)
                    min = projection;
            }
            return min;
        }

        private float GetMaxProjection(OBBCollision obb, Vector3 axis)
        {
            Vector3[] vertices = new Vector3[] { obb.P0, obb.P1, obb.P2, obb.P3, obb.P4, obb.P5, obb.P6, obb.P7 };
            float max = float.MinValue;
            foreach (var vertex in vertices)
            {
                float projection = Vector3.Dot(vertex, axis);
                if (projection > max)
                    max = projection;
            }
            return max;
        }

        private Vector3 FindClosestPointOnAxis(Vector3[] vertices, OBBCollision other, Vector3 axis)
        {
            Vector3 closestPoint = vertices[0];
            float minDistance = Mathf.Abs(Vector3.Dot(vertices[0] - other.Position, axis));

            for (int i = 1; i < vertices.Length; i++)
            {
                float distance = Mathf.Abs(Vector3.Dot(vertices[i] - other.Position, axis));
                if (distance < minDistance)
                {
                    closestPoint = vertices[i];
                    minDistance = distance;
                }
            }

            return closestPoint;
        }

    }
}
