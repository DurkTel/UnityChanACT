using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ParticleEffectCueAsset : GameplayCueAsset
    {
        /// <summary>
        /// 约束类型
        /// </summary>
        [Flags]
        public enum ConstraintType
        {
            /// <summary>
            /// 无约束
            /// </summary>
            None = 0,
            /// <summary>
            /// 位置约束
            /// </summary>
            PosConstraint = 1,
            /// <summary>
            /// 旋转约束
            /// </summary>
            RotationConstraint = 2,
            /// <summary>
            /// 缩放约束
            /// </summary>
            ScaleConstraint = 4,
        }

        /// <summary>
        /// 创建位置
        /// </summary>
        public enum EffectPointType
        {
            /// <summary>
            /// 创建在来源对象位置
            /// </summary>
            Source,
            /// <summary>
            /// 创建在目标对象位置
            /// </summary>
            Target,
            /// <summary>
            /// 创建在打击点
            /// </summary>
            HitPoints,
        }

        public GameObject particleEffect;

        public EffectPointType effectPointType;

        public ConstraintType constraintType;

        public string bindBone;

        public Vector3 position;

        public Vector3 rotation;

        public Vector3 scale = Vector3.one;


        public override Type GetCueType()
        {
            return typeof(ParticleEffectCue);
        }

        public override float GetDefaultLength()
        {
            return 0.5f;
        }

    }
}
