using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BehaviorDesigner.Runtime;

namespace LGameFramework.GameLogic
{
    public class BehaviorAbilityAsset : GameplayAbilityAsset
    {
        public ExternalBehaviorTree ExternalBehaviorTree;

        public float AIStartTime;

        public override Type GetAbilityType()
        {
            return typeof(BehaviorAbility);
        }
    }
}
