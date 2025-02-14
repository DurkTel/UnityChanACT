using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class AvatarAbilityAsset : GameplayAbilityAsset
    {
        public string SkeletonName;
        public string BodyName;
        public string HeadName;
        public string HairName;
        public string ClothingName;

        public override Type GetAbilityType()
        {
            return typeof(AvatarAbility);
        }
    }
}
