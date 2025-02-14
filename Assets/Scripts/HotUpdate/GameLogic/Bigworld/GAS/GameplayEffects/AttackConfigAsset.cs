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
    private GUIContent m_FoldTitleContent = new GUIContent("��������");
    private GUIContent m_ParamContent1 = new GUIContent("��������");
    private GUIContent m_ParamContent2 = new GUIContent("�������ȼ�");
    private GUIContent m_ParamContent3 = new GUIContent("�����߶�֡");
    private GUIContent m_ParamContent4 = new GUIContent("�ܻ��߶�֡");
    private GUIContent m_ParamContent5 = new GUIContent("�����ЧԤ��");
    private GUIContent m_ParamContent7 = new GUIContent("�Զ���������");

    private bool m_IsFolded = false;

    private float height = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;

    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        EditorGUI.BeginProperty(position, label, property);

        position.height = EditorGUIUtility.singleLineHeight;

        // �����ͱ�ǩ��ʾ
        m_IsFolded = EditorGUI.Foldout(position, m_IsFolded, m_FoldTitleContent);

        if (m_IsFolded)
        {
            position.x += 20;
            position.y += height;

            // ����ÿ���ֶεĿ�Ⱥ�λ��
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

            // ��ȡ�ṹ���ڵ��ֶ�
            SerializedProperty prop1 = property.FindPropertyRelative("attackMagnification");
            SerializedProperty prop2 = property.FindPropertyRelative("priority");
            SerializedProperty prop3 = property.FindPropertyRelative("sourceTickFreeze");
            SerializedProperty prop4 = property.FindPropertyRelative("targetTickFreeze");
            SerializedProperty prop5 = property.FindPropertyRelative("hitEffectPrefab");
            SerializedProperty prop7 = property.FindPropertyRelative("autoLookTarget");

            // �����ֶ�
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
        /// ��������
        /// </summary>
        public AttackParameter attackParm;

        /// <summary>
        /// ��Ч����
        /// </summary>
        public AudioCueSpec.Parameter audioParam;

        /// <summary>
        /// ��ͷ����
        /// </summary>
        public CameraShakeCueSpec.Parameter cameraShakeParam;

    }


    [Serializable]
    public struct AttackParameter
    {
        /// <summary>
        /// �˺����� ��ֱ�
        /// </summary>
        public float attackMagnification;

        /// <summary>
        /// ֡���ᣨ�����ߣ�
        /// </summary>
        public int sourceTickFreeze;

        /// <summary>
        /// ֡���ᣨ�ܻ��ߣ�
        /// </summary>
        public int targetTickFreeze;

        /// <summary>
        /// ������ЧԤ��
        /// </summary>
        public string hitEffectPrefab;

        /// <summary>
        /// �Զ�����Ŀ��
        /// </summary>
        public bool autoLookTarget;

        /// <summary>
        /// ���������ȼ� �͵Ļ�ȸߵĵ���
        /// </summary>
        public int priority;
    }
}
