using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayEffectAsset : ScriptableObject
    {
        /// <summary>
        /// ����
        /// </summary>
        public string Description;

        /// <summary>
        /// ��Ч������
        /// </summary>
        public string Type;

        /// <summary>
        /// ��������
        /// </summary>
        public EffectDurationType DurationType;

        /// <summary>
        /// ��������
        /// </summary>
        public EffectTriggerType TriggerType;

        /// <summary>
        /// ����ʱ��
        /// </summary>
        public float Duration;

        /// <summary>
        /// ����ʱ�� 
        /// �ڳ���ʱ���� ÿһ������ʱ�䴥��һ��
        /// </summary>
        public float Period;

        /// <summary>
        /// ���Ӵ���
        /// </summary>
        public GameplayEffectStacking StackingEffect;

        /// <summary>
        /// ��Effect���е�Tag
        /// ֻҪEffect�����ϲ����Ƿ񼤻�� �����������Effect
        /// </summary>
        public GameplayTag[] FixedTags;

        /// <summary>
        /// ����Tag
        /// ����ʱ���� ʧ��ʱ�Ƴ�
        /// </summary>
        public GameplayTag[] ActivationTags;

        /// <summary>
        /// ȡ��Tag
        /// �����Effectʱ ȡ����ǰ�̶�������ЩTag��Effect
        /// </summary>
        public GameplayTag[] CancelTags;

        /// <summary>
        /// �谭Tag
        /// �����ǰʵ��ӵ�е�Tag�д�����һ����ЩTag ��Effect���޷�����
        /// </summary>
        public GameplayTag[] BlockActiveTags;

        /// <summary>
        /// ����Tag
        /// Ҫ�����Effect ʵ�����ӵ��������ЩTag
        /// </summary>
        public GameplayTag[] RequireTags;
    }
}
