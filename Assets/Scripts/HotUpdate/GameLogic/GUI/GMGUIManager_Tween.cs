using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameLogic.GUI
{
    public partial class GMGUIManager
    {
        public static void GUITweenDefault(GUIView view, bool open, UnityAction callBack)
        {
            callBack?.Invoke();
        }
    }
}
