using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ╧╔╩Вик╨╕╪фкЦ
    /// ик╨╕=╧╔╩В║аик╨╕╠╤бй║а╠╘ик║аик╨╕╪сЁи║а╥юсЫ╪Уик║арвикв╢л╛
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

            //Debug.Log($"ик╨╕╪фкЦё╨╧╔╩Ва╕{gj} ик╨╕╠╤бй{shbl} ╠╘ик{bs} ик╨╕╪сЁи{shjc} ╥юсЫ╪Уик{fyjs} рвик╪сЁи{ys}  вэик╨╕{answer}");

            return AnswerNegation ? -answer : answer;
        }


#if UNITY_EDITOR

        public override string Formula => "ик╨╕=╧╔╩В║аик╨╕╠╤бй║а╠╘ик║аик╨╕╪сЁи║а╥юсЫ╪Уик║арвикв╢л╛";

        public override string GetParameterStr(int index)
        {
            switch (index)
            {
                case 0:
                    return "╧╔╩В";
                case 1:
                    return "ик╨╕╠╤бй";
                case 2:
                    return "╠╘ик";
                case 3:
                    return "ик╨╕╪сЁи";
                case 4:
                    return "╥юсЫ╪Уик";
                case 5:
                    return "рвикв╢л╛";
                default:
                    break;
            }

            return "";
        }
#endif
    }
}
