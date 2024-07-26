using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityChanAct;
using UnityEditor.IMGUI.Controls;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineAnimationPreview : TimeLineClipPreview
        {
            private AnimationActionCueAsset m_CueAsset;

            private AnimationClipPlayable m_ClipPlayable;
            public TimeLineAnimationPreview(TimeLineAbilityClip clip, TimeLinePreview preview, object obj) : base(clip, preview, obj)
            {
                m_CueAsset = obj as AnimationActionCueAsset;

                m_ClipPlayable = AnimationClipPlayable.Create(preview.m_PreviewPlayableGraph, m_CueAsset.animationArg.clip);
                preview.m_PreviewPlayableOutput.SetSourcePlayable(m_ClipPlayable);
                preview.m_PreviewPlayableGraph.Play();
            }

            public override void Dispose()
            {
                m_CueAsset = null;
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
