using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class SubAbilityAsset : GameplayAbilityAsset
    {
        public string ContactBone;

        public Vector3 PositionOffset;

        public Vector3 RotationOffset;

        public override Type GetAbilityType()
        {
            return typeof(SubAbility);
        }

        
    }
}
