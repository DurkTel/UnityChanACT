using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GAS.Runtime;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// �Ƿ��е���Ҫ����
    /// </summary>
    /// 
    [TaskDescription("�Ƿ��е���Ҫ����")]
    public class EnemyWhetherToAttack : AbstractConditional
    {
        public SharedInt tempEntityId;


        public override TaskStatus OnUpdate()
        {
            //if (Owner.GetVariable(BehaviorVariable.c_PrepareAttack) is SharedInt attackId && attackId.Value != 0)
            //{
            //    if (FightUtility.TryGetAttackInfo(attackId.Value, out var info))
            //    {
            //        tempEntityId.Value = info.AttackEntity;
            //    }
            //    Owner.SetVariableValue(BehaviorVariable.c_PrepareAttack, 0);
            //    return TaskStatus.Success;
            //}

            if (EntityUtility.TryGetEntity(tempEntityId.Value, out var entity))
            {
                if (entity.Tags.HasTag(GameplayTagsLib.Action_Attack))
                    return TaskStatus.Success;
                else
                    return TaskStatus.Failure;
            }

            return TaskStatus.Failure;
        }
    }
}
