

using GameMessage;
using LGameFramework.GameNet;
using System.Collections.Generic;

namespace LGameFramework.GameLogic
{
    public class RoleModule : Module
    {
        public override void OnRegister()
        {
            Data.Role = new RoleData();
            Proxy.Role = new RoleProxy();
            Cfg.Role = new RoleConfig();
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
