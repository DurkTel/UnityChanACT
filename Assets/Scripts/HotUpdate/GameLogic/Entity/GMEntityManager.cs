using GAS.Runtime;
using LGameFramework.GameBase;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class GMEntityManager : LogicModule
    {
        private const string c_EntityPoolName = "Entity_GameObject";

        public override int Priority => 1;

        private GameUid GameUid = new GameUid();

        private Dictionary<int, GMEntity> m_AllEntity;
        public Dictionary<int, GMEntity> AllEntity { get { return m_AllEntity; } }

        private List<GMEntity> m_UpdateEntity;

        private GMEntity m_LocalEntity;
        public GMEntity LocalEntity 
        { 
            get 
            {
                if (m_LocalEntity == null)
                {
                    foreach (var entity in AllEntity.Values)
                    {
                        if (entity.Tags.HasTag(GameplayTagsLib.Camp_Local))
                        {
                            m_LocalEntity = entity;
                            break;
                        }
                    }    
                }
                return m_LocalEntity; 
            } 
        }

        public override void OnInit()
        {
            m_AllEntity = new Dictionary<int, GMEntity>();
            m_UpdateEntity = new List<GMEntity>();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            base.Update(deltaTime, unscaledTime);
            m_UpdateEntity.Clear();
            m_UpdateEntity.AddRange(m_AllEntity.Values);
            foreach (var entity in m_UpdateEntity)
                entity.OnUpdate(deltaTime);
        }

        public override void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            base.FixedUpdate(fixedDeltaTime, unscaledTime);
            //foreach (var entity in m_AllEntity.Values)
            //    entity.OnUpdate(fixedDeltaTime);
        }

        internal void Evaluate(int tick)
        {
            m_UpdateEntity.Clear();
            m_UpdateEntity.AddRange(m_AllEntity.Values);
            foreach (var entity in m_UpdateEntity)
                entity.OnSyncUpdate(tick);
        }

        internal bool TryGetEntity(int entityId, out GMEntity entity)
        {
            return m_AllEntity.TryGetValue(entityId, out entity);
        }

        internal GMEntity GetEntity(int entityId)
        {
            return m_AllEntity[entityId];
        }

        internal GMEntity EnterEntity(AbilitySystemArchetype archetype = null)
        {
            var entity = CreateEntity();
            entity.OnInit(archetype);

            return entity;
        }

        private GMEntity CreateEntity()
        {
            int entityId = GameUid.Uid;
            GameObject go = GameObjectPool.GetGameObject(c_EntityPoolName);
            go.name = "Entity_" + entityId;
            go.transform.SetParentZero(Transform);
            go.layer = LayerMask.NameToLayer("EntityLayer");
            GMEntity entity = Pool.Get<GMEntity>();
            entity.OnInitEntity(entityId, go);

            m_AllEntity.Add(entityId, entity);
            return entity;
        }

        internal void ExitEntity(int entityId)
        {
            if (m_AllEntity.TryGetValue(entityId, out var entity))
            {
                GameObjectPool.Release(c_EntityPoolName, entity.GameObject);
                entity.Dispose();
                m_AllEntity.Remove(entityId);
                Pool.Release(entity);
            }
        }
    }
}
