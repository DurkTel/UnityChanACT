using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    public static class EditorContainerWindow
    {
        private static Type m_ContainerWindowType;

        public static Type ContainerWindowType
        {
            get
            {
                m_ContainerWindowType ??= typeof(EditorWindow).Assembly.GetType("UnityEditor.ContainerWindow");
                return m_ContainerWindowType;
            }
        }

        public static object CreateInstance()
        { 
            return ScriptableObject.CreateInstance(ContainerWindowType);
        }

        public static void SetRootView(object instance, object value)
        {
            FieldInfo info = ContainerWindowType.GetField("m_RootView", BindingFlags.Instance | BindingFlags.NonPublic);
            if (info != null)
                info.SetValue(instance, value);
        }

        public static void SetPosition(object instance, object value)
        {
            PropertyInfo info = ContainerWindowType.GetProperty("position", BindingFlags.Instance | BindingFlags.Public);
            if (info != null)
                info.SetValue(instance, value);
        }

        public static Rect GetPosition(object instance)
        {
            PropertyInfo info = ContainerWindowType.GetProperty("position", BindingFlags.Instance | BindingFlags.Public);
            return info == null ? default : (Rect)info.GetValue(instance);   
        }

        public static void Show(object instance, int showMode, bool loadPosition, bool displayImmediately, bool setFocus)
        {
            MethodInfo info = ContainerWindowType.GetMethod("Show", BindingFlags.Instance | BindingFlags.Public, null, new Type[]
            {
                typeof(EditorWindow).Assembly.GetType("UnityEditor.ShowMode"), typeof(bool), typeof(bool), typeof(bool)
            }, null);

            if(info != null)
                info.Invoke(instance, new object[] { showMode, loadPosition, displayImmediately, setFocus });
        }

        public static void OnResize(object instance)
        {
            MethodInfo info = ContainerWindowType.GetMethod("OnResize", BindingFlags.Instance | BindingFlags.NonPublic);
            if (info != null)
                info.Invoke(instance, null);
        }
    }


    public static class EditorDockArea
    {
        private static Type m_DockAreaType;

        public static Type DockAreaType
        {
            get
            {
                m_DockAreaType ??= typeof(EditorWindow).Assembly.GetType("UnityEditor.DockArea");
                return m_DockAreaType;
            }
        }

        public static object CreateInstance()
        {
            return ScriptableObject.CreateInstance(DockAreaType);
        }

        public static void AddTab(object instance, EditorWindow window, bool sendPaneEvents = true)
        {
            MethodInfo info = DockAreaType.GetMethod("AddTab", BindingFlags.Instance | BindingFlags.Public, null,
                new Type[] { typeof(EditorWindow), typeof(bool) }, null);

            if(info != null)
                info.Invoke(instance, new object[] { window, sendPaneEvents });
        }

        public static void SetPosition(object instance, object value)
        {
            PropertyInfo info = DockAreaType.GetProperty("position", BindingFlags.Instance | BindingFlags.Public);
            if (info != null)
                info.SetValue(instance, value);
        }

        public static Rect GetPosition(object instance)
        {
            PropertyInfo info = DockAreaType.GetProperty("position", BindingFlags.Instance | BindingFlags.Public);
            return info == null ? default : (Rect)info.GetValue(instance);
        }
    }

    public static class EditorEditorWindow
    {
        private static Type m_EditorWindowType;

        public static Type EditorWindowType
        {
            get
            {
                m_EditorWindowType ??= typeof(EditorWindow);
                return m_EditorWindowType;
            }
        }

        public static void MakeParentsSettingsMatchMe(object instance)
        {
            MethodInfo info = EditorWindowType.GetMethod("MakeParentsSettingsMathMe", BindingFlags.Instance | BindingFlags.NonPublic);
            if (info != null)
                info.Invoke(instance, null);
        }
    }

    public static class EditorSplitView
    {
        private static Type m_SplitViewType;

        public static Type SplitViewType
        {
            get
            {
                m_SplitViewType ??= typeof(EditorWindow).Assembly.GetType("UnityEditor.SplitView");
                return m_SplitViewType;
            }
        }

        public static object CreateInstance()
        {
            return ScriptableObject.CreateInstance(SplitViewType);
        }

        public static void AddChild(object instance, object view)
        {
            MethodInfo info = SplitViewType.GetMethod("AddChild", BindingFlags.Instance | BindingFlags.Public, null,
                new Type[] { typeof(EditorWindow).Assembly.GetType("UnityEditor.View") }, null);
            if (info != null)
                info.Invoke(instance, new object[] { view });
        }

        public static void SetPosition(object instance, object value)
        {
            PropertyInfo info = SplitViewType.GetProperty("position", BindingFlags.Instance | BindingFlags.Public);
            if (info != null)
                info.SetValue(instance, value);
        }

        public static Rect GetPosition(object instance)
        {
            PropertyInfo info = SplitViewType.GetProperty("position", BindingFlags.Instance | BindingFlags.Public);
            return info == null ? default : (Rect)info.GetValue(instance);
        }

        public static void SetVertical(object instance, bool isVertical)
        {
            FieldInfo info = SplitViewType.GetField("vertical", BindingFlags.Instance | BindingFlags.Public);
            if (info != null)
                info.SetValue(instance, isVertical);
        }
    }
}
