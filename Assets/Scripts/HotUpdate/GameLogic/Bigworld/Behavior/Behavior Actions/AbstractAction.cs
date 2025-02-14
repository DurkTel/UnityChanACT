using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BehaviorDesigner.Runtime;
using BehaviorDesigner.Runtime.Tasks;

namespace LGameFramework.GameLogic
{
    [TaskCategory("Entity")]
    public abstract class AbstractAction : Action
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
