using LGameFramework.GameCore;
using LGameFramework.GameNet;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class GameRequire
    {

        /// <summary>
        /// 请求初始化业务模块
        /// </summary>
        public static void RequireModule()
        {
            Type type = typeof(Module);
            var list = type.Assembly
            .GetTypes()
            .Where(t => t.IsClass && !t.IsAbstract && t.IsSubclassOf(type))
            .ToList();

            Module.s_GameModule = new Dictionary<Type, Module>(list.Count);
            foreach (var moduleType in list)
            {
                Module module = Activator.CreateInstance(moduleType) as Module;
                Module.s_GameModule.Add(moduleType, module);
                module.OnRegister();

                var commands = module.GetNetworkCommand();
                if (commands == null)
                    continue;
                foreach (var command in commands)
                    EventUtility.NetRegisterEvent((int)command, (sender, arg) =>
                    {
                        NetMessageArg netArg = arg as NetMessageArg;
                        module.OnNetworkCommand(command, netArg);
                    });
            }
        }
    }
}
