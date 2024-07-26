using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// �����η�Χ���
    /// </summary>
    public struct Triangle
    {
        /// <summary>
        /// ��1
        /// </summary>
        public Vector3 corner1;
        /// <summary>
        /// ��2
        /// </summary>
        public Vector3 corner2;
        /// <summary>
        /// ��3
        /// </summary>
        public Vector3 corner3;

        public Triangle(Vector3 point0, Vector3 point1, Vector3 point2)
        {
            corner1 = point0;
            corner2 = point1;
            corner3 = point2;
        }

        /// <summary>
        /// �Ƿ��ڷ�Χ��
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public readonly bool IsInZone(Vector3 position)
        {
            Vector3 v0 = corner2 - corner1;
            Vector3 v1 = corner3 - corner1;
            Vector3 v2 = position - corner1;

            float _00 = Vector3.Dot(v0, v0);
            float _01 = Vector3.Dot(v0, v1);
            float _02 = Vector3.Dot(v0, v2);
            float _11 = Vector3.Dot(v1, v1);
            float _12 = Vector3.Dot(v1, v2);

            float inver = 1 / (_00 * _11 - _01 * _01);
            float u = (_11 * _02 - _01 * _12) * inver;
            if (u < 0 || u > 1)
                return false;

            float v = (_00 * _12 - _01 * _02) * inver;
            if (v < 0 || v > 1)
                return false;

            return u + v < 1;
        }
    }
}
