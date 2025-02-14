using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class ParticleCueSpec : GameplayCueDuration
    {
        private Parameter m_Parameter;

        private GameObject m_EffectGO;

        public override void Dispose()
        {
            GameObjectPool.Release(m_Parameter.prefabName, m_EffectGO);
            m_EffectGO = null;
            m_EndTimeStamp = 0;
        }

        public override void Trigger<V>(V arg)
        {
            if (arg is not Parameter param)
                return;

            m_Parameter = param;
            m_EndTimeStamp = -1;

            GameObjectPool.GetAsset(m_Parameter.prefabName, (go) =>
            {
                m_EffectGO = go;
                m_EffectGO.transform.position = m_Parameter.position;
                m_EffectGO.transform.rotation = m_Parameter.rotation;
                m_EffectGO.transform.localScale = m_Parameter.scale;

                m_EndTimeStamp = DateTime.Now.Ticks + (long)(m_Parameter.lifeTime * 10000000d);
            });
        }


        public override void OnUpdate(float deltaTime)
        {
            base.OnUpdate(deltaTime);

            if (m_Parameter.follow != null && m_EffectGO != null)
            {
                m_EffectGO.transform.position = m_Parameter.follow.position + m_Parameter.position;
                m_EffectGO.transform.rotation = m_Parameter.follow.rotation * m_Parameter.rotation;
                m_EffectGO.transform.localScale = new Vector3(m_Parameter.follow.localScale.x * m_Parameter.scale.x, m_Parameter.follow.localScale.y * m_Parameter.scale.y, m_Parameter.follow.localScale.z * m_Parameter.scale.z);
            }
        }

        public struct Parameter
        {
            public string prefabName;

            public float lifeTime;

            public Vector3 position;

            public Quaternion rotation;

            public Vector3 scale;

            public Transform follow;
        }
    }
}
