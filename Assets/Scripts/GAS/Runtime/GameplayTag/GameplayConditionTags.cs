using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public struct GameplayConditionTags
    {
        /// <summary>
        /// ��Ability��Tag
        /// ���ڱ�ʶ���Ability/Effect
        /// </summary>
        public GameplayTagSet AssetTags;

        /// <summary>
        /// ����Tag
        /// ����ʱ���� ʧ��ʱ�Ƴ�
        /// </summary>
        public GameplayTagSet ActivationTags;

        /// <summary>
        /// ȡ��Tag
        /// �����Ability/Effectʱ ȡ����ǰӵ�еĴ�����ЩTag��Ability/Effect
        /// </summary>
        public GameplayTagSet CancelTags;

        /// <summary>
        /// �谭Tag
        /// �����ǰӵ�е�Ability/Effect�д�����һ����ЩTag ��Ability/Effect���޷�����
        /// </summary>
        public GameplayTagSet BlockActiveTags;

        /// <summary>
        /// �谭ʧ��Tag
        /// �����ǰʵ��ӵ�е�Tag�д�����һ����ЩTag ��Ability/Effect���޷�ʧ��
        /// </summary>
        public GameplayTagSet BlockInActiveTags;

        /// <summary>
        /// ����Tag
        /// Ҫ�����Ability/Effect ����ӵ��������ЩTag��Ability/Effect
        /// </summary>
        public GameplayTagSet RequireTags;
    }
}
