using GAS.Runtime;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ActionAbilityAsset : GameplayAbilityAsset
    {
        public TimeLineAbilityAsset DefaultAction;

        public List<TimeLineAbilityAsset> Actions = new List<TimeLineAbilityAsset>();
        public override Type GetAbilityType()
        {
            return typeof(ActionAbility);
        }
    }
}
