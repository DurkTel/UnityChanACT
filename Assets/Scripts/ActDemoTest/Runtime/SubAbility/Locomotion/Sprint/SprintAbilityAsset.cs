using GAS.Runtime;
using System;

namespace UnityChanAct
{
    public class SprintAbilityAsset : GameplayAbilityAsset
    {
        public override Type GetAbilityType()
        {
            return typeof(SprintAbility);
        }
    }
}
