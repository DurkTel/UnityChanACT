using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GAS.Runtime;

namespace LGameFramework.GameLogic
{
    
    public class GMEntitySelectionFunc
    {
        public static int s_CurrentSelectId = -1;

        private static List<GMEntity> m_TempList = new List<GMEntity>();

        /// <summary>
        /// 是否可以攻击的目标
        /// </summary>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static bool IsCanAttackTarget(GMEntity entity)
        {
            return true;//return entity.Tags.HasTag(GameplayTagsLib.Camp_Enemy);
        }

        /// <summary>
        /// 获取攻击目标
        /// </summary>
        /// <returns></returns>
        public static GMEntity GetTarget(GMEntity source, bool forceRefresh = false)
        {
            //if (s_CurrentSelectId != -1 && !forceRefresh) //已经有目标了
            //    return EntityUtility.GetEntity(s_CurrentSelectId);

            //选自己相反的阵营
            var tag = source.Tags.HasTag(GameplayTagsLib.Camp_Camp1) ? GameplayTagsLib.Camp_Camp2 : GameplayTagsLib.Camp_Camp1;

            EntityUtility.GetEntityList(ref m_TempList, source.Id, tag);

            //先获取最近的 
            Vector3 localPos = source.Transform.position;
            float minDis = float.MaxValue;
            GMEntity target = null;
            foreach (var entity in m_TempList)
            {
                //if (!IsCanAttackTarget(entity))
                //    continue;
                float newDis = Vector3.Distance(localPos, entity.Transform.position);
                if (newDis < minDis)
                { 
                    minDis = newDis;
                    target = entity;
                }
            }

            //s_CurrentSelectId = target.Id;
            return target;
        }
    }
}
