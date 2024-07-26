using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionBlendTree", menuName = "Actioner/ActionBlendTree")]
    public class ActionBlend : ScriptableObject
    {
        /// <summary>
        /// 层级
        /// </summary>
        public int layer;

        /// <summary>
        /// 混合类型
        /// </summary>
        public BlendTreeType blendType;

        /// <summary>
        /// 混合参数
        /// </summary>
        public string[] parameter;

        /// <summary>
        /// 运动
        /// </summary>
        public BlendMotion[] motions;
    }
}
