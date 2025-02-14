using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// �������˱ȹ�ʽ
    /// ��������=��ɫ�ȼ�������(���˷�������(1-��͸)��(1-����)+��ɫ�ȼ�����)
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

        public override string Formula => "����=�ȼ�������(������(1-��͸)��(1-����)+�ȼ�����)";

        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "�ȼ�����";
                case 1:
                    return "����";
                case 2:
                    return "��͸";
                case 3:
                    return "����";
                default:
                    break;
            }

            return "";
        }
#endif

    }
}
