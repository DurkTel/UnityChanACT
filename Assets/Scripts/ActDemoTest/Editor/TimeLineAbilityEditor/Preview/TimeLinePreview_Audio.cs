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

            private AudioCueAsset m_CueAsset;

            public TimeLineAudioPreview(TimeLineAbilityClip clip, GAS.Editor.TimeLinePreview preview, object obj) : base(clip, preview, obj)
            {
                m_CueAsset = obj as AudioCueAsset;
                m_Preview.m_AudioSource.clip = m_CueAsset.audioClip;
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
