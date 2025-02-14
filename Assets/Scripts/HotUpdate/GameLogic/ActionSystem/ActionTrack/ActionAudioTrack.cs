using LGameFramework.GameCore;
using System;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionAudioTrack : ActionTrack
    {
        public override string TrackName => "“Ù∆µπÏµ¿";

        public override string GetClipSpec()
        {
            return "ActionAudioClipSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionAudioClip);
        }
    }

    public class ActionAudioClipSpec : ActionClipSpec
    {
        private ActionAudioClip Data { get { return RawData as ActionAudioClip; } }

        public override void Dispose()
        {
            
        }

        public override void OnEnter(float deltaTime)
        {
            AudioUtility.Play(Data.audioGroupName, Data.audioClip, true);
        }

        public override void OnExit(float deltaTime)
        {
            AudioUtility.Delete(Data.audioGroupName, Data.audioClip);
        }

        public override void OnTick(float deltaTime)
        {
            
        }
    }

    [System.Serializable]
    public class ActionAudioClip : ActionClip
    {
        public string audioGroupName;

        public string audioClip;
        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionAudioClipEditor";
        }
    }
}
