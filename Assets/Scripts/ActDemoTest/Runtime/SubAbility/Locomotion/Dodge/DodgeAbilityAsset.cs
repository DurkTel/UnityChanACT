using GAS.Runtime;
using System;
using UnityEngine;

namespace UnityChanAct
{
    public class DodgeAbilityAsset : GameplayAbilityAsset
    {
        [Header("�޵�ʱ��")]
        public float InvincibleTime;
        public override Type GetAbilityType()
        {
            return typeof(DodgeAbility);
        }
    }
}
