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
        public string[] AttributeSets;

        /// <summary>
        /// ������
        /// </summary>
        public GameplayAbilityAsset[] AbilityAssets;
    }
}
