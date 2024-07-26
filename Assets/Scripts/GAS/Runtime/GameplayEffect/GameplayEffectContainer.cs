using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayEffectContainer
    {
        private readonly AbilitySystemComponent m_ASC;

        private readonly List<GameplayEffect> m_GameplayEffects;

        private readonly List<GameplayEffect> m_PreUpdateEffects;

        private readonly List<GameplayEffect> m_UpdateEffects;
        public GameplayEffectContainer(AbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_GameplayEffects = new List<GameplayEffect>();
            m_PreUpdateEffects = new List<GameplayEffect>();
            m_UpdateEffects = new List<GameplayEffect>();
        }

        public void Update(float deltaTime)
        {
            if (m_PreUpdateEffects.Count <= 0)
                return;

            m_UpdateEffects.Clear();
            m_UpdateEffects.AddRange(m_PreUpdateEffects);

            long currentTick = DateTime.Now.Ticks;  

            foreach (var effectUpdate in m_UpdateEffects)
            {
                effectUpdate.OnUpdate(deltaTime);

                //触发周期到了
                if (effectUpdate.TriggerType == EffectTriggerType.Period && currentTick > effectUpdate.TriggerPeriodStamp) 
                {
                    ApplyEffect(effectUpdate);
                    effectUpdate.UpdatePeriodTime(currentTick);
                }

                //效果结束
                if (effectUpdate.DurationType != EffectDurationType.Forever && currentTick >= effectUpdate.EndTimeStamp) 
                {
                    if (effectUpdate.Stacking > 1 && effectUpdate.EffectAsset.StackingEffect.expirationType == StackingExpirationType.RemoveOnceStack)
                    {
                        effectUpdate.Stacking--;
                        effectUpdate.UpdateEndTime(currentTick);
                    }
                    else
                    {
                        RemoveEffect(effectUpdate, false);
                    }
                }
            }

        }

        /// <summary>
        /// 应用该特效
        /// </summary>
        /// <param name="effect"></param>
        private void ApplyEffect(GameplayEffect effect)
        {
            TryRemoveEffectByTags(effect.ConditionTags.CancelTags);
            effect.OnApply();
        }

        /// <summary>
        /// 添加效果
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public void AddEffect<T>(GameplayEffectAsset effectAsset) where T : GameplayEffect, new()
        {
            T effect = new T();
            effect.OnInit(effectAsset);

            m_GameplayEffects.Add(effect);

            if (effect.DurationType != EffectDurationType.Instant)
                m_PreUpdateEffects.Add(effect);

            ApplyEffect(effect);
            effect.Stacking++;
            m_ASC.AddTagFromDynamic(effect, effect.ConditionTags.ActivationTags);

        }

        /// <summary>
        /// 移除效果
        /// </summary>
        /// <param name="effect"></param>
        /// <param name="canceled"></param>
        public void RemoveEffect(GameplayEffect effect, bool canceled = true)
        {
            effect.DisApply(canceled);
            effect.Dispose();

            m_GameplayEffects.Remove(effect);

            if (effect.DurationType != EffectDurationType.Instant)
                m_PreUpdateEffects.Remove(effect);

            m_ASC.RemoveTagFromDynamic(effect, effect.ConditionTags.ActivationTags);
        }

        /// <summary>
        /// 尝试添加效果
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="effectAsset"></param>
        /// <returns></returns>
        public bool TryAddEffect<T>(GameplayEffectAsset effectAsset) where T : GameplayEffect, new()
        {
            if (!m_ASC.CheckTagCondition(effectAsset.BlockActiveTags, effectAsset.RequireTags))
                return false;

            var stackingEffect = effectAsset.StackingEffect;

            //持续类型是瞬时的或者是不堆叠 直接加一个 独立计算
            if (effectAsset.DurationType == EffectDurationType.Instant || stackingEffect.stackingType == StackingType.None)
            {
                AddEffect<T>(effectAsset);
                return true;
            }
            else
            {
                foreach (var effect in m_GameplayEffects)
                {
                    if (effect.EffectAsset.Equals(effectAsset))
                    {
                        if (stackingEffect.durationRefreshType == StackingDurationRefreshType.Refresh)
                            effect.UpdateEndTime();

                        if (stackingEffect.maxStackNum < effect.Stacking)
                            effect.Stacking++;

                        break;
                    }
                }
            }

            return true;
        }

        /// <summary>
        /// 尝试通过类型移除效果
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public void TryRemoveEffect<T>(bool removeAll = true) where T : GameplayEffect, new()
        {
            Type type = typeof(T);
            for (int i = m_GameplayEffects.Count - 1; i >= 0; i--)
            {
                if (m_GameplayEffects[i].GetType() == type)
                {
                    RemoveEffect(m_GameplayEffects[i], true);
                    if (!removeAll)
                        break;
                }
            }
        }

        /// <summary>
        /// 尝试通过Tag移除效果
        /// </summary>
        /// <param name="tags"></param>
        public void TryRemoveEffectByTags(GameplayTagSet tags)
        {
            for (int i = m_GameplayEffects.Count - 1; i >= 0; i--)
            {
                var conditionTags = m_GameplayEffects[i].ConditionTags;
                if (conditionTags.AssetTags.Equals(tags) || conditionTags.ActivationTags.Equals(tags))
                    RemoveEffect(m_GameplayEffects[i], true);
            }
        }
    }

}
