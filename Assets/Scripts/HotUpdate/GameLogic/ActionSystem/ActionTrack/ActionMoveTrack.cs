using System;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionMoveTrack : ActionTrack
    {
        public override string TrackName => "位移轨道";

        public override string GetClipSpec()
        {
            return "ActionMoveSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionMoveClip);
        }
    }

    public class ActionMoveSpec : ActionClipSpec
    {
        private SyncAbility m_Sync;
        private ActionMoveClip Data { get { return RawData as ActionMoveClip; } }

        private int m_Progress;

        private Vector3 m_TargetPosition;

        public override void OnInit(ActionClip clipData, IActionSystemComponent controller, int id)
        {
            base.OnInit(clipData, controller, id);
            if (EntityUtility.TryGetEntity(controller.Id, out var entity))
            {
                m_Sync = entity.Abilitys.GetAbility<SyncAbility>();
                m_Sync.SyncPositionImmediately(Controller.Transform.position);
            }
        }

        public override void Dispose()
        {
            m_Sync = null;
            m_Progress = 0;
        }

        public override void OnEnter(float deltaTime)
        {
            m_Progress = 0;
            if (Data.mode == ActionMoveMode.Position)
                m_TargetPosition = Controller.Transform.position + Controller.Transform.rotation * Data.position;
        }

        public override void OnExit(float deltaTime)
        {
            m_Progress = 0;
        }

        public override void OnTick(float deltaTime)
        {
            if (m_Sync == null)
                return;
            m_Progress++;
            float t = Mathf.Min(m_Progress / (float)Data.Duration, 1);
            float curve = Data.moveCurve.Evaluate(t);
            var position = m_Sync.SyncPosition;
            if (Data.mode == ActionMoveMode.Position)
            {
                position = Vector3.Lerp(m_Sync.SyncPosition, m_TargetPosition, curve);
            }
            else if (Data.mode == ActionMoveMode.Velocity)
            {
                position = m_Sync.SyncPosition + m_Sync.SyncRotation * Data.averageVelocity * curve;
            }

            m_Sync.SyncPositionImmediately(position);
        }
    }

    [System.Serializable]
    public class ActionMoveClip : ActionClip
    {
        public ActionMoveMode mode;

        public Vector3 averageVelocity;

        public Vector3 position;

        public AnimationCurve moveCurve = AnimationCurve.Linear(0f, 0f, 1f, 1f);

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionMoveClipEditor";
        }
    }

    public enum ActionMoveMode
    { 
        /// <summary>
        /// 直接移动位置
        /// </summary>
        Position,
        /// <summary>
        /// 赋予速度
        /// </summary>
        Velocity
    }
}
