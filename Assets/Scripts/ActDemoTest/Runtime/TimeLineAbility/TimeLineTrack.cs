using System;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    [System.Serializable]
    public abstract class TimeLineTrack
    {
        public virtual Color TrackColor { get { return new Color(0f, 0.597f, 0.128f, 1f); } }

        public string trackLabel;

        [SerializeReference]
        private List<TimeLineAbilityClip> m_Clips;
        public List<TimeLineAbilityClip> Clips 
        { 
            get 
            {
                m_Clips ??= new List<TimeLineAbilityClip>();
                return m_Clips; 
            } 
        }

        public void Add(TimeLineAbilityClip clip)
        {
            Clips.Add(clip);
        }

        public void RemoveAt(int index)
        {
            if (index < 0 || index >= Clips.Count) return;
            Clips.RemoveAt(index);
        }

        public abstract TimeLineTrackSpec GetSpec(AbilitySystemComponent asc);

        public abstract TimeLineAbilityClip GetClip();
    }
}
