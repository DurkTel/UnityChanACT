using GAS.Runtime;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ComboEffect : GameplayEffect
    {
        private ComboEffectClip m_ComboClip;

        private float m_PassedTimer;

        private bool m_ConditionFlag;

        public override void OnApply(params object[] paramArgs)
        {
            m_ComboClip = paramArgs[0] as ComboEffectClip;
            m_PassedTimer = 0;
        }

        public override void DisApply(bool canceled)
        {
            m_ComboClip = null;
        }

        public override void OnUpdate(float deltaTime)
        {
            m_PassedTimer += deltaTime;
            m_ConditionFlag = m_ConditionFlag || Source.HasTag(GetTagByCondition(m_ComboClip.condition));

            if (m_ConditionFlag && IsDelayComboEnd())
            {
                Source.Abilitys.TryActivateAbility(m_ComboClip.comboName);
                Source.Effects.RemoveEffect(this);
            }
        }

        /// <summary>
        /// 延迟派生是否已经结束
        /// </summary>
        /// <returns></returns>
        private bool IsDelayComboEnd()
        {
            return m_PassedTimer >= (m_ComboClip.delayComboTick - m_ComboClip.StartTick) * TimeLineAbility.c_TimeFrameSec;
        }

        private GameplayTag GetTagByCondition(ComboEffectClip.ComboCondition condition)
        {
            switch (condition)
            {
                case ComboEffectClip.ComboCondition.NormalAttack:
                    return GameplayTagsLib.Command_Fight_Attack;
            }

            return default;
        }
    }
}
