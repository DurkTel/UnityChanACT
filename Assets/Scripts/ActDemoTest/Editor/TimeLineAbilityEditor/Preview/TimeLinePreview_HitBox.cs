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

            private FightBoxShape m_ShapeType;

            private HitBoxEffectClip m_HitBoxClip;

            public Transform Avatar { get { return m_Preview.m_PreviewAvatar.transform; } }

            public TimeLineHitBoxPreview(TimeLineAbilityClip clip, TimeLinePreview preview) : base(clip, preview)
            {
                m_HitBoxClip = clip as HitBoxEffectClip;
                OnCreatePrimitive();
            }

            public override void Dispose()
            {
                DestroyImmediate(m_Shape);
                m_Shape = null;
            }

            public override void OnEnter()
            {
                m_Shape?.SetActive(true);
            }

            public override void OnExit()
            {
                m_Shape?.SetActive(false);
            }

            public override void Repaint()
            {
                OnCreatePrimitive();
                if (m_Shape != null)
                {
                    //m_Shape.transform.rotation = Quaternion.Euler(m_HitBoxClip.rotation);
                    m_Shape.transform.localPosition = Avatar.position + GetPosition();
                    m_Shape.transform.localScale = GetScale();
                }

                m_Preview.Repaint();
            }

            private void OnCreatePrimitive()
            {
                if (m_ShapeType != m_HitBoxClip.boxShape || m_Shape == null)
                {
                    m_ShapeType = m_HitBoxClip.boxShape;
                    if (m_Shape != null)
                        DestroyImmediate(m_Shape);

                    switch (m_ShapeType)
                    {
                        case FightBoxShape.Box:
                            m_Shape = GameObject.CreatePrimitive(PrimitiveType.Cube);
                            break;
                        case FightBoxShape.Sphere:
                            m_Shape = GameObject.CreatePrimitive(PrimitiveType.Sphere);
                            break;
                        case FightBoxShape.Capsule:
                            m_Shape = GameObject.CreatePrimitive(PrimitiveType.Capsule);
                            break;
                        default:
                            break;
                    }

                    if (m_Shape == null)
                        return;
                    m_Shape.GetComponent<Renderer>().sharedMaterial = m_Preview.WireframeMatR;
                    m_Preview.m_PreviewUtility.AddSingleGO(m_Shape);
                    m_Shape.transform.SetParent(m_Preview.m_RootScene);
                    m_Shape.SetActive(false);

                }
            }

            private Vector3 GetPosition()
            {
                Vector3 pos = Vector3.zero;
                switch (m_ShapeType)
                {
                    case FightBoxShape.Box:
                        pos = m_HitBoxClip.boxParams.center;
                        break;
                    case FightBoxShape.Sphere:
                        pos = m_HitBoxClip.sphereParams.position;
                        break;
                    case FightBoxShape.Capsule:
                        pos = (m_HitBoxClip.capsuleParams.point0 + m_HitBoxClip.capsuleParams.point1) / 2f;
                        break;
                    default:
                        break;
                }

                return pos;
            }

            private Vector3 GetScale()
            {
                Vector3 scale = Vector3.one;
                switch (m_ShapeType)
                {
                    case FightBoxShape.Box:
                        scale = m_HitBoxClip.boxParams.halfExtents * 2f;
                        break;
                    case FightBoxShape.Sphere:
                        scale = Vector3.one * m_HitBoxClip.sphereParams.radius * 2f;
                        break;
                    case FightBoxShape.Capsule:

                        break;
                    default:
                        break;
                }

                return scale;
            }
        }

    }
}
