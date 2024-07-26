using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    [Serializable]
    public class GameplayAttribute : IDisposable
    {
        [SerializeField]
        private string m_FullName;
        public string FullName { get { return m_FullName; } }

        [SerializeField]
        private string m_SetName;
        public string SetName { get { return m_SetName; } }

        [SerializeField]
        private string m_Name;
        public string Name { get { return m_Name; } }

        [SerializeField]
        private GameplayAttributeValue m_Value;
        public float BaseValue { get { return m_Value.BaseValue; } }
        public float CurrentValue { get { return m_Value.CurrentValue; } }

        public GameplayAttribute(string setName, string attName, float value)
        {
            m_SetName = setName;
            m_Name = attName;
            m_FullName = setName + "." + attName;
            m_Value = new GameplayAttributeValue(value);    
        }

        public GameplayAttribute(string setName, string attName)
        {
            m_SetName = setName;
            m_Name = attName;
            m_FullName = setName + "." + attName;
            m_Value = new GameplayAttributeValue(0);
        }

        public void SetBaseValue(float baseValue)
        {
            m_Value.SetBaseValue(baseValue);
        }


        public void SetCurrentValue(float currentValue)
        {
            m_Value.SetCurrentValue(currentValue);
        }

        public void Dispose()
        {
            
        }
    }
}
