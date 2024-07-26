using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionBlendTree", menuName = "Actioner/ActionBlendTree")]
    public class ActionBlend : ScriptableObject
    {
        /// <summary>
        /// �㼶
        /// </summary>
        public int layer;

        /// <summary>
        /// �������
        /// </summary>
        public BlendTreeType blendType;

        /// <summary>
        /// ��ϲ���
        /// </summary>
        public string[] parameter;

        /// <summary>
        /// �˶�
        /// </summary>
        public BlendMotion[] motions;
    }
}
