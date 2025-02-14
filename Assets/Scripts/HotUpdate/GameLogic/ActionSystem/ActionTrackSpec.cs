using GAS.Runtime;
using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class ActionTrackSpec : IDisposable
    {
        protected List<ActionClipSpec> m_ClipsList;

        protected ActionTrack m_TrackAsset;

        protected bool m_TrackIsEnd;
        public bool TrackIsEnd { get { return m_TrackIsEnd; } set { m_TrackIsEnd = value; } }

        private int m_EndTick;

        private int m_ActionUID;
        public int ActionUID { get { return m_ActionUID; } }

        /// <summary>
        /// Ƭ������
        /// </summary>
        public int ClipCount { get { return m_ClipsList == null ? 0 : m_ClipsList.Count; } }

        public void OnInit(ActionTrack trakAsset, IActionSystemComponent controller, int uid)
        {
            m_ActionUID = uid;
            m_TrackAsset = trakAsset;
            m_ClipsList = ListPool<ActionClipSpec>.Get();
            for (int i = 0; i < m_TrackAsset.Count; i++)
            {
                var clipSpec = InstantiateMethods.Invoke(m_TrackAsset.GetClipSpec());
                if (clipSpec == null)
                    continue;
                clipSpec.OnInit(m_TrackAsset[i], controller, m_ActionUID);
                m_ClipsList.Add(clipSpec);
            }

            m_EndTick = GetEndTick();
        }

        public void Dispose()
        {
            m_TrackIsEnd = false;
            m_TrackAsset = null;
            m_EndTick = 0;

            if (m_ClipsList != null)
            {
                foreach (var clip in m_ClipsList)
                {
                    clip.Dispose();
                    Pool.Release(clip);
                }

                ListPool<ActionClipSpec>.Release(m_ClipsList);
                m_ClipsList = null;
            }
        }

        public virtual void OnTick(int tick, float deltaTime)
        {
            if (TrackIsEnd) return;
            int count = ClipCount;
            for (int i = 0; i < count; i++)
            {
                var clip = m_ClipsList[i];
                //δ���ŵ���Ƭ��
                if (tick < clip.RawData.StartTick)
                    continue;

                //�����µ�Ƭ�� 
                if (tick == clip.RawData.StartTick)
                    OnEnterClip(i, deltaTime);

                OnUpdateClip(i, deltaTime);

                //�˳���ǰƬ��
                if (tick == clip.RawData.EndTick)
                    OnExitClip(i, deltaTime);
            }

            if (tick >= m_EndTick)
                m_TrackIsEnd = true;
        }

        /// <summary>
        /// ������Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnEnterClip(int index, float deltaTime)
        {
            var clip = m_ClipsList[index];
            clip.OnEnter(deltaTime);
        }

        /// <summary>
        /// �뿪���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnExitClip(int index, float deltaTime)
        {
            var clip = m_ClipsList[index];
            clip.OnExit(deltaTime);
        }

        /// <summary>
        /// ��ѯ���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnUpdateClip(int index, float deltaTime)
        {
            var clip = m_ClipsList[index];
            clip.OnTick(deltaTime);
        }

        private int GetEndTick()
        {
            int endTick = 0;
            foreach (var clip in m_ClipsList)
            {
                if (clip.RawData.EndTick > endTick)
                    endTick = clip.RawData.EndTick;
            }

            return endTick;
        }
    }
}
