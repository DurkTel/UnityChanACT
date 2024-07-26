using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public struct GameplayAttributeValue
    {
        [SerializeField]
        private float m_BaseValue;

        /// <summary>
        /// 基础属性值（未经过增益或减益修改）
        /// </summary>
        public float BaseValue { get { return m_BaseValue; } }

        [SerializeField]
        private float m_CurrentValue;

        /// <summary>
        /// 当前属性值（经过增益或减益后）
        /// </summary>
        public float CurrentValue { get { return m_CurrentValue; } }    

        public GameplayAttributeValue(float baseValue)
        {
            m_BaseValue = baseValue;
            m_CurrentValue = baseValue;  
        }

        public void SetBaseValue(float baseValue)
        {
            m_BaseValue = baseValue;
        }

        public void SetCurrentValue(float currentValue)
        {
            m_CurrentValue = currentValue;
        }
    }
}
