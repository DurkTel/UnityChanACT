

using GameMessage;
using LGameFramework.GameCore;
using LGameFramework.GameNet;
using System.Net;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class GameRoomModule : Module
    {
        public override void OnRegister()
        {
            Data.GameRoom = new GameRoomData();
            Proxy.GameRoom = new GameRoomProxy();
            Cfg.GameRoom = new GameRoomConfig();
        }

        public override void OnUnregister()
        {
        }

        public override ENetworkCommand[] GetNetworkCommand()
        {
            return new ENetworkCommand[]
            {
                ENetworkCommand.GameRoomUpdateInfo
            };
        }

        public override void OnNetworkCommand(ENetworkCommand cmd, NetMessageArg data)
        {
            switch (cmd)
            {
                case ENetworkCommand.GameRoomUpdateInfo:
                    var updateInfo = data.GetData<GameRoomUpdateInfo>();
                    Data.GameRoom.SetServerData(updateInfo);

                    //通知更新
                    EventUtility.Dispatch((int)GMEventRegister.GAMEROOM_SERVER_UPDATE_INFO, this, null);
                    break;
                default:
                    break;
            }
        }
    }
}
