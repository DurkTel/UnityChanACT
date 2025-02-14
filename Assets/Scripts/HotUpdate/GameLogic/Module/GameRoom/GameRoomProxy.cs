

using GameMessage;
using GameNet;
using System;
using System.Collections.Generic;

namespace LGameFramework.GameLogic
{
    public class GameRoomProxy
    {
        public void CreateRoomAsyn(string roomName, Action<int> response)
        {
            IGameRoom.CreateRoomAsyn(roomName, response);
        }

        public void StartGameAsyn(int roomId, Action response)
        {
            IGameRoom.StartGameAsyn(roomId, response);
        }

        public void GetAllRoomInfo(Action<GameRoomAllInfo> response)
        {
            IGameRoom.GetAllRoomInfo(response);
        }

        public void GetRoomInfoAsyn(int roomId, Action<GameRoomUpdateInfo> response)
        {
            IGameRoom.GetRoomInfoAsyn(roomId, response);
        }

        public void JoinRoomAsyn(int roomId, Action response)
        {
            IGameRoom.JoinRoomAsyn(roomId, response);
        }

        public void BeReadyAsyn(bool value, int roomId, int index, Action response)
        {
            IGameRoom.BeReadyAsyn(value, roomId, index, response);
        }
    }
}
