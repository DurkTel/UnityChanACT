using DG.Tweening;
using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameLogic
{
    public class DodgeEffectView : GUIView
    {
        protected override string m_PrefabName => "GUI_Dodge_Effect.prefab";

        protected new DodgeEffectViewData m_ViewData;

        private ParticleSystem m_Effect;

        private int m_UpdateTimer;

        private int m_CloseTimer;

        public override void OnInit()
        {
            m_Effect = Injection.Get<ParticleSystem>("Effect");
            base.OnInit();

        }

        public override void OnBeforeOpenEffect()
        {
            m_ViewData = base.m_ViewData as DodgeEffectViewData;
            base.OnBeforeOpenEffect();
        }

        public override void OnEnable()
        {
            base.OnEnable();

            var img = Injection.Get<Image>("BackGround");
            img.color = new Color(0, 0, 0, 0.3f);
            img.DOFade(0f, 0.6f).SetEase(Ease.InBack);

            m_Effect.Play();
            if (m_UpdateTimer != -1)
                TimerUtility.DelTimer(m_UpdateTimer);
            if (m_CloseTimer != -1)
                TimerUtility.DelTimer(m_CloseTimer);
            m_UpdateTimer = TimerUtility.AddFrame(OnUpdateEffectPos, 0, 1, -1);
            m_CloseTimer = TimerUtility.AddTimer(Close, 0, 1.2f);
        }

        public override void OnDisable()
        {
            base.OnDisable();
            TimerUtility.DelTimer(m_UpdateTimer);
            TimerUtility.DelTimer(m_CloseTimer);
            m_UpdateTimer = -1;
            m_CloseTimer = -1;
        }

        public override void OnDispose()
        {
            base.OnDispose();
            m_Effect = null;

        }

        private void OnUpdateEffectPos()
        {
            var camera = CameraUtility.GetMainCamera();
            var screenPos = m_ViewData == null ? Vector3.zero : camera.WorldToScreenPoint(m_ViewData.TargetTran.position);

            RectTransformUtility.ScreenPointToLocalPointInRectangle(
            m_GUIViewLayer.Canvas.GetComponent<RectTransform>(), // UI ÔªËØµÄ¸¸ RectTransform
            screenPos,
            UIUtility.GetUICamera(),out Vector2 anchoredPos);
            m_Effect.GetComponent<RectTransform>().anchoredPosition = anchoredPos;
        }

        public class DodgeEffectViewData : GUIViewData
        {
            public Transform TargetTran;
        }
    }
}
