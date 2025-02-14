using GAS.Runtime;
using System;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public abstract class ActionClipSpec : IDisposable
    {
        private ActionClip m_RawData;
        public ActionClip RawData { get { return m_RawData; } }

        private int m_ActionUID;
        public int ActionUID { get { return m_ActionUID; } }

        private IActionSystemComponent m_Controller;
        public IActionSystemComponent Controller { get { return m_Controller; } }

        public virtual void OnInit(ActionClip clipData, IActionSystemComponent controller, int id) 
        {
            m_RawData = clipData;
            m_Controller = controller;
            m_ActionUID = id;
        }

        /// <summary>
        /// 进入轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public abstract void OnEnter(float deltaTime);

        /// <summary>
        /// 离开轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public abstract void OnExit(float deltaTime);

        /// <summary>
        /// 轮询轨道片段
        /// </summary>
        /// <param name="index">片段所在轨道的下标</param>
        public abstract void OnTick(float deltaTime);

        public abstract void Dispose();

    }

}
