using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class ActionSystemComponent : MonoBehaviour, IActionSystemComponent
    {
        public const float c_TimeFrameRate = 50f;

        public const float c_TimeFrameSec = 1 / c_TimeFrameRate;

        public static GameUid s_UID = new GameUid();

        private float m_PlayTotalTime;

        private int m_CurrentTick;

        private LocomotionController m_Locomotion;

        private List<ActionTrackSpec> m_TrackSpecs;

        private List<ActionChangeInfo> m_PreorderActions;

        private ActionChangeInfo m_PreviousChangeInfo;
        public ActionChangeInfo PreviousChangeInfo { get { return m_PreviousChangeInfo; } }

        private ActionInfo m_CurrentAction;
        public ActionInfo CurrentAction { get { return m_CurrentAction; } }

        private List<ActionInfo> m_Actions;
        public List<ActionInfo> Actions { get { return m_Actions; } }
        public GameObject GameObject { get { return gameObject; } }
        public Transform Transform { get { return transform; } }
        public int Id { get { return GetInstanceID(); } }

        private void Awake()
        {
            m_TrackSpecs = new List<ActionTrackSpec>();
            m_Actions = new List<ActionInfo>();
            m_PreorderActions = new List<ActionChangeInfo>();
            m_Locomotion = GetComponent<LocomotionController>();

            ActionInfoManifest.Get("1", m_Actions);
            PlayAction(m_Actions[0].ActionID);
        }

        private void Update()
        {
            float deltaTime = Time.deltaTime;
            m_PlayTotalTime += deltaTime;
            var targetFrame = (int)(m_PlayTotalTime * c_TimeFrameRate);

            bool isAllEnd = false;
            while (m_CurrentTick < targetFrame)
            {
                if (OnTick(deltaTime))
                {
                    ResetAction();
                    isAllEnd = true;
                    break;
                }
                m_CurrentTick++;
            }

            if (isAllEnd && m_PreorderActions.Count <= 0 && !string.IsNullOrEmpty(m_CurrentAction.AutoNextActionID))
            {
                PreorderAction(new ActionChangeInfo()
                {
                    BeCancelActionID = m_CurrentAction.ActionID,
                    CancelActionID = m_CurrentAction.AutoNextActionID,
                    TransitionSecond = m_CurrentAction.AutoTransitionSecond
                }, ActionChangeType.Auto);
            }

            if (m_PreorderActions.Count > 0)
            {
                //选出优先级最高的动作来播放
                m_PreorderActions.Sort((p1, p2) => p1.Priority > p2.Priority ? -1 : 1);

                var preorderInfo = m_PreorderActions[0];

                //记录变化的信息
                m_PreviousChangeInfo = preorderInfo;

                PlayAction(preorderInfo.CancelActionID);

                m_PreorderActions.Clear();
            }
        }

        public void ResetAction()
        {
            foreach (var track in m_TrackSpecs)
                track.TrackIsEnd = false;

            m_CurrentTick = 0;
            m_PlayTotalTime = 0;
        }

        private bool OnTick(float deltaTime)
        {
            bool isAllEnd = OnTickTrack(deltaTime);
            if (isAllEnd)
                return true;


            return false;
        }

        private bool OnTickTrack(float deltaTime)
        {
            if (m_TrackSpecs.Count == 0)
                return false;

            bool isAllEnd = true;

            foreach (var track in m_TrackSpecs)
            {
                track.OnTick(m_CurrentTick, deltaTime);
                if (track.ClipCount > 0 && !track.TrackIsEnd)
                    isAllEnd = false;
            }

            return isAllEnd;
        }

        public void PlayAction(string actionId)
        {
            if (!TryGetActionById(actionId, out var info))
                return;

            StopAction();
            m_CurrentAction = info;

            //Debug.Log("切换动作：" + m_CurrentAction.ActionID);

            foreach (var track in m_CurrentAction.ActionTracks)
            {
                var trackSpec = Pool.Get<ActionTrackSpec>();
                trackSpec.OnInit(track, this, s_UID.Uid);
                m_TrackSpecs.Add(trackSpec);
            }
        }

        public void StopAction()
        {
            if (m_TrackSpecs.Count <= 0)
                return;

            ResetAction();
            foreach (var track in m_TrackSpecs)
                track.Dispose();

            m_TrackSpecs.Clear();
        }

        public void PreorderAction(ActionChangeInfo changeInfo, ActionChangeType changeType)
        {
            if (TryGetActionById(changeInfo.CancelActionID, out var info))
            {
                changeInfo.Priority += info.Priority;
                m_PreorderActions.Add(changeInfo);
            }
        }

        private bool TryGetActionById(string actionId, out ActionInfo info)
        {
            info = m_CurrentAction;
            foreach (ActionInfo action in m_Actions)
            {
                if (action.ActionID == actionId)
                {
                    info = action;
                    return true;
                }
            }

            return false;
        }

        private void OnGUI()
        {
            //GUILayout.Label("当前动作：" + m_CurrentAction.ActionID);
        }
    }
}
