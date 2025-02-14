using GameMessage;
using LGameFramework.GameCore;
using LGameFramework.GameNet;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 离线战场
    /// 客户端单机
    /// </summary>
    public class OfflineBattlefield
    {
        private int m_FightId;
        /// <summary>
        /// 战场id
        /// </summary>
        public int FightId { get { return m_FightId; } }

        private int m_InitialCount;
        /// <summary>
        /// 战场初始化的时候有多少人
        /// </summary>
        public int InitialCount { get { return m_InitialCount; } }

        /// <summary>
        /// 服务器下一帧
        /// </summary>
        private int m_NextFrame;

        /// <summary>
        /// 客户端下一帧的操作
        /// </summary>
        private List<OperationInfo> m_NextOperationInfo;

        /// <summary>
        /// 客户端已经同步的帧
        /// </summary>
        private int m_SyncFrame;

        /// <summary>
        /// 记录一句游戏所有玩家的操作帧
        /// </summary>
        private Dictionary<int, AllOperationInfo> m_RecordAllOperationInfo;

        private readonly OperationInfo m_EmptyOper = new OperationInfo();

        public OfflineBattlefield(int fightId, int count)
        {
            m_FightId = fightId;
            m_InitialCount = count;
            m_RecordAllOperationInfo = new Dictionary<int, AllOperationInfo>();
            m_NextOperationInfo = new List<OperationInfo>();
        }

        public void FightStart()
        {
            Debug.Log("离线战局开启");
            m_NextFrame = 0;
            TimerUtility.AddTimer(UpdateFrame, 0, BattlefieldLogic.c_SyncTime, -1);
        }

        public void UpdateFrame()
        {
            //收集所有玩家的帧
            AllOperationInfo allOperation = new AllOperationInfo();
            allOperation.Frame = m_NextFrame;
            allOperation.FightID = m_FightId;
            allOperation.OperateInfo.Add(m_NextOperationInfo);

            //记录帧操作
            m_RecordAllOperationInfo.Add(m_NextFrame, allOperation);

            //给战局里所有玩家发送操作
            SendFrameOperation();

            //服务端进入下一帧
            m_NextFrame++;
            m_NextOperationInfo.Clear();
        }

        private void SendFrameOperation()
        {
            SyncFrameInfo syncInfo = new SyncFrameInfo();
            syncInfo.FightID = m_FightId;

            //补发客户端未同步的帧
            for (int i = m_SyncFrame + 1; i <= m_NextFrame; i++)
                syncInfo.FrameOpt.Add(m_RecordAllOperationInfo[i]);

            EventUtility.NetDispatch((int)ENetworkCommand.SynClientOperation, this, NetMessageArg.Get(syncInfo));
        }

        /// <summary>
        /// 更新客户端发过来的操作
        /// </summary>
        /// <param name="clientId"></param>
        /// <param name="operate"></param>
        public void UpdatePlayerOperation(OperationInfo operate)
        {

            int clientId = operate.ClientID;
            //客户端下一帧
            int clientNextFrame = operate.Frame;
            //客户端上一帧
            int clientLastFrame = clientNextFrame - 1;

            //如果服务端这里存的不对 纠正
            if (m_SyncFrame < clientLastFrame)
                m_SyncFrame = clientLastFrame;

            //m_CurrentFrame表示要当前要进行的下一帧 如果和客户端发的不一样 证明那是客户端已经过时的操作
            if (m_NextFrame != clientNextFrame)
                return;

            m_NextOperationInfo.Add(operate);
        }
    }
}
