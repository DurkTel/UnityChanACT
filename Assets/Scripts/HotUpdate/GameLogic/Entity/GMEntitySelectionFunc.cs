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
        /// �Ƿ���Թ�����Ŀ��
        /// </summary>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static bool IsCanAttackTarget(GMEntity entity)
        {
            return true;//return entity.Tags.HasTag(GameplayTagsLib.Camp_Enemy);
        }

        /// <summary>
        /// ��ȡ����Ŀ��
        /// </summary>
        /// <returns></returns>
        public static GMEntity GetTarget(GMEntity source, bool forceRefresh = false)
        {
            //if (s_CurrentSelectId != -1 && !forceRefresh) //�Ѿ���Ŀ����
            //    return EntityUtility.GetEntity(s_CurrentSelectId);

            //ѡ�Լ��෴����Ӫ
            var tag = source.Tags.HasTag(GameplayTagsLib.Camp_Camp1) ? GameplayTagsLib.Camp_Camp2 : GameplayTagsLib.Camp_Camp1;

            EntityUtility.GetEntityList(ref m_TempList, source.Id, tag);

            //�Ȼ�ȡ����� 
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
