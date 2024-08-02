using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// 持续类型
    /// </summary>
    public enum EffectDurationType
    {
        /// <summary>
        /// 瞬间
        /// </summary>
        Instant,
        /// <summary>
        /// 限时
        /// </summary>
        Duration,
        /// <summary>
        /// 永远
        /// </summary>
        Forever,
        /// <summary>
        /// 时间轴控制
        /// </summary>
        TimeLine,
    }

    /// <summary>
    /// 触发类型 什么时候调用OnApply
    /// 如果持续类型是Instant 这个字段将无效
    /// </summary>
    public enum EffectTriggerType
    {
        None,
        /// <summary>
        /// 周期性触发
        /// </summary>
        Period,
    }

    public class GameplayEffect : IDisposable, IGameplayGrantTag, IGameplayUpdate
    {
        private GameplayEffectAsset m_EffectAsset;
        public GameplayEffectAsset EffectAsset { get { return m_EffectAsset; } }

        private EffectDurationType m_DurationType;
        public EffectDurationType DurationType { get { return m_DurationType; } }

        private EffectTriggerType m_TriggerType;
        public EffectTriggerType TriggerType { get { return m_TriggerType; } }

        private GameplayConditionTags m_ConditionTags;
        public GameplayConditionTags ConditionTags { get { return m_ConditionTags; } }

        private DateTime m_StartTime;

        private long m_EndTimeStamp;
        /// <summary>
        /// 结束时间戳
        /// </summary>
        public long EndTimeStamp { get { return m_EndTimeStamp; } }

        private long m_TriggerPeriodStamp;
        /// <summary>
        /// 周期性下一次触发的时间戳
        /// </summary>
        public long TriggerPeriodStamp { get { return m_TriggerPeriodStamp; } }

        private float m_Period;
        /// <summary>
        /// 周期性时间
        /// </summary>
        public float Period { get { return m_Period; } }

        private float m_Duration;
        /// <summary>
        /// 持续时间
        /// </summary>
        public float Duration { get { return m_Duration; } set { m_Duration = value; } }

        private int m_Stacking;
        /// <summary>
        /// 堆叠数
        /// </summary>
        public int Stacking { get { return m_Stacking; } set { m_Stacking = value; } }

        private AbilitySystemComponent m_Source;
        /// <summary>
        /// 发起者
        /// </summary>
        public AbilitySystemComponent Source { get {  return m_Source; } set { m_Source = value; } }

        private AbilitySystemComponent m_Target;
        /// <summary>
        /// 目标者
        /// </summary>
        public AbilitySystemComponent Target { get {  return m_Target; } set { m_Target = value; } }

        private Dictionary<string, float> m_AttributeSnapshot;
        /// <summary>
        /// 属性快照
        /// </summary>
        public Dictionary<string, float> AttributeSnapshot { get {  return m_AttributeSnapshot; } }

        public bool IsActive => true;

        public void OnInit(GameplayEffectAsset effectAsset)
        {
            m_Stacking = 0;
            m_EffectAsset = effectAsset;
            m_DurationType = effectAsset.DurationType;
            m_TriggerType = effectAsset.TriggerType;
            m_Duration = effectAsset.Duration;
            m_ConditionTags = new GameplayConditionTags();
            m_ConditionTags.AssetTags = new GameplayTagSet(effectAsset.FixedTags);
            m_ConditionTags.ActivationTags = new GameplayTagSet(effectAsset.ActivationTags);
            m_ConditionTags.CancelTags = new GameplayTagSet(effectAsset.CancelTags);
            m_ConditionTags.BlockActiveTags = new GameplayTagSet(effectAsset.BlockActiveTags);
            m_ConditionTags.RequireTags = new GameplayTagSet(effectAsset.RequireTags);

        }

        public virtual void OnUpdateTime(params object[] paramArgs)
        {
            m_StartTime = DateTime.Now;
            if (m_DurationType != EffectDurationType.Instant)
            {
                UpdateEndTime(m_StartTime.Ticks);
                if (m_TriggerType == EffectTriggerType.Period)
                    UpdatePeriodTime(m_StartTime.Ticks);
            }
        }

        public virtual void OnUpdate(float deltaTime)
        {
            
        }

        /// <summary>
        /// 应用效果时
        /// </summary>
        public virtual void OnApply(params object[] paramArgs)
        {
            
        }

        /// <summary>
        /// 取消效果时
        /// </summary>
        public virtual void DisApply(bool canceled)
        {

        }

        public virtual void Dispose()
        {
            m_EffectAsset = null;
            m_Source = null;
            m_Target = null;
            m_Duration = 0;
            m_Period = 0;

            if (m_AttributeSnapshot != null)
            {
                m_AttributeSnapshot.Clear();
                m_AttributeSnapshot = null;
            }
        }

        public virtual void UpdateEndTime(long? curStamp = null)
        {
            m_EndTimeStamp = curStamp != null ? (long)curStamp + (long)(Duration * 10000000d) : DateTime.Now.Ticks + (long)(Duration * 10000000d);
        }

        public virtual void UpdatePeriodTime(long? curStamp = null)
        {
            m_TriggerPeriodStamp = curStamp != null ? (long)curStamp + (long)(Period * 10000000d) : DateTime.Now.Ticks + (long)(Period * 10000000d);
        }
    }
}
