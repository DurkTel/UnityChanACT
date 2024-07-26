using System;

namespace LGameFramework.GameBase.Blackboard
{
    [Serializable]
    public class BlackboardValue<T>
    {
        private BlackboardKey m_Key;
        public BlackboardKey Key { get { return m_Key; } }

        private T m_Value;
        public T Value { get { return m_Value; } }

        private Type m_ValueType;
        public Type ValueType { get { return m_ValueType; } }

        public BlackboardValue(BlackboardKey key, T value)
        {
            m_Key = key;
            m_Value = value;
            m_ValueType = typeof(T);
        }
    }
}
