using GAS.Runtime;
using System;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class AnimationCueClip : CueAbilityClip
    {
        public int layer;

        public float duration;

        public AnimationClip clip;

        public override void OnTrigger(AbilitySystemComponent asc)
        {
            AnimationCue.Trigger<AnimationClipCue>(asc, new AnimationCueArg() { clip = clip, duration = duration, layer = layer });
        }

#if UNITY_EDITOR

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            layer = UnityEditor.EditorGUILayout.IntField("播放层级",layer);
            duration = UnityEditor.EditorGUILayout.FloatField("过渡时间", duration);
            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                clip = UnityEditor.EditorGUILayout.ObjectField("动画片段", clip, typeof(AnimationClip), false) as AnimationClip;
                if (clip != null && GUILayout.Button("Defalut Length", GUILayout.Width(100)))
                {
                    UpdateTime(StartTick, StartTick + Mathf.RoundToInt(clip.length / 0.02f));
                    isDirty = true;
                }
            }

            return isDirty;
        }

#endif
    }
}
