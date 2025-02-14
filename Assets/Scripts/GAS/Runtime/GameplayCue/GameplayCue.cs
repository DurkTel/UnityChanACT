using System;

namespace GAS.Runtime
{
    /// <summary>
    /// 用作游戏表现
    /// 特效 动画等
    /// </summary>
    public abstract class GameplayCue : IDisposable
    {
        protected IAbilitySystemComponent m_ASC;
        public IAbilitySystemComponent ASC { get { return m_ASC; } }

        public float triggerTime;

        public virtual void OnInit(IAbilitySystemComponent asc)
        { 
            m_ASC = asc;
        }

        public abstract void Trigger<V>(V arg) where V :struct;
        public abstract void Dispose();

    }
}
