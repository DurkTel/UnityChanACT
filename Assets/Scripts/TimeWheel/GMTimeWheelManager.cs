using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class GMTimeWheelManager : MonoBehaviour
    {

        private static int s_TimerId;

        private static GMTimeWheelManager s_Instance;
        
        public static GMTimeWheelManager Instance
        {
            get 
            {
                if (s_Instance == null)
                {
                    GameObject go = new GameObject("GMTimeWheelManager");
                    s_Instance = go.AddComponent<GMTimeWheelManager>();
                }
                return s_Instance; 
            }
        }

        /// <summary>
        /// 一个时间轮有多少个格子
        /// </summary>
        private const int k_RoundSlotCount = 100;

        /// <summary>
        /// 最小格子的时间间隔（ms）
        /// </summary>
        private const int k_MinSlotSpan = 10;

        /// <summary>
        /// 转换的比例
        /// </summary>
        public const float k_SlotSpanRate = 1000f;

        private Dictionary<int, TimeTask> m_AllTasks;

        private TimeWheel m_MinTimeWheel;

        private int m_CurrentWheelRound;

        private int m_TotalTime;
        public float TotalTime { get { return m_TotalTime; } }

        private DateTime m_LastTime;


        public void OnInitTimeWheel()
        {
            m_AllTasks = new Dictionary<int, TimeTask>();

            m_MinTimeWheel = new TimeWheel(k_RoundSlotCount, k_MinSlotSpan, 0);
            m_CurrentWheelRound = 1;
            m_LastTime = DateTime.Now;

            TimeSlot.IninPool();
        }

        public void Update()
        {

            int count = (int)((DateTime.Now - m_LastTime).TotalMilliseconds / k_MinSlotSpan);
            while (count > 0)
            {
                count--;
                m_TotalTime += k_MinSlotSpan;
                //转动第一层时间轮
                OnTickWheel(m_MinTimeWheel);
                m_LastTime = DateTime.Now;
            }

            //0   0   0
            //15  0   1
            //20  15  0
            //30  15  1
            //50  30  2

            //0   0
            //9   0   0
            //15  0   1
            //23  15  0
            //47  15  3
            //55  47  0

            while ((DateTime.Now - m_LastTime).TotalMilliseconds >= k_MinSlotSpan)
            {
                m_LastTime.Add(TimeSpan.FromMilliseconds(k_MinSlotSpan));
                OnTickWheel(m_MinTimeWheel);
            }

            //DateTime.Now  m_LastTime  count
            //0   0
            //15  0   1
            //20  10  1
            //30  20  1
            //50  30  2

            //0   0
            //9   0   0
            //15  0   1
            //23  10  1
            //47  20  2
            //55  40  1

            //if ((DateTime.Now - m_LastTime).TotalMilliseconds >= k_MinSlotSpan)
            //{
            //    m_TotalTime += k_MinSlotSpan;
            //    //转动第一层时间轮
            //    OnTickWheel(m_MinTimeWheel);
            //    m_LastTime = DateTime.Now;
            //}


        }

        private void OnTickWheel(TimeWheel wheel)
        {

            if (wheel.Tick())
            {
                if (wheel.NextWheel == null)
                    RebuildTimeWheel(m_CurrentWheelRound + 1);

                OnTickWheel(wheel.NextWheel);
            }

            var slot = wheel.CurrentSlot;
            UnityEngine.Profiling.Profiler.BeginSample("计时器执行");
            var taskNode = slot.FirstTask;
            while (taskNode != null)
            {
                var task = taskNode.Value;
                if (task.NextMilliSecond <= m_TotalTime) //已经可以执行
                {
                    task.Invoke();
                    //还有剩余执行次数||负数永久
                    if (task.RemainCount != 0)
                    {
                        task.StartTime = m_TotalTime; //重置开始时间
                        AddTimer(task);
                    }
                }
                else
                {
                    //重新放回上一轮
                    AddTimer(task);
                }

                slot.RemoveFirst();
                taskNode = slot.FirstTask;
            }
            UnityEngine.Profiling.Profiler.EndSample();
        }

        private void RebuildTimeWheel(int round)
        {
            int count = round + 1;
            var cur = m_CurrentWheelRound;
            if (count > cur)
            {
                TimeWheel outWheel = m_MinTimeWheel;
                while (outWheel.NextWheel != null)
                {
                    outWheel = outWheel.NextWheel;
                }

                for (int i = cur; i < count; i++)
                {
                    var newWheel = new TimeWheel(k_RoundSlotCount, k_MinSlotSpan * (int)Mathf.Pow(k_RoundSlotCount, i), i);
                    outWheel.NextWheel = newWheel;
                    outWheel = newWheel;
                }

                m_CurrentWheelRound = count;
            }
        }

        private void AddTimer(TimeTask task)
        {
            //从内圈开始计算应该放在哪个槽位
            int round = 0;
            TimeWheel wheel = m_MinTimeWheel;

            while (!wheel.IsContain(task.NextMilliSecond))
            {
                round++;
                RebuildTimeWheel(round);
                wheel = wheel.NextWheel;
            }
            int slotIndex = wheel.CalculateSlot(task.NextMilliSecond);

            wheel.AddTask(slotIndex, task);

            //Debug.Log($"插入计时器 round{round}  slot{slotIndex}");
        }

        public int AddTimer(UnityAction<TimeTaskArg> action, float interval, int count, float delay = 0f, TimeTaskArg arg = null)
        {
            TimeTask task = new TimeTask();
            task.SetData(++s_TimerId, action, interval, count, delay, arg);
            task.StartTime = m_TotalTime;
            AddTimer(task);

            return s_TimerId;
        }

        public bool DelTimer(int timerId)
        {

            return true;
        }

        public TimeTask GetTimer(int timerId)
        {
            return m_AllTasks.GetValueOrDefault(timerId);
        }

    }
}
