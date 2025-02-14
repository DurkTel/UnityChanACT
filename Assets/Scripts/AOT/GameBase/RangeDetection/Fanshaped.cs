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
        /// �Ƕ�
        /// </summary>
        public float angel;
        /// <summary>
        /// �뾶
        /// </summary>
        public float radius;

        public Fanshaped(float angel, float radius)
        {
            this.angel = angel;
            this.radius = radius;
        }

        /// <summary>
        /// �Ƿ��ڷ�Χ��
        /// </summary>
        /// <param name="start">��ʼ��</param>
        /// <param name="dir">����</param>
        /// <param name="position">�жϵ��λ��</param>
        /// <returns></returns>
        public bool IsInZone(Vector3 start, Vector3 dir, Vector3 position)
        {
            //���㷽��
            Vector3 direction = position - start;
            float dot = Vector3.Dot(direction.normalized, dir);
            //����Ƕ�
            float angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
            return angle < angel * 0.5f && direction.magnitude < radius;
        }
    }
}
