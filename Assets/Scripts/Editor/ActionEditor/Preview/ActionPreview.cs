using GAS.Runtime;
using LGameFramework.GameLogic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace LGameFramework.GameEditor
{
    public partial class ActionPreview : UnityEditor.EditorWindow
    {
        public static bool s_ForceRefresh = false;

        private Rect m_ToolBarRect, m_PreviewRect;

        private bool m_CameraPositionDrag, m_CameraRotationDrag;

        private Vector2 m_CameraDelta;

        private ActionInfo m_AbilityAsset;

        private Transform m_RootScene;

        private GameObject m_Plane;

        private GameObject m_PreviewAvatar;

        private Transform m_CameraTran;

        private Animator m_PreviewAnimator;

        private PlayableGraph m_PreviewPlayableGraph;

        private AnimationPlayableOutput m_PreviewPlayableOutput;

        private PreviewRenderUtility m_PreviewUtility;

        private int m_SelectAvatarControlID;

        private Material m_WireframeMatR;
        public Material WireframeMatR
        {
            get
            {
                if (m_WireframeMatR == null)
                {
                    m_WireframeMatR = new Material(Shader.Find("Custom/Common/Wireframe"));
                    m_WireframeMatR.SetColor("_Color", Color.red);
                }
                return m_WireframeMatR;
            }
        }

        private Material m_WireframeMatG;
        public Material WireframeMatG
        {
            get
            {
                if (m_WireframeMatG == null)
                {
                    m_WireframeMatG = new Material(Shader.Find("Custom/Common/Wireframe"));
                    m_WireframeMatG.SetColor("_Color", Color.green);
                }
                return m_WireframeMatG;
            }
        }

        private GUIStyle m_PreviewStyle;
        public GUIStyle PreviewStyle
        {
            get
            {
                if (m_PreviewStyle == null)
                {
                    m_PreviewStyle = new GUIStyle();
                    m_PreviewStyle.normal.background = Texture2D.blackTexture;
                }

                return m_PreviewStyle;
            }
        }


        private void OnEnable()
        {
            OnInitPreviewRender();
            OnInitScene();
            OnInitPlane();
            OnInitAvatar(null);
            OnInitCamera();
        }


        private void OnDisable()
        {
            if (m_PreviewAvatar != null)
            {
                DestroyImmediate(m_PreviewAvatar);
                m_PreviewAvatar = null;
            }
            if (m_Plane != null)
            {
                DestroyImmediate(m_Plane);
                m_Plane = null; 
            }
            if (m_WireframeMatR != null)
            { 
                DestroyImmediate(m_WireframeMatR);
                m_WireframeMatR = null;
            }

            if (m_PreviewUtility != null)
            {
                m_PreviewUtility.Cleanup();
                m_PreviewUtility = null;    
            }

            if (m_PreviewPlayableGraph.IsValid())
                m_PreviewPlayableGraph.Destroy();
        }

        private void OnGUI()
        {
            m_ToolBarRect = new Rect(0, 0, position.width, 23);
            m_PreviewRect = new Rect(0, m_ToolBarRect.height, position.width, position.height - m_ToolBarRect.height);

            GUILayout.BeginArea(m_ToolBarRect, EditorStyles.textField);
            GUILayout.BeginHorizontal();
            GUILayout.FlexibleSpace();
            if (EditorGUILayout.DropdownButton(EditorGUIUtility.TrIconContent("AvatarSelector"), FocusType.Passive, EditorStyles.toolbarDropDown))
            {
                GenericMenu menu = new GenericMenu();
                menu.AddItem(EditorGUIUtility.TrTextContent("Unity Model"), false, SetPreviewAvatarOption, 0);
                menu.AddItem(EditorGUIUtility.TrTextContent("Other..."), false, SetPreviewAvatarOption, 1);
                menu.ShowAsContext();
            }
            GUILayout.EndHorizontal();
            GUILayout.EndArea();

            var e = Event.current;

            if (e.type == EventType.MouseDown && m_PreviewRect.Contains(e.mousePosition))
            {
                if (e.button == 0 || e.button == 2)
                    m_CameraPositionDrag = true;
                else if (e.button == 1)
                    m_CameraRotationDrag = true;
            }
            else if(e.type == EventType.ScrollWheel && m_PreviewRect.Contains(e.mousePosition))
            {
                float p = 0.5f;
                var newPos = m_CameraTran.localPosition;
                newPos -= m_CameraTran.forward * e.delta.y * p; ;
                m_CameraTran.localPosition = newPos;
                Repaint();
            }
            else if (e.type == EventType.MouseUp)
            {
                m_CameraPositionDrag = false;
                m_CameraRotationDrag = false;
            }

            if (m_CameraPositionDrag)
                OnUpdateCameraPosition(e.delta);
            else if (m_CameraRotationDrag)
                OnUpdateCameraRotation(e.delta);

            if (e.type == EventType.Repaint)
            {
                m_PreviewUtility.BeginPreview(m_PreviewRect, PreviewStyle);

                m_PreviewUtility.Render();

                m_PreviewUtility.EndAndDrawPreview(m_PreviewRect);

            }
        }


        private void Update()
        {
            if (s_ForceRefresh)
            {
                s_ForceRefresh = false;
                OnInitAllTrack();
            }

            int id = EditorGUIUtility.GetObjectPickerControlID();
            if (id == m_SelectAvatarControlID && id != 0)
            {
                var selectedObject = EditorGUIUtility.GetObjectPickerObject();
                if (selectedObject != null && selectedObject is GameObject newPreviewAvatar)
                {
                    OnInitAvatar(newPreviewAvatar);
                    OnInitAllTrack(); //替换了模型要重新初始化轨道
                    EditorGUIUtility.ShowObjectPicker<GameObject>(null, false, "", 0); // Reset the picker
                }
            }
        }

        public void OnAssetUpdate(ActionInfo asset)
        {
            m_AbilityAsset = asset;
            OnInitAllTrack();
        }

        public void OnTimeTick(int tick)
        {
            if (m_Previews == null)
                return;

            foreach (var track in m_Previews)
            {
                foreach (var clip in track)
                {
                    if (clip == null)
                        continue;
                    if (clip.CurrentTick <= clip.RangeTick[0] && tick >= clip.RangeTick[0])
                        clip.OnEnter();
                    else if (clip.CurrentTick < clip.RangeTick[1] && tick >= clip.RangeTick[1])
                        clip.OnExit();

                    clip.CurrentTick = tick;

                    if (tick >= clip.RangeTick[0] && tick <= clip.RangeTick[1])
                        clip.OnTick(tick);

                }
            }     
        }

        public void OnPreviewRepaint()
        {
            foreach (var track in m_Previews)
            {
                foreach (var clip in track)
                {
                    if (clip == null)
                        continue;
                    clip.Repaint();
                }
            }
            Repaint();
        }

        private void OnInitPreviewRender()
        {
            if (m_PreviewUtility != null)
                return;
            m_PreviewUtility = new PreviewRenderUtility();
            m_PreviewUtility.camera.fieldOfView = 45f;
            m_PreviewUtility.camera.farClipPlane = 1000f;
            m_PreviewUtility.camera.transform.position = new Vector3(0, 12.8f, -17.6f);
            m_PreviewUtility.camera.transform.rotation = Quaternion.Euler(30, 0, 0);
            m_PreviewUtility.camera.backgroundColor = Color.white * 0.01f;
            m_PreviewUtility.camera.allowHDR = false;
            m_PreviewUtility.camera.allowMSAA = false;

            m_PreviewUtility.ambientColor = new Color(.1f, .1f, .1f, 0);
            m_PreviewUtility.lights[0].intensity = 1.4f;
            m_PreviewUtility.lights[0].transform.rotation = Quaternion.Euler(40f, 40f, 0);
            m_PreviewUtility.lights[1].intensity = 1.4f;
        }

        private void OnInitCamera()
        {
            if (m_CameraTran != null)
                return;

            var go = new GameObject("CameraRoot");
            go.AddComponent<AudioListener>();
            m_PreviewUtility.AddSingleGO(go);
            m_CameraTran = go.transform;
            m_PreviewUtility.camera.transform.SetParent(m_CameraTran);
        }

        private void OnInitScene()
        {
            if (m_RootScene != null)
                return;

            var go = new GameObject("RootScene");
            m_RootScene = go.transform;
            m_RootScene.position = Vector3.zero;
            m_RootScene.localScale = Vector3.one * 5;
            m_PreviewUtility.AddSingleGO(go);
        }

        private void OnInitPlane()
        {
            if (m_Plane != null)
                return;
            m_Plane = GameObject.CreatePrimitive(PrimitiveType.Plane);
            m_Plane.transform.position = Vector3.zero;
            m_Plane.transform.localScale = Vector3.one * 1000;
            Texture2D tex = (Texture2D)EditorGUIUtility.Load("Avatar/Textures/AvatarFloor.png");
            Material mat = new Material(Shader.Find("Legacy Shaders/Transparent/Diffuse"));
            mat.mainTexture = tex;
            mat.mainTextureScale = Vector2.one * 500;
            mat.SetColor("_Color", new Color(1, 1, 1, 0.2f));
            mat.hideFlags = HideFlags.HideAndDontSave;
            m_Plane.GetComponent<Renderer>().sharedMaterial = mat;

            m_PreviewUtility.AddSingleGO(m_Plane);
        }

        private void OnInitAvatar(GameObject avatar)
        {
            if (m_PreviewAvatar != null)
                DestroyImmediate(m_PreviewAvatar);

            var prefab = avatar == null ? (GameObject)EditorGUIUtility.Load("Avatar/DefaultAvatar.fbx") : avatar;
            m_PreviewAvatar = Instantiate(prefab);

            if (!m_PreviewAvatar.TryGetComponent(out m_PreviewAnimator))
                m_PreviewAnimator = m_PreviewAvatar.AddComponent<Animator>();

            m_PreviewAnimator.Update(0);

            //写个简单的AnimationClipPlayable来播 毕竟只有单个动画
            if (m_PreviewPlayableGraph.IsValid())
                m_PreviewPlayableGraph.Destroy();
            m_PreviewPlayableGraph = PlayableGraph.Create();
            m_PreviewPlayableGraph.SetTimeUpdateMode(DirectorUpdateMode.Manual);
            m_PreviewPlayableOutput = AnimationPlayableOutput.Create(m_PreviewPlayableGraph, "GASTimeLineAnimation", m_PreviewAnimator);

            m_PreviewUtility.AddSingleGO(m_PreviewAvatar);
            m_PreviewAvatar.transform.SetParent(m_RootScene);

            m_PreviewAvatar.transform.rotation = Quaternion.Euler(Vector3.zero);
            m_PreviewAvatar.transform.localScale = Vector3.one;
        }

        private void OnUpdateCameraPosition(Vector2 delta)
        {
            float p = 0.01f;
            var newPos = m_CameraTran.localPosition;
            newPos -= m_CameraTran.right * delta.x * p;
            newPos += m_CameraTran.up * delta.y * p;
            m_CameraTran.localPosition = newPos;
            Repaint();
        }

        private void OnUpdateCameraRotation(Vector2 delta)
        {
            float p = 0.1f;
            m_CameraDelta.y += delta.x * p;
            m_CameraDelta.x += delta.y * p;

            m_CameraTran.rotation = Quaternion.Euler(m_CameraDelta);
            Repaint();
        }

        private void SetPreviewAvatarOption(object option)
        {
            int type = (int)option;

            if (type == 0)
            {
                OnInitAvatar(null);
                OnInitAllTrack();
            }
            else if (type == 1)
            {
                m_SelectAvatarControlID = GUIUtility.GetControlID(FocusType.Passive);
                EditorGUIUtility.ShowObjectPicker<GameObject>(null, false, "", m_SelectAvatarControlID);
            }
        }
    }
}
