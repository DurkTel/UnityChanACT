using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class MageAIAbilityAsset : GameplayAbilityAsset
    {
        public bool StartAI;

        public override Type GetAbilityType()
        {
            return typeof(MageAIAbility);
        }
    }
}
