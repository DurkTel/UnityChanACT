//using System;
//using System.Collections.Generic;
//using System.Reflection;
//using UnityEditor;
//using UnityEngine;
//using Object = UnityEngine.Object;

///// <summary>
///// 把动画从FBX中提取后 没有了AnimationClipInfoProperties信息
///// 没有了Curve面板 重写一下显示出来
///// </summary>
//[CustomEditor(typeof(AnimationClip))]
//public class AnimationClipEditor : Editor
//{

//    public struct AnimationCurveBindData
//    {
//        public AnimationCurve curve;

//        public string propertyName;
//    }

//    private const string c_DefaultEditorTypeName = nameof(UnityEditor) + "." + nameof(AnimationClipEditor);

//    private const string c_CurvePrefix = "ActionerCurve_";

//    private static readonly Type DefaultEditorType = typeof(Editor).Assembly.GetType(c_DefaultEditorTypeName);

//    private static bool m_ShowCurves = false;

//    private Editor m_DefaultEditor;

//    private static HashSet<Object> s_DestroyOnPlayModeStateChanged;

//    private AnimationClip m_Clip;

//    private FieldInfo m_AvatarPreview;

//    private FieldInfo m_TimeControl;

//    private PropertyInfo m_PreviewNormalizedTime;

//    private List<AnimationCurveBindData> m_Curves;

//    private static List<AnimationCurveBindData> s_CurvesEmpty = new List<AnimationCurveBindData>(0);

//    private object[] m_DrawPlayheadParam = new object[5];

//    private bool TryGetDefaultEditor(out Editor editor)
//    {
//        if (m_DefaultEditor == null)
//        {
//            if (DefaultEditorType == null)
//            {
//                editor = null;
//                return false;
//            }

//            m_DefaultEditor = CreateEditor(targets, DefaultEditorType);
//            m_DefaultEditor.hideFlags = HideFlags.DontSave;
//            m_AvatarPreview = m_DefaultEditor.GetType().GetField("m_AvatarPreview", BindingFlags.Instance | BindingFlags.NonPublic);
//            m_TimeControl = m_AvatarPreview.FieldType.GetField("timeControl", BindingFlags.Instance | BindingFlags.Public);
//            m_PreviewNormalizedTime = m_TimeControl.FieldType.GetProperty("normalizedTime", BindingFlags.Instance | BindingFlags.Public);
//            DestroyOnPlayModeStateChanged(m_DefaultEditor);
//        }

//        editor = m_DefaultEditor;
//        return true;
//    }

//    protected virtual void OnDestroy()
//    {
//        s_DestroyOnPlayModeStateChanged?.Remove(m_DefaultEditor);
//        DestroyImmediate(m_DefaultEditor);
//    }



//    private static void DestroyOnPlayModeStateChanged(Object obj)
//    {
//        if (s_DestroyOnPlayModeStateChanged == null)
//        {
//            s_DestroyOnPlayModeStateChanged = new HashSet<Object>();

//            EditorApplication.playModeStateChanged += (change) =>
//            {
//                foreach (var destroy in s_DestroyOnPlayModeStateChanged)
//                    DestroyImmediate(destroy);

//                s_DestroyOnPlayModeStateChanged.Clear();
//            };
//        }

//        s_DestroyOnPlayModeStateChanged.Add(obj);
//    }

//    public override void OnInspectorGUI()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            editor.OnInspectorGUI();

//        m_Clip = (AnimationClip)target;


//        bool changed = GUI.changed;
//        m_ShowCurves = EditorGUILayout.Foldout(m_ShowCurves, EditorGUIUtility.TrTextContent("Curves", "Parameter-related curves."), toggleOnLabelClick: true);
//        GUI.changed = changed;
//        if (m_ShowCurves)
//        {
//            CurveGUI();
//        }

//    }

//    /// <summary>
//    /// 绘制曲线UI
//    /// </summary>
//    private void CurveGUI()
//    {
//        OnRefreshCustomCurve(m_Clip);

//        for (int i = 0; i < m_Curves.Count; i++)
//        {
//            GUILayout.Space(5f);
//            DrawCurve(m_Curves[i], i);
//        }

//        if (GUILayout.Button(GUIContent.none, "OL Plus", GUILayout.Width(17f)))
//        {
//            m_Curves.Add(new AnimationCurveBindData() { curve = GetNewEmptyCurve(m_Clip), propertyName = c_CurvePrefix + "Curve" });
//        }

//        EditorGUILayout.Space(10);


//        EditorGUILayout.BeginHorizontal();
//        GUILayout.FlexibleSpace();

//        //应用修改到Clip
//        if (GUILayout.Button("Apply"))
//        {
//            foreach (var curve in m_Curves)
//            {
//                m_Clip.SetCurve("", typeof(Animator), c_CurvePrefix + curve.propertyName, curve.curve);
//            }
//        }
//        EditorGUILayout.EndHorizontal();
//    }

//    private AnimationCurve GetNewEmptyCurve(AnimationClip clip)
//    {
//        Keyframe[] keys = new Keyframe[2];
//        keys[0] = new Keyframe(0f, 0f);
//        keys[1] = new Keyframe(clip.length, 0f);

//        return new AnimationCurve(keys);
//    }

//    /// <summary>
//    /// 更新自定义曲线列表
//    /// </summary>
//    /// <param name="clip"></param>
//    private void OnRefreshCustomCurve(AnimationClip clip)
//    {
//        if (m_Curves == null)
//        {
//            m_Curves = s_CurvesEmpty;
//            m_Curves.Clear();
//        }
//        if (m_Curves.Count <= 0)
//        {
//            var bindings = AnimationUtility.GetCurveBindings(clip);
//            for (int i = 0; i < bindings.Length; i++)
//            {
//                var binding = bindings[i];
//                if (binding.propertyName.StartsWith(c_CurvePrefix))
//                {
//                    var curve = AnimationUtility.GetEditorCurve(clip, binding);
//                    if (curve != null)
//                        m_Curves.Add(new AnimationCurveBindData() { curve = curve, propertyName = binding.propertyName });
//                }
//            }
//        }
//    }

//    /// <summary>
//    /// 绘制曲线面板
//    /// 根据UnityEditor.AnimationClipEditor修改
//    /// </summary>
//    /// <param name="curveBindData"></param>
//    /// <param name="index"></param>
//    private void DrawCurve(AnimationCurveBindData curveBindData, int index)
//    {
//        if (m_DefaultEditor == null) return;

//        float normalizedTime = (float)m_PreviewNormalizedTime.GetValue(m_TimeControl.GetValue(m_AvatarPreview.GetValue(m_DefaultEditor)));
//        EditorGUILayout.BeginHorizontal();
//        if (GUILayout.Button(GUIContent.none, "OL Minus", GUILayout.Width(17f))) //删除
//        {
//            m_Curves.RemoveAt(index);
//            m_Clip.SetCurve("", typeof(Animator), curveBindData.propertyName, null);
//        }
//        else
//        {
//            GUILayout.BeginVertical(GUILayout.Width(125f));
//            string curveName = curveBindData.propertyName.StartsWith(c_CurvePrefix) ? curveBindData.propertyName.Substring(c_CurvePrefix.Length) : curveBindData.propertyName;
//            string text = EditorGUILayout.DelayedTextField(curveName, EditorStyles.textField);
//            if (curveName != text)
//            {
//                var bindData = m_Curves[index];
//                bindData.propertyName = text;
//                m_Curves[index] = bindData;
//            }

//            AnimationCurve animationCurveValue = curveBindData.curve;
//            int length = animationCurveValue.length;
//            bool flag = false;
//            int num = length - 1;
//            Keyframe[] keys = animationCurveValue.keys;
//            for (int j = 0; j < length; j++)
//            {
//                if (Mathf.Abs(keys[j].time - normalizedTime) < 0.0001f)
//                {
//                    flag = true;
//                    num = j;
//                    break;
//                }

//                if (keys[j].time > normalizedTime)
//                {
//                    num = j;
//                    break;
//                }
//            }

//            GUILayout.BeginHorizontal();
//            if (GUILayout.Button(EditorGUIUtility.TrIconContent("Animation.PrevKey", "Go to previous key frame.")) && num > 0)
//            {
//                num--;
//                m_PreviewNormalizedTime.SetValue(m_TimeControl.GetValue(m_AvatarPreview.GetValue(m_DefaultEditor)), keys[num].time);
//            }

//            if (GUILayout.Button(EditorGUIUtility.TrIconContent("Animation.NextKey", "Go to next key frame.")))
//            {
//                if (flag && num < length - 1)
//                {
//                    num++;
//                }
//                m_PreviewNormalizedTime.SetValue(m_TimeControl.GetValue(m_AvatarPreview.GetValue(m_DefaultEditor)), keys[num].time);
//            }

//            float num2;
//            float num3;
//            using (new EditorGUI.DisabledScope(!flag))
//            {
//                try
//                {
//                    num2 = animationCurveValue.Evaluate(normalizedTime);
//                    num3 = EditorGUILayout.FloatField(num2, GUILayout.Width(60f));
//                }
//                finally
//                {
                    
//                }
//            }

//            bool flag2 = false;
//            if (num2 != num3)
//            {
//                if (flag)
//                {
//                    animationCurveValue.RemoveKey(num);
//                }

//                flag2 = true;
//            }

//            using (new EditorGUI.DisabledScope(flag))
//            {
//                if (GUILayout.Button(EditorGUIUtility.TrIconContent("Animation.AddKeyframe", "Add Keyframe.")))
//                {
//                    flag2 = true;
//                }
//            }

//            if (flag2)
//            {
//                Keyframe key = default(Keyframe);
//                key.time = normalizedTime;
//                key.value = num3;
//                key.inTangent = 0f;
//                key.outTangent = 0f;
//                animationCurveValue.AddKey(key);
//                keys = animationCurveValue.keys;
//            }

//            GUILayout.EndHorizontal();
//            GUILayout.EndVertical();
//            EditorGUILayout.CurveField(animationCurveValue, GUILayout.Height(40));

//            Rect lastRect = GUILayoutUtility.GetLastRect();
//            length = animationCurveValue.length;
//            m_DrawPlayheadParam[0] = lastRect.x + normalizedTime * lastRect.width;
//            m_DrawPlayheadParam[1] = lastRect.yMin;
//            m_DrawPlayheadParam[2] = lastRect.yMax;
//            m_DrawPlayheadParam[3] = 1f;
//            m_DrawPlayheadParam[4] = 1f;
//            typeof(Editor).Assembly.GetType("UnityEditor.TimeArea").GetMethod("DrawPlayhead").Invoke(null, m_DrawPlayheadParam);
//            for (int k = 0; k < length; k++)
//            {
//                float time = keys[k].time;
//                Handles.color = Color.white;
//                Handles.DrawLine(new Vector3(lastRect.x + time * lastRect.width, lastRect.y + lastRect.height - 10f, 0f), new Vector3(lastRect.x + time * lastRect.width, lastRect.y + lastRect.height, 0f));
//            }
//        }

//        EditorGUILayout.EndHorizontal();

//    }


//    public override void DrawPreview(Rect previewArea)
//    {
//        if (TryGetDefaultEditor(out var editor))
//            editor.DrawPreview(previewArea);
//        else
//            base.DrawPreview(previewArea);
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override string GetInfoString()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            return editor.GetInfoString();
//        else
//            return base.GetInfoString();
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override GUIContent GetPreviewTitle()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            return editor.GetPreviewTitle();
//        else
//            return base.GetPreviewTitle();
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override bool HasPreviewGUI()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            return editor.HasPreviewGUI();
//        else
//            return base.HasPreviewGUI();
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override void OnInteractivePreviewGUI(Rect area, GUIStyle background)
//    {
//        if (TryGetDefaultEditor(out var editor))
//            editor.OnInteractivePreviewGUI(area, background);
//        else
//            base.OnInteractivePreviewGUI(area, background);
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override void OnPreviewGUI(Rect area, GUIStyle background)
//    {
//        if (TryGetDefaultEditor(out var editor))
//            editor.OnPreviewGUI(area, background);
//        else
//            base.OnPreviewGUI(area, background);
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override void OnPreviewSettings()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            editor.OnPreviewSettings();
//        else
//            base.OnPreviewSettings();
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override void ReloadPreviewInstances()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            editor.ReloadPreviewInstances();
//        else
//            base.ReloadPreviewInstances();
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override Texture2D RenderStaticPreview(string assetPath, Object[] subAssets, int width, int height)
//    {
//        if (TryGetDefaultEditor(out var editor))
//            return editor.RenderStaticPreview(assetPath, subAssets, width, height);
//        else
//            return base.RenderStaticPreview(assetPath, subAssets, width, height);
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override bool RequiresConstantRepaint()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            return editor.RequiresConstantRepaint();
//        else
//            return base.RequiresConstantRepaint();
//    }

//    /************************************************************************************************************************/

//    /// <inheritdoc/>
//    public override bool UseDefaultMargins()
//    {
//        if (TryGetDefaultEditor(out var editor))
//            return editor.UseDefaultMargins();
//        else
//            return base.UseDefaultMargins();
//    }
//}
