using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ���������㹫ʽ
    /// ������=1����������50����Ӧ�ȼ�����
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

        public override string Formula => "������=1����������50����Ӧ�ȼ�����";
        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "1������";
                case 1:
                    return "����";
                case 2:
                    return "�ȼ�����";
                default:
                    break;
            }

            return "";
        }
#endif

    }
}
