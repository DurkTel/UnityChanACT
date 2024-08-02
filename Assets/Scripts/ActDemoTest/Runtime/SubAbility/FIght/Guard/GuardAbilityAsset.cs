using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class GuardAbilityAsset : GameplayAbilityAsset
    {
        public override Type GetAbilityType()
        {
            return typeof(GuardAbility);
        }
    }
}
