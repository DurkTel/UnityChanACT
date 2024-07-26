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
        /// 起始点
        /// </summary>
        public Transform transform;
        /// <summary>
        /// 角度
        /// </summary>
        public float angel;
        /// <summary>
        /// 半径
        /// </summary>
        public float radius;

        public Fanshaped(Transform transform, float angel, float radius)
        {
            this.transform = transform;
            this.angel = angel;
            this.radius = radius;
        }

        /// <summary>
        /// 是否在范围内
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            //计算方向
            Vector3 direction = position - transform.position;
            float dot = Vector3.Dot(direction.normalized, transform.forward);
            //计算角度
            float angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
            return angle < angel * 0.5f && direction.magnitude < radius;
        }
    }
}
