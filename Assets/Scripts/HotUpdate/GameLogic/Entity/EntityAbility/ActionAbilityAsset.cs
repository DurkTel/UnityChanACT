using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class ActionAbilityAsset : GameplayAbilityAsset
    {
        public string actionManifestName;

        public override Type GetAbilityType()
        {
            return typeof(ActionAbility);
        }
    }
}
