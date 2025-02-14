using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionAdaptiveTargetTrack : ActionTrack
    {
        public override string TrackName => "自适应目标轨道";

        public override string GetClipSpec()
        {
            return "ActionAdaptiveTargetSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionAdaptiveTargetClip);
        }
    }

    public class ActionAdaptiveTargetSpec : ActionClipSpec
    {
        private ActionAdaptiveTargetClip Data { get { return RawData as ActionAdaptiveTargetClip; } }
        public override void Dispose()
        {
            
        }

        public override void OnEnter(float deltaTime)
        {
            GMEntity owner = EntityUtility.GetEntity(Controller.Id);
            var target = GMEntitySelectionFunc.GetTarget(owner);

            if (target != null && owner.Abilitys.TryGetAbility<SyncAbility>(out var sync) && target.Abilitys.TryGetAbility<SyncAbility>(out var sync2))
            {
                if (Vector3.Distance(sync.SyncPosition, sync2.SyncPosition) <= Data.range)
                {
                    Vector3 toTarget = sync2.SyncPosition - sync.SyncPosition;
                    sync.SetTargetPosition(sync2.SyncPosition - toTarget.normalized * Data.stopDistance);
                }
            }
        }

        public override void OnExit(float deltaTime)
        {
            
        }

        public override void OnTick(float deltaTime)
        {
            
        }
    }

    [System.Serializable]
    public class ActionAdaptiveTargetClip : ActionClip
    {
        public float range;

        public float stopDistance;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionAdaptiveTargetClipEditor";
        }
    }
}
