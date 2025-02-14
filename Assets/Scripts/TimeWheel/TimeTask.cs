using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class TimeTask
    {

        private int m_Id;
        public int Id 
        { 
            get { return m_Id; }
        }

        private float m_Delay;

        private float m_Interval;

        private int m_Count;

        private int m_RemainCount;
        public int RemainCount
        {
            get { return m_RemainCount; }
        }

        private int m_StartTime;
        public int StartTime
        {
            get { return m_StartTime; }
            set { m_StartTime = value; }
        }

        private TimeTaskArg m_Arg;

        private UnityAction<TimeTaskArg> m_Action;

        public float NextTime
        {
            get { return m_StartTime + m_Delay + m_Interval; }
        }

        public int NextMilliSecond
        {
            get { return m_StartTime + (int)(m_Delay * GMTimeWheelManager.k_SlotSpanRate) + (int)(m_Interval * GMTimeWheelManager.k_SlotSpanRate); }
        }


        public void SetData(int id, UnityAction<TimeTaskArg> action, float interval, int count, float delay, TimeTaskArg arg)
        { 
            m_Id = id;
            m_Action = action;
            m_Interval = interval;
            m_Count = m_RemainCount = count;
            m_Delay = delay;
            m_Arg = arg;
        }

        public void Invoke()
        {
            m_Action?.Invoke(m_Arg);
            m_Delay = 0; //只才开始时的第一次进行延迟
            m_RemainCount--;
        }
    }

    public abstract class TimeTaskArg
    {
        public abstract void Reset();
    }
}
