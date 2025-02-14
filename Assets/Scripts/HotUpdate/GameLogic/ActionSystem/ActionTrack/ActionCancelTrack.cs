using LGameFramework.GameLogic;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public class ActionCancelTrack : ActionTrack
    {
        public override string TrackName => "�����л����";

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
        /// ����ȡ����Tag
        /// </summary>
        public ActionCancelTag cancelTag;

        /// <summary>
        /// Ҫȡ����ActionId
        /// </summary>
        public string beCancelActionId;

        /// <summary>
        /// �����Clip�л���ȥ�Ļ� ���ȼ��Ӷ���
        /// </summary>
        public int priority;

        /// <summary>
        /// ��Ҫ������������
        /// </summary>
        [SerializeField]
        public List<ActionCommand> actionCommands = new List<ActionCommand>();

        /// <summary>
        /// ��Ҫ�����Զ�������
        /// </summary>
        public string customCommand;

        /// <summary>
        /// ��Ҫ�ȴ�����֡
        /// </summary>
        public int delayTick;

        /// <summary>
        /// ʹ����������
        /// </summary>
        public bool useActionCommand;

        /// <summary>
        /// ʹ���Զ�������
        /// </summary>
        public bool useCustomCommand;

        /// <summary>
        /// �÷��Զ�������
        /// </summary>
        public bool reverseCustomCommand;

        /// <summary>
        /// ���ɳ���ʱ��
        /// </summary>
        public float transitionDuration;

        public override string GetInspectorEditorName()
        {
            return "LGameFramework.GameEditor.ActionCancelClipEditor";
        }
    }
}
