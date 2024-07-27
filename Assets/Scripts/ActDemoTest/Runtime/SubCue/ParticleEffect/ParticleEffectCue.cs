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
        /// Լ������
        /// </summary>
        [Flags]
        public enum ConstraintType
        {
            /// <summary>
            /// ��Լ��
            /// </summary>
            None = 0,
            /// <summary>
            /// λ��Լ��
            /// </summary>
            PosConstraint = 1,
            /// <summary>
            /// ��תԼ��
            /// </summary>
            RotationConstraint = 2,
            /// <summary>
            /// ����Լ��
            /// </summary>
            ScaleConstraint = 4,
        }

        /// <summary>
        /// ����λ��
        /// </summary>
        public enum EffectPointType
        {
            /// <summary>
            /// ��������Դ����λ��
            /// </summary>
            Source,
            /// <summary>
            /// ������Ŀ�����λ��
            /// </summary>
            Target,
            /// <summary>
            /// �����ڴ����
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
