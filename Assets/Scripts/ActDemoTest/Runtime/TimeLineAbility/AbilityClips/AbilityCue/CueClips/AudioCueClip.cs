using GAS.Runtime;
using System;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class AudioCueClip : CueAbilityClip
    {
        public string audioGroupName;

        public AudioClip audioClip;

        public override void OnTrigger(AbilitySystemComponent asc)
        {
            AudioCue.Trigger(asc, new AudioCueArg() { audioGroupName = audioGroupName, audioClip = audioClip });
        }

#if UNITY_EDITOR

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                audioClip = UnityEditor.EditorGUILayout.ObjectField("��ЧƬ��", audioClip, typeof(AudioClip), false) as AudioClip;
                if (audioClip != null && GUILayout.Button("Defalut Length", GUILayout.Width(100)))
                {
                    UpdateTime(StartTick, StartTick + Mathf.RoundToInt(audioClip.length / 0.02f));
                    isDirty = true;
                }
            }

            audioGroupName = UnityEditor.EditorGUILayout.TextField("���ŵ���Ƶ��", audioGroupName);

            return isDirty;
        }
#endif
    }
}
