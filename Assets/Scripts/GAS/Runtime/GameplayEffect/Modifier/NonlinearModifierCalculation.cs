using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// 非线性函数修改器
    /// y = a * x ^ b + c
    /// </summary>
    [CreateAssetMenu(fileName = "NonlinearModifier", menuName = "GAS/MMC/NonlinearModifier")]
    public class NonlinearModifierCalculation : ModifierMagnitudeCalculation
    {
        public override int ParameterCount => 4;

        public override float CalculateMagnitude(GameplayEffect effect)
        {
            float a = GetParameterValue(effect, 0);
            float x = GetParameterValue(effect, 1);
            float b = GetParameterValue(effect, 2);
            float c = GetParameterValue(effect, 3);

            return a * Mathf.Pow(x, b) + c;
        }

#if UNITY_EDITOR

        public override string Formula => "y = a * x ^ b + c";

        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "a";
                case 1:
                    return "x";
                case 2:
                    return "b";
                case 3:
                    return "c";
                default:
                    break;
            }

            return "";
        }

#endif
    }
}
