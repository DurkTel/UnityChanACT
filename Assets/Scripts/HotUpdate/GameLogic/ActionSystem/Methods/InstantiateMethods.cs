using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public static class InstantiateMethods
    {
        private static Dictionary<string, Type> s_Methods = new Dictionary<string, Type>();

        public static ActionClipSpec Invoke(string name)
        {
            if (!s_Methods.TryGetValue(name, out var type))
            {
                type = Type.GetType("LGameFramework.GameLogic." + name);
                if (type == null)
                {
                    //Debug.LogError($"InstantiateMethods.s_Methods没有可以实例化的类{name}");
                    return null;
                }
                s_Methods.Add(name, type);
            }

            return Pool.Get(type) as ActionClipSpec;
        }
    }
}
