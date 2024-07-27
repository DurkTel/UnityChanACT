using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityChanAct;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public abstract class TimeLineClipPreview : IDisposable
        {
            protected readonly TimeLineAbilityClip m_TimeLineClip;

            protected readonly TimeLinePreview m_Preview;
            public Vector2 RangeTick { get { return new Vector2(m_TimeLineClip.StartTick, m_TimeLineClip.EndTick); } }

            private int m_CurrentTick;
            public int CurrentTick { get { return m_CurrentTick; } set { m_CurrentTick = value; } }

            public TimeLineClipPreview(TimeLineAbilityClip clip, TimeLinePreview preview)
            {
                m_TimeLineClip = clip;
                m_Preview = preview;
            }

            public virtual void OnTick(int tick)
            {
                Repaint();
            }

            public abstract void Repaint();

            public abstract void OnEnter();

            public abstract void OnExit();

            public abstract void Dispose();

        }

        private List<List<TimeLineClipPreview>> m_Previews;

        /// <summary>
        /// 初始化所有轨道
        /// </summary>
        private void OnInitAllTrack()
        {
            if (m_Previews != null)
            {
                foreach (var item in m_Previews)
                {
                    if (item == null)
                        continue;

                    foreach (var preview in item)
                    {
                        if (preview == null)
                            continue;
                        preview.Dispose();
                    }

                    item.Clear();
                }
                m_Previews.Clear();
            }
            else
                m_Previews = new List<List<TimeLineClipPreview>>();

            for (int i = 0; i < m_AbilityAsset.AbilityTracks.Count; i++)
            {
                var track = m_AbilityAsset.AbilityTracks[i];
                var list = new List<TimeLineClipPreview>();
                for (int j = 0; j < track.Clips.Count; j++)
                {
                    var clip = track.Clips[j];
                    list.Add(OnInitClip(clip));
                }

                m_Previews.Add(list);
            }
        }

        //将Clip分类
        private TimeLineClipPreview OnInitClip(TimeLineAbilityClip clip)
        {
            TimeLineClipPreview preview = null;
            switch (clip)
            {
                case CueAbilityClip clipCue:
                    preview = OnInitCue(clipCue);
                    break;
                case EffectAbilityClip clipEffect:
                    preview = OnInitEffect(clipEffect);
                    break;
            }

            return preview;
        }

        /// <summary>
        /// 游戏效果演出预览
        /// </summary>
        /// <param name="clip"></param>
        private TimeLineClipPreview OnInitCue(CueAbilityClip clip)
        {
            TimeLineClipPreview preview = null;

            //根据clip再一次细分
            switch (clip)
            {
                case AnimationCueClip animation:
                    preview = new TimeLineAnimationPreview(animation, this);
                    break;
                case ParticleEffectCueClip particle:
                    preview = new TimeLineParticleEffectPreview(particle, this);
                    break;
                case AudioCueClip audio:
                    preview = new TimeLineAudioPreview(audio, this);
                    break;
            }

            return preview;
        }

        private TimeLineClipPreview OnInitEffect(EffectAbilityClip clip)
        {
            TimeLineClipPreview preview = null;

            //根据clip再一次细分
            switch (clip)
            {
                case HitBoxEffectClip hitBox:
                    preview = new TimeLineHitBoxPreview(hitBox, this);
                    break;
            }

            return preview;
        }
    }
}
