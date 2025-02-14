using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public interface IAbilitySystemComponent
    {
        public int Id { get; }
        public GameplayAbilityContainer Abilitys { get; }
        public GameplayTagContainer Tags { get; }
        public GameplayAttributeContainer Attributes { get; }
        public GameplayEffectContainer Effects { get; }
        public GameplayCueContainer Cues { get; }
        public GameObject GameObject { get; }
        public Transform Transform { get; }
        public void OnInit(AbilitySystemArchetype archetype);
        public void OnUpdate(float deltaTime);
    }
}
