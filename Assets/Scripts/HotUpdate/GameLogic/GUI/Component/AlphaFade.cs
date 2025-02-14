using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameLogic
{
    public class AlphaFade : MonoBehaviour
    {
        private CanvasGroup m_CanvasGroup;

        public Vector2 alphaTween = new Vector2(0, 1);

        public float duration = 1.0f;

        public float delay = 0.0f;

        public Ease ease = Ease.Linear;

        public LoopType loopType = LoopType.Yoyo;

        public int loopTimes = 0;

        [SerializeField]
        private bool m_PlayAutomatically = false;

        [SerializeField]
        private bool m_Interactable = false;

        [SerializeField]
        private bool m_BlocksRaycasts = false;

        [SerializeField]
        private bool m_IgnoreParentGroups = false;

        public UnityAction OnComplete;

        private void Awake()
        {
            m_CanvasGroup = gameObject.TryAddComponent<CanvasGroup>();
            m_CanvasGroup.interactable = m_Interactable;
            m_CanvasGroup.blocksRaycasts = m_BlocksRaycasts;
            m_CanvasGroup.ignoreParentGroups = m_IgnoreParentGroups;
        }

        private void OnEnable()
        {
            if (m_PlayAutomatically)
                Play();
        }

        private void OnDisable()
        {
            CancelInvoke();
            m_CanvasGroup.DOKill();
        }

        private void Init()
        {
            CancelInvoke();
            m_CanvasGroup.alpha = alphaTween.x;
            m_CanvasGroup.DOKill();
        }

        public void Play()
        {
            Init();

            if (delay > 0f)
                Invoke("PlayInternal", delay);
            else
                PlayInternal();
        }

        private void PlayInternal()
        {
            if (loopTimes == 0)
            {
                m_CanvasGroup.DOFade(alphaTween.y, duration).SetEase(ease).OnComplete(() => {
                    if (OnComplete != null)
                    {
                        OnComplete.Invoke();
                        OnComplete = null;
                    }
                });
            }
            else
            {
                m_CanvasGroup.DOFade(alphaTween.y, duration).SetLoops(loopTimes, loopType).SetEase(ease).OnComplete(() => {
                    if (OnComplete != null)
                    {
                        OnComplete.Invoke();
                        OnComplete = null;
                    }
                });
            }
        }


        private void OnDestroy()
        {
            m_CanvasGroup.DOKill();
        }
    }
}
