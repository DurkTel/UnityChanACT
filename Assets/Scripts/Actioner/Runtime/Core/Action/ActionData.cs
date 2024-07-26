using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionData", menuName = "Actioner/ActionData")]
    public class ActionData : ScriptableObject
    {

        /// <summary>
        /// �㼶
        /// </summary>
        public int layer;

        /// <summary>
        /// ��ǩ
        /// </summary>
        public ActionerTag tag;

        /// <summary>
        /// ����Ƭ��
        /// </summary>
        public AnimationClip motion;

        /// <summary>
        /// �ٶ�
        /// </summary>
        public double speed = 1d;

        /// <summary>
        /// ��ʼ����ʱ��ƫ�� NormalizedTime
        /// </summary>
        public float timeOffset = 0f;

        /// <summary>
        /// ���ýŲ�IK����Ҫ�����а������ҽŵ�Ȩ�����ߣ�
        /// </summary>
        public bool footIK = false;

        /// <summary>
        /// ����rootMotion
        /// </summary>
        public bool rootMotion;
    }
}
