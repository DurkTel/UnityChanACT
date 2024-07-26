using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// 持续游戏表现
    /// 该表现需要在持续时间内执行
    /// </summary>
    public abstract class GameplayCueDuration : GameplayCue, IGameplayUpdate
    {
        public bool IsActive => true;

        protected long m_EndTimeStamp;
        /// <summary>
        /// 结束时间戳
        /// </summary>
        public long EndTimeStamp { get { return m_EndTimeStamp; } }

        public virtual void OnUpdate(float deltaTime)
        {
            
        }

        public virtual void OnAdd()
        { 
        
        }

        public virtual void OnRemove() 
        { 
            
        }

    }
}
