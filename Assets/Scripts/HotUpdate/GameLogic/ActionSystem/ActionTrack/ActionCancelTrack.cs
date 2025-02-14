using LGameFramework.GameLogic;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionCancelTrack : ActionTrack
    {
        public override string TrackName => "动作切换轨道";

        public override string GetClipSpec()
        {
            return "";
        }

        public override Type GetClipType()
        {
            return typeof(ActionCancelClip);
        }
    }

    [System.Serializable]
    public class ActionCancelClip : ActionClip
    {
        /// <summary>
        /// 可以取消的Tag
        /// </summary>
        public ActionCancelTag cancelTag;

        /// <summary>
        /// 要取消的ActionId
        /// </summary>
        public string beCancelActionId;

        /// <summary>
        /// 从这个Clip切换出去的话 优先级加多少
        /// </summary>
        public int priority;

        /// <summary>
        /// 需要检测的输入命令
        /// </summary>
        [SerializeField]
        public List<ActionCommand> actionCommands = new List<ActionCommand>();

        /// <summary>
        /// 需要检测的自定义命令
        /// </summary>
        public string customCommand;

        /// <summary>
        /// 需要等待多少帧
        /// </summary>
        public int delayTick;

        /// <summary>
        /// 使用输入命令
        /// </summary>
        public bool useActionCommand;

        /// <summary>
        /// 使用自定义命令
        /// </summary>
        public bool useCustomCommand;

        /// <summary>
        /// 置反自定义命令
        /// </summary>
        public bool reverseCustomCommand;

        /// <summary>
        /// 过渡持续时间
        /// </summary>
        public float transitionDuration;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionCancelClipEditor";
        }
    }
}
