using LGameFramework.GameLogic;
using UnityEngine;
using UnityEditor;
using LGameFramework.GameCore.Asset;

namespace LGameFramework.GameEditor
{
    public class ActionAudioClipEditor : ActionClipEditor
    {
        private ActionAudioClip m_AudioClip;

        private AudioClip m_Clip;

        public ActionAudioClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_AudioClip = actionClip as ActionAudioClip;
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            if (m_Clip == null && !string.IsNullOrEmpty(m_AudioClip.audioClip))
            {
                var assetPath = AssetManifest_Editor.GetAssetManifest(AssetManifest_Editor.editorPath).GetPath(m_AudioClip.audioClip);
                m_Clip = AssetDatabase.LoadAssetAtPath<AudioClip>(assetPath);
            }

            using (new EditorGUILayout.HorizontalScope())
            {
                m_AudioClip.audioClip = EditorGUILayout.TextField("音效片段", m_AudioClip.audioClip);
                if (!string.IsNullOrEmpty(m_AudioClip.audioClip) && GUILayout.Button("Defalut Length", GUILayout.Width(100)))
                {
                    m_AudioClip.UpdateTime(m_AudioClip.StartTick, m_AudioClip.StartTick + Mathf.RoundToInt(m_Clip.length / 0.02f));
                    isDirty = true;
                }
            }

            m_AudioClip.audioGroupName = EditorGUILayout.TextField("播放的音频组", m_AudioClip.audioGroupName);

            return isDirty;
        }
    }
}
