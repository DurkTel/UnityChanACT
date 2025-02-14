using System;

namespace GAS.Runtime
{
    /// <summary>
    /// ������Ϸ����
    /// ��Ч ������
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
