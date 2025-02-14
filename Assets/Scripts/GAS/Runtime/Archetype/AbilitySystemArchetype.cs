using System;
using UnityEngine;

namespace GAS.Runtime
{
    [CreateAssetMenu(fileName = "AbilitySystemArchetype", menuName = "GAS/AbilitySystemArchetype")]
    public class AbilitySystemArchetype : ScriptableObject
    {
        /// <summary>
        /// ����
        /// </summary>
        public string Description;

        /// <summary>
        /// ԭ�ͱ�ǩ
        /// </summary>
        public GameplayTag[] FixedTags;

        /// <summary>
        /// ���Լ�
        /// </summary>
        public AttributeSetData[] AttributeSets;

        /// <summary>
        /// ������
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
