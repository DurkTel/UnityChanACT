using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 防御减伤比公式
    /// 防御减伤=角色等级基数÷(敌人防御力×(1-穿透)×(1-减防)+角色等级基数)
    /// </summary>
    public class DefenseReductionFormula : ModifierMagnitudeCalculation
    {
        public override int ParameterCount => 4;

        public override float CalculateMagnitude(GameplayEffect effect)
        {
            float dj = GetParameterValue(effect, 0);
            float fy = GetParameterValue(effect, 1);
            float ct = GetParameterValue(effect, 2);
            float jf = GetParameterValue(effect, 3);

            var gradBase = GradBaseFormula.GetGradBase((int)dj);

            float answer = gradBase / (fy * (1 - ct) * (1 - jf) + gradBase);

            return AnswerNegation ? -answer : answer;
        }

#if UNITY_EDITOR

        public override string Formula => "减伤=等级基数÷(防御×(1-穿透)×(1-减防)+等级基数)";

        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "等级基数";
                case 1:
                    return "防御";
                case 2:
                    return "穿透";
                case 3:
                    return "减防";
                default:
                    break;
            }

            return "";
        }
#endif

    }
}
