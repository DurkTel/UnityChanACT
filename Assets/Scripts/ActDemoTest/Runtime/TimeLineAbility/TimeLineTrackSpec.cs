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
        /// ������Ž���
        /// </summary>
        private bool m_TrackIsEnd;
        public bool TrackIsEnd { get { return m_TrackIsEnd; } }
        /// <summary>
        /// Ƭ������
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
                //δ���ŵ���Ƭ��
                if (tick < clip.StartTick) 
                    break;

                //�����µ�Ƭ�� 
                if (tick == clip.StartTick)
                    OnEnterClip(i, deltaTime);

                OnUpdateClip(i, deltaTime);

                //�˳���ǰƬ��
                if (tick == clip.EndTick)
                    OnExitClip(i, deltaTime);
            }
        }

        /// <summary>
        /// ������Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnEnterClip(int index, float deltaTime)
        {

        }

        /// <summary>
        /// �뿪���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnExitClip(int index, float deltaTime)
        {
            //�뿪���һ��Ƭ�� ������Ž���
            if (index >= ClipCount - 1)
                m_TrackIsEnd = true;

            Dispose();
        }

        /// <summary>
        /// ��ѯ���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnUpdateClip(int index, float deltaTime)
        {
            
        }

        public virtual void Dispose()
        {
            
        }
    }
}
