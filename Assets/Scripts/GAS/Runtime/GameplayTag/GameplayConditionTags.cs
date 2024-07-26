using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public struct GameplayConditionTags
    {
        /// <summary>
        /// 该Ability的Tag
        /// 用于标识这个Ability/Effect
        /// </summary>
        public GameplayTagSet AssetTags;

        /// <summary>
        /// 激活Tag
        /// 激活时赋予 失活时移除
        /// </summary>
        public GameplayTagSet ActivationTags;

        /// <summary>
        /// 取消Tag
        /// 激活此Ability/Effect时 取消当前拥有的带有这些Tag的Ability/Effect
        /// </summary>
        public GameplayTagSet CancelTags;

        /// <summary>
        /// 阻碍Tag
        /// 如果当前拥有的Ability/Effect中带任意一个这些Tag 此Ability/Effect将无法激活
        /// </summary>
        public GameplayTagSet BlockActiveTags;

        /// <summary>
        /// 阻碍失活Tag
        /// 如果当前实体拥有的Tag中带任意一个这些Tag 此Ability/Effect将无法失活
        /// </summary>
        public GameplayTagSet BlockInActiveTags;

        /// <summary>
        /// 必需Tag
        /// 要激活此Ability/Effect 必需拥有所有这些Tag的Ability/Effect
        /// </summary>
        public GameplayTagSet RequireTags;
    }
}
