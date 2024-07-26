using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ParticleEffectCue : GameplayCueDuration
    {
        private GameObject m_ParticleObj;

        public override void Dispose()
        {
            GameObject.Destroy(m_ParticleObj);
            m_ParticleObj = null;
        }

        public override void Trigger<V>(V arg)
        {
            
        }

        public override void Trigger(GameplayCueAsset asset, object param = null)
        {
            if (asset is ParticleEffectCueAsset particleAsset)
            {
                var cue = param as CueAbilityClip;

                m_EndTimeStamp = DateTime.Now.Ticks + cue.Duration * 100000;
                m_ParticleObj = GameObject.Instantiate(particleAsset.particleEffect);

                m_ParticleObj.transform.rotation = m_ASC.transform.rotation * Quaternion.Euler(particleAsset.rotation);
                m_ParticleObj.transform.localPosition = GetTargetPos(particleAsset);
                m_ParticleObj.transform.localScale = particleAsset.scale;
            }
        }

        private Vector3 GetTargetPos(ParticleEffectCueAsset asset)
        {
            Vector3 pos = Vector3.zero;
            if (asset.effectPointType == ParticleEffectCueAsset.EffectPointType.Source)
                pos = m_ASC.transform.localPosition;
            //else if (asset.effectPointType == ParticleEffectCueAsset.EffectPointType.Target)
            //    pos = Avatar.forward;
            //else if (asset.effectPointType == ParticleEffectCueAsset.EffectPointType.HitPoints)
            //    pos = Avatar.forward;

            pos += asset.position;

            return pos;
        }
    }
}
