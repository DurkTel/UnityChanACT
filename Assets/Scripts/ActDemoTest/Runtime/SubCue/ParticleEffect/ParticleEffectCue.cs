using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ParticleEffectCue : GameplayCueDuration
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

        private GameObject m_ParticleObj;

        public override void Dispose()
        {
            GameObject.Destroy(m_ParticleObj);
            m_ParticleObj = null;
        }

        public override void Trigger<V>(V arg)
        {
            if (arg is ParticleCueArg actionArg)
            {
                m_EndTimeStamp = DateTime.Now.Ticks + (long)(actionArg.duration * 10000000d);
                m_ParticleObj = GameObject.Instantiate(actionArg.particleEffect);

                m_ParticleObj.transform.rotation = m_ASC.transform.rotation * Quaternion.Euler(actionArg.rotation);
                m_ParticleObj.transform.localPosition = GetTargetPos(actionArg.effectPointType) + actionArg.position;
                m_ParticleObj.transform.localScale = actionArg.scale;
            }
        }

        private Vector3 GetTargetPos(EffectPointType point)
        {
            Vector3 pos = Vector3.zero;
            if (point == EffectPointType.Source)
                pos = m_ASC.transform.localPosition;
            //else if (point == ParticleEffectCueAsset.EffectPointType.Target)
            //    pos = Avatar.forward;
            //else if (point == ParticleEffectCueAsset.EffectPointType.HitPoints)
            //    pos = Avatar.forward;

            return pos;
        }

        public static ParticleEffectCue Trigger(AbilitySystemComponent asc, ParticleCueArg arg)
        {
            return asc.Cues.TriggerCue<ParticleEffectCue, ParticleCueArg>(arg);
        }
    }

    [System.Serializable]
    public struct ParticleCueArg
    {
        public GameObject particleEffect;

        public ParticleEffectCue.EffectPointType effectPointType;

        public ParticleEffectCue.ConstraintType constraintType;

        public float duration;

        public string bindBone;

        public Vector3 position;

        public Vector3 rotation;

        public Vector3 scale;
    }
}
