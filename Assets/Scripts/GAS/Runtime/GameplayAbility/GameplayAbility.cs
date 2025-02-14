using System;

namespace GAS.Runtime
{
    public class GameplayAbility : IDisposable, IGameplayGrantTag
    {
        protected GameplayAbilityAsset m_AbilityAsset;
        public GameplayAbilityAsset AbilityAsset { get { return m_AbilityAsset; } }

        protected GameplayConditionTags m_ConditionTags;
        public GameplayConditionTags ConditionTags { get { return m_ConditionTags; } }

        protected bool m_IsActive;
        public bool IsActive { get { return m_IsActive; } }

        protected IAbilitySystemComponent m_ASC;

        public virtual void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_AbilityAsset = abilityAsset;
            m_ConditionTags = new GameplayConditionTags();
            m_ConditionTags.AssetTags = new GameplayTagSet(abilityAsset.FixedTags);
            m_ConditionTags.ActivationTags = new GameplayTagSet(abilityAsset.ActivationTags);
            m_ConditionTags.CancelTags = new GameplayTagSet(abilityAsset.CancelTags);
            m_ConditionTags.BlockActiveTags = new GameplayTagSet(abilityAsset.BlockActiveTags);
            m_ConditionTags.BlockInActiveTags = new GameplayTagSet(abilityAsset.BlockInActiveTags);
            m_ConditionTags.RequireTags = new GameplayTagSet(abilityAsset.RequireTags);
        }

        /// <summary>
        /// ���Լ�������
        /// һ�������ȴ ���ĵ�
        /// </summary>
        public virtual bool TryActivateAbility()
        {
            m_IsActive = true;
            return true;
        }

        /// <summary>
        /// ����ʧ������
        /// </summary>
        /// <returns></returns>
        public virtual bool TryInActivateAbility()
        {
            m_IsActive = false;
            return true;
        }

        /// <summary>
        /// ��������ʱ
        /// </summary>
        public virtual void OnActivation(params object[] paramsArgs)
        { 
            
        }

        /// <summary>
        /// ʧ������ʱ
        /// </summary>
        public virtual void OnInactivation()
        { 
            
        }

        public virtual void Dispose()
        {
            
        }
    }
}
