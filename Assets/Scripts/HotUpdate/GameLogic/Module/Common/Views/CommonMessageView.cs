using LGameFramework.GameLogic.GUI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

namespace LGameFramework.GameLogic
{
    public class CommonMessageView : GUIView
    {
        protected override string m_PrefabName => "GUI_Message_View.prefab";

        protected new MessageViewData m_ViewData;

        private TMP_InputField m_Input;

        public override void OnBeforeOpenEffect()
        {
            m_ViewData = base.m_ViewData as MessageViewData;
            base.OnBeforeOpenEffect();
        }

        public override void OnInit()
        {
            base.OnInit();

            Injection.Get<Button>("CloseBtn").onClick.AddListener(() =>
            {
                Close();
            });

            Injection.Get<Button>("SureBtn").onClick.AddListener(() =>
            {
                m_ViewData.OnSure?.Invoke(m_Input.text);
                Close();
            });

            Injection.Get<Button>("CancelBtn").onClick.AddListener(() =>
            {
                m_ViewData.OnCancel?.Invoke();
                Close();
            });

            m_Input = Injection.Get<TMP_InputField>("InputField");
            m_Input.onValueChanged.AddListener(OnInputValueChange);
        }

        public override void OnEnable()
        {
            base.OnEnable();
            Injection.Get<TextMeshProUGUI>("Desc").text = m_ViewData.Desc;

            m_Input.SetActive(m_ViewData.IsShowInput);
        }

        public override void OnDispose()
        {
            base.OnDispose();
            m_Input.onValueChanged.RemoveAllListeners();
            m_Input = null;
        }

        private void OnInputValueChange(string str)
        { 
            
        }
    }

    public class MessageViewData : GUIViewData
    {
        public bool IsShowInput;
        public string Desc;
        public UnityAction<string> OnSure;
        public UnityAction OnCancel;

        public override void Dispose()
        {
            base.Dispose();
            OnSure = null;
            OnCancel = null;
        }
    }
}
