using LGameFramework.GameBase;
using System;
using System.Collections.Generic;

namespace GAS.Runtime
{
    public class GameplayAttributeContainer
    {
        private readonly AbilitySystemComponent m_ASC;

        private readonly Dictionary<string, GameplayAttributeSet> m_AttributeSets;

        private readonly Dictionary<string, float> m_AttributeSnapshot;

        public GameplayAttributeContainer(AbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_AttributeSets = new Dictionary<string, GameplayAttributeSet>();
            m_AttributeSnapshot = new Dictionary<string, float>();
        }

        public void OnInit(AbilitySystemArchetype archetype)
        {
            foreach (var setType in archetype.AttributeSets)
                AddAttributeSet(setType);
        }

        public void AddAttributeSet(string typeName)
        {
            if (GameplayAttributeSetLib.AttributeSetMap.TryGetValue(typeName, out var set))
                AddAttributeSet(set);
        }

        public void AddAttributeSet(Type type)
        {
            string typeName = type.Name;
            if (m_AttributeSets.ContainsKey(typeName))
                return;

            var set = InstanceCreator.Get(type) as GameplayAttributeSet;
            m_AttributeSets.Add(typeName, set);
        }

        public void AddAttributeSet<T>() where T : GameplayAttributeSet, new()
        {
            Type type = typeof(T);
            string typeName = type.Name;
            if (m_AttributeSets.ContainsKey(typeName))
                return;

            T set = new T();
            m_AttributeSets.Add(typeName, set); 
        }

        public void RemoveAttributeSet<T>() where T : GameplayAttributeSet, new()
        {
            Type type = typeof(T);
            string typeName = type.Name;
            if (!m_AttributeSets.ContainsKey(typeName))
                return;

            m_AttributeSets.Remove(typeName);
        }

        public float GetAttributeCurrentValue(string attrSetName, string attrName)
        {
            var attr = GetAttribute(attrSetName, attrName);
            return attr.CurrentValue;
        }

        public GameplayAttribute GetAttribute<T>(string attrName) where T : GameplayAttributeSet, new()
        {
            return GetAttribute(typeof(T).Name, attrName);
        }

        public GameplayAttribute GetAttribute(string attrSetName, string attrName)
        {
            if (!TryGetAttributeSet(attrSetName, out var set))
                return null;

            return set[attrName];
        }

        public GameplayAttribute GetAttribute(string fullAttrName)
        {
            var attrName = fullAttrName.Split('.');
            if (attrName.Length != 2)
                return null;

            return GetAttribute(attrName[0], attrName[1]);
        }

        public GameplayAttributeSet GetAttributeSet<T>() where T : GameplayAttributeSet, new()
        {
            return GetAttributeSet(typeof(T).Name);
        }

        public GameplayAttributeSet GetAttributeSet(string attrSetName)
        {
            return m_AttributeSets.GetValueOrDefault(attrSetName);
        }

        public bool TryGetAttributeSet<T>(out T set) where T : GameplayAttributeSet, new()
        {
            if (TryGetAttributeSet(typeof(T).Name, out var setRaw))
            {
                set = (T)setRaw;
                return true;
            }

            set = default;

            return false;
        }

        public bool TryGetAttributeSet(string attrSetName, out GameplayAttributeSet set)
        {
            if (m_AttributeSets.TryGetValue(attrSetName, out set))
                return true;

            return false;
        }

        public bool Contains<T>() where T : GameplayAttributeSet, new()
        {
            return Contains(typeof(T).Name);
        }

        public bool Contains(string attrSetName)
        {
            return m_AttributeSets.ContainsKey(attrSetName);
        }

        public void GetSnapshot(Dictionary<string, float> snapshotMap)
        {
            snapshotMap ??= new Dictionary<string, float>();
            snapshotMap.Clear();
            foreach (var set in m_AttributeSets)
            {
                foreach (var name in set.Value.AttributeNames)
                {
                    snapshotMap.Add(name, set.Value[set.Key + "." + name].CurrentValue);
                }
            }
        }
    }
}
