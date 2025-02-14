using GameMessage;
using LGameFramework.GameNet;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class LoginModule : Module
    {
        public override void OnRegister()
        {
            Data.Login = new LoginData();
            Proxy.Login = new LoginProxy();
            Cfg.Login = new LoginConfig();
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
