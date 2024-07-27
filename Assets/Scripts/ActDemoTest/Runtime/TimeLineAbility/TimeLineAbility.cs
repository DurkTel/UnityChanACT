using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class TimeLineAbility : GameplayAbility, IGameplayUpdate
    {
        public const float c_TimeFrameRate = 50f;

        public const float c_TimeFrameSec = 1 / c_TimeFrameRate;

        private TimeLineAbilityAsset m_TimeLineAsset;

        private List<TimeLineTrackSpec> m_TimeLineTrackSpecs;

        private float m_PlayTotalTime;

        private int m_CurrentTick;

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_TimeLineAsset = abilityAsset as TimeLineAbilityAsset;
            m_TimeLineTrackSpecs = new List<TimeLineTrackSpec>(m_TimeLineAsset.AbilityTracks.Count);
            foreach (var trackAsset in m_TimeLineAsset.AbilityTracks)
                m_TimeLineTrackSpecs.Add(trackAsset.GetSpec(asc));
        }

        public override void OnActivation()
        {
            base.OnActivation();
            foreach (var track in m_TimeLineTrackSpecs)
                track.Reset();  

            m_CurrentTick = 0;
            m_PlayTotalTime = 0;
        }

        public void OnUpdate(float deltaTime)
        {
            m_PlayTotalTime += deltaTime;
            var targetFrame = (int)(m_PlayTotalTime * c_TimeFrameRate);

            //模拟fixedUpdate 固定帧时长
            while (m_CurrentTick < targetFrame)
            {
                m_CurrentTick++;
                OnTick();
            }
        }

        private void OnTick()
        {
            bool isAllEnd = true;
            foreach (var track in m_TimeLineTrackSpecs)
            {
                track.OnTick(m_CurrentTick);
                if (track.ClipCount > 0 && !track.TrackIsEnd)
                    isAllEnd = false;
            }

            if (isAllEnd)
                m_ASC.Abilitys.TryInActivateAbility(m_AbilityAsset.UID);
        }

    }
}
