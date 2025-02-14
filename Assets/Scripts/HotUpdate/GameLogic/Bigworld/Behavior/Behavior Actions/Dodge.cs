using BehaviorDesigner.Runtime.Tasks;
using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class Dodge : AbstractAction
    {
        private int m_WaitTick;

        public override void OnStart()
        {
            if (Entity.Abilitys.TryGetAbility<ExternalInputAbility>(out var input))
                input.AddInput(GameMessage.EClientOperation.Dodge);

            m_WaitTick = 0;
        }

        public override TaskStatus OnUpdate()
        {
            if (m_WaitTick++ <= 1) //обр╩ж║тыеп╤о
                return TaskStatus.Running;

            if (!Entity.Abilitys.TryGetAbility<ActionAbility>(out var action))
                return TaskStatus.Failure;

            return action.CurrentAction.ActionTag.ToGameplayTag() == GameplayTagsLib.Action_Dodge ? TaskStatus.Success : TaskStatus.Failure;
        }
    }
}
