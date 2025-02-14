using System.Linq;
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public struct GameplayTag
    {
        [SerializeField]
        private string m_FullName;

        /// <summary>
        /// 全路径名
        /// </summary>
        public string FullName { get { return m_FullName; } }

        [SerializeField]
        private string m_ShortName;

        /// <summary>
        /// 小名
        /// </summary>
        public string ShortName { get { return m_ShortName; } }

        [SerializeField]
        private int m_HashCode;

        /// <summary>
        /// 全路径哈希
        /// </summary>
        public int HashCode { get { return m_HashCode; } }

        [SerializeField]
        private int[] m_ParentHasCodes;

        /// <summary>
        /// 路径上父tag的哈希
        /// </summary>
        public int[] ParentHasCodes { get { return m_ParentHasCodes; } }

        [SerializeField]
        private string[] m_ParentNames;

        /// <summary>
        /// 路径上父tag的名称
        /// </summary>
        public string[] ParentNames { get { return m_ParentNames; } }

        /// <summary>
        /// 路径长度
        /// </summary>
        public int Count { get { return m_ParentHasCodes.Length + 1; } }

        /// <summary>
        /// 是否根节点
        /// </summary>
        public bool IsRoot { get { return m_ParentHasCodes.Length == 0; } }

        public GameplayTag(string name)
        { 
            m_FullName = name;
            m_HashCode = name.GetHashCode();

            var tags = name.Split('.');
            int count = tags.Length - 1;
            m_ParentHasCodes = new int[count];
            m_ParentNames = new string[count];
            int i = 0;
            string parentTag = "";
            while (i < count)
            {
                parentTag += tags[i];
                m_ParentHasCodes[i] = parentTag.GetHashCode();
                m_ParentNames[i] = parentTag;
                parentTag += ".";
                i++;
            }

            m_ShortName = tags.Last();
        }

        public bool HasTag(GameplayTag tag)
        {
            foreach (var ancestorHashCode in m_ParentHasCodes)
                if (ancestorHashCode == tag.HashCode)
                    return true;

            return this == tag;
        }

        public override int GetHashCode()
        {
            return HashCode;
        }

        public override bool Equals(object obj)
        {
            if (obj is string tag1)
                return this == tag1;
            else if (obj is GameplayTag tag2)
                return this == tag2;

            return false;
        }

        public static bool operator ==(GameplayTag x, GameplayTag y)
        {
            return x.HashCode == y.HashCode;
        }

        public static bool operator !=(GameplayTag x, GameplayTag y)
        {
            return x.HashCode != y.HashCode;
        }

        public static bool operator ==(GameplayTag x, string y)
        {
            return x.FullName == y;
        }

        public static bool operator !=(GameplayTag x, string y)
        {
            return x.FullName != y;
        }
    }
}
