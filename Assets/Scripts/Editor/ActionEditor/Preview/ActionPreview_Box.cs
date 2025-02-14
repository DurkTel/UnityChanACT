using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public partial class ActionPreview : UnityEditor.EditorWindow
    {
        public class ActionBoxPreview : ActionClipPreview
        {
            private static Dictionary<Color, Material> s_WireframeMat = new Dictionary<Color, Material>();

            private static Dictionary<ActionBoxType, Color> s_Box2Color = new Dictionary<ActionBoxType, Color>()
            {
                [ActionBoxType.Affected] = Color.green,
                [ActionBoxType.Hit] = Color.red,
                [ActionBoxType.Dodge] = Color.yellow,
                [ActionBoxType.Defense] = Color.blue,
            };

            private GameObject m_BoxGo;

            private ActionBoxClip m_ActionBoxClip;

            public Transform Avatar { get { return m_Preview.m_PreviewAvatar.transform; } }

            public ActionBoxPreview(ActionClip clip, ActionPreview preview) : base(clip, preview)
            {
                m_ActionBoxClip = clip as ActionBoxClip;

                m_BoxGo = GameObject.CreatePrimitive(PrimitiveType.Cube);
                m_BoxGo.GetComponent<Renderer>().sharedMaterial = GetWireframeMat(s_Box2Color[m_ActionBoxClip.boxType]);
                m_Preview.m_PreviewUtility.AddSingleGO(m_BoxGo);
                m_BoxGo.transform.SetParent(m_Preview.m_RootScene);
                m_BoxGo.SetActive(false);
            }

            public override void Dispose()
            {
                if (m_BoxGo != null)
                {
                    DestroyImmediate(m_BoxGo);
                    m_BoxGo = null;
                }

                if (m_ActionBoxClip != null)
                    m_ActionBoxClip = null;
            }

            public override void OnEnter()
            {
                if (m_BoxGo != null)
                    m_BoxGo.SetActive(true);
            }

            public override void OnExit()
            {
                if (m_BoxGo != null)
                    m_BoxGo.SetActive(false);

            }

            public override void Repaint()
            {
                if (m_BoxGo == null)
                    return;

                var rotate = Quaternion.Euler(m_ActionBoxClip.rotation);
                m_BoxGo.transform.localScale = m_ActionBoxClip.halfExtents * 2;
                m_BoxGo.transform.localPosition = Avatar.transform.rotation * rotate * (Avatar.localPosition + m_ActionBoxClip.center);
            }

            private Material GetWireframeMat(Color color)
            {
                if (!s_WireframeMat.TryGetValue(color, out var mat))
                { 
                    mat = new Material(Shader.Find("Custom/Common/Wireframe"));
                    mat.SetColor("_Color", color);
                    s_WireframeMat.Add(color, mat);
                }

                return mat;
            }
        }
    }
}
