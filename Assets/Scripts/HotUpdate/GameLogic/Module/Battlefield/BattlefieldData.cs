

using System.Collections.Generic;
using GameMessage;
using Google.Protobuf.Collections;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class BattlefieldData
    {
        /// <summary>
        /// 战局id
        /// </summary>
        public int FightId { get ; set; }

        /// <summary>
        /// 开始时间
        /// </summary>
        public long StartTimestamp { get; set; }

        /// <summary>
        /// 同步到的帧号
        /// </summary>
        public int SyncFrame { get; set; }

        /// <summary>
        /// 需要同步所有玩家的操作
        /// </summary>
        public AllOperationInfo AllOperation { get; set; }

        public MapField<int, PlayerData> AllPlayers { get; set; }

        public Dictionary<int, Vector3> AllPlayersPosition { get; set; }
    }
}
