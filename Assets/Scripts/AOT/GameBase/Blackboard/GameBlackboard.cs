using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.Blackboard
{
    public class GameBlackboard : MonoBehaviour
    {
        private readonly Dictionary<string, BlackboardKey> m_KeysRegistry;

        private readonly Dictionary<BlackboardKey, object> m_ValueEntrys;

        public GameBlackboard() 
        {
            m_KeysRegistry = new Dictionary<string, BlackboardKey>();
            m_ValueEntrys = new Dictionary<BlackboardKey, object>();
        }

        public BlackboardKey GetOrCreateKey(string keyName)
        {
            if (!m_KeysRegistry.TryGetValue(keyName, out BlackboardKey key))
            { 
                key = new BlackboardKey(keyName);
                m_KeysRegistry[keyName] = key;
            }

            return key;
        }

        public bool TryGetValue<T>(BlackboardKey key, out T value)
        {
            if (m_ValueEntrys.TryGetValue(key, out var entry) && entry is BlackboardValue<T> castedEntry)
            { 
                value = castedEntry.Value;
                return true;
            }

            value = default;
            return false;
        }

        public void SetValue<T>(BlackboardKey key, T value)
        {
            m_ValueEntrys[key] = new BlackboardValue<T>(key, value);
        }

        public bool ContainsKey(string keyName)
        {
            return m_KeysRegistry.ContainsKey(keyName);
        }
    }
}
