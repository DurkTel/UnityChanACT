

using System.Collections.Generic;
using GameMessage;
using Google.Protobuf.Collections;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class BattlefieldData
    {
        /// <summary>
        /// ս��id
        /// </summary>
        public int FightId { get ; set; }

        /// <summary>
        /// ��ʼʱ��
        /// </summary>
        public long StartTimestamp { get; set; }

        /// <summary>
        /// ͬ������֡��
        /// </summary>
        public int SyncFrame { get; set; }

        /// <summary>
        /// ��Ҫͬ��������ҵĲ���
        /// </summary>
        public AllOperationInfo AllOperation { get; set; }

        public MapField<int, PlayerData> AllPlayers { get; set; }

        public Dictionary<int, Vector3> AllPlayersPosition { get; set; }
    }
}
