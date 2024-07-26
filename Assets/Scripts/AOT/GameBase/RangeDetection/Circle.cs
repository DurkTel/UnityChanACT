using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// 圆形范围检测
    /// </summary>
    public struct Circle
    {
        /// <summary>
        /// 中心点
        /// </summary>
        public Vector3 center;
        /// <summary>
        /// 半径
        /// </summary>
        public float radius;

        public Circle(Vector3 center, float radius)
        {
            this.center = center;
            this.radius = radius;
        }

        /// <summary>
        /// 是否在范围内
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
