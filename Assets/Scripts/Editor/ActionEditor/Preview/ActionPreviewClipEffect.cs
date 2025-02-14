using LGameFramework.GameLogic;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public partial class ActionPreview : UnityEditor.EditorWindow
    {
        public abstract class ActionClipPreview : IDisposable
        {
            protected readonly ActionClip m_TimeLineClip;

            protected readonly ActionPreview m_Preview;
            public Vector2 RangeTick { get { return new Vector2(m_TimeLineClip.StartTick, m_TimeLineClip.EndTick); } }

            private int m_CurrentTick;
            public int CurrentTick { get { return m_CurrentTick; } set { m_CurrentTick = value; } }

            public ActionClipPreview(ActionClip clip, ActionPreview preview)
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

        private List<List<ActionClipPreview>> m_Previews;

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
                m_Previews = new List<List<ActionClipPreview>>();

            for (int i = 0; i < m_AbilityAsset.ActionTracks.Count; i++)
            {
                var track = m_AbilityAsset.ActionTracks[i];
                var list = new List<ActionClipPreview>();
                for (int j = 0; j < track.Count; j++)
                {
                    var clip = track[j];
                    list.Add(OnInitClip(clip));
                }

                m_Previews.Add(list);
            }
        }

        //将Clip分类
        private ActionClipPreview OnInitClip(ActionClip clip)
        {
            ActionClipPreview preview = null;
            switch (clip)
            {
                case ActionAnimationClip aniClip:
                    preview = new ActionAnimationPreview(aniClip, this);
                    break;
                case ActionParticleClip particleClip:
                    preview = new ActionParticlePreview(particleClip, this);
                    break;
                case ActionBoxClip boxClip:
                    preview = new ActionBoxPreview(boxClip, this);
                    break;
            }

            return preview;
        }
    }
}
