using System;
using UnityEngine;

namespace GAS.Runtime
{
    [CreateAssetMenu(fileName = "AbilitySystemArchetype", menuName = "GAS/AbilitySystemArchetype")]
    public class AbilitySystemArchetype : ScriptableObject
    {
        /// <summary>
        /// 描述
        /// </summary>
        public string Description;

        /// <summary>
        /// 原型标签
        /// </summary>
        public GameplayTag[] FixedTags;

        /// <summary>
        /// 属性集
        /// </summary>
        public string[] AttributeSets;

        /// <summary>
        /// 能力集
        /// </summary>
        public GameplayAbilityAsset[] AbilityAssets;
    }
}
