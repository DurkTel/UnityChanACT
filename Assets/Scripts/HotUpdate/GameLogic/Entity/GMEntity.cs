using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class GMEntity : IAbilitySystemComponent, IDisposable
    {
        private AbilitySystemArchetype m_Archetype;

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

        private int m_EntityId;
        public int Id { get { return m_EntityId; } }

        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }
        public Transform Transform { get { return GameObject.transform; } }


        public void OnInitEntity(int entityId, GameObject go)
        {
            m_EntityId = entityId;
            m_GameObject = go;
        }

        public void OnInit(AbilitySystemArchetype archetype)
        {
            m_TagContainer = new GameplayTagContainer(this);
            m_AttributeContainer = new GameplayAttributeContainer(this);
            m_AbilityContainer = new GameplayAbilityContainer(this);
            m_EffectContainer = new GameplayEffectContainer(this);
            m_CueContainer = new GameplayCueContainer(this);

            m_Archetype = archetype;
            if (m_Archetype != null)
            {
                m_TagContainer.OnInit(m_Archetype);
                m_AttributeContainer.OnInit(m_Archetype);
                m_AbilityContainer.OnInit(m_Archetype);
            }

        }

        public void OnUpdate(float deltaTime)
        {
            m_AbilityContainer.Update(deltaTime);
            m_EffectContainer.Update(deltaTime);
            m_CueContainer.Update(deltaTime);

            if (Id <= 1)
                DebugHelper.DrawLabel($"HP:{m_AttributeContainer.GetAttributeCurrentValue("Fight", "HP")}", Transform.position + Vector3.up * 1.7f, Color.green, 0.1f);
        }

        public void OnSyncUpdate(int tick)
        {
            m_AbilityContainer.OnSyncUpdate(tick);
        }

        public void Dispose()
        {
            m_AbilityContainer.Dispose();
            m_AbilityContainer = null;
            m_GameObject = null;
        }
    }
}
