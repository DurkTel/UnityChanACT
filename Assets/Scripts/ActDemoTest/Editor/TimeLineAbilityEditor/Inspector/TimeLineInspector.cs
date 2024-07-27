using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

namespace GAS.Editor
{
    public class TimeLineInspector : UnityEditor.EditorWindow
    {
        private TimeLineAbilityClip m_CurrentSelectClip;

        private bool m_IsDirty;

        public UnityAction OnRepaint;

        private void Update()
        {
            if (m_IsDirty)
            {
                m_IsDirty = false;
                OnRepaint?.Invoke();
            }
        }

        private void OnGUI()
        {
            if (m_CurrentSelectClip != null)
                m_IsDirty = m_CurrentSelectClip.OnInspectorGUI() || m_IsDirty;
        }

        public void UpdateSelect(TimeLineAbilityClip clip)
        { 
            m_CurrentSelectClip = clip;
            Repaint();
        }

    }
}
