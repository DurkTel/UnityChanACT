
using LGameFramework.GameCore.Asset;
using LGameFramework.GameLogic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace LGameFramework.GameEditor
{
    public partial class ActionPreview : UnityEditor.EditorWindow
    {
        public class ActionAnimationPreview : ActionClipPreview
        {
            private AnimationClipPlayable m_ClipPlayable;

            private ActionAnimationClip m_AnimClip;

            public ActionAnimationPreview(ActionClip clip, ActionPreview preview) : base(clip, preview)
            {
                m_AnimClip = clip as ActionAnimationClip;
                if (!string.IsNullOrEmpty(m_AnimClip.animationClip))
                {
                    var assetPath = AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(m_AnimClip.animationClip);
                    var animationClip = AssetDatabase.LoadAssetAtPath<AnimationClip>(assetPath);
                    m_ClipPlayable = AnimationClipPlayable.Create(preview.m_PreviewPlayableGraph, animationClip);
                    preview.m_PreviewPlayableOutput.SetSourcePlayable(m_ClipPlayable);
                    preview.m_PreviewPlayableGraph.Play();
                }
            }

            public override void Dispose()
            {
                if (m_ClipPlayable.IsValid())
                    m_ClipPlayable.Destroy();
            }

            public override void OnEnter()
            {
                
            }

            public override void OnExit()
            {
                
            }

            public override void Repaint()
            {
                float time = CurrentTick * TimeLineArea.c_FrameSec * m_AnimClip.speed;
                m_ClipPlayable.SetTime(time);
                m_Preview.m_PreviewPlayableGraph.Evaluate(TimeLineArea.c_FrameSec);
                m_Preview.Repaint();
            }
        }

    }
}
