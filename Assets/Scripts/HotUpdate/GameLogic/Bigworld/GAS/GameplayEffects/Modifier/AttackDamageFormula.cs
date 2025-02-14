using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// �����˺�����
    /// �˺�=�������˺����ʡ����ˡ��˺��ӳɡ��������ˡ�����״̬
    /// </summary>
    public class AttackDamageFormula : ModifierMagnitudeCalculation
    {
        public override int ParameterCount => 6;

        public override float CalculateMagnitude(GameplayEffect effect)
        {
            float gj = GetParameterValue(effect, 0);
            float shbl = GetParameterValue(effect, 1);
            float bs = GetParameterValue(effect, 2);
            float shjc = GetParameterValue(effect, 3);
            float fyjs = GetParameterValue(effect, 4);
            float ys = GetParameterValue(effect, 5);

            float answer = gj * shbl * (1 + bs) * (1 + shjc) * fyjs * ys;

            //Debug.Log($"�˺����㣺������{gj} �˺�����{shbl} ����{bs} �˺��ӳ�{shjc} ��������{fyjs} ���˼ӳ�{ys}  ���˺�{answer}");

            return AnswerNegation ? -answer : answer;
        }


#if UNITY_EDITOR

        public override string Formula => "�˺�=�������˺����ʡ����ˡ��˺��ӳɡ��������ˡ�����״̬";

        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "����";
                case 1:
                    return "�˺�����";
                case 2:
                    return "����";
                case 3:
                    return "�˺��ӳ�";
                case 4:
                    return "��������";
                case 5:
                    return "����״̬";
                default:
                    break;
            }

            return "";
        }
#endif
    }
}
