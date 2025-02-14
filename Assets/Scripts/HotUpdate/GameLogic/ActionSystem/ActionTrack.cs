using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    [System.Serializable]
    public abstract class ActionTrack
    {
        public virtual Color TrackColor { get { return new Color(0f, 0.597f, 0.128f, 1f); } }

        public abstract string TrackName { get; }

        [SerializeReference]
        private List<ActionClip> m_ActionClips = new List<ActionClip>();
        public List<ActionClip> ActionClips { get { return m_ActionClips; } }
        public int Count { get { return ActionClips.Count; } }

        public ActionClip this[int index]
        {
            get 
            {
                if (index < 0 || index >= Count)
                    return null;
                return ActionClips[index]; 
            }
        }

        public abstract Type GetClipType();

        public abstract string GetClipSpec();
    }
}
