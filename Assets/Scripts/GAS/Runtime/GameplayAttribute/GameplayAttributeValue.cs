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
        /// ��������ֵ��δ�������������޸ģ�
        /// </summary>
        public float BaseValue { get { return m_BaseValue; } }

        [SerializeField]
        private float m_CurrentValue;

        /// <summary>
        /// ��ǰ����ֵ���������������
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
