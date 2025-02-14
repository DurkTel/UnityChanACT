using GAS.Runtime;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 动作数据类
    /// </summary>
    [System.Serializable]
    public class ActionInfo
    {
        [SerializeField]
        private string m_ActionID;
        /// <summary>
        /// 动作的唯一ID
        /// </summary>
        public string ActionID { get { return m_ActionID; } set { m_ActionID = value; } }

        [SerializeField]
        private string m_AutoNextActionID;
        /// <summary>
        /// 播放完后自动切换的动作ID
        /// </summary>
        public string AutoNextActionID { get { return m_AutoNextActionID; } set { m_AutoNextActionID = value; } }

        [SerializeField]
        private int m_Priority;
        /// <summary>
        /// 动作优先级
        /// </summary>
        public int Priority { get { return m_Priority; } set { m_Priority = value; } }

        [SerializeField]
        private float m_AutoTransitionSecond;
        /// <summary>
        /// 自动切换的过渡时间
        /// </summary>
        public float AutoTransitionSecond { get { return m_AutoTransitionSecond; } set { m_AutoTransitionSecond = value; } }

        [SerializeField]
        private string m_ActionTag;
        /// <summary>
        /// 动作标签
        /// </summary>
        public string ActionTag { get {  return m_ActionTag; } set { m_ActionTag = value; } }

        [SerializeField]
        private string m_AttackConfig;
        /// <summary>
        /// 攻击配置
        /// </summary>
        public string AttackConfig { get { return m_AttackConfig; } set { m_AttackConfig = value; } }

        [SerializeField]
        private List<CancelTag> m_CancelTags = new List<CancelTag>();
        /// <summary>
        /// 可以取消的动作Tag
        /// </summary>
        public List<CancelTag> CancelTags { get {  return m_CancelTags; } set { m_CancelTags = value; } }

        [SerializeField]
        private List<RootMotionData> m_RootMotionDatas = new List<RootMotionData>();
        /// <summary>
        /// 根运动数据
        /// </summary>
        public List<RootMotionData> RootMotionDatas { get { return m_RootMotionDatas; } }

        [SerializeReference]
        private List<ActionTrack> m_ActionTracks = new List<ActionTrack>();
        /// <summary>
        /// 动作轨道
        /// </summary>
        public List<ActionTrack> ActionTracks { get { return m_ActionTracks; } }

        /// <summary>
        /// 轨道数
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
