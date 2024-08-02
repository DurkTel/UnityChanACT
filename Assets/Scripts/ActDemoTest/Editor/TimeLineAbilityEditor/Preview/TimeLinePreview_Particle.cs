using GAS.Runtime;
using UnityChanAct;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineParticleEffectPreview : TimeLineClipPreview
        {
            private ParticleSystem m_ParticleSystem;

            private GameObject m_ParticleObj;

            private ParticleEffectCueClip m_ParticleClip;

            public Transform Avatar { get { return m_Preview.m_PreviewAvatar.transform; } }

            public TimeLineParticleEffectPreview(TimeLineAbilityClip clip, TimeLinePreview preview) : base(clip, preview)
            {
                m_ParticleClip = clip as ParticleEffectCueClip;
                m_ParticleObj = Instantiate(m_ParticleClip.particleEffect);

                m_ParticleObj.SetActive(false);

                m_ParticleSystem = m_ParticleObj.GetComponent<ParticleSystem>();
                m_Preview.m_PreviewUtility.AddSingleGO(m_ParticleObj);
                m_ParticleObj.transform.SetParent(m_Preview.m_RootScene);

            }

            public override void Dispose()
            {
                if (m_ParticleObj != null)
                {
                    DestroyImmediate(m_ParticleObj);
                    m_ParticleObj = null;
                }

                if (m_ParticleClip != null)
                    m_ParticleClip = null;

                if (m_ParticleSystem != null)
                    m_ParticleSystem = null;
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
                if (m_ParticleObj == null)
                    return;
                m_ParticleObj.SetActive(true);

                int offsetTick = CurrentTick - (int)RangeTick[0];
                if (m_ParticleSystem != null)
                    m_ParticleSystem.Simulate(offsetTick * 0.02f, true, true, true);

                m_ParticleObj.transform.rotation = Quaternion.Euler(m_ParticleClip.rotation);
                m_ParticleObj.transform.localPosition = GetTargetPos();
                m_ParticleObj.transform.localScale = m_ParticleClip.scale;

                m_Preview.Repaint();
            }

            private Vector3 GetTargetPos()
            {
                Vector3 pos = Vector3.zero;
                if (m_ParticleClip.effectPointType == ParticleEffectCue.EffectPointType.Source)
                    pos = Avatar.position;
                else if (m_ParticleClip.effectPointType == ParticleEffectCue.EffectPointType.Target)
                    pos = Avatar.forward;
                else if(m_ParticleClip.effectPointType == ParticleEffectCue.EffectPointType.HitPoints)
                    pos = Avatar.forward;

                pos += m_ParticleClip.position;

                return pos;
            }
        }
    }
}
