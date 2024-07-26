using System;
using UnityEngine;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public class ActionerBlendTree1D : ActionerBlendTree
    {
        /// <summary>
        /// 混合参数
        /// </summary>
        protected float m_BlendValue;

        /// <summary>
        /// 极限值
        /// </summary>
        protected float m_BlendMinValue, m_BlendMaxValue;

        protected override void UpdateBlendValue()
        {
            m_BlendValue = m_Controller.GetFloat(m_BlendTreeData.parameter[0]);
        }

        protected override void CreatePlayable(out Playable playable)
        {
            Array.Sort(Motions);
            m_BlendMinValue = Motions[0].thresholdX;
            m_BlendMaxValue = Motions[Motions.Length - 1].thresholdX;
            base.CreatePlayable(out playable);

        }

        protected override void UpdateBlendWeight()
        {
            int leftIndex = int.MinValue;
            int rightIndex = int.MaxValue;

            float currentValue = Mathf.Clamp(m_BlendValue, m_BlendMinValue, m_BlendMaxValue);
            for (int i = Motions.Length - 2; i >= 0; i--)
            {
                if (currentValue >= Motions[i].thresholdX)
                {
                    leftIndex = i;
                    rightIndex = i + 1;
                    break;
                }
            }

            for (int i = 0; i < m_BlendAction.Length; i++)
            {
                if (i != leftIndex && i != rightIndex)
                    m_BlendAction[i].CrossFade(0f, 0f);
            }

            var left = Motions[leftIndex].thresholdX;
            var right = Motions[rightIndex].thresholdX;

            float rightWeight = (currentValue - left) / (right - left);
            float leftWeight = 1f - rightWeight;

            m_BlendAction[leftIndex].CrossFade(leftWeight, 0f);
            m_BlendAction[rightIndex].CrossFade(rightWeight, 0f);
        }
    }
}
