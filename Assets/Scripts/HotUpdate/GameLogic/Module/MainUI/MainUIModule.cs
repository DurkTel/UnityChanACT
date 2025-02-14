

using GameMessage;
using System.Collections.Generic;
using LGameFramework.GameNet;

namespace LGameFramework.GameLogic
{
    public class MainUIModule : Module
    {
        public override void OnRegister()
        {
            Data.MainUI = new MainUIData();
            Proxy.MainUI = new MainUIProxy();
            Cfg.MainUI = new MainUIConfig();
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
