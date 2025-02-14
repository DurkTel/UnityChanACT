using GAS.Runtime;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ����������
    /// </summary>
    [System.Serializable]
    public class ActionInfo
    {
        [SerializeField]
        private string m_ActionID;
        /// <summary>
        /// ������ΨһID
        /// </summary>
        public string ActionID { get { return m_ActionID; } set { m_ActionID = value; } }

        [SerializeField]
        private string m_AutoNextActionID;
        /// <summary>
        /// ��������Զ��л��Ķ���ID
        /// </summary>
        public string AutoNextActionID { get { return m_AutoNextActionID; } set { m_AutoNextActionID = value; } }

        [SerializeField]
        private int m_Priority;
        /// <summary>
        /// �������ȼ�
        /// </summary>
        public int Priority { get { return m_Priority; } set { m_Priority = value; } }

        [SerializeField]
        private float m_AutoTransitionSecond;
        /// <summary>
        /// �Զ��л��Ĺ���ʱ��
        /// </summary>
        public float AutoTransitionSecond { get { return m_AutoTransitionSecond; } set { m_AutoTransitionSecond = value; } }

        [SerializeField]
        private string m_ActionTag;
        /// <summary>
        /// ������ǩ
        /// </summary>
        public string ActionTag { get {  return m_ActionTag; } set { m_ActionTag = value; } }

        [SerializeField]
        private string m_AttackConfig;
        /// <summary>
        /// ��������
        /// </summary>
        public string AttackConfig { get { return m_AttackConfig; } set { m_AttackConfig = value; } }

        [SerializeField]
        private List<CancelTag> m_CancelTags = new List<CancelTag>();
        /// <summary>
        /// ����ȡ���Ķ���Tag
        /// </summary>
        public List<CancelTag> CancelTags { get {  return m_CancelTags; } set { m_CancelTags = value; } }

        [SerializeField]
        private List<RootMotionData> m_RootMotionDatas = new List<RootMotionData>();
        /// <summary>
        /// ���˶�����
        /// </summary>
        public List<RootMotionData> RootMotionDatas { get { return m_RootMotionDatas; } }

        [SerializeReference]
        private List<ActionTrack> m_ActionTracks = new List<ActionTrack>();
        /// <summary>
        /// �������
        /// </summary>
        public List<ActionTrack> ActionTracks { get { return m_ActionTracks; } }

        /// <summary>
        /// �����
        /// </summary>
        public int Count { get { return ActionTracks.Count; } }

        public ActionTrack this[int index]
        {
            get
            {
                if (index < 0 || index >= Count)
                    return null;
                return ActionTracks[index];
            }
        }

        public ActionInfo(string actionID)
        {
            m_ActionID = actionID;
        }

        public ActionClip GetClip(int trackIndex, int clipIndex)
        {
            if (trackIndex < 0 || trackIndex >= Count)
                return null;

            var track = ActionTracks[trackIndex];
            if (clipIndex < 0 || clipIndex >= track.Count)
                return null;

            return track[clipIndex];
        }
    }

}
