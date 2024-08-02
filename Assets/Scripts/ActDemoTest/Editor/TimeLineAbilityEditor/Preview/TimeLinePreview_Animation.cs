using GAS.Runtime;
using UnityChanAct;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineAnimationPreview : TimeLineClipPreview
        {
            private AnimationClipPlayable m_ClipPlayable;
            public TimeLineAnimationPreview(TimeLineAbilityClip clip, TimeLinePreview preview) : base(clip, preview)
            {
                AnimationCueClip aniCue = clip as AnimationCueClip;
                m_ClipPlayable = AnimationClipPlayable.Create(preview.m_PreviewPlayableGraph, aniCue.clip);
                preview.m_PreviewPlayableOutput.SetSourcePlayable(m_ClipPlayable);
                preview.m_PreviewPlayableGraph.Play();
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

            public override void OnTick(int tick)
            {
                base.OnTick(tick);
                Repaint();
            }

            public override void Repaint()
            {
                float time = CurrentTick * 0.02f;
                m_ClipPlayable.SetTime(time);
                m_Preview.m_PreviewPlayableGraph.Evaluate(0.02f);
                m_Preview.Repaint();
            }
        }
    }
}
