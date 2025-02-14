using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayAbilityContainer : IDisposable
    {
        private readonly IAbilitySystemComponent m_ASC;

        private readonly Dictionary<string, GameplayAbility> m_Abilitys;

        private readonly List<IGameplayUpdate> m_PreUpdateAbilitys;

        private readonly List<IGameplaySyncUpdate> m_PreSyncUpdateAbilitys;

        public GameplayAbilityContainer(IAbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_Abilitys = new Dictionary<string, GameplayAbility>();
            m_PreUpdateAbilitys = new List<IGameplayUpdate>();
            m_PreSyncUpdateAbilitys = new List<IGameplaySyncUpdate>();
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

        public void OnSyncUpdate(int tick)
        {
            if (m_PreSyncUpdateAbilitys.Count <= 0)
                return;

            foreach (var abilityUpdate in m_PreSyncUpdateAbilitys)
            {
                if (abilityUpdate.IsActive)
                    abilityUpdate.OnSyncUpdate(tick);
            }
        }

        private void AddAbilityInternal(GameplayAbility ability, GameplayAbilityAsset abilityAsset)
        {
            //依赖注入
            var fields = ability.GetType().GetFields(BindingFlags.NonPublic | BindingFlags.Public | BindingFlags.Instance)
            .Where(f => f.GetCustomAttributes(typeof(AbilityInject), false).Any());

            foreach (var field in fields)
            {
                var inject = field.GetCustomAttribute<AbilityInject>();
                GameplayAbility injectAbility = null;
                if (!string.IsNullOrEmpty(inject.abilityName))
                    injectAbility = GetAbility(inject.abilityName); //填了名字 就按名字找
                else
                    injectAbility = GetAbility(field.FieldType); //没填就按类型找

                if (injectAbility != null)
                    field.SetValue(ability, injectAbility);
                else
                    Debug.LogError($"依赖注入AbilityInject失败 注入名{inject.abilityName} 注入字段{field.FieldType} 注入类{ability.GetType()} 请检测是否添加了对应的Ability或者先后顺序是否正确");

            }

            ability.OnInit(abilityAsset, m_ASC);
            m_Abilitys.Add(abilityAsset.UID, ability);

            if (ability is IGameplayUpdate update)
                m_PreUpdateAbilitys.Add(update);

            if (ability is IGameplaySyncUpdate aupdate)
                m_PreSyncUpdateAbilitys.Add(aupdate);

            m_ASC.Tags.AddFixedTags(ability, ability.ConditionTags.AssetTags);

            if (ability.ConditionTags.AssetTags.HasTag(GameplayTagsLib.Ability_AutoActive))
                TryActivateAbility(abilityAsset.UID);
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

            if (ability is IGameplaySyncUpdate aupdate)
                m_PreSyncUpdateAbilitys.Remove(aupdate);

            m_ASC.Tags.RemoveFixedTags(ability);

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
        public bool TryActivateAbility<T>(params object[] paramsArgs)
        {
            return TryActivateAbility(typeof(T).Name, paramsArgs);
        }

        /// <summary>
        /// 尝试激活能力
        /// </summary>
        /// <param name="name"></param>
        /// <returns></returns>
        public bool TryActivateAbility(string name, params object[] paramsArgs)
        {
            if (!m_Abilitys.TryGetValue(name, out GameplayAbility ability))
                return false;

            if (!m_ASC.Tags.CheckTagCondition(ability.ConditionTags) || !ability.TryActivateAbility())
                return false;

            var cancelTag = ability.ConditionTags.CancelTags;
            foreach (var tag in m_Abilitys.Values)
            {
                if (!tag.IsActive)
                    continue;

                if (tag.ConditionTags.AssetTags.HasAnyTags(cancelTag))
                    TryInActivateAbility(tag.AbilityAsset.UID);
            }

            var activationTag = ability.ConditionTags.ActivationTags;
            m_ASC.Tags.AddDynamicTags(ability, activationTag);

            ability.OnActivation(paramsArgs);
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
            m_ASC.Tags.RemoveDynamicTags(ability, activationTag);
            ability.OnInactivation();

            return true;
        }

        public GameplayAbility GetAbility(string name)
        { 
            return m_Abilitys.GetValueOrDefault(name);
        }

        public T GetAbility<T>() where T : GameplayAbility
        {
            return GetAbility(typeof(T)) as T;
        }

        public GameplayAbility GetAbility(Type type)
        {
            foreach (var ability in m_Abilitys.Values)
            {
                if (ability.GetType() == type)
                    return ability;
            }

            return null;
        }

        public bool TryGetAbility(string name, out GameplayAbility ability)
        {
            return m_Abilitys.TryGetValue(name, out ability);
        }

        public bool TryGetAbility<T>(out T ability) where T : GameplayAbility
        {
            ability = GetAbility<T>();
            return ability != null;
        }

        public void Dispose()
        {
            foreach (var ability in m_Abilitys.Values)
                ability.Dispose();

            m_Abilitys.Clear();

        }
    }
}
