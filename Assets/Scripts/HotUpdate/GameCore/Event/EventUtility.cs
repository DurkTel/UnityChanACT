using System;

namespace LGameFramework.GameCore
{
    public class EventUtility : ModuleUtility<GMEventManager>
    {

        /// <summary>
        /// �����¼��ַ���
        /// </summary>
        private readonly static GMEventDispatcher m_NetDispatcher = Instance.GetDispatcher("NetDispatcher");

        /// <summary>
        /// �����¼��ַ���
        /// </summary>
        private readonly static GMEventDispatcher m_EventDispatcher = Instance.GetDispatcher("EventDispatcher");

        /// <summary>
        /// ע���¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        public static void RegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            m_EventDispatcher.RegisterEvent(id, handler);    
        }

        /// <summary>
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        /// <returns>�Ƴ����</returns>
        public static bool UnRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            return m_EventDispatcher.UnRegisterEvent(id, handler);
        }

        /// <summary>
        /// �Ƴ������¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <returns>�Ƴ����</returns>
        public static bool UnRegisterEvent(int id)
        {
            return m_EventDispatcher.UnRegisterEvent(id);
        }

        /// <summary>
        /// �����¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public static void Dispatch(int id, object sender, GameEventArg args)
        {
            m_EventDispatcher.Dispatch(id, sender, args);    
        }

        /// <summary>
        /// ���������¼�����ǰִ֡�У�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public static void DispatchImmediately(int id, object sender, GameEventArg args)
        {
            m_EventDispatcher.DispatchImmediately(id, sender, args);
        }

        /// <summary>
        /// �Ƿ��ĸ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <returns>�Ƿ����</returns>
        public static bool Exist(int id)
        {
            return m_EventDispatcher.Exist(id);
        }



        /// <summary>
        /// ע���¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        public static void NetRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            m_NetDispatcher.RegisterEvent(id, handler);
        }

        /// <summary>
        /// �Ƴ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="handler">ί�з���</param>
        /// <returns>�Ƴ����</returns>
        public static bool NetUnRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            return m_NetDispatcher.UnRegisterEvent(id, handler);
        }

        /// <summary>
        /// �����¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public static void NetDispatch(int id, object sender, GameEventArg args)
        {
            m_NetDispatcher.Dispatch(id, sender, args);
        }

        /// <summary>
        /// ���������¼�����ǰִ֡�У�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <param name="sender">������</param>
        /// <param name="args">�¼�����</param>
        public static void NetDispatchImmediately(int id, object sender, GameEventArg args)
        {
            m_NetDispatcher.DispatchImmediately(id, sender, args);
        }

        /// <summary>
        /// �Ƿ��ĸ��¼�
        /// </summary>
        /// <param name="id">�¼�ID</param>
        /// <returns>�Ƿ����</returns>
        public static bool NetExist(int id)
        {
            return m_NetDispatcher.Exist(id);
        }
    }
}
