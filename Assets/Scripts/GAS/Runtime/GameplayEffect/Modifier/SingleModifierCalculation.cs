using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// 单个属性修改器
    /// </summary>
    [CreateAssetMenu(fileName = "SingleModifier", menuName = "GAS/MMC/SingleModifier")]
    public class SingleModifierCalculation : ModifierMagnitudeCalculation
    {
        public override int ParameterCount => 1;

        public override float CalculateMagnitude(GameplayEffect effect)
        {
            return GetParameterValue(effect, 0);
        }

#if UNITY_EDITOR

        public override string Formula => "y = x";

        public override string GetParameterStr(int index)
        {
            return "x";
        }

#endif
    }
}
