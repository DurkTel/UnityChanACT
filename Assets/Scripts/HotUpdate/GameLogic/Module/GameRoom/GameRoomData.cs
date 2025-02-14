

using GameMessage;
using Google.Protobuf.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameLogic
{
    public class GameRoomData
    {
        public void SetServerData(GameRoomUpdateInfo info)
        {
            RoomID = info.RoomId;
            RoomName = info.RoomName;
            JoinPlayers = info.JoinPlayers;
            IsReadys = info.IsReadys;
        }

        public int RoomID { get; set; }
        public string RoomName { get; set; }
		public RepeatedField<PlayerData> JoinPlayers { get; set; }
		public RepeatedField<int> IsReadys { get; set; }

    }
}
