using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayEffectAsset : ScriptableObject
    {
        /// <summary>
        /// 描述
        /// </summary>
        public string Description;

        /// <summary>
        /// 生效的类型
        /// </summary>
        public string Type;

        /// <summary>
        /// 持续类型
        /// </summary>
        public EffectDurationType DurationType;

        /// <summary>
        /// 触发类型
        /// </summary>
        public EffectTriggerType TriggerType;

        /// <summary>
        /// 持续时间
        /// </summary>
        public float Duration;

        /// <summary>
        /// 周期时间 
        /// 在持续时间内 每一个周期时间触发一次
        /// </summary>
        public float Period;

        /// <summary>
        /// 叠加处理
        /// </summary>
        public GameplayEffectStacking StackingEffect;

        /// <summary>
        /// 此Effect固有的Tag
        /// 只要Effect在身上不管是否激活都有 用来描述这个Effect
        /// </summary>
        public GameplayTag[] FixedTags;

        /// <summary>
        /// 激活Tag
        /// 激活时赋予 失活时移除
        /// </summary>
        public GameplayTag[] ActivationTags;

        /// <summary>
        /// 取消Tag
        /// 激活此Effect时 取消当前固定带有这些Tag的Effect
        /// </summary>
        public GameplayTag[] CancelTags;

        /// <summary>
        /// 阻碍Tag
        /// 如果当前实体拥有的Tag中带任意一个这些Tag 此Effect将无法激活
        /// </summary>
        public GameplayTag[] BlockActiveTags;

        /// <summary>
        /// 必需Tag
        /// 要激活此Effect 实体必需拥有所有这些Tag
        /// </summary>
        public GameplayTag[] RequireTags;
    }
}
