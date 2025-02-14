using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class TimeWheel
    {
        private TimeSlot[] m_TimeSolts;

        /// <summary>
        /// 一个格子的时间跨度
        /// </summary>
        private int m_WheelSpan;

        /// <summary>
        /// 第几轮
        /// </summary>
        private int m_Round;

        /// <summary>
        /// 当前轮的时针
        /// </summary>
        private int m_CurrentTick;

        /// <summary>
        /// 当前轮的容量
        /// </summary>
        private int m_Capacity;

        /// <summary>
        /// 当前轮0点的绝对时间
        /// </summary>
        private int m_StartTime;

        private TimeWheel m_NextWheel;
        /// <summary>
        /// 下一个时间轮
        /// 如果写在管理器索引获取消耗有点大
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
            //Debug.Log($"时间轮转动 第{m_Round}层  下标{m_CurrentTick + 1}");
            if (++m_CurrentTick >= m_Capacity) //已经转完一圈
            {
                m_CurrentTick = 0;
                //记录已经转过的圈数时间
                m_StartTime += m_Capacity * m_WheelSpan;
                return true;
            }

            return false;
        }
    }
}
