using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using GAS.Runtime;
using LGameFramework.GameBase.RangeDetection;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class CanSeeTarget : AbstractConditional
    {
        private List<GMEntity> m_TempList = new List<GMEntity>();

        public SharedInt targetEntityId;

        public SharedFloat angel;

        public SharedFloat radius;

        private Fanshaped m_Fanshaped;

        private GameplayTag m_TargetTag;

        public override void OnAwake()
        {
            base.OnAwake();
            m_Fanshaped = new Fanshaped(angel.Value, radius.Value);
            //选自己相反的阵营
            m_TargetTag = Entity.Tags.HasTag(GameplayTagsLib.Camp_Camp1) ? GameplayTagsLib.Camp_Camp2 : GameplayTagsLib.Camp_Camp1;
        }

        public override TaskStatus OnUpdate()
        {
            
            EntityUtility.GetEntityList(ref m_TempList, EntityId, m_TargetTag, GameplayTagsLib.Camp_Local);

            //先获取最近的 
            Vector3 localPos = Entity.Transform.position;
            Vector3 forward = Entity.Transform.forward;
            float minDis = float.MaxValue;
            int target = -1;
            foreach (var entity in m_TempList)
            {
                if (!m_Fanshaped.IsInZone(localPos, forward, entity.Transform.position))
                    continue;

                float newDis = Vector3.Distance(localPos, entity.Transform.position);
                if (newDis < minDis)
                {
                    minDis = newDis;
                    target = entity.Id;
                }
            }

            targetEntityId.Value = target;
            return target == -1 ? TaskStatus.Failure : TaskStatus.Success;
        }

        public override void OnDrawGizmos()
        {

            float x = m_Fanshaped.radius * Mathf.Sin(m_Fanshaped.angel / 2 * Mathf.Deg2Rad);
            float y = Mathf.Sqrt(Mathf.Pow(m_Fanshaped.radius, 2) - Mathf.Pow(x, 2f));
            float dir = Entity.Transform.forward.z > 0 ? 1f : -1f;
            Vector3 a = new Vector3(Entity.Transform.position.x - x, 0, (Entity.Transform.position.z + y * dir));
            Vector3 b = new Vector3(Entity.Transform.position.x + x, 0, Entity.Transform.position.z + y * dir);

            Gizmos.DrawLine(Entity.Transform.position, a);
            Gizmos.DrawLine(Entity.Transform.position, b);

            float half = m_Fanshaped.angel / 2;
            int num = 10;
            for (int j = 0; j < num; j++)
            {
                float temp = half / num;
                temp *= j;
                x = m_Fanshaped.radius * Mathf.Sin(temp * Mathf.Deg2Rad);
                y = Mathf.Sqrt(Mathf.Pow(m_Fanshaped.radius, 2) - Mathf.Pow(x, 2f));
                a = new Vector3(Entity.Transform.position.x - x, 0, Entity.Transform.position.z + y * dir);
                Gizmos.DrawSphere(a, 0.05f);
                x = m_Fanshaped.radius * Mathf.Sin(-temp * Mathf.Deg2Rad);
                y = Mathf.Sqrt(Mathf.Pow(m_Fanshaped.radius, 2) - Mathf.Pow(x, 2f));
                a = new Vector3(Entity.Transform.position.x - x, 0, Entity.Transform.position.z + y * dir);
                Gizmos.DrawSphere(a, 0.05f);
            }
        }
    }
}
