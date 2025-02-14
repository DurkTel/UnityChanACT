using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

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

        public UnityEvent OnBaseValueChange, OnCurrentValueChange;

        public GameplayAttribute(string setName, string attName, float value)
        {
            m_SetName = setName;
            m_Name = attName;
            m_FullName = setName + "." + attName;
            m_Value = new GameplayAttributeValue(value);
            OnBaseValueChange = new UnityEvent();
            OnCurrentValueChange = new UnityEvent();
        }

        public GameplayAttribute(string setName, string attName) : this(setName, attName, 0) { }

        public void SetBaseValue(float baseValue)
        {
            float lastValue = BaseValue;
            m_Value.SetBaseValue(baseValue);
            if (lastValue != BaseValue)
                OnBaseValueChange.Invoke();
        }


        public void SetCurrentValue(float currentValue)
        {
            float lastValue = CurrentValue;
            m_Value.SetCurrentValue(currentValue);
            if (lastValue != CurrentValue)
                OnCurrentValueChange.Invoke();
        }

        public void Dispose()
        {
            OnBaseValueChange.RemoveAllListeners();
            OnCurrentValueChange.RemoveAllListeners();

            OnBaseValueChange = null;
            OnCurrentValueChange = null;
        }
    }
}
