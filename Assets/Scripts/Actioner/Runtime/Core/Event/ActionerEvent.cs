using Codice.CM.Common;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Actioner.Runtime
{
    /// <summary>
    /// ��Ϊ�¼�
    /// </summary>
    public struct ActionerEvent
    {
        /// <summary>
        /// ���¼�
        /// </summary>
        public static readonly UnityAction s_EmptyAction = delegate { };

        /// <summary>
        /// �¼���
        /// </summary>
        public string eventName;

        /// <summary>
        /// ��������
        /// </summary>
        public float normalizedTime;

        /// <summary>
        /// �����¼�
        /// </summary>
        public UnityAction action;

        public ActionerEvent(float normalizedTime, UnityAction action, string eventName = null)
        {
            this.normalizedTime = normalizedTime;
            this.action = action;
            this.eventName = eventName;
        }

        /// <summary>
        /// �¼��Ƿ�Ϊ��
        /// </summary>
        /// <returns></returns>
        public readonly bool IsEmptyOrNull()
        { 
            return action == null || action == s_EmptyAction;
        }

    }


    /// <summary>
    /// ��Ϊ�¼�����
    /// </summary>
    public class EventSequence
    {
        private static readonly Comparison<ActionerEvent> s_SortEventFunction = SortEventList;

        /// <summary>
        /// ���󶨵���Ϊ
        /// </summary>
        private ActionerAction m_Action;

        /// <summary>
        /// ����Ϊ���е��¼�
        /// </summary>
        private List<ActionerEvent> m_Events;

        /// <summary>
        /// ��Ϊ��ʼ�¼�
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
        /// ��Ϊ�����¼�
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
        /// �¼���
        /// </summary>
        public int Count { get { return m_Events.Count; } }

        /// <summary>
        /// �Ƿ�ѭ��
        /// </summary>
        public bool IsLoop { get { return m_Action.IsLooping; } }

        /// <summary>
        /// ��һ��Ҫ�������¼��±�
        /// </summary>
        private int m_NextEventIndex;

        /// <summary>
        /// �����¼�����
        /// </summary>
        private bool m_EnterEventDirty;

        /// <summary>
        /// �˳��¼�����
        /// </summary>
        private bool m_ExitEventDirty;

        /// <summary>
        /// ��һ֡�Ľ���
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

                //����һ֡��ѭ����������ͬ �����Ѿ�ѭ������һ����
                if (preLoopCount != curLoopCount)
                {
                    m_ExitEventDirty = true;
                    m_EnterEventDirty = true;

                    //���ϴ�ѭ��������ûִ������¼�ȫ��ִ��
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
            //��Ϊ�п��ܶ���¼���ͬһ֡ ������ѭ��
            while (m_NextEventIndex < Count)
            {
                var aniEvet = m_Events[m_NextEventIndex];
                //��ǰ�¼���û������֡ ���� ����һ֡�ټ��
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
        /// �����¼�
        /// </summary>
        public void Invoke(ActionerEvent @event)
        {
            if (!@event.IsEmptyOrNull())
                @event.action.Invoke();

            if (!string.IsNullOrEmpty(@event.eventName))
                m_Action.Controller.BroadcastMessage(@event.eventName, SendMessageOptions.DontRequireReceiver);
        }

        /// <summary>
        /// ����
        /// </summary>
        public void Reset()
        {
            m_NextEventIndex = 0;
            m_PreviousTime = 0f;
        }

        /// <summary>
        /// ���
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
        /// ������ʱ������
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
        /// ��ʼ������Ƭ�δ��������¼�  Ҫ����Animator.fireEvents = false
        /// ����ͨ��<seealso cref="SetEvent(string, UnityAction)"/>ȥ�޸��¼�
        /// </summary>  
        /// <param name="clip">����Ƭ��</param>
        public void OnInitClipAllEvent(AnimationClip clip)
        {
            if (clip == null || clip.events == null || clip.events.Length == 0) return;

            float length = clip.length;
            var animationEvents = clip.events;

            //���û��ȥ�޸��¼� ��ͨ��functionName��ȥBroadcastMessage ����
            foreach (var @event in animationEvents)
                m_Events.Add(new ActionerEvent(@event.time / length, ActionerEvent.s_EmptyAction, @event.functionName));

            m_Events.Sort(s_SortEventFunction);
        }

        /// <summary>
        /// ͨ���¼���ȥȡ�±�
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
        /// �����¼�
        /// </summary>
        /// <param name="eventName">�¼���</param>
        /// <param name="action">�¼�</param>
        public void SetEvent(string eventName, UnityAction action)
        {
            int index = IndexOf(eventName);
            if (index < 0) return;

            SetEvent(index, action);
        }

        /// <summary>
        /// �����¼�
        /// </summary>
        /// <param name="index">�±�</param>
        /// <param name="action">�¼�</param>
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
        /// ����¼�
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
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="event"></param>
        public void RemoveEvent(ActionerEvent @event)
        {
            m_Events.Remove(@event);
        }

        /// <summary>
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="index"></param>
        public void RemoveEvent(int index)
        {
            if (index < 0 || index > m_Events.Count - 1) return;

            m_Events.RemoveAt(index);
        }

        /// <summary>
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="eventName"></param>
        public void RemoveEvent(string eventName)
        {
            int index = IndexOf(eventName);
            RemoveEvent(index);
        }

        /// <summary>
        /// �¼������Ƿ�Ϊ��
        /// </summary>
        /// <returns></returns>
        public bool IsEmpty()
        { 
            return Count == 0 && m_OnExitEvent.IsEmptyOrNull() && m_OnEnterEvent.IsEmptyOrNull();
        }
    }
}
