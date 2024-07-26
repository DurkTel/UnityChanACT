using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class TimeLineAbilityAsset : GameplayAbilityAsset
    {
        [SerializeReference]
        private List<TimeLineTrack> m_AbilityTracks;
        public List<TimeLineTrack> AbilityTracks 
        { 
            get 
            {
                m_AbilityTracks ??= new List<TimeLineTrack>();
                return m_AbilityTracks; 
            } 
        }

        public override Type GetAbilityType()
        {
            return typeof(TimeLineAbility);
        }

        public TimeLineAbilityClip GetClip(int trackIndex, int clipIndex)
        {
            if (trackIndex < 0 || trackIndex >= m_AbilityTracks.Count)
                return null;

            var track = m_AbilityTracks[trackIndex];
            if (clipIndex < 0 || clipIndex >= track.Clips.Count)
                return null;

            return track.Clips[clipIndex];
        }

        private void Reset()
        {
            AbilityTracks.Clear();
        }
    }
}
