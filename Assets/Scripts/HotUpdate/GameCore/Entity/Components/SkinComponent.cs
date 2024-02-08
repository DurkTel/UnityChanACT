using UnityEngine;
using LGameFramework.GameCore.Avatar;
using System.Collections.Generic;
using static LGameFramework.GameCore.GameEntity.GMEntityManager;
using UnityEngine.Animations;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ʵ��������
    /// ӵ�и��������ʵ���ڳ�����ʾ�����
    /// </summary>
    public class SkinComponent : AbstractComponent
    {

        /// <summary>
        /// ģ������ϵͳ
        /// </summary>
        private GameAvatar m_Avatar;
        public GameAvatar Avatar { get { return m_Avatar; } }
        /// <summary>
        /// ����Ƿ������
        /// </summary>
        public bool SkinLoading { get { return Avatar.IsLoading; } }

        public override void OnInit(int entity, Dictionary<EEntityAttribute, IProperty> attribute)
        {
            base.OnInit(entity, attribute);
            m_Avatar = GameObject.TryAddComponent<GameAvatar>();
            m_Avatar.OnLoadComplete.AddListener(SkinLoadComplete);
            m_Avatar.OnInit();

            LoadSkin();
        }

        public override void Release()
        {
            base.Release();
            m_Avatar.OnLoadComplete.RemoveListener(SkinLoadComplete);
            m_Avatar.Release();
        }

        public override void Dispose()
        {
            base.Dispose();
            m_Avatar.Dispose();
            m_Avatar = null;
        }


        public virtual void LoadSkin()
        {
            if (m_Avatar == null) return;
            //GameLogger.INFO("��ʼ�������");
            GameAvatar.GameAvatarPart part;
            var assets = new Dictionary<GameAvatar.AvatarPartType, string>() 
            { 
                [GameAvatar.AvatarPartType.Skeleton] = "skin_skl.prefab",
                [GameAvatar.AvatarPartType.Body] = "skin_st.prefab",
                [GameAvatar.AvatarPartType.Head] = "skin_head.prefab",
                [GameAvatar.AvatarPartType.Hair] = "skin_hair.prefab",
                [GameAvatar.AvatarPartType.Clothing] = "skin_ys.prefab",
            };
            foreach (var asset in assets)
            {
                part = m_Avatar.GetPart(asset.Key);
                if (part == null)
                    m_Avatar.AddPart(asset.Key, asset.Value);
                else
                {
                    part.OnInit(m_Avatar, asset.Key);
                    m_Avatar.UpdatePartAsset(asset.Key, asset.Value);
                }
            }

        }

        public virtual void SkinLoadComplete(GameAvatar.AvatarPartType partType)
        {
            

        }

    }
}
