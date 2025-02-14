using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionBeCancelTrack : ActionTrack
    {
        public override string TrackName => "动作被取消轨道";

        public override string GetClipSpec()
        {
            return "ActionBeCancelClipSpec";
        }

        public override Type GetClipType()
        {
            return typeof(ActionBeCancelClip);
        }
    }

    public class ActionBeCancelClipSpec : ActionClipSpec
    {
        private List<ActionCancelClip> m_CancelInfo;

        private SyncAbility m_SyncAbility;

        private ActionBeCancelClip Data { get { return RawData as ActionBeCancelClip; } }

        public override void OnInit(ActionClip clipData, IActionSystemComponent controller, int id)
        {
            base.OnInit(clipData, controller, id);
            m_CancelInfo = ListPool<ActionCancelClip>.Get();
            foreach (ActionInfo info in controller.Actions)
            {
                foreach (var track in info.ActionTracks)
                {
                    if (track is ActionCancelTrack cancelTrack)
                    {
                        foreach (ActionCancelClip clip in track.ActionClips)
                        {
                            if (clip.cancelTag.HasFlag(Data.beCancelTag) 
                                && (Data.cancelBySelf || Data.actionId != clip.actionId) 
                                && (string.IsNullOrEmpty(clip.beCancelActionId) || Data.actionId == clip.beCancelActionId))
                                m_CancelInfo.Add(clip);
                        }
                    }
                }
            }

            if (EntityUtility.TryGetEntity(controller.Id, out var entity))
            {
                if (entity.Abilitys.TryGetAbility("SyncAbility", out var ability))
                    m_SyncAbility = ability as SyncAbility;
            }

        }
        public override void Dispose()
        {
            ListPool<ActionCancelClip>.Release(m_CancelInfo);
            m_CancelInfo = null;
            m_SyncAbility = null;
        }

        public override void OnEnter(float deltaTime)
        {
            if (Data.beCancelTag == ActionCancelTag.Cancel_AttackWindup)
            {
                if (FightUtility.TryGetAttackInfo(ActionUID, out var attackInfo))
                    attackInfo.IsAttackWindup = true;
            }
        }

        public override void OnExit(float deltaTime)
        {
            if (Data.beCancelTag == ActionCancelTag.Cancel_AttackWindup)
            {
                if (FightUtility.TryGetAttackInfo(ActionUID, out var attackInfo))
                    attackInfo.IsAttackWindup = false;
            }
        }

        public override void OnTick(float deltaTime)
        {
            UnityEngine.Profiling.Profiler.BeginSample("ActionBeCancelTrack OnUpdate");
            //每帧检测是否有可以加入到候选动作队列中
            foreach (var clip in m_CancelInfo)
            {
                bool success = false;
                if (clip.useActionCommand)
                {
                    foreach (var command in clip.actionCommands)
                    {
                        //检测输入
                        if (m_SyncAbility.ContainsAction(command))
                        {
                            success = true;
                            break;
                        }
                    }
                }

                if (clip.useCustomCommand)
                {
                    bool command = CommandMethods.Invoke(clip.customCommand, Controller);
                    command = clip.reverseCustomCommand ? !command : command;
                    success = clip.useActionCommand ? success && command : command;
                }

                if (success)
                {
                    //条件成立 添加到候选动作
                    Controller.PreorderAction(new ActionChangeInfo() 
                    { 
                        BeCancelActionID = Data.actionId,
                        CancelActionID = clip.actionId, 
                        Priority = clip.priority + Data.priority, 
                        TransitionSecond = clip.transitionDuration, 
                        FromTick = 0
                    }, ActionChangeType.Command);
                }
            }
            UnityEngine.Profiling.Profiler.EndSample();


        }
    }

    [System.Serializable]
    public class ActionBeCancelClip : ActionClip
    {
        /// <summary>
        /// 可以被这个Tag切换
        /// </summary>
        public ActionCancelTag beCancelTag;

        /// <summary>
        /// 从这个Clip切换出去的话 优先级加多少
        /// </summary>
        public int priority;

        /// <summary>
        /// 是否可以被自己Cancel
        /// </summary>
        public bool cancelBySelf;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionBeCancelClipEditor";
        }
    }
}
