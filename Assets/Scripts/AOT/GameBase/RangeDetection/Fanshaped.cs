using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// 扇形范围检测
    /// </summary>
    public struct Fanshaped
    {
        /// <summary>
        /// 角度
        /// </summary>
        public float angel;
        /// <summary>
        /// 半径
        /// </summary>
        public float radius;

        public Fanshaped(float angel, float radius)
        {
            this.angel = angel;
            this.radius = radius;
        }

        /// <summary>
        /// 是否在范围内
        /// </summary>
        /// <param name="start">起始点</param>
        /// <param name="dir">方向</param>
        /// <param name="position">判断点的位置</param>
        /// <returns></returns>
        public bool IsInZone(Vector3 start, Vector3 dir, Vector3 position)
        {
            //计算方向
            Vector3 direction = position - start;
            float dot = Vector3.Dot(direction.normalized, dir);
            //计算角度
            float angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
            return angle < angel * 0.5f && direction.magnitude < radius;
        }
    }
}
