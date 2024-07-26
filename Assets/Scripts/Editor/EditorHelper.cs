using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

public class EditorHelper
{
    /// <summary>
    /// 绘制格子边界
    /// </summary>
    /// <param name="array">需要绘制的集合</param>
    /// <param name="row">列数</param>
    /// <param name="drawObj">绘制item的Render</param>
    public static void DrawBorder(ICollection array, int row, UnityAction<object, Rect, int> drawObj)
    {
        if (array == null) return;

        int flag = 0;
        int count = array.Count;
        EditorGUILayout.BeginVertical(GUI.skin.box);

        foreach (var item in array)
        {

            if (flag % row == 0)
                EditorGUILayout.BeginHorizontal();

            Rect rect = EditorGUILayout.BeginVertical(new GUIStyle { name = "quick-search-item-background2" });
            drawObj.Invoke(item, rect, flag);
            EditorGUILayout.EndVertical();

            flag++;

            if (flag % row == 0 || flag == count)
                EditorGUILayout.EndHorizontal();

        }

        EditorGUILayout.EndVertical();
    }

    public enum SpacingMode
    {
        /// <summary>No extra space.</summary>
        None,

        /// <summary>Add extra space before the new area.</summary>
        Before,

        /// <summary>Add extra space after the new area.</summary>
        After,

        /// <summary>Add extra space before and after the new area.</summary>
        BeforeAndAfter
    }

    public static Rect LayoutSingleLineRect(SpacingMode spacing = SpacingMode.None)
    {
        Rect rect;
        switch (spacing)
        {
            case SpacingMode.None:
                return GUILayoutUtility.GetRect(0, EditorGUIUtility.singleLineHeight);

            case SpacingMode.Before:
                rect = GUILayoutUtility.GetRect(0, EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing);
                rect.yMin += EditorGUIUtility.standardVerticalSpacing;
                return rect;

            case SpacingMode.After:
                rect = GUILayoutUtility.GetRect(0, EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing);
                rect.height -= EditorGUIUtility.standardVerticalSpacing;
                return rect;

            case SpacingMode.BeforeAndAfter:
                rect = GUILayoutUtility.GetRect(0, EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing * 2);
                rect.yMin += EditorGUIUtility.standardVerticalSpacing;
                rect.height -= EditorGUIUtility.standardVerticalSpacing;
                return rect;

            default:
                throw new ArgumentException($"Unsupported {nameof(EditorGUIUtility.standardVerticalSpacing)}: " + spacing, nameof(spacing));
        }
    }
}
