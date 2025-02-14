using LGameFramework.GameBase;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class ActionInfoManifest : ScriptableObject
    {
        private static ActionInfoManifest s_Instance;

        private static string s_Path = Application.streamingAssetsPath;

        public List<ActionInfo> ActionInfoList = new List<ActionInfo>();

        public int Count { get { return ActionInfoList.Count; } }

        public ActionInfo this[int index] 
        { 
            get 
            {
                if (index < 0 || index > Count)
                    return null;
                return ActionInfoList[index]; 
            } 
        }

        public bool Contains(string actionID)
        { 
            foreach (ActionInfo info in ActionInfoList)
            {
                if (info.ActionID == actionID)
                    return true;
            }

            return false;
        }

        public static ActionInfo Get(string actionID)
        {
            if (s_Instance == null)
                LoadFormJson();

            foreach (ActionInfo info in s_Instance.ActionInfoList)
            {
                if (info.ActionID == actionID)
                    return info;
            }

            return null;
        }

        public static void Get(string actionID, List<ActionInfo> infos)
        {
            if (s_Instance == null)
                LoadFormJson();

            infos.Clear();
            foreach (ActionInfo info in s_Instance.ActionInfoList)
            {
                var array = info.ActionID.Split('_');
                if (array != null && array.Length > 0 && array[0] == actionID)
                    infos.Add(info);
            }
        }

        public static ActionInfoManifest LoadFormJson()
        {
            if (s_Instance == null)
            {
                s_Instance = ScriptableObject.CreateInstance<ActionInfoManifest>();
                string path = Path.Combine(s_Path, "ActionManifest.json");
                if (File.Exists(path))
                {
                    string allData = File.ReadAllText(path);
                    if (!string.IsNullOrEmpty(allData))
                        JsonHelper.FromJsonOverwrite(allData, s_Instance, true);
                }
            }

            return s_Instance;
        }

#if UNITY_EDITOR

        public static new void SetDirty()
        {
            UnityEditor.EditorUtility.SetDirty(s_Instance);
        }

        public static void ExprotJson()
        {
            if (s_Instance == null)
                return;
            string assetJson = JsonHelper.ToJason(s_Instance);
            File.WriteAllText(Path.Combine(s_Path, "ActionManifest.json"), assetJson);
        }

#endif
    }
}
