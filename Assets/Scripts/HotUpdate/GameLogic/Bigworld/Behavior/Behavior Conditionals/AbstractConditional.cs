using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [TaskCategory("Entity")]
    public abstract class AbstractConditional : Conditional
    {
        /// <summary>
        /// �����Ϊ����ʵ��id
        /// </summary>
        public int EntityId { get { return (Owner as BehaviorTree).EnitityId; } }

        /// <summary>
        /// �����Ϊ����ʵ��
        /// </summary>
        public GMEntity Entity { get { return EntityUtility.GetEntity(EntityId); } }
    }
}
