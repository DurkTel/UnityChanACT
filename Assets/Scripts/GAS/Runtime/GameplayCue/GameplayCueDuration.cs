using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// ������Ϸ����
    /// �ñ�����Ҫ�ڳ���ʱ����ִ��
    /// </summary>
    public abstract class GameplayCueDuration : GameplayCue, IGameplayUpdate
    {
        public bool IsActive => true;

        protected long m_EndTimeStamp;
        /// <summary>
        /// ����ʱ���
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
