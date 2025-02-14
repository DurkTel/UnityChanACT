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
    /// ����ս��
    /// �ͻ��˵���
    /// </summary>
    public class OfflineBattlefield
    {
        private int m_FightId;
        /// <summary>
        /// ս��id
        /// </summary>
        public int FightId { get { return m_FightId; } }

        private int m_InitialCount;
        /// <summary>
        /// ս����ʼ����ʱ���ж�����
        /// </summary>
        public int InitialCount { get { return m_InitialCount; } }

        /// <summary>
        /// ��������һ֡
        /// </summary>
        private int m_NextFrame;

        /// <summary>
        /// �ͻ�����һ֡�Ĳ���
        /// </summary>
        private List<OperationInfo> m_NextOperationInfo;

        /// <summary>
        /// �ͻ����Ѿ�ͬ����֡
        /// </summary>
        private int m_SyncFrame;

        /// <summary>
        /// ��¼һ����Ϸ������ҵĲ���֡
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
            Debug.Log("����ս�ֿ���");
            m_NextFrame = 0;
            TimerUtility.AddTimer(UpdateFrame, 0, BattlefieldLogic.c_SyncTime, -1);
        }

        public void UpdateFrame()
        {
            //�ռ�������ҵ�֡
            AllOperationInfo allOperation = new AllOperationInfo();
            allOperation.Frame = m_NextFrame;
            allOperation.FightID = m_FightId;
            allOperation.OperateInfo.Add(m_NextOperationInfo);

            //��¼֡����
            m_RecordAllOperationInfo.Add(m_NextFrame, allOperation);

            //��ս����������ҷ��Ͳ���
            SendFrameOperation();

            //����˽�����һ֡
            m_NextFrame++;
            m_NextOperationInfo.Clear();
        }

        private void SendFrameOperation()
        {
            SyncFrameInfo syncInfo = new SyncFrameInfo();
            syncInfo.FightID = m_FightId;

            //�����ͻ���δͬ����֡
            for (int i = m_SyncFrame + 1; i <= m_NextFrame; i++)
                syncInfo.FrameOpt.Add(m_RecordAllOperationInfo[i]);

            EventUtility.NetDispatch((int)ENetworkCommand.SynClientOperation, this, NetMessageArg.Get(syncInfo));
        }

        /// <summary>
        /// ���¿ͻ��˷������Ĳ���
        /// </summary>
        /// <param name="clientId"></param>
        /// <param name="operate"></param>
        public void UpdatePlayerOperation(OperationInfo operate)
        {

            int clientId = operate.ClientID;
            //�ͻ�����һ֡
            int clientNextFrame = operate.Frame;
            //�ͻ�����һ֡
            int clientLastFrame = clientNextFrame - 1;

            //�������������Ĳ��� ����
            if (m_SyncFrame < clientLastFrame)
                m_SyncFrame = clientLastFrame;

            //m_CurrentFrame��ʾҪ��ǰҪ���е���һ֡ ����Ϳͻ��˷��Ĳ�һ�� ֤�����ǿͻ����Ѿ���ʱ�Ĳ���
            if (m_NextFrame != clientNextFrame)
                return;

            m_NextOperationInfo.Add(operate);
        }
    }
}
