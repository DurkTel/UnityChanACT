using System;

namespace LGameFramework.GameCore
{
    public class EventUtility : ModuleUtility<GMEventManager>
    {

        /// <summary>
        /// 网络事件分发器
        /// </summary>
        private readonly static GMEventDispatcher m_NetDispatcher = Instance.GetDispatcher("NetDispatcher");

        /// <summary>
        /// 本地事件分发器
        /// </summary>
        private readonly static GMEventDispatcher m_EventDispatcher = Instance.GetDispatcher("EventDispatcher");

        /// <summary>
        /// 注册事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        public static void RegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            m_EventDispatcher.RegisterEvent(id, handler);    
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        /// <returns>移除结果</returns>
        public static bool UnRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            return m_EventDispatcher.UnRegisterEvent(id, handler);
        }

        /// <summary>
        /// 移除所有事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <returns>移除结果</returns>
        public static bool UnRegisterEvent(int id)
        {
            return m_EventDispatcher.UnRegisterEvent(id);
        }

        /// <summary>
        /// 发布事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public static void Dispatch(int id, object sender, GameEventArg args)
        {
            m_EventDispatcher.Dispatch(id, sender, args);    
        }

        /// <summary>
        /// 立即发布事件（当前帧执行）
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public static void DispatchImmediately(int id, object sender, GameEventArg args)
        {
            m_EventDispatcher.DispatchImmediately(id, sender, args);
        }

        /// <summary>
        /// 是否订阅该事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <returns>是否存在</returns>
        public static bool Exist(int id)
        {
            return m_EventDispatcher.Exist(id);
        }



        /// <summary>
        /// 注册事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        public static void NetRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            m_NetDispatcher.RegisterEvent(id, handler);
        }

        /// <summary>
        /// 移除事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="handler">委托方法</param>
        /// <returns>移除结果</returns>
        public static bool NetUnRegisterEvent(int id, EventHandler<GameEventArg> handler)
        {
            return m_NetDispatcher.UnRegisterEvent(id, handler);
        }

        /// <summary>
        /// 发布事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public static void NetDispatch(int id, object sender, GameEventArg args)
        {
            m_NetDispatcher.Dispatch(id, sender, args);
        }

        /// <summary>
        /// 立即发布事件（当前帧执行）
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <param name="sender">发布者</param>
        /// <param name="args">事件参数</param>
        public static void NetDispatchImmediately(int id, object sender, GameEventArg args)
        {
            m_NetDispatcher.DispatchImmediately(id, sender, args);
        }

        /// <summary>
        /// 是否订阅该事件
        /// </summary>
        /// <param name="id">事件ID</param>
        /// <returns>是否存在</returns>
        public static bool NetExist(int id)
        {
            return m_NetDispatcher.Exist(id);
        }
    }
}
