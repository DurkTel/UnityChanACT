using System;
using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    /// <summary>
    /// 动作清单
    /// 用于通过ActionName去加载动画
    /// 可通过ActionOverrideManifest去实现动画的override
    /// </summary>
    [CreateAssetMenu(fileName = "ActionManifest", menuName = "Actioner/ActionManifest")]
    public class ActionManifest : ScriptableObject
    {
        public List<string> actionNames = new List<string>(0);

        public List<ActionData> actionDatas = new List<ActionData>(0);

        public List<string> bundleNames = new List<string>(0);

        public List<ActionBundle> bundleDatas = new List<ActionBundle>(0);

        public List<string> blendNames = new List<string>(0);

        public List<ActionBlend> blendDatas = new List<ActionBlend>(0);

        public int ActionIndexOf(string actionName)
        { 
            return actionNames.IndexOf(actionName);
        }

        public ActionData GetAction(int index)
        {
            if (index < 0 || index >= actionNames.Count)
                return null;

            return actionDatas[index];
        }

        public ActionData GetAction(string actionName)
        {
            return GetAction(ActionIndexOf(actionName));
        }

        public int BundleIndexOf(string bundleName)
        {
            return bundleNames.IndexOf(bundleName);
        }

        public ActionBundle GetBundle(int index)
        {
            if (index < 0 || index >= bundleNames.Count)
                return null;

            return bundleDatas[index];
        }

        public ActionBundle GetBundle(string bundleName)
        {
            return GetBundle(BundleIndexOf(bundleName));
        }

        public int BlendIndexOf(string blendName)
        {
            return blendNames.IndexOf(blendName);
        }

        public ActionBlend GetBlend(int index)
        {
            if (index < 0 || index >= actionNames.Count)
                return null;

            return blendDatas[index];
        }

        public ActionBlend GetBlend(string blendName)
        {
            return GetBlend(BlendIndexOf(blendName));
        }
    }

}
