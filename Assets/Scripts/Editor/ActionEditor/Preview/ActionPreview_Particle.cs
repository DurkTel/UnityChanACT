using LGameFramework.GameCore.Asset;
using LGameFramework.GameLogic;
using UnityEditor;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public partial class ActionPreview : UnityEditor.EditorWindow
    {
        public class ActionParticlePreview : ActionClipPreview
        {

            private ActionParticleClip m_ParticleClip;

            private GameObject m_Effect;

            private ParticleSystem m_ParticleSystem;

            public Transform Avatar { get { return m_Preview.m_PreviewAvatar.transform; } }
            public ActionParticlePreview(ActionClip clip, ActionPreview preview) : base(clip, preview)
            {
                m_ParticleClip = clip as ActionParticleClip;
                if (!string.IsNullOrEmpty(m_ParticleClip.particleEffect))
                {
                    var assetPath = AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(m_ParticleClip.particleEffect);
                    var effect = AssetDatabase.LoadAssetAtPath<GameObject>(assetPath);
                    m_Effect = Instantiate<GameObject>(effect);
                    m_ParticleSystem = m_Effect.GetComponent<ParticleSystem>();
                    m_Preview.m_PreviewUtility.AddSingleGO(m_Effect);
                    m_Effect.transform.SetParent(m_Preview.m_RootScene);
                }
            }

            public override void Dispose()
            {
                if (m_Effect != null)
                {
                    DestroyImmediate(m_Effect);
                    m_Effect = null;
                }

                if (m_ParticleClip != null)
                    m_ParticleClip = null;

                if (m_ParticleSystem != null)
                    m_ParticleSystem = null;
            }

            public override void OnEnter()
            {
                if (m_Effect != null)
                    m_Effect.SetActive(true);
            }

            public override void OnExit()
            {
                if (m_Effect != null)
                    m_Effect.SetActive(false);
            }

            public override void Repaint()
            {
                m_Effect.transform.rotation = Quaternion.Euler(m_ParticleClip.rotation);
                m_Effect.transform.localPosition = GetTargetPos();
                m_Effect.transform.localScale = m_ParticleClip.scale;

                int offsetTick = CurrentTick - (int)RangeTick[0];
                if (m_ParticleSystem != null)
                    m_ParticleSystem.Simulate(offsetTick * TimeLineArea.c_FrameSec, true, true, true);

                m_Preview.Repaint();
            }

            private Vector3 GetTargetPos()
            {
                Vector3 pos = Vector3.zero;
                if (m_ParticleClip.effectPointType == EffectPointType.Source)
                    pos = Avatar.localPosition;
                else if (m_ParticleClip.effectPointType == EffectPointType.HitPoints)
                    pos = Avatar.forward;

                pos += m_ParticleClip.position;

                return pos;
            }
        }
    }
}
