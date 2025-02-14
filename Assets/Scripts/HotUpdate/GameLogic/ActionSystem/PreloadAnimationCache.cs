using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class PreloadAnimationCache
    {
        private readonly static Dictionary<string, AnimationClip> s_RawAnimationMap = new Dictionary<string, AnimationClip>();
        public static Dictionary<string, AnimationClip> RawAnimationMap { get { return s_RawAnimationMap; } }

        public static AnimationClip Get(string key)
        {
            if (!s_RawAnimationMap.TryGetValue(key, out var ani))
            { 
                ani = AssetUtility.LoadAsset<AnimationClip>(key);
                s_RawAnimationMap[key] = ani;
            }

            return ani;
        }

        public static void Release(string key)
        {
            if (!s_RawAnimationMap.TryGetValue(key, out var ani))
                return;

            AssetUtility.Destroy(ani);
            s_RawAnimationMap.Remove(key);
        }

        public static IEnumerator Preload(List<ActionInfo> infos)
        {
            foreach (var info in infos)
            {
                foreach (var track in info.ActionTracks)
                {
                    if (track is not ActionAnimationTrack aniTrack)
                        continue;

                    foreach (ActionAnimationClip clip in aniTrack.ActionClips)
                    {
                        if (s_RawAnimationMap.ContainsKey(clip.animationClip))
                            continue;

                        var loader = AssetUtility.LoadAssetAsync<AnimationClip>(clip.animationClip);
                        yield return loader;
                        s_RawAnimationMap[clip.animationClip] = loader.GetRawObject<AnimationClip>();
                    }
                } 
            }   
        }
    }
}
