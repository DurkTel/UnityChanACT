using System;
using System.Collections.Generic;
using GameMessage;
using LGameFramework.GameNet;

namespace LGameFramework.GameLogic
{
    public abstract class Module
    {
        public static Dictionary<Type, Module> s_GameModule;

        private readonly static ModuleCfg s_ModuleCfg = new ModuleCfg();
        public static ModuleCfg Cfg { get { return s_ModuleCfg; } }

        private readonly static ModuleData s_ModuleData = new ModuleData();
        public static ModuleData Data { get { return s_ModuleData; } }

        private readonly static ModuleProxy s_ModuleProxy = new ModuleProxy();
        public static ModuleProxy Proxy { get { return s_ModuleProxy; } }

        public abstract void OnRegister();

        public abstract void OnUnregister();

        public virtual ENetworkCommand[] GetNetworkCommand() 
        {
            return null;
        }

        public virtual void OnNetworkCommand(ENetworkCommand cmd, NetMessageArg data)
        { 
            
        }
    }

}
