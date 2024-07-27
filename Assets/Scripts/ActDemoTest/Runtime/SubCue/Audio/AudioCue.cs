using Actioner.Runtime;
using GAS.Runtime;
using LGameFramework.GameCore;
using UnityEngine.Events;
using UnityEngine;

namespace UnityChanAct
{
    public class AudioCue : GameplayCueDuration
    {
        public override void Dispose()
        {
            
        }

        public override void Trigger<V>(V arg)
        {
            if (arg is AudioCueArg actionArg)
                AudioUtility.Play(actionArg.audioGroupName, actionArg.audioClip);
        }

        public static AudioCue Trigger(AbilitySystemComponent asc, AudioCueArg arg)
        {
            return asc.Cues.TriggerCue<AudioCue, AudioCueArg>(arg);
        }
    }

    [System.Serializable]
    public struct AudioCueArg
    {
        public string audioGroupName;
        public AudioClip audioClip;
    }
}
