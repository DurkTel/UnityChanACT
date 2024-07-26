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
        /// 此Ability固有的Tag
        /// 只要Ability在身上不管是否激活都有 用来描述这个Ability
        /// </summary>
        public GameplayTag[] FixedTags;

        /// <summary>
        /// 激活Tag
        /// 激活时赋予 失活时移除
        /// </summary>
        public GameplayTag[] ActivationTags;

        /// <summary>
        /// 取消Tag
        /// 激活此Ability时 取消当前固定带有这些Tag的Ability
        /// </summary>
        public GameplayTag[] CancelTags;

        /// <summary>
        /// 阻碍激活Tag
        /// 如果当前实体拥有的Tag中带任意一个这些Tag 此Ability将无法激活
        /// </summary>
        public GameplayTag[] BlockActiveTags;

        /// <summary>
        /// 阻碍失活Tag
        /// 如果当前实体拥有的Tag中带任意一个这些Tag 此Ability将无法失活
        /// </summary>
        public GameplayTag[] BlockInActiveTags;

        /// <summary>
        /// 必需Tag
        /// 要激活此Ability 实体必需拥有所有这些Tag
        /// </summary>
        public GameplayTag[] RequireTags;


        /*
            派生类中还可以定义其他字段用来调整Ability的数值
            不过一般是定值 在游戏过程中不会发生修改的
            如果需要修改的 请做成GameplayAttribute
         */
    }
}
