using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayCueContainer
    {
        private readonly AbilitySystemComponent m_ASC;

        private readonly Dictionary<Type, Queue<GameplayCue>> m_GameplayCueCache;

        private readonly List<GameplayCueDuration> m_PreUpdateCues;

        private readonly List<GameplayCueDuration> m_UpdateCues;
        public GameplayCueContainer(AbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_GameplayCueCache = new Dictionary<Type, Queue<GameplayCue>>();
            m_PreUpdateCues = new List<GameplayCueDuration>();
            m_UpdateCues = new List<GameplayCueDuration>();
        }

        public void Update(float deltaTime)
        {
            if (m_PreUpdateCues.Count <= 0)
                return;

            m_UpdateCues.Clear();
            m_UpdateCues.AddRange(m_PreUpdateCues);

            long currentTick = DateTime.Now.Ticks;

            foreach (var cueUpdate in m_UpdateCues)
            {
                cueUpdate.OnUpdate(deltaTime);

                if (currentTick >= cueUpdate.EndTimeStamp)
                    BreakDurationCue(cueUpdate);
            }
        }

        private GameplayCue GetOrCreateCue(Type type)
        {
            if (!m_GameplayCueCache.TryGetValue(type, out var cache))
            {
                cache = new Queue<GameplayCue>();
                m_GameplayCueCache[type] = cache;
            }

            bool needInit = cache.Count <= 0;

            GameplayCue cue = needInit ? InstanceCreator.Get(type) as GameplayCue : cache.Dequeue();
            if (needInit)
                cue.OnInit(m_ASC);

            return cue;
        }

        private T GetOrCreateCue<T>() where T : GameplayCue, new()
        {
            Type type = typeof(T);
            if (!m_GameplayCueCache.TryGetValue(type, out var cache))
            {
                cache = new Queue<GameplayCue>();
                m_GameplayCueCache[type] = cache;
            }

            bool needInit = cache.Count <= 0;

            T cue = needInit ? new T() : cache.Dequeue() as T;
            if (needInit)
                cue.OnInit(m_ASC);

            return cue;
        }

        public GameplayCue TriggerCue(GameplayCueAsset asset, object param = null)
        {
            Type type = asset.GetCueType();
            var cue = GetOrCreateCue(type);

            cue.triggerTime = Time.unscaledTime;
            cue.Trigger(asset, param);

            if (cue is GameplayCueDuration cueDuration)
            {
                cueDuration.OnAdd();
                m_PreUpdateCues.Add(cueDuration);
            }
            else
            {
                m_GameplayCueCache[type].Enqueue(cue);
            }

            return cue;
        }

        public T TriggerCue<T, V>(V arg) where T : GameplayCue, new() where V : struct
        { 
            T cue = GetOrCreateCue<T>();

            cue.triggerTime = Time.unscaledTime;
            cue.Trigger<V>(arg);

            if (cue is GameplayCueDuration cueDuration)
            {
                cueDuration.OnAdd();
                m_PreUpdateCues.Add(cueDuration);
            }
            else
            {
                m_GameplayCueCache[typeof(T)].Enqueue(cue);
            }

            return cue;
        }

        public void BreakDurationCue(GameplayCueDuration cue)
        {
            cue.OnRemove();
            cue.Dispose();
            m_PreUpdateCues.Remove(cue);
            m_GameplayCueCache[cue.GetType()].Enqueue(cue);
        }
    }

    public abstract class GameplayCueArg : EventArgs, IDisposable
    {
        public abstract void Dispose();
    }
}
