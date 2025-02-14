using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class TimeWheel
    {
        private TimeSlot[] m_TimeSolts;

        /// <summary>
        /// һ�����ӵ�ʱ����
        /// </summary>
        private int m_WheelSpan;

        /// <summary>
        /// �ڼ���
        /// </summary>
        private int m_Round;

        /// <summary>
        /// ��ǰ�ֵ�ʱ��
        /// </summary>
        private int m_CurrentTick;

        /// <summary>
        /// ��ǰ�ֵ�����
        /// </summary>
        private int m_Capacity;

        /// <summary>
        /// ��ǰ��0��ľ���ʱ��
        /// </summary>
        private int m_StartTime;

        private TimeWheel m_NextWheel;
        /// <summary>
        /// ��һ��ʱ����
        /// ���д�ڹ�����������ȡ�����е��
        /// </summary>
        public TimeWheel NextWheel
        {
            get { return m_NextWheel; }
            set { m_NextWheel = value; }
        }

        public TimeSlot CurrentSlot
        {
            get { return GetSolt(m_CurrentTick); }
        }

        public TimeWheel(int capacity, int span, int round, TimeWheel wheel = null)
        {
            m_Capacity = capacity;
            m_TimeSolts = new TimeSlot[m_Capacity];
            for (int i = 0; i < m_Capacity; i++)
            {
                m_TimeSolts[i] = new TimeSlot();
            }
            m_Round = round;
            m_WheelSpan = span;
            m_StartTime = 0;
            m_NextWheel = wheel;
        }

        private bool IsVaild(int index)
        {
            return index >= 0 && index < m_TimeSolts.Length;
        }

        public void AddTask(int solt, TimeTask taskId)
        {
            m_TimeSolts[solt].AddTask(taskId);
        }

        public TimeSlot GetSolt(int solt)
        {
            if (!IsVaild(solt))
            {
                return null;
            }

            return m_TimeSolts[solt];
        }

        public bool IsContain(int milliSecond)
        {
            return milliSecond < m_StartTime + m_Capacity * m_WheelSpan;
        }

        public int CalculateSlot(int milliSecond)
        {
            var deltaTime = milliSecond - m_StartTime;
            return deltaTime / m_WheelSpan;
        }

        public bool Tick()
        {
            //Debug.Log($"ʱ����ת�� ��{m_Round}��  �±�{m_CurrentTick + 1}");
            if (++m_CurrentTick >= m_Capacity) //�Ѿ�ת��һȦ
            {
                m_CurrentTick = 0;
                //��¼�Ѿ�ת����Ȧ��ʱ��
                m_StartTime += m_Capacity * m_WheelSpan;
                return true;
            }

            return false;
        }
    }
}
