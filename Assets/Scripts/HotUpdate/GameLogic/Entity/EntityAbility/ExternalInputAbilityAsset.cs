using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class ExternalInputAbilityAsset : GameplayAbilityAsset
    {
        public override Type GetAbilityType()
        {
            return typeof(ExternalInputAbility);
        }
    }
}
