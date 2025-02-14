using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class GetTargetDistance : AbstractConditional
    {
        public SharedInt targetEntityId;

        public SharedFloat distance;

        public SharedInt mathCondition;

        public override TaskStatus OnUpdate()
        {
            if (!EntityUtility.TryGetEntity(targetEntityId.Value, out var target))
                return TaskStatus.Failure;

            if(!Entity.Abilitys.TryGetAbility<SyncAbility>(out var sync1) || !target.Abilitys.TryGetAbility<SyncAbility>(out var sync2))
                return TaskStatus.Failure;

            bool success = false;
            float dis = Vector3.Distance(sync1.SyncPosition, sync2.SyncPosition);
            MathCondition condition = (MathCondition)mathCondition.Value;
            switch (condition)
            {
                case MathCondition.Biger:
                    success = dis > distance.Value;
                    break;
                case MathCondition.BigerEqual:
                    success = dis >= distance.Value;
                    break;
                case MathCondition.Smaller:
                    success = dis < distance.Value;
                    break;
                case MathCondition.SmallerEqual:
                    success = dis <= distance.Value;
                    break;
                default:
                    break;
            }

            return success ? TaskStatus.Success : TaskStatus.Failure;
        }
    }

    public enum MathCondition
    { 
        Biger = 1,
        BigerEqual,
        Smaller,
        SmallerEqual
    }
}
