using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class Attack : AbstractAction
    {
        public SharedInt aggression;

        private SharedInt m_ExpectationStep;

        private float m_WaitTick;

        private int m_AttackId;

        public override void OnAwake()
        {
            base.OnAwake();
            m_ExpectationStep = new SharedInt();
            aggression.Value = Mathf.Clamp(aggression.Value, 1, 3);
        }

        public override void OnStart()
        {
            base.OnStart();
            if (Entity.Abilitys.TryGetAbility<ExternalInputAbility>(out var input))
                input.AddInput(GameMessage.EClientOperation.Attack);

            m_WaitTick = 0;
            m_AttackId = -1;
            m_ExpectationStep.Value = (Owner.GetVariable(BehaviorVariable.c_AttackStep) as SharedInt).Value + 1;
            if (m_ExpectationStep.Value > 5)
                m_ExpectationStep.Value = 1;
        }

        public override TaskStatus OnUpdate()
        {
            m_WaitTick += Time.deltaTime;
            if (m_WaitTick <= BattlefieldLogic.c_SyncTime * 3) //下一帧再判断
                return TaskStatus.Running;

            if (!Entity.Abilitys.TryGetAbility<ActionAbility>(out var action))
                return TaskStatus.Failure;

            //if (action.CurrentAction.ActionTag.ToGameplayTag() != GameplayTagsLib.Action_Attack)
            //    return TaskStatus.Failure;

            //if (!action.CurrentAction.ActionID.EndsWith(m_ExpectationStep.Value.ToString())) //是否是对应的段数
            //    return TaskStatus.Failure;

            //攻击动作有了 等待看看能不能打中
            Owner.SetVariable(BehaviorVariable.c_AttackStep, m_ExpectationStep);

            if (m_AttackId == -1)
                m_AttackId = action.CurrentActionUID;

            if (!FightUtility.TryGetAttackInfo(m_AttackId, out var attackInfo)) //找不到这个战报 大概率动作结束了 没打中
                return TaskStatus.Failure;

            if (attackInfo.IsAttackWindup) //攻击后摇了
            {
                //没打中 根据进攻欲望决定要不要接派生
                if (Random.Range(1, 11) <= aggression.Value * 3)
                    return TaskStatus.Success;
                else
                    return TaskStatus.Failure;
            }

            if (attackInfo.HitInfo.HasHited) //打中了 牛逼
                return TaskStatus.Success;

                       
            return TaskStatus.Running;
        }

    }
}
