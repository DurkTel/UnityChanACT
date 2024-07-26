using System;
using UnityEngine;

namespace GAS.Runtime
{
    public abstract class GameplayAbilityAsset : ScriptableObject
    {
        public abstract Type GetAbilityType();
        public string Name { get { return GetType().Name; } }

        public string Description;

        public string UID;

        /// <summary>
        /// ��Ability���е�Tag
        /// ֻҪAbility�����ϲ����Ƿ񼤻�� �����������Ability
        /// </summary>
        public GameplayTag[] FixedTags;

        /// <summary>
        /// ����Tag
        /// ����ʱ���� ʧ��ʱ�Ƴ�
        /// </summary>
        public GameplayTag[] ActivationTags;

        /// <summary>
        /// ȡ��Tag
        /// �����Abilityʱ ȡ����ǰ�̶�������ЩTag��Ability
        /// </summary>
        public GameplayTag[] CancelTags;

        /// <summary>
        /// �谭����Tag
        /// �����ǰʵ��ӵ�е�Tag�д�����һ����ЩTag ��Ability���޷�����
        /// </summary>
        public GameplayTag[] BlockActiveTags;

        /// <summary>
        /// �谭ʧ��Tag
        /// �����ǰʵ��ӵ�е�Tag�д�����һ����ЩTag ��Ability���޷�ʧ��
        /// </summary>
        public GameplayTag[] BlockInActiveTags;

        /// <summary>
        /// ����Tag
        /// Ҫ�����Ability ʵ�����ӵ��������ЩTag
        /// </summary>
        public GameplayTag[] RequireTags;


        /*
            �������л����Զ��������ֶ���������Ability����ֵ
            ����һ���Ƕ�ֵ ����Ϸ�����в��ᷢ���޸ĵ�
            �����Ҫ�޸ĵ� ������GameplayAttribute
         */
    }
}
