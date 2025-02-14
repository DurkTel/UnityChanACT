using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class EntityUtility : ModuleUtility<GMEntityManager>
    {

        public static GMEntity GetLocalEntity()
        {
            return Instance.LocalEntity;
        }

        /// <summary>
        /// 实体进入
        /// </summary>
        /// <returns></returns>
        public static GMEntity EnterEntity(AbilitySystemArchetype archetype = null)
        {
            return Instance.EnterEntity(archetype);
        }

        public static bool TryGetEntity(int entityId, out GMEntity entity)
        {
            return Instance.TryGetEntity(entityId, out entity);
        }

        public static GMEntity GetEntity(int entityId)
        {
            return Instance.GetEntity(entityId);
        }

        public static void Evaluate(int tick)
        {
            Instance.Evaluate(tick);
        }

        public static void ExitEntity(int entityId)
        {
            Instance.ExitEntity(entityId);
        }

        public static void GetEntityList(ref List<GMEntity> list, int ignore, params GameplayTag[] tag)
        {
            list.Clear();

            foreach (GMEntity entity in Instance.AllEntity.Values)
            {
                if (ignore != entity.Id && entity.Tags.HasAnyTags(tag))
                    list.Add(entity);
            }
        }
    }
}
