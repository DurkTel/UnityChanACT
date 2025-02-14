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
        /// ������Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public abstract void OnEnter(float deltaTime);

        /// <summary>
        /// �뿪���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public abstract void OnExit(float deltaTime);

        /// <summary>
        /// ��ѯ���Ƭ��
        /// </summary>
        /// <param name="index">Ƭ�����ڹ�����±�</param>
        public abstract void OnTick(float deltaTime);

        public abstract void Dispose();

    }

}
