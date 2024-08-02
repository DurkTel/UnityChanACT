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
            private AudioSource m_AudioSource;

            private GameObject m_AudioObj;

            public TimeLineAudioPreview(TimeLineAbilityClip clip, TimeLinePreview preview) : base(clip, preview)
            {
                var audioClip = clip as AudioCueClip;

                m_AudioObj = new GameObject("Audio_" + GetHashCode());
                m_Preview.m_PreviewUtility.AddSingleGO(m_AudioObj);
                m_AudioObj.transform.SetParent(m_Preview.m_RootScene);
                m_AudioSource = m_AudioObj.AddComponent<AudioSource>();
                m_AudioSource.clip = audioClip.audioClip;
            }

            public override void Dispose()
            {
                if (m_AudioSource != null)
                    m_AudioSource = null;

                if (m_AudioObj != null)
                {
                    DestroyImmediate(m_AudioObj);
                    m_AudioObj = null;
                }
            }

            public override void OnEnter()
            {
                m_AudioSource.Stop();
                m_AudioSource.time = 0;
                m_AudioSource.Play();
            }

            public override void OnExit()
            {
                m_AudioSource.Stop();
            }

            public override void Repaint()
            {
                m_Preview.Repaint();
            }
        }

    }
}
