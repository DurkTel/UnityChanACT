using Codice.CM.Common;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Actioner.Runtime
{
    /// <summary>
    /// 行为事件
    /// </summary>
    public struct ActionerEvent
    {
        /// <summary>
        /// 空事件
        /// </summary>
        public static readonly UnityAction s_EmptyAction = delegate { };

        /// <summary>
        /// 事件名
        /// </summary>
        public string eventName;

        /// <summary>
        /// 触发进度
        /// </summary>
        public float normalizedTime;

        /// <summary>
        /// 触发事件
        /// </summary>
        public UnityAction action;

        public ActionerEvent(float normalizedTime, UnityAction action, string eventName = null)
        {
            this.normalizedTime = normalizedTime;
            this.action = action;
            this.eventName = eventName;
        }

        /// <summary>
        /// 事件是否为空
        /// </summary>
        /// <returns></returns>
        public readonly bool IsEmptyOrNull()
        { 
            return action == null || action == s_EmptyAction;
        }

    }


    /// <summary>
    /// 行为事件序列
    /// </summary>
    public class EventSequence
    {
        private static readonly Comparison<ActionerEvent> s_SortEventFunction = SortEventList;

        /// <summary>
        /// 所绑定的行为
        /// </summary>
        private ActionerAction m_Action;

        /// <summary>
        /// 该行为所有的事件
        /// </summary>
        private List<ActionerEvent> m_Events;

        /// <summary>
        /// 行为开始事件
        /// </summary>
        private ActionerEvent m_OnEnterEvent = new ActionerEvent(float.NaN, null);
        public UnityAction EnterEvent
        {
            get { return m_OnEnterEvent.action; }
            set
            {
                if (m_OnEnterEvent.action == value) return;

                m_OnEnterEvent.action = value;
                if (m_OnEnterEvent.action != null)
                    m_Action.RequireUpdate(UpdateStep.Progress);
                else
                {
                    if (IsEmpty())
                        m_Action.CancelUpdate(UpdateStep.Progress);
                }
            }
        }

        /// <summary>
        /// 行为结束事件
        /// </summary>
        private ActionerEvent m_OnExitEvent = new ActionerEvent(float.NaN, null);
        public UnityAction ExitEvent
        {
            get { return m_OnExitEvent.action; }
            set 
            {
                if (m_OnExitEvent.action == value) return;

                m_OnExitEvent.action = value;
                if (m_OnExitEvent.action != null)
                    m_Action.RequireUpdate(UpdateStep.Progress);
                else
                {
                    if (IsEmpty())
                        m_Action.CancelUpdate(UpdateStep.Progress);
                }
            }
        }

        /// <summary>
        /// 事件数
        /// </summary>
        public int Count { get { return m_Events.Count; } }

        /// <summary>
        /// 是否循环
        /// </summary>
        public bool IsLoop { get { return m_Action.IsLooping; } }

        /// <summary>
        /// 下一次要触发的事件下标
        /// </summary>
        private int m_NextEventIndex;

        /// <summary>
        /// 进入事件设脏
        /// </summary>
        private bool m_EnterEventDirty;

        /// <summary>
        /// 退出事件设脏
        /// </summary>
        private bool m_ExitEventDirty;

        /// <summary>
        /// 上一帧的进度
        /// </summary>
        private float m_PreviousTime;

        public EventSequence(ActionerAction aciton)
        {
            m_Action = aciton;
            m_Events = new List<ActionerEvent>(0);

        }

        public ActionerEvent this[int index]
        {
            get { return m_Events[index]; }
        }

        public ActionerEvent this[string eventName]
        {
            get { return m_Events[IndexOf(eventName)]; }
        }

        public void UpdateEvent(float currentTime)
        {
            if (IsEmpty())
                return;

            if (m_PreviousTime == currentTime)
                return;

            int isReverse = m_Action.Reverse;

            if (IsLoop)
            {
                int preLoopCount = (int)m_PreviousTime;
                int curLoopCount = (int)currentTime;

                //与上一帧的循环次数不相同 代表已经循环到下一轮了
                if (preLoopCount != curLoopCount)
                {
                    m_ExitEventDirty = true;
                    m_EnterEventDirty = true;

                    //把上次循环动画里没执行完的事件全部执行
                    while (m_NextEventIndex < Count)
                    {
                        Invoke(m_Events[m_NextEventIndex]);
                        m_NextEventIndex++;
                    }
                    m_NextEventIndex = 0;
                }
            }
            else
            {
                if (!m_EnterEventDirty)
                    m_EnterEventDirty = true;

                m_ExitEventDirty = (currentTime * isReverse) >= (isReverse * 0.5f + 0.5f);
            }

            float decimalPart = currentTime * isReverse - (int)currentTime * isReverse;
            //因为有可能多个事件在同一帧 所以用循环
            while (m_NextEventIndex < Count)
            {
                var aniEvet = m_Events[m_NextEventIndex];
                //当前事件还没到触发帧 跳出 等下一帧再检查
                if (decimalPart < aniEvet.normalizedTime)
                    break;

                Invoke(aniEvet);
                m_NextEventIndex++;
            }

            if (m_OnExitEvent.action != null && m_ExitEventDirty)
            {
                Invoke(m_OnExitEvent);
                m_ExitEventDirty = false;
            }

            if (m_OnEnterEvent.action != null && m_EnterEventDirty)
            {
                Invoke(m_OnEnterEvent);
                m_EnterEventDirty = false;
            }

            m_PreviousTime = currentTime;

        }

        /// <summary>
        /// 调用事件
        /// </summary>
        public void Invoke(ActionerEvent @event)
        {
            if (!@event.IsEmptyOrNull())
                @event.action.Invoke();

            if (!string.IsNullOrEmpty(@event.eventName))
                m_Action.Controller.BroadcastMessage(@event.eventName, SendMessageOptions.DontRequireReceiver);
        }

        /// <summary>
        /// 重置
        /// </summary>
        public void Reset()
        {
            m_NextEventIndex = 0;
            m_PreviousTime = 0f;
        }

        /// <summary>
        /// 清除
        /// </summary>
        public void Clear()
        {
            Reset();
            m_EnterEventDirty = true;
            m_ExitEventDirty = false;
            EnterEvent = null;
            ExitEvent = null;
            m_Events.Clear();
        }

        /// <summary>
        /// 按进度时间排序
        /// </summary>
        /// <param name="x"></param>
        /// <param name="y"></param>
        /// <returns></returns>
        private static int SortEventList(ActionerEvent x, ActionerEvent y)
        {
            if (x.normalizedTime == y.normalizedTime)
                return 0;

            return x.normalizedTime > y.normalizedTime ? 1 : -1;
        }

        /// <summary>
        /// 初始化动画片段带的所有事件  要设置Animator.fireEvents = false
        /// 可以通过<seealso cref="SetEvent(string, UnityAction)"/>去修改事件
        /// </summary>  
        /// <param name="clip">动画片段</param>
        public void OnInitClipAllEvent(AnimationClip clip)
        {
            if (clip == null || clip.events == null || clip.events.Length == 0) return;

            float length = clip.length;
            var animationEvents = clip.events;

            //如果没有去修改事件 会通过functionName名去BroadcastMessage 慎用
            foreach (var @event in animationEvents)
                m_Events.Add(new ActionerEvent(@event.time / length, ActionerEvent.s_EmptyAction, @event.functionName));

            m_Events.Sort(s_SortEventFunction);
        }

        /// <summary>
        /// 通过事件名去取下标
        /// </summary>
        /// <param name="eventName"></param>
        /// <returns></returns>
        public int IndexOf(string eventName)
        {
            for (int i = 0; i < m_Events.Count; i++)
            {
                if (m_Events[i].eventName == eventName) 
                    return i;
            }

            return -1;
        }

        /// <summary>
        /// 设置事件
        /// </summary>
        /// <param name="eventName">事件名</param>
        /// <param name="action">事件</param>
        public void SetEvent(string eventName, UnityAction action)
        {
            int index = IndexOf(eventName);
            if (index < 0) return;

            SetEvent(index, action);
        }

        /// <summary>
        /// 设置事件
        /// </summary>
        /// <param name="index">下标</param>
        /// <param name="action">事件</param>
        public void SetEvent(int index, UnityAction action)
        {
            m_Action.RequireUpdate(UpdateStep.Progress);

            if (index < 0 || index > m_Events.Count - 1) return;
            var animancerEvent = m_Events[index];
            animancerEvent.action = action;
            m_Events[index] = animancerEvent;
            m_Events.Sort(SortEventList);
        }

        /// <summary>
        /// 添加事件
        /// </summary>
        /// <param name="event"></param>
        public void AddEvent(ActionerEvent @event)
        {
            m_Action.RequireUpdate(UpdateStep.Progress);
            if (m_Events.Contains(@event)) return;
            m_Events.Add(@event);
            m_Events.Sort(s_SortEventFunction);
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="event"></param>
        public void RemoveEvent(ActionerEvent @event)
        {
            m_Events.Remove(@event);
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="index"></param>
        public void RemoveEvent(int index)
        {
            if (index < 0 || index > m_Events.Count - 1) return;

            m_Events.RemoveAt(index);
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="eventName"></param>
        public void RemoveEvent(string eventName)
        {
            int index = IndexOf(eventName);
            RemoveEvent(index);
        }

        /// <summary>
        /// 事件队列是否为空
        /// </summary>
        /// <returns></returns>
        public bool IsEmpty()
        { 
            return Count == 0 && m_OnExitEvent.IsEmptyOrNull() && m_OnEnterEvent.IsEmptyOrNull();
        }
    }
}
