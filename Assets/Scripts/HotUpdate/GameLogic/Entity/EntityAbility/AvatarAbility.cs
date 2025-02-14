using Actioner.Runtime;
using GAS.Runtime;
using LGameFramework.GameCore.Avatar;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class AvatarAbility : GameplayAbility
    {
        private GameAvatar m_Avatar;
        public GameAvatar Avatar { get { return m_Avatar; } }

        public AvatarAbilityAsset SubAsset { get { return m_AbilityAsset as AvatarAbilityAsset; } }

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_Avatar = asc.GameObject.TryAddComponent<GameAvatar>();
            m_Avatar.OnInit();
            m_Avatar.OnLoadComplete.AddListener(OnPartLoadComplete);
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation(paramsArgs);

            m_Avatar.AddPart(GameAvatar.AvatarPartType.Skeleton, SubAsset.SkeletonName);
            m_Avatar.AddPart(GameAvatar.AvatarPartType.Body, SubAsset.BodyName);
            m_Avatar.AddPart(GameAvatar.AvatarPartType.Head, SubAsset.HeadName);
            m_Avatar.AddPart(GameAvatar.AvatarPartType.Hair, SubAsset.HairName);
            m_Avatar.AddPart(GameAvatar.AvatarPartType.Clothing, SubAsset.ClothingName);
        }

        public override void Dispose()
        {
            m_Avatar.OnLoadComplete.RemoveAllListeners();
            m_Avatar.Dispose();
            m_Avatar = null;
            base.Dispose();
        }

        private void OnPartLoadComplete(GameAvatar.AvatarPartType part)
        {
            if (part == GameAvatar.AvatarPartType.Skeleton)
            {
                var go = m_Avatar.GetPart(GameAvatar.AvatarPartType.Skeleton).Asset;
                //if (go.TryGetComponent<Animator>(out var animator))
                //    go.TryAddComponent<ActionerController>();
            }

            m_ASC.Tags.AddDynamicTags(this, part.ToTag());

            if (m_Avatar.IsComplete)
                m_ASC.Tags.AddDynamicTags(this, GameplayTagsLib.Ability_Avatar_AvatarComplete);

        }

    }

    public static class AvatarAbilityExtensions
    {
        public static GameplayTag ToTag(this GameAvatar.AvatarPartType partType)
        {
            switch (partType)
            {
                case GameAvatar.AvatarPartType.Skeleton:
                    return GameplayTagsLib.Ability_Avatar_SkeletonComplete;
                case GameAvatar.AvatarPartType.Body:
                    return GameplayTagsLib.Ability_Avatar_BodyComplete;
                case GameAvatar.AvatarPartType.Clothing:
                    return GameplayTagsLib.Ability_Avatar_ClothingComplete;
                case GameAvatar.AvatarPartType.Head:
                    return GameplayTagsLib.Ability_Avatar_HeadComplete;
                case GameAvatar.AvatarPartType.Hair:
                    return GameplayTagsLib.Ability_Avatar_HairComplete;
            }

            return default;
        }

        public static GameAvatar.AvatarPartType ToPartType(this GameplayTag tag)
        {
            if (tag == GameplayTagsLib.Ability_Avatar_SkeletonComplete)
                return GameAvatar.AvatarPartType.Skeleton;
            else if (tag == GameplayTagsLib.Ability_Avatar_BodyComplete)
                return GameAvatar.AvatarPartType.Body;
            else if (tag == GameplayTagsLib.Ability_Avatar_ClothingComplete)
                return GameAvatar.AvatarPartType.Clothing;
            else if (tag == GameplayTagsLib.Ability_Avatar_HeadComplete)
                return GameAvatar.AvatarPartType.Head;
            else if (tag == GameplayTagsLib.Ability_Avatar_HairComplete)
                return GameAvatar.AvatarPartType.Hair;

            return default;
        }
    }
}
