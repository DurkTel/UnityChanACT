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
        public AttributeSetData[] AttributeSets;

        /// <summary>
        /// 能力集
        /// </summary>
        public GameplayAbilityAsset[] AbilityAssets;
    }

    [Serializable]
    public struct AttributeSetData
    {
        public string AttributeSetName;

        public AttributeData[] AttributeData;
    }

    [Serializable]
    public struct AttributeData
    {
        public string AttributeName;

        public float BaseValue;
    }
}
