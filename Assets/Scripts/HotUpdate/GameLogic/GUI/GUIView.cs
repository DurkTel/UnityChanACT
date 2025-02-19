using UnityEngine;
using UnityEngine.Events;
using LGameFramework.GameCore.Asset;
using UnityEngine.UI;
using System;

namespace LGameFramework.GameLogic.GUI
{
    public class GUIView : IUIBehaviour
    {
        private static Vector2 s_HidePosition = new Vector2 (9999, 9999);

        #region 内部属性

        protected GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        protected RectTransform m_RectTransform;
        public RectTransform RectTransform { get { return m_RectTransform; } }

        protected GameObject m_PrefabInstantiate;
        public GameObject PrefabInstantiate { get { return m_PrefabInstantiate; } }

        protected Injection m_Injection;
        public Injection Injection { get { return m_Injection; } }

        protected bool m_IsLoading;
        public bool IsLoading { get { return m_IsLoading; } }

        protected GMGUIManager.GUIViewLayer m_GUIViewLayer;
        public GMGUIManager.GUIViewLayer GUIViewLayer { get { return m_GUIViewLayer; } }

        protected GUIViewData m_ViewData;
        #endregion

        #region 派生参数
        /// <summary>
        /// 该界面对应预制体
        /// </summary>
        protected virtual string m_PrefabName { get { return "GUI_Default_View.prefab"; } }
        public string PrefabName { get { return m_PrefabName; } }
        /// <summary>
        /// 该界面对应层级
        /// </summary>
        protected virtual GMGUIManager.UILayerLevel m_LayerLevel { get { return GMGUIManager.UILayerLevel.ViewUILayer; } }
        public GMGUIManager.UILayerLevel LayerLevel { get { return m_LayerLevel; } }
        /// <summary>
        /// 界面动画
        /// </summary>
        protected virtual UnityAction<GUIView, bool, UnityAction> m_OpenTween { get { return GMGUIManager.GUITweenDefault; } }
        protected UnityAction<GUIView, bool, UnityAction> OpenTween { get { return m_OpenTween; } }
        /// <summary>
        /// 销毁时间
        /// </summary>
        protected virtual float m_DestroyTime { get { return 5f; } }
        public float DestroyTime { get { return m_DestroyTime; } }

        #endregion

        public virtual void OnConstructor(GameObject go, GMGUIManager.GUIViewLayer layer)
        {
            m_GUIViewLayer = layer;
            m_GameObject = go;
            m_RectTransform = m_GameObject.TryAddComponent<RectTransform>();
            m_IsLoading = true;
        }

        public virtual void OnLoadComplete(Loader loader)
        {
            m_IsLoading = false;
            m_PrefabInstantiate = loader.GetInstantiate<GameObject>();
            RectTransform rect = m_PrefabInstantiate.TryAddComponent<RectTransform>();
            rect.SetParentZero(m_RectTransform);
            rect.TileRectTransform();

            m_Injection = m_PrefabInstantiate.GetComponent<Injection>();
            
            OnInit();
        }

        public virtual void SetViewData(GUIViewData data)
        {
            m_ViewData = data;
        }

        public virtual void OnInit()
        {
            OnBeforeOpenEffect();
        }

        public virtual void OnBeforeOpenEffect()
        {
            SetVisible(true);
            OnOpenEffect();
        }

        public virtual void OnOpenEffect()
        {
            if (m_ViewData != null && m_ViewData.OnOpen != null)
                m_ViewData.OnOpen.Invoke();

            if (OpenTween != null)
                OpenTween.Invoke(this, true, OnEnable);
            else
                OnEnable();

        }

        public virtual void OnEnable()
        {

        }

        public virtual void OnBeforeDisableEffect()
        {
            OnDisableEffect();
        }

        public virtual void OnDisableEffect()
        {
            if (OpenTween != null)
                OpenTween.Invoke(this, false, OnDisable);
            else
                OnDisable();
        }

        public virtual void OnDisable()
        {
            SetVisible(false);
            UIUtility.WaitToDestroy(this, DestroyTime);

            if (m_ViewData != null && m_ViewData.OnClose != null)
                m_ViewData.OnClose.Invoke();
        }

        public virtual void OnDispose()
        {
            m_ViewData = null;
        }

        public virtual void Close()
        {

            UIUtility.CloseView(GetType());
        }

        public void SetVisible(bool value)
        {
            m_RectTransform.anchoredPosition = value ? Vector2.zero : s_HidePosition;
        }
    }

    /// <summary>
    /// 打开界面时可附带的信息
    /// </summary>
    public class GUIViewData : IDisposable
    {
        public UnityAction OnOpen;
        public UnityAction OnClose;

        public virtual void Dispose()
        {
            OnOpen = null;
            OnClose = null;
        }
    }
}
