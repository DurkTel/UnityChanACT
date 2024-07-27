using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityChanAct;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineAudioPreview : TimeLineClipPreview
        {
            public TimeLineAudioPreview(TimeLineAbilityClip clip, TimeLinePreview preview) : base(clip, preview)
            {
                var audioClip = clip as AudioCueClip;
                m_Preview.m_AudioSource.clip = audioClip.audioClip;
            }

            public override void Dispose()
            {
                
            }

            public override void OnEnter()
            {
                m_Preview.m_AudioSource.Stop();
                m_Preview.m_AudioSource.time = 0;
                m_Preview.m_AudioSource.Play();
            }

            public override void OnExit()
            {
                m_Preview.m_AudioSource.Stop();
            }

            public override void Repaint()
            {
                m_Preview.Repaint();
            }
        }

    }
}
