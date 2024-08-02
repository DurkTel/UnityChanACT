using Actioner.Runtime;
using GAS.Runtime;
using LGameFramework.GameBase.Blackboard;
using UnityEngine;

namespace UnityChanAct
{
    [System.Serializable]
    public class AnimationCueClip : CueAbilityClip
    {
        public int layer;

        public float duration;

        public bool durationByScript;

        public bool rootMotion;

        public AnimationClip clip;

        public override void OnTrigger(AbilitySystemComponent asc)
        {

            var newDur = duration;
            if (durationByScript && asc.TryGetComponent<GameBlackboard>(out var blackboard))
            {
                blackboard.TryGetValue(PlayerController.s_AnimationDurationKey, out newDur);
                blackboard.SetValue<float>(PlayerController.s_AnimationDurationKey, ActionerPlayable.s_DefaultFadeSpeed);
            }

            AnimationCue.Trigger<AnimationClipCue>(asc, new AnimationCueArg() { clip = clip, duration = newDur, layer = layer, rootMotion = rootMotion });


        }

#if UNITY_EDITOR

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            using (new UnityEditor.EditorGUILayout.HorizontalScope())
            {
                clip = UnityEditor.EditorGUILayout.ObjectField("����Ƭ��", clip, typeof(AnimationClip), false) as AnimationClip;
                if (clip != null && GUILayout.Button("Defalut Length", GUILayout.Width(100)))
                {
                    UpdateTime(StartTick, StartTick + Mathf.RoundToInt(clip.length / 0.02f));
                    isDirty = true;
                }
            }


            layer = UnityEditor.EditorGUILayout.IntField("���Ų㼶", layer);
            if (!durationByScript)
                duration = UnityEditor.EditorGUILayout.FloatField("����ʱ��", duration);

            durationByScript = UnityEditor.EditorGUILayout.ToggleLeft("ʹ�ýű���ֵ����ʱ��", durationByScript);
            rootMotion = UnityEditor.EditorGUILayout.ToggleLeft("Ӧ��RootMotion", rootMotion);

            return isDirty;
        }

#endif
    }
}
