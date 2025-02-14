

using GameMessage;
using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using LGameFramework.GameNet;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class BattlefieldModule : Module
    {
        public static BattlefieldLogic s_Battlefield;

        public override void OnRegister()
        {
            Data.Battlefield = new BattlefieldData();
            Proxy.Battlefield = new BattlefieldProxy();
            Cfg.Battlefield = new BattlefieldConfig();
        }

        public override void OnUnregister()
        {
        }

        public override ENetworkCommand[] GetNetworkCommand()
        {
            return new ENetworkCommand[] 
            {
                ENetworkCommand.BattlefieldStartInfo,
                ENetworkCommand.SynClientFristFrame,
                ENetworkCommand.SynClientOperation
            };
        }

        public override async void OnNetworkCommand(ENetworkCommand cmd, NetMessageArg data)
        {
            switch (cmd)
            {
                case ENetworkCommand.BattlefieldStartInfo:
                    var beginInfo = data.GetData<BattlefieldStart>();
                    s_Battlefield = await BattlefieldLogic.StartLogic(beginInfo);
                    UIUtility.CloseView<GameRoomView>();
                    break;
                case ENetworkCommand.SynClientFristFrame:
                    Data.Battlefield.SyncFrame = 0;
                    break;
                case ENetworkCommand.SynClientOperation:
                    var allOper = data.GetData<SyncFrameInfo>();
                    s_Battlefield.OnSyncFrameUpdate(allOper);
                    break;
            }
        }
    }
}
