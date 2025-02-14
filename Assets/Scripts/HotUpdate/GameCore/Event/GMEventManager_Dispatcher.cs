using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public sealed class GMEventDispatcher
    {
        /// <summary>
        /// 所有注册的委托
        /// </summary>
        private readonly Dictionary<int, LinkedList<EventHandler<GameEventArg>>> m_EventHandlers;

        /// <summary>
        /// 临时变量
        /// </summary>
        private LinkedList<EventHandler<GameEventArg>> m_TempLinked;

        /// <summary>
        /// 当前执行到的委托
        /// </summary>
        private LinkedListNode<EventHandler<GameEventArg>> m_CurrentNode;

        /// <summary>
        /// 需要派发的委托队列
        /// </summary>
        private readonly Queue<GameEvent> m_EventQueue;

        /// <summary>
        /// 需要派发的委托
        /// </summary>
        private GameEvent m_Event;

        /// <summary>
        /// 计时器
        /// </summary>
        private float m_TimeWatcher;

        /// <summary>
        /// 派发一个委托的一帧最大耗时ms 超过该值下一委托将在下一帧进行
        /// </summary>
        private readonly float m_AsyncMaxTime;

        private readonly string m_Token;
        /// <summary>
        /// 标识
        /// </summary>
        public string Token { get { return m_Token; } }

        public int AllEventHandlersCout { get { return m_EventHandlers.Count; } }

        public GMEventDispatcher(string token) 
        {
            m_Token = token;
            m_EventHandlers = new Dictionary<int, LinkedList<EventHandler<GameEventArg>>>();
            m_EventQueue = new Queue<GameEvent>();
            m_AsyncMaxTime = 0.03f; //30ms 约 30fps/s
        }

        public void Update(float deltaTime)
        {
            while (m_Event != null || m_EventQueue.Count > 0)
            {
                m_Event ??= m_EventQueue.Dequeue();
                if (HandleEvent(m_Event.Sender, m_Event, true))
                {
                    m_Event.Dispose();
                    m_Event = null;
                }
            }

            m_TimeWatcher += deltaTime;
        }

        private bool HandleEvent(object sender, GameEvent args, bool Async)
        {
            if (m_CurrentNode != null || m_EventHandlers.TryGetValue(args.Id, out m_TempLinked))
            {
                m_CurrentNode ??= m_TempLinked.First;
                m_TimeWatcher = 0f;
                while (m_CurrentNode != null)
                {
                    m_CurrentNode.Value(sender, args.EventArgs);
                    m_CurrentNode = m_CurrentNode.Next;
                    //注意：分帧将下一个委托分离 单个委托方法耗时过大无用
                    if (Async && m_TimeWatcher > m_AsyncMaxTime && m_CurrentNode != null)
                        return false;
                }
            }

            return true;
        }

        /// <summary>
        /// 注册事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        internal void RegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            if (handler == null)
            {
                Debug.LogError("订阅事件为空");
                return;
            }

            LinkedList<EventHandler<GameEventArg>> linked;
            if (!m_EventHandlers.TryGetValue(id, out linked))
            {
                linked = Pool.Get<LinkedList<EventHandler<GameEventArg>>>();
                m_EventHandlers.Add(id, linked);
            }

            linked.AddLast(handler);
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        /// <returns>移除结果</returns>
        internal bool UnRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            if (m_EventHandlers.TryGetValue(id, out var linked))
            {
                linked.Remove(handler);
                if (linked.Count <= 0)
                {
                    Pool.Release(linked);
                    m_EventHandlers.Remove(id);
                }
                return true;
            }
            return false;
        }

        /// <summary>
        /// 移除所有事件
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal bool UnRegisterEvent(int id)
        {
            if (m_EventHandlers.TryGetValue(id, out var linked))
            {
                linked.Clear();
                Pool.Release(linked);
                m_EventHandlers.Remove(id);
                return true;
            }

            return false;
        }

        /// <summary>
        /// 发布事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        internal void Dispatch(int id, object sender, GameEventArg args)
        {
            GameEvent eventNode = GameEvent.Get(id, sender, args);
            m_EventQueue.Enqueue(eventNode);
        }

        /// <summary>
        /// 立即发布事件（当前帧执行）
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        internal void DispatchImmediately(int id, object sender, GameEventArg args)
        {
            GameEvent eventNode = GameEvent.Get(id, sender, args);
            HandleEvent(sender, eventNode, false);
            eventNode.Dispose();
        }

        /// <summary>
        /// 是否订阅该事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <returns>是否存在</returns>
        internal bool Exist(int id)
        {
            return m_EventHandlers.ContainsKey(id);
        }
    }
}
