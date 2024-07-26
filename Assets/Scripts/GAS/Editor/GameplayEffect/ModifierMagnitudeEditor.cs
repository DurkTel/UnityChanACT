using GAS.Runtime;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    [CustomEditor(typeof(ModifierMagnitudeCalculation), true)]
    public class ModifierMagnitudeEditor : UnityEditor.Editor
    {
        private ModifierMagnitudeCalculation m_MMCAsset;

        private List<string> m_AllAttributeSetName = new List<string>();

        private List<string> m_AllAttributeName = new List<string>();

        private List<string>[] m_AllParametAttributeName;

        private void OnEnable()
        {
            m_MMCAsset = target as ModifierMagnitudeCalculation;

            m_AllAttributeSetName.Clear();
            foreach (var item in GameplayAttributeSetLib.AttributeSetMap.Keys)
                m_AllAttributeSetName.Add(item);

            OnUpdateAllAttributeName(m_AllAttributeName, m_MMCAsset.AttributeSetName);

            if (m_MMCAsset.Parameter == null || m_MMCAsset.Parameter.Length != m_MMCAsset.ParameterCount)
                m_MMCAsset.Parameter = new ModifierParameter[m_MMCAsset.ParameterCount];


            m_AllParametAttributeName = new List<string>[m_MMCAsset.ParameterCount];
            for (int i = 0; i < m_MMCAsset.ParameterCount; i++)
            {
                m_AllParametAttributeName[i] ??= new List<string>();
                OnUpdateAllAttributeName(m_AllParametAttributeName[i], m_MMCAsset.Parameter[i].AttributeSetName);
            }
        }

        public override void OnInspectorGUI()
        {
            //base.OnInspectorGUI();

            OnDrawDescriptionTags();
            OnDrawMMC();
            OnDrawMMCParameter();

            GUILayout.Space(1000);
        }

        private void OnDrawDescriptionTags()
        {
            Rect titleRect = new Rect(10, 15, 300, 150);
            GUI.Box(titleRect, "", EditorStyles.helpBox);

            titleRect.width = 290;

            titleRect.height = 20;
            titleRect.x += 110;
            EditorGUI.LabelField(titleRect, "基本信息");
            titleRect.x -= 110;
            titleRect.x += 20;

            titleRect.y += 20;
            titleRect.x -= 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            EditorGUI.SelectableLabel(titleRect, "所属计算类：" + m_MMCAsset.GetType().Name);
            titleRect.y += 25;
            titleRect.x -= 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            EditorGUI.SelectableLabel(titleRect, "计算公式：" + m_MMCAsset.Formula);

            titleRect.x -= 15;
            titleRect.y += 25;
            titleRect.height = 60;

            string empty = "对于计算公式的描述\n目前未填写该计算公式的描述哦~";
            bool isEmpty = string.IsNullOrEmpty(m_MMCAsset.Description);
            var style = new GUIStyle(EditorStyles.textField);
            style.fontStyle = isEmpty ? FontStyle.Italic : FontStyle.Normal;

            var str = EditorGUI.TextArea(titleRect, isEmpty ? empty : m_MMCAsset.Description, style);
            if (str != empty)
                m_MMCAsset.Description = str;
        }

        private void OnUpdateAllAttributeName(List<string> attrNames, string setName)
        {
            if (string.IsNullOrEmpty(setName))
                return;

            var attr = Activator.CreateInstance(GameplayAttributeSetLib.AttributeSetMap[setName]) as GameplayAttributeSet;
            attrNames.Clear();
            attrNames.AddRange(attr.AttributeNames.ToList());
        }

        private void OnDrawMMC()
        {
            Rect titleRect = new Rect(330, 15, 300, 100);
            GUI.Box(titleRect, "", EditorStyles.helpBox);

            titleRect.width = 290;

            titleRect.height = 20;
            titleRect.x += 110;
            EditorGUI.LabelField(titleRect, "计算方式");
            titleRect.x -= 110;
            titleRect.x += 20;

            titleRect.y += 20;
            titleRect.x -= 15;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            bool isEmpty = string.IsNullOrEmpty(m_MMCAsset.AttributeSetName);
            if (isEmpty)
                EditorGUI.LabelField(titleRect, "修改属性集：" + "请指定要修改的属性集!");
            else
            {
                EditorGUI.LabelField(titleRect, "修改属性集：");
                int selectIndex = m_AllAttributeSetName.IndexOf(m_MMCAsset.AttributeSetName);
                EditorGUI.BeginChangeCheck();
                selectIndex = EditorGUI.Popup(new Rect(titleRect.x + 80, titleRect.y, 195, 20), selectIndex, m_AllAttributeSetName.ToArray());
                if (EditorGUI.EndChangeCheck())
                {
                    m_MMCAsset.AttributeSetName = m_AllAttributeSetName[selectIndex];
                    OnUpdateAllAttributeName(m_AllAttributeName, m_MMCAsset.AttributeSetName);
                }
            }

            titleRect.x -= 15;

            if (isEmpty && GUI.Button(new Rect(titleRect.x + titleRect.width - 20, titleRect.y, 20, 20), "+"))
            {
                TogglesStringWindow.OpenWindow(m_AllAttributeSetName, "Add AttributeSetName", true, (p) =>
                {
                    m_MMCAsset.AttributeSetName = p[0];
                    OnUpdateAllAttributeName(m_AllAttributeName, m_MMCAsset.AttributeSetName);
                });

            }

            titleRect.y += 25;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            bool isEmpty2 = string.IsNullOrEmpty(m_MMCAsset.AttributeName);
            if (isEmpty2)
                EditorGUI.LabelField(titleRect, "修改属性：" + "请指定要修改的属性!");
            else
            {
                EditorGUI.LabelField(titleRect, "修改属性：");
                int selectIndex = m_AllAttributeName.IndexOf(m_MMCAsset.AttributeName);
                EditorGUI.BeginChangeCheck();
                selectIndex = EditorGUI.Popup(new Rect(titleRect.x + 80, titleRect.y, 195, 20), selectIndex, m_AllAttributeName.ToArray());
                if (EditorGUI.EndChangeCheck())
                    m_MMCAsset.AttributeName = m_AllAttributeName[selectIndex];
            }
            titleRect.x -= 15;

            if (!isEmpty && isEmpty2 && GUI.Button(new Rect(titleRect.x + titleRect.width - 20, titleRect.y, 20, 20), "+"))
            {
                TogglesStringWindow.OpenWindow(m_AllAttributeName, "Add AttributeName", true, (p) =>
                {
                    m_MMCAsset.AttributeName = p[0];
                });
            }

            titleRect.y += 25;
            GUI.Box(titleRect, "", EditorStyles.helpBox);
            titleRect.x += 15;
            EditorGUI.LabelField(titleRect, "修改方式：");

            m_MMCAsset.Operation = (ModifierOperation)EditorGUI.EnumPopup(new Rect(titleRect.x + 80, titleRect.y, 195, 20), m_MMCAsset.Operation);

        }


        private void OnDrawMMCParameter()
        {
            Rect titleRect = new Rect(10, 180, 600, 150);


            titleRect.height = 20;
            titleRect.x += 285;
            EditorGUI.LabelField(titleRect, "公式入参");
            titleRect.x -= 285;
            titleRect.x += 5;
            titleRect.y += 25;
            titleRect.height = 60;
            titleRect.width = 610;

            for (int i = 0; i < m_MMCAsset.ParameterCount; i++)
            {
                OnDrawMMCSingleParameter(titleRect, i);
                titleRect.y += 65;
            }


            Rect bg = new Rect(10, 180, 620, m_MMCAsset.ParameterCount * 75);
            GUI.Box(bg, "", EditorStyles.helpBox);
        }

        private void OnDrawMMCSingleParameter(Rect rect, int index)
        { 
            GUI.Box(rect, "", EditorStyles.helpBox);
            rect.height = 20;
            GUI.Box(new Rect(rect.x + 5, rect.y, 30, 60), "\n" + m_MMCAsset.GetParameterStr(index));

            rect.x += 55;
            rect.y += 5;
            rect.width = 130;
            m_MMCAsset.Parameter[index].useConst = EditorGUI.ToggleLeft(rect, "是否使用常量", m_MMCAsset.Parameter[index].useConst);
            rect.y += 25;
            using (new EditorGUI.DisabledScope(!m_MMCAsset.Parameter[index].useConst))
            {
                m_MMCAsset.Parameter[index].magnitude = EditorGUI.FloatField(rect, m_MMCAsset.Parameter[index].magnitude);
            }
            rect.y -= 25;

            rect.width = 235;
            rect.x += 150;

            rect.x -= 15;
            GUI.Box(rect, "", EditorStyles.helpBox);
            rect.x += 15;
            using (new EditorGUI.DisabledScope(m_MMCAsset.Parameter[index].useConst))
            {

                bool isEmpty = string.IsNullOrEmpty(m_MMCAsset.Parameter[index].AttributeSetName);
                if (isEmpty)
                    EditorGUI.LabelField(rect, "入参属性集：" + "请指定要入参的属性集!");
                else
                {
                    EditorGUI.LabelField(rect, "入参属性集：");
                    int selectIndex = m_AllAttributeSetName.IndexOf(m_MMCAsset.Parameter[index].AttributeSetName);
                    EditorGUI.BeginChangeCheck();
                    selectIndex = EditorGUI.Popup(new Rect(rect.x + 80, rect.y, 195, 20), selectIndex, m_AllAttributeSetName.ToArray());
                    if (EditorGUI.EndChangeCheck())
                    {
                        m_MMCAsset.Parameter[index].AttributeSetName = m_AllAttributeSetName[selectIndex];
                        OnUpdateAllAttributeName(m_AllParametAttributeName[index], m_MMCAsset.Parameter[index].AttributeSetName);
                    }
                }

                rect.x -= 15;

                if (isEmpty && GUI.Button(new Rect(rect.x + rect.width - 20, rect.y, 20, 20), "+"))
                {
                    TogglesStringWindow.OpenWindow(m_AllAttributeSetName, "Add AttributeSetName", true, (p) =>
                    {
                        m_MMCAsset.Parameter[index].AttributeSetName = p[0];
                        OnUpdateAllAttributeName(m_AllParametAttributeName[index], m_MMCAsset.Parameter[index].AttributeSetName);
                    });

                }

                rect.y += 25;
                GUI.Box(rect, "", EditorStyles.helpBox);
                rect.x += 15;
                bool isEmpty2 = string.IsNullOrEmpty(m_MMCAsset.Parameter[index].AttributeName);
                if (isEmpty2)
                    EditorGUI.LabelField(rect, "入参属性：" + "请指定要入参的属性!");
                else
                {
                    EditorGUI.LabelField(rect, "入参属性：");
                    int selectIndex = m_AllParametAttributeName[index].IndexOf(m_MMCAsset.Parameter[index].AttributeName);
                    EditorGUI.BeginChangeCheck();
                    selectIndex = EditorGUI.Popup(new Rect(rect.x + 80, rect.y, 195, 20), selectIndex, m_AllParametAttributeName[index].ToArray());
                    if (EditorGUI.EndChangeCheck())
                        m_MMCAsset.Parameter[index].AttributeName = m_AllParametAttributeName[index][selectIndex];
                }
                rect.x -= 15;

                if (!isEmpty && isEmpty2 && GUI.Button(new Rect(rect.x + rect.width - 20, rect.y, 20, 20), "+"))
                {
                    TogglesStringWindow.OpenWindow(m_AllParametAttributeName[index], "Add AttributeName", true, (p) =>
                    {
                        m_MMCAsset.Parameter[index].AttributeName = p[0];
                    });
                }

                rect.y -= 25;
                rect.x += rect.width + 5;
                rect.width = 175;
                GUI.Box(rect, "", EditorStyles.helpBox);
                rect.x += 15;
                EditorGUI.LabelField(rect, "属性来源：");
                rect.x -= 15;

                m_MMCAsset.Parameter[index].form = (AttributeFrom)EditorGUI.EnumPopup(new Rect(rect.x + 80, rect.y, 95, 20), m_MMCAsset.Parameter[index].form);

                rect.y += 25;
                GUI.Box(rect, "", EditorStyles.helpBox);

                rect.x += 15;
                EditorGUI.LabelField(rect, "捕获方式：");
                rect.x -= 15;

                m_MMCAsset.Parameter[index].capture = (AttributeCaptureType)EditorGUI.EnumPopup(new Rect(rect.x + 80, rect.y, 95, 20), m_MMCAsset.Parameter[index].capture);

            }
        }
    }
}
