using System;

namespace GAS.Runtime
{
    /// <summary>
    /// 用作游戏表现
    /// 特效 动画等
    /// </summary>
    public abstract class GameplayCue : IDisposable
    {
        protected AbilitySystemComponent m_ASC;
        public AbilitySystemComponent ASC { get { return m_ASC; } }

        public float triggerTime;

        public virtual void OnInit(AbilitySystemComponent asc)
        { 
            m_ASC = asc;
        }

        public abstract void Trigger<V>(V arg) where V :struct;
        public abstract void Dispose();

    }
}
