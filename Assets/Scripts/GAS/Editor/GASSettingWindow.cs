using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

namespace GAS.Editor
{
    public class GASSettingWindow : PageWindow
    {
        private PageElement[] allPages;
        protected override PageElement[] m_AllPages { get { return allPages; } }

        [MenuItem("LGame/GAS/GAS Setting")]
        private static void OpenGUI()
        {
            GASSettingWindow resetPivot = (GASSettingWindow)EditorWindow.GetWindow(typeof(GASSettingWindow));
            resetPivot.titleContent = new GUIContent("GAS Setting");
            resetPivot.minSize = new Vector2(1000, 500);
            resetPivot.Show();
        }

        public override void OnEnable()
        {
            allPages = new PageElement[] { new GameplayConfigurePage(), new GameplayTagPage(), new GameplayAttributePage(), new GameplayAttributeSetPage() };
            base.OnEnable();
        }
    }
}
