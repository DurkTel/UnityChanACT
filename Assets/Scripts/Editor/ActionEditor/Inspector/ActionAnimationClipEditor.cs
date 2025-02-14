using LGameFramework.GameCore;
using LGameFramework.GameCore.Asset;
using LGameFramework.GameLogic;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Rendering;

namespace LGameFramework.GameEditor
{
    public class ActionAnimationClipEditor : ActionClipEditor
    {
        private ActionAnimationClip m_AnimationClip;

        private bool m_RootMotionDataFoldOut;

        private AnimationClip m_Clip;

        public ActionAnimationClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_AnimationClip = actionClip as ActionAnimationClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            if (m_Clip == null && !string.IsNullOrEmpty(m_AnimationClip.animationClip))
            {
                var assetPath = AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(m_AnimationClip.animationClip);
                m_Clip = AssetDatabase.LoadAssetAtPath<AnimationClip>(assetPath);
            }

            using (new EditorGUILayout.HorizontalScope())
            {
                EditorGUI.BeginChangeCheck();
                m_AnimationClip.animationClip = EditorGUILayout.TextField("动画片段名称", m_AnimationClip.animationClip);
                if (EditorGUI.EndChangeCheck())
                {
                    if (!string.IsNullOrEmpty(m_AnimationClip.animationClip))
                    {
                        var assetPath = AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(m_AnimationClip.animationClip);
                        m_Clip = AssetDatabase.LoadAssetAtPath<AnimationClip>(assetPath);
                    }
                    else
                        m_Clip = null;

                    if (m_Clip != null)
                        ActionPreview.s_ForceRefresh = true;
                }
                if (m_Clip != null && GUILayout.Button("Defalut Length", GUILayout.Width(100)))
                {
                    m_AnimationClip.speed = 1f;
                    m_AnimationClip.UpdateTime(m_AnimationClip.StartTick, m_AnimationClip.StartTick + Mathf.RoundToInt(m_Clip.length / TimeLineArea.c_FrameSec));
                    if (m_AnimationClip.rootMotion)
                        GetRootMotionData(m_Clip, m_AnimationClip.rootWrite, ActionWindow.ActionInfo.RootMotionDatas);
                    isDirty = true;
                }
            }

            m_AnimationClip.layer = EditorGUILayout.IntField("播放层级", m_AnimationClip.layer);
            EditorGUI.BeginChangeCheck();
            m_AnimationClip.speed = EditorGUILayout.FloatField("播放速度", m_AnimationClip.speed);
            if (EditorGUI.EndChangeCheck())
            {
                float endTick = m_AnimationClip.StartTick + m_Clip.length / TimeLineArea.c_FrameSec;
                endTick /= m_AnimationClip.speed;
                m_AnimationClip.UpdateTime(m_AnimationClip.StartTick, Mathf.RoundToInt(endTick));
                isDirty = true;
            }
            m_AnimationClip.isLoop = EditorGUILayout.ToggleLeft("是否循环", m_AnimationClip.isLoop);
            m_AnimationClip.durationByCancel = EditorGUILayout.ToggleLeft("使用Cancle动作的过渡时间", m_AnimationClip.durationByCancel);
            if (!m_AnimationClip.durationByCancel)
                m_AnimationClip.duration = EditorGUILayout.FloatField("过渡时间", m_AnimationClip.duration);

            if (m_Clip != null)
            {
                EditorGUI.BeginChangeCheck();
                m_AnimationClip.rootMotion = EditorGUILayout.ToggleLeft("写入RootMotion", m_AnimationClip.rootMotion);
                if (m_AnimationClip.rootMotion)
                    m_AnimationClip.rootWrite = (ActionAnimationClip.RoomTransformWrite)EditorGUILayout.EnumFlagsField("要写入的属性", m_AnimationClip.rootWrite);
                if (EditorGUI.EndChangeCheck() && !string.IsNullOrEmpty(m_AnimationClip.animationClip) && ActionWindow.ActionInfo != null)
                {
                    if (m_AnimationClip.rootMotion)
                    {
                        GetRootMotionData(m_Clip, m_AnimationClip.rootWrite, ActionWindow.ActionInfo.RootMotionDatas);
                    }
                    else
                        ActionWindow.ActionInfo.RootMotionDatas.Clear();
                }

                if (m_AnimationClip.rootMotion)
                    m_RootMotionDataFoldOut = EditorGUILayout.Foldout(m_RootMotionDataFoldOut, "数据");

                if (m_AnimationClip.rootMotion && m_RootMotionDataFoldOut)
                {
                    foreach (var data in ActionWindow.ActionInfo.RootMotionDatas)
                    {
                        using (new EditorGUILayout.HorizontalScope())
                        {
                            EditorGUILayout.LabelField($"帧号：{data.tick}     位置：{data.rootPosition}      旋转：{data.rootRotation}      欧拉角：{data.rootRotation.eulerAngles}");
                        }
                    }
                }
            }

            return isDirty;
        }

        private void GetRootMotionData(AnimationClip clip, ActionAnimationClip.RoomTransformWrite writeType, List<RootMotionData> datas)
        { 
            datas.Clear();

            var bindings = AnimationUtility.GetCurveBindings(clip);
            
            AnimationCurve posX = null, posY = null, posZ = null;
            AnimationCurve rotX = null, rotY = null, rotZ = null, rotW = null;

            foreach (var binding in bindings)
            {
                if (binding.propertyName == "RootT.x")
                    posX = AnimationUtility.GetEditorCurve(clip, binding);
                if (binding.propertyName == "RootT.y")
                    posY = AnimationUtility.GetEditorCurve(clip, binding);
                if (binding.propertyName == "RootT.z")
                    posZ = AnimationUtility.GetEditorCurve(clip, binding);
                if (binding.propertyName == "RootQ.x")
                    rotX = AnimationUtility.GetEditorCurve(clip, binding);
                if (binding.propertyName == "RootQ.y")
                    rotY = AnimationUtility.GetEditorCurve(clip, binding);
                if (binding.propertyName == "RootQ.z")
                    rotZ = AnimationUtility.GetEditorCurve(clip, binding);
                if (binding.propertyName == "RootQ.w")
                    rotW = AnimationUtility.GetEditorCurve(clip, binding);
            }

            if (posX == null || posY == null || posZ == null || rotX == null || rotY == null || rotZ == null)
            {
                Debug.LogError("Position curves not found.");
                return;
            }

            // 存储提取的Root Motion数据
            float totalTime = clip.length;
            float deltaTime = TimeLineArea.c_FrameSec * m_AnimationClip.speed;

            int tick = 0;
            for (float t = 0f; t <= totalTime; t += deltaTime)
            {
                RootMotionData data = new RootMotionData(); 
                data.tick = tick;
                data.rootPosition = new Vector3(
                    writeType.HasFlag(ActionAnimationClip.RoomTransformWrite.PositionXZ) ? posX.Evaluate(t) : 0f,
                    writeType.HasFlag(ActionAnimationClip.RoomTransformWrite.PositionY) ? posY.Evaluate(t) : 0f,
                    writeType.HasFlag(ActionAnimationClip.RoomTransformWrite.PositionXZ) ? posZ.Evaluate(t) : 0f
                );
                data.enablePosition = data.rootPosition != Vector3.zero;
                if (writeType.HasFlag(ActionAnimationClip.RoomTransformWrite.Rotation))
                {
                    data.rootRotation = new Quaternion(rotX.Evaluate(t), rotY.Evaluate(t), rotZ.Evaluate(t), rotW.Evaluate(t));
                    data.enableRotation = true;
                }
                datas.Add(data);
                tick++;
            }
        }
    }
}
