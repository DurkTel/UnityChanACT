using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// ���η�Χ���
    /// </summary>
    public struct Fanshaped
    {
        /// <summary>
        /// ��ʼ��
        /// </summary>
        public Transform transform;
        /// <summary>
        /// �Ƕ�
        /// </summary>
        public float angel;
        /// <summary>
        /// �뾶
        /// </summary>
        public float radius;

        public Fanshaped(Transform transform, float angel, float radius)
        {
            this.transform = transform;
            this.angel = angel;
            this.radius = radius;
        }

        /// <summary>
        /// �Ƿ��ڷ�Χ��
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            //���㷽��
            Vector3 direction = position - transform.position;
            float dot = Vector3.Dot(direction.normalized, transform.forward);
            //����Ƕ�
            float angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
            return angle < angel * 0.5f && direction.magnitude < radius;
        }
    }
}
