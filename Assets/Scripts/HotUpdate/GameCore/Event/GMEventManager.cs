using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 事件派发管理
    /// </summary>
    public sealed partial class GMEventManager : FrameworkModule
    {
        private Dictionary<string, GMEventDispatcher> m_Dispatchers;

        public override int Priority => 1;

        public override void OnInit()
        {
            m_Dispatchers = new Dictionary<string, GMEventDispatcher>();    
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_Dispatchers.Count == 0) return;

            foreach (var dispatcher in m_Dispatchers.Values)
                dispatcher.Update(deltaTime);
        }

        /// <summary>
        /// 获取事件分发器
        /// </summary>
        /// <param name="token">分发器的标识</param>
        /// <returns></returns>
        internal GMEventDispatcher GetDispatcher(string token)
        {
            if (!m_Dispatchers.TryGetValue(token, out var dispatcher))
            {
                dispatcher = new GMEventDispatcher(token);
                m_Dispatchers.Add(token, dispatcher);
            }

            return dispatcher;
        }
    }
}
