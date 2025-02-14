using Actioner.Runtime;
using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameLogic
{
    public static class CommandMethods
    {

        private static Dictionary<string, Func<IActionSystemComponent, bool>> s_Methods = new Dictionary<string, Func<IActionSystemComponent, bool>>()
        {
            { c_Command_IsMoveing, Command_IsMoveing },
            { c_Command_IsReturn, Command_IsReturn },
            { c_Command_IsGuard, Command_IsGuard },
        };

        public static bool Invoke(string name, IActionSystemComponent actionSystem)
        {
            var ctor = s_Methods.GetValueOrDefault(name);
            if (ctor == null)
                return false;

            return s_Methods.GetValueOrDefault(name)(actionSystem);
        }


        private const string c_Command_IsMoveing = "Command_IsMoveing";
        private static bool Command_IsMoveing(IActionSystemComponent actionSystem)
        {
            if (!EntityUtility.TryGetEntity(actionSystem.Id, out var entity))
                return false;

            if (entity.Abilitys.TryGetAbility<SyncAbility>( out var sync))
            {
                return sync.WorldDirection != Vector3.zero;
            }

            return false;
        }

        private const string c_Command_IsReturn = "Command_IsReturn";
        private static bool Command_IsReturn(IActionSystemComponent actionSystem)
        {
            //if (!EntityUtility.TryGetEntity(p.Id, out var entity))
            //    return false;

            //if (entity.Abilitys.TryGetAbility("SyncAbility", out var ability))
            //{
            //    var sync = ability as SyncAbility;
            //    return Mathf.Abs(sync.CalculateTargetAngle()) > 170f;
            //}
            return false;
        }

        private const string c_Command_IsGuard = "Command_IsGuard";

        //private static ActionCommand s_GuardCommand = new ActionCommand() { keySequence = new List<GameMessage.EClientOperation>() { GameMessage.EClientOperation.Defense }, validInFrame = 1 };

        private static bool Command_IsGuard(IActionSystemComponent actionSystem)
        {
            if (!EntityUtility.TryGetEntity(actionSystem.Id, out var entity))
                return false;

            return entity.Tags.HasTag(GameplayTagsLib.Event_Fight_Guard);
        }
    }
}
