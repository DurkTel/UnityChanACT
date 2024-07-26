using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// Բ�η�Χ���
    /// </summary>
    public struct Circle
    {
        /// <summary>
        /// ���ĵ�
        /// </summary>
        public Vector3 center;
        /// <summary>
        /// �뾶
        /// </summary>
        public float radius;

        public Circle(Vector3 center, float radius)
        {
            this.center = center;
            this.radius = radius;
        }

        /// <summary>
        /// �Ƿ��ڷ�Χ��
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public readonly bool IsInZone(Vector3 position)
        {
            Vector3 offset = position - center;
            return offset.sqrMagnitude <= radius * radius;
        }
    }
}
