using System;

namespace LGameFramework.GameBase.Blackboard
{
    [Serializable]
    public readonly struct BlackboardKey : IEquatable<BlackboardKey>
    {
        private readonly string m_Name;

        private readonly int m_HashedCode;

        public BlackboardKey(string name)
        { 
            m_Name = name;  
            m_HashedCode = ComputeFNV1aHash(name);
        }

        public bool Equals(BlackboardKey other)
        {
            return m_HashedCode == other.m_HashedCode;
        }

        public override bool Equals(object obj)
        {
            return obj is BlackboardKey other && Equals(other);
        }

        public override int GetHashCode()
        {
            return m_HashedCode;
        }

        public static bool operator ==(BlackboardKey x, BlackboardKey y)
        {
            return x.m_HashedCode == y.m_HashedCode;
        }

        public static bool operator !=(BlackboardKey x, BlackboardKey y)
        {
            return x.m_HashedCode != y.m_HashedCode;
        }

        //TODO 改成扩展方法
        private static int ComputeFNV1aHash(string str)
        { 
            uint hash = 2166136261;
            foreach (char c in str)
                hash = (hash ^ c) * 16777619;

            return unchecked((int)hash);    
        }
    }
}
