using GAS.Runtime;
using UnityChanAct;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineParticleEffectPreview : TimeLineClipPreview
        {
            private ParticleEffectCueAsset m_CueAsset;

            private ParticleSystem m_ParticleSystem;

            private GameObject m_ParticleObj;

            public Transform Avatar { get { return m_Preview.m_PreviewAvatar.transform; } }

            public TimeLineParticleEffectPreview(TimeLineAbilityClip clip, TimeLinePreview preview, object obj) : base(clip, preview, obj)
            {
                m_CueAsset = obj as ParticleEffectCueAsset;
                m_ParticleObj = Instantiate(m_CueAsset.particleEffect);

                m_ParticleObj.SetActive(false);

                m_ParticleSystem = m_ParticleObj.GetComponent<ParticleSystem>();
                m_Preview.m_PreviewUtility.AddSingleGO(m_ParticleObj);
                m_ParticleObj.transform.SetParent(m_Preview.m_RootScene);

            }

            public override void Dispose()
            {
                m_CueAsset = null;
                m_ParticleSystem = null;
                m_ParticleObj = null;
            }

            public override void OnEnter()
            {

            }

            public override void OnExit()
            {

            }

            public override void OnTick(int tick)
            {
                base.OnTick(tick);
                Repaint();
            }

            public override void Repaint()
            {
                m_ParticleObj.SetActive(true);

                int offsetTick = CurrentTick - (int)RangeTick[0];
                if (m_ParticleSystem != null)
                    m_ParticleSystem.Simulate(offsetTick * 0.02f, true, true, true);

                m_ParticleObj.transform.rotation = Quaternion.Euler(m_CueAsset.rotation);
                m_ParticleObj.transform.localPosition = GetTargetPos();
                m_ParticleObj.transform.localScale = m_CueAsset.scale;

                m_Preview.Repaint();
            }

            private Vector3 GetTargetPos()
            {
                Vector3 pos = Vector3.zero;
                if (m_CueAsset.effectPointType == ParticleEffectCueAsset.EffectPointType.Source)
                    pos = Avatar.position;
                else if (m_CueAsset.effectPointType == ParticleEffectCueAsset.EffectPointType.Target)
                    pos = Avatar.forward;
                else if(m_CueAsset.effectPointType == ParticleEffectCueAsset.EffectPointType.HitPoints)
                    pos = Avatar.forward;

                pos += m_CueAsset.position;

                return pos;
            }
        }
    }
}
