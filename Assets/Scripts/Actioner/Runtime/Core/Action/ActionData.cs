using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    [CreateAssetMenu(fileName = "ActionData", menuName = "Actioner/ActionData")]
    public class ActionData : ScriptableObject
    {

        /// <summary>
        /// 层级
        /// </summary>
        public int layer;

        /// <summary>
        /// 标签
        /// </summary>
        public ActionerTag tag;

        /// <summary>
        /// 动画片段
        /// </summary>
        public AnimationClip motion;

        /// <summary>
        /// 速度
        /// </summary>
        public double speed = 1d;

        /// <summary>
        /// 开始播放时的偏移 NormalizedTime
        /// </summary>
        public float timeOffset = 0f;

        /// <summary>
        /// 启用脚部IK（需要动画中包含左右脚的权重曲线）
        /// </summary>
        public bool footIK = false;

        /// <summary>
        /// 启用rootMotion
        /// </summary>
        public bool rootMotion;
    }
}
