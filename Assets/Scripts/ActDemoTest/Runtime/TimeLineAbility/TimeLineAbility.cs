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
        public TimeLineAbilityAsset TimeLineAsset { get { return m_TimeLineAsset; } }

        protected List<TimeLineTrackSpec> m_TimeLineTrackSpecs;

        private float m_PlayTotalTime;

        protected int m_CurrentTick;

        protected bool m_TrackIsEnd;
        public bool TrackIsEnd { get {  return m_TrackIsEnd; } }

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_TimeLineAsset = abilityAsset as TimeLineAbilityAsset;
            m_TimeLineTrackSpecs = new List<TimeLineTrackSpec>(m_TimeLineAsset.AbilityTracks.Count);
            foreach (var trackAsset in m_TimeLineAsset.AbilityTracks)
                m_TimeLineTrackSpecs.Add(trackAsset.GetSpec(asc));
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation();
            Reset();
        }

        public override void OnInactivation()
        {
            base.OnInactivation();
            foreach (var track in m_TimeLineTrackSpecs)
                track.Dispose();
        }

        public virtual void OnUpdate(float deltaTime)
        {
            m_PlayTotalTime += deltaTime;
            var targetFrame = (int)(m_PlayTotalTime * c_TimeFrameRate);
            
            //模拟fixedUpdate 固定帧时长
            while (m_CurrentTick < targetFrame)
            {
                if (OnTick(deltaTime))
                    break;
                m_CurrentTick++;
            }
        }

        protected virtual bool OnTick(float deltaTime)
        {
            bool isAllEnd = true;

            foreach (var track in m_TimeLineTrackSpecs)
            {
                track.OnTick(m_CurrentTick, deltaTime);
                if (track.ClipCount > 0 && !track.TrackIsEnd)
                    isAllEnd = false;
            }

            if (isAllEnd)
            {
                if (m_TimeLineAsset.IsLoop)
                {
                    Reset();
                }
                else
                {
                    m_ASC.Abilitys.TryInActivateAbility(m_AbilityAsset.UID);
                    m_TrackIsEnd = true;
                }

                return true;
            }

            return false;
        }

        public virtual void Reset()
        {
            foreach (var track in m_TimeLineTrackSpecs)
                track.Reset();

            m_CurrentTick = 0;
            m_PlayTotalTime = 0;
            m_TrackIsEnd = false;
        }
    }
}
