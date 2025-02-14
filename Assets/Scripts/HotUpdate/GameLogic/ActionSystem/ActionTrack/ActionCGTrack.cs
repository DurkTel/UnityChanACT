using GAS.Runtime;
using LGameFramework.GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionCGTrack : ActionTrack
    {
        public override string TrackName => "过场动画轨道";

        public override string GetClipSpec()
        {
            return "ActionCGSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionCGClip);
        }
    }

    public class ActionCGSpec : ActionClipSpec
    {
        private ActionCGClip Data { get { return RawData as ActionCGClip; } }

        private GameObject m_TimeLineGO;

        private PlayableDirector m_Director;

        public override void Dispose()
        {
            
        }

        public override void OnEnter(float deltaTime)
        {
            m_TimeLineGO = AssetUtility.LoadAsset<GameObject>(Data.timelineAsset);
            m_Director = m_TimeLineGO.GetComponent<PlayableDirector>();
            m_TimeLineGO.SetActive(true);
            m_Director.Play();
        }

        public override void OnExit(float deltaTime)
        {
            //m_Director.Stop();
            m_TimeLineGO.SetActive(false);
            AssetUtility.Destroy(m_TimeLineGO);
            m_TimeLineGO = null;
            m_Director = null;
        }

        public override void OnTick(float deltaTime)
        {

        }
    }


    [System.Serializable]
    public class ActionCGClip : ActionClip
    {
        public string timelineAsset;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionCGClipEditor";
        }
    }
}
