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
            if (m_WaitTick <= BattlefieldLogic.c_SyncTime * 3) //��һ֡���ж�
                return TaskStatus.Running;

            if (!Entity.Abilitys.TryGetAbility<ActionAbility>(out var action))
                return TaskStatus.Failure;

            //if (action.CurrentAction.ActionTag.ToGameplayTag() != GameplayTagsLib.Action_Attack)
            //    return TaskStatus.Failure;

            //if (!action.CurrentAction.ActionID.EndsWith(m_ExpectationStep.Value.ToString())) //�Ƿ��Ƕ�Ӧ�Ķ���
            //    return TaskStatus.Failure;

            //������������ �ȴ������ܲ��ܴ���
            Owner.SetVariable(BehaviorVariable.c_AttackStep, m_ExpectationStep);

            if (m_AttackId == -1)
                m_AttackId = action.CurrentActionUID;

            if (!FightUtility.TryGetAttackInfo(m_AttackId, out var attackInfo)) //�Ҳ������ս�� ����ʶ��������� û����
                return TaskStatus.Failure;

            if (attackInfo.IsAttackWindup) //������ҡ��
            {
                //û���� ���ݽ�����������Ҫ��Ҫ������
                if (Random.Range(1, 11) <= aggression.Value * 3)
                    return TaskStatus.Success;
                else
                    return TaskStatus.Failure;
            }

            if (attackInfo.HitInfo.HasHited) //������ ţ��
                return TaskStatus.Success;

                       
            return TaskStatus.Running;
        }

    }
}
