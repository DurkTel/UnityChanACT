

using GameMessage;
using System.Collections.Generic;
using LGameFramework.GameNet;

namespace LGameFramework.GameLogic
{
    public class CommonModule : Module
    {
        public override void OnRegister()
        {
            Data.Common = new CommonData();
            Proxy.Common = new CommonProxy();
            Cfg.Common = new CommonConfig();
        }

        public override void OnUnregister()
        {
        }

        public override ENetworkCommand[] GetNetworkCommand()
        {
            return null;
        }

        public override void OnNetworkCommand(ENetworkCommand cmd, NetMessageArg data)
        {
        }
    }
}
