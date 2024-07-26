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
        /// ������Ž���
        /// </summary>
        private bool m_TrackIsEnd;
        public bool TrackIsEnd { get { return m_TrackIsEnd; } }
        /// <summary>
        /// ��ǰ���ŵ����±�
        /// </summary>
        private int m_NewIndex;
        public int NewIndex { get { return m_NewIndex; } }
        /// <summary>
        /// �ϴβ��ŵ����±�
        /// </summary>
        private int m_LastIndex;
        public int LastIndex { get { return m_LastIndex; } }
        /// <summary>
        /// ��ǰ��Ծ���±�
        /// </summary>
        private int m_CurrentIndex;
        public int CurrentIndex { get { return m_CurrentIndex; } }
        /// <summary>
        /// Ƭ������
        /// </summary>
        public int ClipCount { get { return m_ClipsArray.Length; } }
        /// <summary>
        /// ��Ƭ����
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
                //δ���ŵ���Ƭ��
                if (tick < clip.StartTick) break;

                //�����µ�Ƭ�� 
                if (m_NewIndex <= i && m_LastIndex != i)
                {
                    OnEnterClip(i);
                    m_LastIndex = i;
                }

                //�˳���ǰƬ��
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
        /// ������Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnEnterClip(int index)
        {

        }

        /// <summary>
        /// �뿪���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnExitClip(int index)
        {
            //�뿪���һ��Ƭ�� ������Ž���
            if (index >= ClipCount - 1)
                m_TrackIsEnd = true;

        }

        /// <summary>
        /// ��ѯ���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public virtual void OnUpdateClip(int index)
        {

        }
    }
}
