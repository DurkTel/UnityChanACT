using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayEffectContainer
    {
        private readonly IAbilitySystemComponent m_ASC;

        private readonly List<GameplayEffect> m_GameplayEffects;

        private readonly List<GameplayEffect> m_PreUpdateEffects;

        private readonly List<GameplayEffect> m_UpdateEffects;
        public GameplayEffectContainer(IAbilitySystemComponent asc)
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

                //�������ڵ���
                if (effectUpdate.TriggerType == EffectTriggerType.Period && currentTick > effectUpdate.TriggerPeriodStamp) 
                {
                    ApplyEffect(effectUpdate);
                    effectUpdate.UpdatePeriodTime(currentTick);
                }

                //Ч������
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
        /// Ӧ�ø���Ч
        /// </summary>
        /// <param name="effect"></param>
        private void ApplyEffect(GameplayEffect effect, params object[] paramArgs)
        {
            TryRemoveEffectByTags(effect.ConditionTags.CancelTags);
            effect.OnApply(paramArgs);
        }

        /// <summary>
        /// ���Ч��
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        private T AddEffect<T>(GameplayEffectAsset effectAsset, params object[] paramArgs) where T : GameplayEffect, new()
        {
            T effect = new T();
            effect.Source = m_ASC;
            effect.OnInit(effectAsset);
            effect.OnUpdateTime(paramArgs);

            m_GameplayEffects.Add(effect);

            //TimeLine������ʱ����update�Ƴ�
            if (effect.DurationType != EffectDurationType.Instant && effect.DurationType != EffectDurationType.TimeLine)
                m_PreUpdateEffects.Add(effect);

            ApplyEffect(effect, paramArgs);
            effect.Stacking++;
            m_ASC.Tags.AddDynamicTags(effect, effect.ConditionTags.ActivationTags);
            return effect;
        }

        /// <summary>
        /// �Ƴ�Ч��
        /// </summary>
        /// <param name="effect"></param>
        /// <param name="canceled"></param>
        public void RemoveEffect(GameplayEffect effect, bool canceled = true)
        {
            effect.DisApply(canceled);
            effect.Dispose();

            m_GameplayEffects.Remove(effect);

            if (effect.DurationType != EffectDurationType.Instant && effect.DurationType != EffectDurationType.TimeLine)
                m_PreUpdateEffects.Remove(effect);

            m_ASC.Tags.RemoveDynamicTags(effect, effect.ConditionTags.ActivationTags);
        }

        /// <summary>
        /// �������Ч��
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="effectAsset"></param>
        /// <returns></returns>
        public bool TryAddEffect<T>(GameplayEffectAsset effectAsset, out T newEffect, params object[] paramArgs) where T : GameplayEffect, new()
        {
            newEffect = null;
            if (!m_ASC.Tags.CheckTagCondition(effectAsset.BlockActiveTags, effectAsset.RequireTags))
                return false;

            var stackingEffect = effectAsset.StackingEffect;

            //����������˲ʱ�Ļ����ǲ��ѵ� ֱ�Ӽ�һ�� ��������
            if (effectAsset.DurationType == EffectDurationType.Instant || stackingEffect.stackingType == StackingType.None)
            {
                newEffect = AddEffect<T>(effectAsset, paramArgs);
                RemoveEffect(newEffect, false); //��Ϊ������ �����ɾ
                return true;
            }
            else
            {
                foreach (var effect in m_GameplayEffects)
                {
                    //����Ѿ����� ����Ӧ��һ�� ��ˢ��ʱ�䣨���Ҫ��
                    if (effect.EffectAsset.Equals(effectAsset))
                    {
                        newEffect = effect as T;
                        //ApplyEffect(effect, paramArgs);
                        if (stackingEffect.durationRefreshType == StackingDurationRefreshType.Refresh)
                            effect.UpdateEndTime();

                        if (stackingEffect.maxStackNum < effect.Stacking)
                            effect.Stacking++;

                        return true;
                    }
                }

                newEffect = AddEffect<T>(effectAsset, paramArgs);
            }

            return true;
        }

        /// <summary>
        /// ����ͨ�������Ƴ�Ч��
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
        /// ����ͨ��Tag�Ƴ�Ч��
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
