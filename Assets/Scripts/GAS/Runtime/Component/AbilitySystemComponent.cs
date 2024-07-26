using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class AbilitySystemComponent : MonoBehaviour
    {
        [SerializeField]
        private AbilitySystemArchetype m_Archetype;

        private bool m_IsInit;
        
        private GameplayAbilityContainer m_AbilityContainer;
        public GameplayAbilityContainer Abilitys { get { return m_AbilityContainer; } }

        private GameplayTagContainer m_TagContainer;
        public GameplayTagContainer Tags { get { return m_TagContainer; } }

        private GameplayAttributeContainer m_AttributeContainer;
        public GameplayAttributeContainer Attributes { get { return m_AttributeContainer; } }

        private GameplayEffectContainer m_EffectContainer;
        public GameplayEffectContainer Effects { get { return m_EffectContainer; } }    

        private GameplayCueContainer m_CueContainer;
        public GameplayCueContainer Cues { get { return m_CueContainer; } }

        private void Awake()
        {
            OnInit();
        }

        public void OnInit()
        {
            if (m_IsInit) return;
            m_TagContainer = new GameplayTagContainer(this);
            m_AttributeContainer = new GameplayAttributeContainer(this);
            m_AbilityContainer = new GameplayAbilityContainer(this);
            m_EffectContainer = new GameplayEffectContainer(this);
            m_CueContainer = new GameplayCueContainer(this);

            if (m_Archetype != null)
            {
                m_TagContainer.OnInit(m_Archetype);
                m_AttributeContainer.OnInit(m_Archetype);
                m_AbilityContainer.OnInit(m_Archetype);
            }

            m_IsInit = true;
        }

        public void OnUpdate(float deltaTime)
        {
            m_AbilityContainer.Update(deltaTime);
            m_EffectContainer.Update(deltaTime);
            m_CueContainer.Update(deltaTime);
        }

        private void OnAnimatorMove()
        {
            m_AbilityContainer.OnAnimationUpdate();
        }

        /// <summary>
        /// 添加固定Tag
        /// </summary>
        /// <param name="ability"></param>
        public void AddTagFromFixed(GameplayAbility ability)
        { 
            m_TagContainer.AddFixedTags(ability, ability.ConditionTags.AssetTags);
        }

        /// <summary>
        /// 移除固定Tag
        /// </summary>
        /// <param name="ability"></param>
        public void RemoveTagFromFixed(GameplayAbility ability)
        {
            m_TagContainer.RemoveFixedTags(ability, ability.ConditionTags.AssetTags);
        }

        /// <summary>
        /// 添加动态Tag
        /// </summary>
        /// <param name="grant"></param>
        /// <param name="tags"></param>
        public void AddTagFromDynamic(IGameplayGrantTag grant, GameplayTagSet tags)
        {
            m_TagContainer.AddDynamicTags(grant, tags);
        }

        /// <summary>
        /// 移除动态Tag
        /// </summary>
        /// <param name="grant"></param>
        /// <param name="tags"></param>
        public void RemoveTagFromDynamic(IGameplayGrantTag grant, GameplayTagSet tags)
        {
            m_TagContainer.RemoveDynamicTags(grant, tags);
        }

        /// <summary>
        /// 检测条件Tag
        /// </summary>
        /// <param name="conditionTags"></param>
        /// <returns></returns>
        public bool CheckTagCondition(GameplayConditionTags conditionTags)
        {
            var checkTags = conditionTags.BlockActiveTags;

            if (HasAnyTags(checkTags))
                return false;

            checkTags = conditionTags.RequireTags;
            if (!HasAllTags(checkTags))
                return false;

            return true;
        }

        /// <summary>
        /// 检测条件Tag
        /// </summary>
        /// <param name="conditionTags"></param>
        /// <returns></returns>
        public bool CheckTagCondition(GameplayTag[] blockActiveTags, GameplayTag[] requireTags)
        {
            if (HasAnyTags(blockActiveTags))
                return false;

            if (!HasAllTags(requireTags))
                return false;

            return true;
        }

        public bool HasTag(GameplayTag tag)
        {
            return m_TagContainer.HasTag(tag);
        }

        public bool HasAnyTags(GameplayTagSet other)
        {
            return m_TagContainer.HasAnyTags(other);
        }

        public bool HasAnyTags(params GameplayTag[] tags)
        {
            return m_TagContainer.HasAnyTags(tags);
        }

        public bool HasAllTags(GameplayTagSet other)
        {
            return m_TagContainer.HasAllTags(other);
        }

        public bool HasAllTags(params GameplayTag[] tags)
        {
            return m_TagContainer.HasAllTags(tags);
        }

        public bool HasNoneTags(GameplayTagSet other)
        {
            return m_TagContainer.HasNoneTags(other);
        }

        public bool HasNoneTags(params GameplayTag[] tags)
        {
            return m_TagContainer.HasNoneTags(tags);
        }
    }


    public interface IGameplayUpdate
    {
        public bool IsActive { get; }
        public void OnUpdate(float deltaTime);
    }

    public interface IGameplayAnimationUpdate
    {
        public bool IsActive { get; }
        public void OnAnimationUpdate();
    }

    public interface IGameplayGrantTag
    {
        public GameplayConditionTags ConditionTags { get; }

    }
}
