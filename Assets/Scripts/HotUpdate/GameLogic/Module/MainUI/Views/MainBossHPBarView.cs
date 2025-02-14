using DG.Tweening;
using GAS.Runtime;
using LGameFramework.GameLogic.GUI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameLogic
{
    public class MainBossHPBarView : GUIView
    {
        protected override string m_PrefabName => "GUI_MainBoss_HPBar.prefab";

        private TextMeshProUGUI m_CurrentHP, m_MaxHP;

        private Slider m_HPSlider;

        private float m_CurrentHPValue, m_MaxHPValue;

        private GameplayAttributeSet m_BossFightAttr;

        public override void OnInit()
        {
            m_CurrentHP = Injection.Get<TextMeshProUGUI>("CurrentHP");
            m_MaxHP = Injection.Get<TextMeshProUGUI>("MaxHP");
            m_HPSlider = Injection.Get<Slider>("Slider_red");

            base.OnInit();
        }

        public override void OnEnable()
        {
            base.OnEnable();

            //var entity = EntityUtility.GetEntity(1);
            //m_BossFightAttr = entity.Attributes.GetAttributeSet<GameplayAttributeSetLib.Fight>();

            //m_BossFightAttr[GameplayAttributeLib.HP].OnCurrentValueChange.AddListener(OnHPChange);
            //m_BossFightAttr[GameplayAttributeLib.MaxHP].OnCurrentValueChange.AddListener(OnHPChange);

            //m_CurrentHP.text = m_BossFightAttr[GameplayAttributeLib.HP].CurrentValue.ToString();
            //m_MaxHP.text = m_BossFightAttr[GameplayAttributeLib.MaxHP].CurrentValue.ToString();
        }

        public override void OnDisable()
        {
            base.OnDisable();
            //m_BossFightAttr[GameplayAttributeLib.HP].OnCurrentValueChange.RemoveListener(OnHPChange);
            //m_BossFightAttr[GameplayAttributeLib.MaxHP].OnCurrentValueChange.RemoveListener(OnHPChange);

        }


        private void OnHPChange()
        {
            float curValue = m_BossFightAttr[GameplayAttributeLib.HP].CurrentValue;
            if (curValue != m_CurrentHPValue)
            {
                DOVirtual.Float(m_CurrentHPValue, curValue, 0.5f, (f) =>
                {
                    m_CurrentHP.text = ((int)f).ToString();
                }).SetEase(Ease.OutExpo);
                m_CurrentHPValue = curValue;
            }

            curValue = m_BossFightAttr[GameplayAttributeLib.MaxHP].CurrentValue;
            if (curValue != m_MaxHPValue)
            {
                DOVirtual.Float(m_MaxHPValue, curValue, 0.2f, (f) =>
                {
                    m_MaxHP.text = ((int)f).ToString();
                }).SetEase(Ease.OutExpo);
                m_MaxHPValue = curValue;
            }

            m_HPSlider.DOValue(m_CurrentHPValue / m_MaxHPValue, 0.2f);
        }
    }
}
