using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace UnityChanAct
{
    public class ComboEffect : TimeLineEffect
    {
        private ComboEffectClip m_ComboClip;

        private float m_PassedTimer;

        private bool m_ConditionFlag;

        private GameplayTag[] m_ConditionTags;

        public override void OnApply(params object[] paramArgs)
        {
            m_ComboClip = paramArgs[0] as ComboEffectClip;
            m_PassedTimer = 0;
            m_ConditionTags = new GameplayTag[] { GetTagByCondition( m_ComboClip.condition ) };

        }

        public override void DisApply(bool canceled)
        {
            m_ComboClip = null;

        }

        public override void OnUpdate(float deltaTime)
        {
            m_PassedTimer += deltaTime;
            m_ConditionFlag = m_ConditionFlag || Source.HasAllTags(m_ConditionTags);
            
            if (m_ConditionFlag && IsDelayComboEnd())
            {
                switch (m_ComboClip.type)
                {
                    case ComboEffectClip.ComboType.Ability:
                        Source.Abilitys.TryActivateAbility(m_ComboClip.comboName);
                        break;
                    case ComboEffectClip.ComboType.Action:
                        Source.Abilitys.TryActivateAbility<ActionAbility>(m_ComboClip.comboName);
                        break;
                    default:
                        break;
                }
            }
        }

        /// <summary>
        /// 延迟派生是否已经结束
        /// </summary>
        /// <returns></returns>
        private bool IsDelayComboEnd()
        {
            if (m_ComboClip == null)
                return false;
            return m_PassedTimer >= (m_ComboClip.delayComboTick - m_ComboClip.StartTick) * TimeLineAbility.c_TimeFrameSec;
        }

        private GameplayTag GetTagByCondition(ComboEffectClip.ComboCondition condition)
        {
            switch (condition)
            {
                case ComboEffectClip.ComboCondition.NormalAttack:
                    return GameplayTagsLib.Command_Fight_Attack;
                case ComboEffectClip.ComboCondition.MoveCommand:
                    return GameplayTagsLib.Command_Move;
            }

            return default;
        }
    }
}
