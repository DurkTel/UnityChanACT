using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayAbilityContainer
    {
        private readonly AbilitySystemComponent m_ASC;

        private readonly Dictionary<string, GameplayAbility> m_Abilitys;

        private readonly List<IGameplayUpdate> m_PreUpdateAbilitys;

        private readonly List<IGameplayAnimationUpdate> m_PreAnimationUpdateAbilitys;

        public GameplayAbilityContainer(AbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_Abilitys = new Dictionary<string, GameplayAbility>();
            m_PreUpdateAbilitys = new List<IGameplayUpdate>();
            m_PreAnimationUpdateAbilitys = new List<IGameplayAnimationUpdate>();
        }

        public void OnInit(AbilitySystemArchetype archetype)
        {
            foreach (var ability in archetype.AbilityAssets)
                AddAbility(ability);
        }

        public void Update(float deltaTime)
        {
            if (m_PreUpdateAbilitys.Count <= 0)
                return;

            foreach (var abilityUpdate in m_PreUpdateAbilitys)
            {
                if (abilityUpdate.IsActive)
                    abilityUpdate.OnUpdate(deltaTime);
            }
                    
        }

        public void OnAnimationUpdate()
        {
            if (m_PreAnimationUpdateAbilitys.Count <= 0)
                return;

            foreach (var abilityUpdate in m_PreAnimationUpdateAbilitys)
            {
                if (abilityUpdate.IsActive)
                    abilityUpdate.OnAnimationUpdate();
            }
        }

        private void AddAbilityInternal(GameplayAbility ability, GameplayAbilityAsset abilityAsset)
        {
            ability.OnInit(abilityAsset, m_ASC);
            m_Abilitys.Add(abilityAsset.UID, ability);

            if (ability is IGameplayUpdate update)
                m_PreUpdateAbilitys.Add(update);

            if (ability is IGameplayAnimationUpdate aupdate)
                m_PreAnimationUpdateAbilitys.Add(aupdate);

            m_ASC.AddTagFromFixed(ability);
        }

        public bool AddAbility(GameplayAbilityAsset abilityAsset)
        {
            Type type = abilityAsset.GetAbilityType();
            var name = abilityAsset.UID;
            if (m_Abilitys.ContainsKey(name))
                return false;

            var ability = InstanceCreator.Get(type) as GameplayAbility;
            AddAbilityInternal(ability, abilityAsset);

            return true;
        }

        /// <summary>
        /// 添加能力
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public bool AddAbility<T>(GameplayAbilityAsset abilityAsset) where T : GameplayAbility, new()
        {
            var name = abilityAsset.UID;
            if (m_Abilitys.ContainsKey(name))
                return false;

            T ability = new T();
            AddAbilityInternal(ability, abilityAsset);

            return true;
        }

        public bool RemoveAbility(string name)
        {
            if (!m_Abilitys.TryGetValue(name, out GameplayAbility ability))
                return false;

            ability.Dispose();
            m_Abilitys.Remove(name);

            if (ability is IGameplayUpdate update)
                m_PreUpdateAbilitys.Remove(update);

            if (ability is IGameplayAnimationUpdate aupdate)
                m_PreAnimationUpdateAbilitys.Remove(aupdate);

            m_ASC.RemoveTagFromFixed(ability);

            return true;
        }

        /// <summary>
        /// 移除能力
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public bool RemoveAbility<T>()
        {
            return RemoveAbility(typeof(T).Name);
        }

        /// <summary>
        /// 尝试激活能力
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public bool TryActivateAbility<T>()
        {
            return TryActivateAbility(typeof(T).Name);
        }

        /// <summary>
        /// 尝试激活能力
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public bool TryActivateAbility(string name)
        {
            if (!m_Abilitys.TryGetValue(name, out GameplayAbility ability))
                return false;

            if (!m_ASC.CheckTagCondition(ability.ConditionTags) || !ability.TryActivateAbility())
                return false;

            var cancelTag = ability.ConditionTags.CancelTags;
            foreach (var tag in m_Abilitys.Values)
            {
                if (!tag.IsActive)
                    continue;

                if (tag.ConditionTags.AssetTags.HasAnyTags(cancelTag))
                    tag.TryInActivateAbility();
            }

            var activationTag = ability.ConditionTags.ActivationTags;
            m_ASC.AddTagFromDynamic(ability, activationTag);

            ability.OnActivation();
            return true;
        }

        /// <summary>
        /// 尝试失活能力
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <returns></returns>
        public bool TryInActivateAbility<T>()
        {
            return TryInActivateAbility(typeof(T).Name);
        }

        /// <summary>
        /// 尝试失活能力
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public bool TryInActivateAbility(string name)
        {
            if (!m_Abilitys.TryGetValue(name, out GameplayAbility ability))
                return false;

            var cancelTag = ability.ConditionTags.BlockInActiveTags;

            if (m_ASC.Tags.HasAnyTags(cancelTag))
                return false;

            if (!ability.TryInActivateAbility())
                return false;

            var activationTag = ability.ConditionTags.ActivationTags;
            m_ASC.RemoveTagFromDynamic(ability, activationTag);
            ability.OnInactivation();

            return true;
        }

    }
}
