using System;
using UnityChanAct;
using UnityEngine;

namespace GAS.Runtime
{
    public class TimeLineTrackSpec : IDisposable
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
        /// 片段数量
        /// </summary>
        public int ClipCount { get { return m_ClipsArray.Length; } }

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
            m_TrackIsEnd = false;
        }

        public virtual void OnTick(int tick, float deltaTime)
        {
            if (m_TrackIsEnd) return;
            int count = ClipCount;
            for (int i = 0; i < count; i++)
            {
                var clip = m_ClipsArray[i];
                //未播放到该片段
                if (tick < clip.StartTick) 
                    break;

                //进入新的片段 
                if (tick == clip.StartTick)
                    OnEnterClip(i, deltaTime);

                OnUpdateClip(i, deltaTime);

                //退出当前片段
                if (tick == clip.EndTick)
                    OnExitClip(i, deltaTime);
            }
        }

        /// <summary>
        /// 进入轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnEnterClip(int index, float deltaTime)
        {

        }

        /// <summary>
        /// 离开轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnExitClip(int index, float deltaTime)
        {
            //离开最后一个片段 轨道播放结束
            if (index >= ClipCount - 1)
                m_TrackIsEnd = true;

            Dispose();
        }

        /// <summary>
        /// 轮询轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public virtual void OnUpdateClip(int index, float deltaTime)
        {
            
        }

        public virtual void Dispose()
        {
            
        }
    }
}
