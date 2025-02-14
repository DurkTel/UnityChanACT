using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// 线性函数修改器
    /// y = k * x + b
    /// </summary>
    [CreateAssetMenu(fileName = "LinearModifier", menuName = "GAS/MMC/LinearModifier")]
    public class LinearModifierCalculation : ModifierMagnitudeCalculation
    {
        public override int ParameterCount => 3;

        public override float CalculateMagnitude(GameplayEffect effect)
        {
            float k = GetParameterValue(effect, 0);
            float x = GetParameterValue(effect, 1);
            float b = GetParameterValue(effect, 2);

            float answer = k * x + b;

            return AnswerNegation ? -answer : answer;
        }

#if UNITY_EDITOR

        public override string Formula => "y = k * x + b";

        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "k";
                case 1:
                    return "x";
                case 2:
                    return "b";
                default:
                    break;
            }

            return "";
        }

#endif
    }
}
