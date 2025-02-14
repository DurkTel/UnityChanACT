using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;

[CustomPropertyDrawer(typeof(LGameFramework.GameLogic.AttackParameter))]
public class AttackParameterEditor : PropertyDrawer
{
    private GUIContent m_FoldTitleContent = new GUIContent("攻击参数");
    private GUIContent m_ParamContent1 = new GUIContent("攻击倍率");
    private GUIContent m_ParamContent2 = new GUIContent("攻击优先级");
    private GUIContent m_ParamContent3 = new GUIContent("发起者顿帧");
    private GUIContent m_ParamContent4 = new GUIContent("受击者顿帧");
    private GUIContent m_ParamContent5 = new GUIContent("打击特效预制");
    private GUIContent m_ParamContent7 = new GUIContent("自动锁定敌人");

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
            var rect1 = new Rect(position);
            position.y += height;
            var rect2 = new Rect(position);
            position.y += height;
            var rect3 = new Rect(position);
            position.y += height;
            var rect4 = new Rect(position);
            position.y += height;
            var rect5 = new Rect(position);
            position.y += height;
            var rect7 = new Rect(position);

            // 获取结构体内的字段
            SerializedProperty prop1 = property.FindPropertyRelative("attackMagnification");
            SerializedProperty prop2 = property.FindPropertyRelative("priority");
            SerializedProperty prop3 = property.FindPropertyRelative("sourceTickFreeze");
            SerializedProperty prop4 = property.FindPropertyRelative("targetTickFreeze");
            SerializedProperty prop5 = property.FindPropertyRelative("hitEffectPrefab");
            SerializedProperty prop7 = property.FindPropertyRelative("autoLookTarget");

            // 绘制字段
            EditorGUI.PropertyField(rect1, prop1, m_ParamContent1);
            EditorGUI.PropertyField(rect2, prop2, m_ParamContent2);
            EditorGUI.PropertyField(rect3, prop3, m_ParamContent3);
            EditorGUI.PropertyField(rect4, prop4, m_ParamContent4);
            EditorGUI.PropertyField(rect5, prop5, m_ParamContent5);
            EditorGUI.PropertyField(rect7, prop7, m_ParamContent7);
        }


        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        if (!m_IsFolded)
            return EditorGUIUtility.singleLineHeight;
        return (height) * 8;
    }
}

#endif

namespace LGameFramework.GameLogic
{
    public class AttackConfigAsset : GameplayEffectAsset
    {
        
        /// <summary>
        /// 攻击参数
        /// </summary>
        public AttackParameter attackParm;

        /// <summary>
        /// 音效参数
        /// </summary>
        public AudioCueSpec.Parameter audioParam;

        /// <summary>
        /// 镜头参数
        /// </summary>
        public CameraShakeCueSpec.Parameter cameraShakeParam;

    }


    [Serializable]
    public struct AttackParameter
    {
        /// <summary>
        /// 伤害倍率 万分比
        /// </summary>
        public float attackMagnification;

        /// <summary>
        /// 帧冻结（发起者）
        /// </summary>
        public int sourceTickFreeze;

        /// <summary>
        /// 帧冻结（受击者）
        /// </summary>
        public int targetTickFreeze;

        /// <summary>
        /// 击中特效预制
        /// </summary>
        public string hitEffectPrefab;

        /// <summary>
        /// 自动锁定目标
        /// </summary>
        public bool autoLookTarget;

        /// <summary>
        /// 攻击的优先级 低的会比高的弹刀
        /// </summary>
        public int priority;
    }
}
