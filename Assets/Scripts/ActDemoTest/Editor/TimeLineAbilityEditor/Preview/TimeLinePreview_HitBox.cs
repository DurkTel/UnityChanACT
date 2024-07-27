using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityChanAct;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineHitBoxPreview : TimeLineClipPreview
        {
            private GameObject m_Shape;

            private PrimitiveType m_PrimitiveType;

            private HitBoxEffectClip m_HitBoxClip;

            public Transform Avatar { get { return m_Preview.m_PreviewAvatar.transform; } }

            public TimeLineHitBoxPreview(TimeLineAbilityClip clip, TimeLinePreview preview) : base(clip, preview)
            {
                m_HitBoxClip = clip as HitBoxEffectClip;
                OnCreatePrimitive();
                m_Shape.SetActive(false);
            }

            public override void Dispose()
            {
                DestroyImmediate(m_Shape);
                m_Shape = null;
            }

            public override void OnEnter()
            {
                m_Shape.SetActive(true);
            }

            public override void OnExit()
            {
                m_Shape.SetActive(false);
            }

            public override void Repaint()
            {
                OnCreatePrimitive();
                m_Shape.transform.rotation = Quaternion.Euler(m_HitBoxClip.rotation);
                m_Shape.transform.localPosition = Avatar.position + m_HitBoxClip.position;
                m_Shape.transform.localScale = m_HitBoxClip.scale;

                m_Preview.Repaint();
            }

            private void OnCreatePrimitive()
            {
                if (m_PrimitiveType != m_HitBoxClip.boxShape || m_Shape == null)
                {
                    m_PrimitiveType = m_HitBoxClip.boxShape;
                    if (m_Shape != null)
                        DestroyImmediate(m_Shape);
                    m_Shape = GameObject.CreatePrimitive(m_PrimitiveType);
                    m_Shape.GetComponent<Renderer>().sharedMaterial = m_Preview.WireframeMat;
                    m_Preview.m_PreviewUtility.AddSingleGO(m_Shape);
                    m_Shape.transform.SetParent(m_Preview.m_RootScene);
                }
            }
        }

    }
}
