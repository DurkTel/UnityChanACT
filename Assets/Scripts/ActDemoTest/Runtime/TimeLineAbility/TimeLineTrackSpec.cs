using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class TimeLineTrackSpec
    {
        protected readonly TimeLineAbilityClip[] m_ClipsArray;

        protected readonly TimeLineTrack m_TrackAsset;

        protected readonly AbilitySystemComponent m_ASC;

        /// <summary>
        /// 轨道播放结束
        /// </summary>
        private bool m_TrackIsEnd;
        public bool TrackIsEnd { get { return m_TrackIsEnd; } }
        /// <summary>
        /// 当前播放到的下标
        /// </summary>
        private int m_NewIndex;
        public int NewIndex { get { return m_NewIndex; } }
        /// <summary>
        /// 上次播放到的下标
        /// </summary>
        private int m_LastIndex;
        public int LastIndex { get { return m_LastIndex; } }
        /// <summary>
        /// 当前活跃的下标
        /// </summary>
        private int m_CurrentIndex;
        public int CurrentIndex { get { return m_CurrentIndex; } }
        /// <summary>
        /// 片段数量
        /// </summary>
        public int ClipCount { get { return m_ClipsArray.Length; } }
        /// <summary>
        /// 在片段中
        /// </summary>
        public bool InClip { get { return m_CurrentIndex != -1; } }

        public TimeLineTrackSpec(AbilitySystemComponent asc, TimeLineTrack trakAsset)
        {
            m_ASC = asc;
            m_TrackAsset = trakAsset;
            m_ClipsArray = new TimeLineAbilityClip[m_TrackAsset.Clips.Count];
            for (int i = 0; i < m_TrackAsset.Clips.Count; i++)
                m_ClipsArray[i] = m_TrackAsset.Clips[i];
        }

        public void Reset()
        {
            m_NewIndex = m_CurrentIndex = 0;
            m_LastIndex = -1;
            m_TrackIsEnd = false;
        }

        public virtual void OnTick(int tick)
        {
            if (m_TrackIsEnd) return;
            int count = ClipCount;
            for (int i = m_NewIndex; i < count; i++)
            {
                var clip = m_ClipsArray[i];
                //未播放到该片段
                if (tick < clip.StartTick) break;

                //进入新的片段 
                if (m_NewIndex <= i && m_LastIndex != i)
                {
                    OnEnterClip(i);
                    m_LastIndex = i;
                }

                //退出当前片段
                if (tick > clip.EndTick && m_NewIndex <= i)
                {
                    OnExitClip(i);
                    m_CurrentIndex = -1;
                    m_NewIndex++;
                    break;
                }
                m_CurrentIndex = i;
                OnUpdateClip(i);
            }
        }

        /// <summary>
        /// 进入轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnEnterClip(int index)
        {

        }

        /// <summary>
        /// 离开轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnExitClip(int index)
        {
            //离开最后一个片段 轨道播放结束
            if (index >= ClipCount - 1)
                m_TrackIsEnd = true;

        }

        /// <summary>
        /// 轮询轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnUpdateClip(int index)
        {

        }
    }
}
