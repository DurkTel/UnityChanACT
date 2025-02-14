using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 防御力计算公式
    /// 防御力=1级防御力÷50×对应等级基数
    /// </summary>
    public class DefenseCalculationFormula : ModifierMagnitudeCalculation
    {
        public override int ParameterCount => 3;

        public override float CalculateMagnitude(GameplayEffect effect)
        {
            float d = GetParameterValue(effect, 0);
            float c = GetParameterValue(effect, 1);
            float l = GetParameterValue(effect, 2);

            float answer = d / c * GradBaseFormula.GetGradBase((int)l);

            return AnswerNegation ? -answer : answer;
        }


#if UNITY_EDITOR

        public override string Formula => "防御力=1级防御力÷50×对应等级基数";
        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "1级防御";
                case 1:
                    return "常数";
                case 2:
                    return "等级基数";
                default:
                    break;
            }

            return "";
        }
#endif

    }
}
