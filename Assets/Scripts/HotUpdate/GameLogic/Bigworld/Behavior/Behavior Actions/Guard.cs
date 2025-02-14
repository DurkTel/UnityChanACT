using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class Guard : AbstractAction
    {
        public SharedFloat randomWaitMin;

        public SharedFloat randomWaitMax;

        private float m_WaitTime;

        private float m_WaitTick;

        private bool m_IsGuarding;

        public override void OnStart()
        {
            if (Entity.Abilitys.TryGetAbility<ExternalInputAbility>(out var input))
                input.AddInput(GameMessage.EClientOperation.Defense);

            m_WaitTick = 0f;
            m_IsGuarding = false;
            Random.InitState(Time.frameCount);
            m_WaitTime = Random.Range(randomWaitMin.Value, randomWaitMax.Value);
        }

        public override TaskStatus OnUpdate()
        {
            m_WaitTick += Time.deltaTime;
            if (m_WaitTick <= BattlefieldLogic.c_SyncTime * 3) //��һ֡���ж�
                return TaskStatus.Running;

            if (!Entity.Abilitys.TryGetAbility<ActionAbility>(out var action))
                return TaskStatus.Failure;

            if (!m_IsGuarding && action.CurrentAction.ActionTag.ToGameplayTag() == GameplayTagsLib.Action_Guard) //�ɹ��������
            {
                m_IsGuarding = true;
                Entity.Tags.AddDynamicTags(Owner, GameplayTagsLib.Event_Fight_Guard);
            }
            else if (m_WaitTick >= m_WaitTime)
            {
                Entity.Tags.RemoveDynamicTags(Owner, GameplayTagsLib.Event_Fight_Guard);
                if (Entity.Abilitys.TryGetAbility<ExternalInputAbility>(out var input))
                    input.AddInput(GameMessage.EClientOperation.Defense, GameMessage.EOperationType.Up);
                return TaskStatus.Success;
            }

            if (!m_IsGuarding) //û�ܽ������
                return TaskStatus.Failure;

            return TaskStatus.Running;
        }
    }
}
