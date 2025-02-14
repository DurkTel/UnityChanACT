using GAS.Runtime;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;

[CustomPropertyDrawer(typeof(LGameFramework.GameLogic.AudioCueSpec.Parameter))]
public class AudioCueParameter : PropertyDrawer
{
    private GUIContent m_FoldTitleContent = new GUIContent("音效参数");
    private GUIContent m_AudioGroupContent = new GUIContent("音轨组");
    private GUIContent m_AudioClipContent = new GUIContent("音效片段");

    private bool m_IsFolded = false;

    private float height = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;

    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        EditorGUI.BeginProperty(position, label, property);

        position.height = EditorGUIUtility.singleLineHeight;

        // 缩进和标签显示
        m_IsFolded = EditorGUI.Foldout(position, m_IsFolded, m_FoldTitleContent);

        if (m_IsFolded)
        {
            position.x += 20;
            position.y += height;

            // 计算每个字段的宽度和位置
            var audioGroupNameRect = new Rect(position);
            position.y += height;
            var audioClipRect = new Rect(position);

            // 获取结构体内的字段
            SerializedProperty audioGroupNameProp = property.FindPropertyRelative("audioGroupName");
            SerializedProperty audioClipProp = property.FindPropertyRelative("audioClip");

            // 绘制字段
            EditorGUI.PropertyField(audioGroupNameRect, audioGroupNameProp, m_AudioGroupContent);
            EditorGUI.PropertyField(audioClipRect, audioClipProp, m_AudioClipContent);
        }


        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        if (!m_IsFolded)
            return EditorGUIUtility.singleLineHeight;
        return (height) * 3;
    }
}

#endif

namespace LGameFramework.GameLogic
{
    public class AudioCueSpec : GameplayCue
    {
        public override void Dispose()
        {
            
        }

        public override void Trigger<V>(V arg)
        {
            if (arg is not Parameter param)
                return;

            AudioUtility.Play(param.audioGroupName, param.audioClip, true);
        }

        [System.Serializable]
        public struct Parameter
        {
            public string audioGroupName;

            public string audioClip;
        }
    }
}
