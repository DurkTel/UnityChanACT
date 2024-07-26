using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    public class GameplayTagContainer
    {
        private readonly AbilitySystemComponent m_ASC;

        /// <summary>
        /// 固定的Tags
        /// 如AbilityTags
        /// </summary>
        private readonly Dictionary<GameplayTag, HashSet<object>> m_FixedTags;
        
        public Dictionary<GameplayTag, HashSet<object>> FixedTags { get { return m_FixedTags; } }
        /// <summary>
        /// 动态的Tags
        /// 如ActivationTag、 GE的Tags
        /// </summary>
        private readonly Dictionary<GameplayTag, HashSet<object>> m_DynamicTags;
        public Dictionary<GameplayTag, HashSet<object>> DynamicTags { get { return m_DynamicTags; } }

        public GameplayTagContainer(AbilitySystemComponent asc)
        {
            m_ASC = asc;
            m_FixedTags = new Dictionary<GameplayTag, HashSet<object>>();
            m_DynamicTags = new Dictionary<GameplayTag, HashSet<object>>();
        }

        public void OnInit(AbilitySystemArchetype archetype)
        {
            AddFixedTags(archetype, archetype.FixedTags);
        }

        public void UpdateFixedTags<T>(T source, bool value, params GameplayTag[] tags)
        {
            if (value)
                AddFixedTags<T>(source, tags);
            else
                RemoveFixedTags(source, tags);
        }

        public void UpdateFixedTags<T>(T source, bool value, GameplayTagSet tags)
        {
            if (value)
                AddFixedTags<T>(source, tags);
            else
                RemoveFixedTags(source, tags);
        }

        public void AddFixedTags<T>(T source, params GameplayTag[] tags)
        {
            foreach (var tag in tags)
                TryAddFixedTag(source, tag);
        }

        public void AddFixedTags<T>(T source, GameplayTagSet tags)
        {
            AddFixedTags(source, tags.Tags);
        }

        public void RemoveFixedTags<T>(T source, params GameplayTag[] tags)
        {
            foreach (var tag in tags)
                TryRemoveFixedTag(source, tag);
        }

        public void RemoveFixedTags<T>(T source, GameplayTagSet tags)
        {
            RemoveFixedTags(source, tags.Tags);
        }

        public bool TryAddFixedTag<T>(T source, GameplayTag tag)
        {
            return TryAddTag(m_FixedTags, source, tag);
        }

        public bool TryRemoveFixedTag<T>(T source, GameplayTag tag)
        {
            return TryRemoveTag(m_FixedTags, source, tag);
        }

        public void UpdateDynamicTags<T>(T source, bool value, params GameplayTag[] tags)
        {
            if (value)
                AddDynamicTags<T>(source, tags);
            else
                RemoveDynamicTags(source, tags);
        }

        public void UpdateDynamicTags<T>(T source, bool value, GameplayTagSet tags)
        {
            if (value)
                AddDynamicTags<T>(source, tags);
            else
                RemoveDynamicTags(source, tags);
        }

        public void AddDynamicTags<T>(T source, params GameplayTag[] tags)
        {
            foreach (var tag in tags)
                TryAddDynamicTag(source, tag);
        }

        public void AddDynamicTags<T>(T source, GameplayTagSet tags)
        {
            AddDynamicTags(source, tags.Tags);
        }

        public void RemoveDynamicTags<T>(T source, params GameplayTag[] tags)
        {
            foreach (var tag in tags)
                TryRemoveDynamicTag(source, tag);
        }

        public void RemoveDynamicTags<T>(T source, GameplayTagSet tags)
        {
            RemoveDynamicTags(source, tags.Tags);
        }

        public bool TryAddDynamicTag<T>(T source, GameplayTag tag)
        {
            return TryAddTag(m_DynamicTags, source, tag);
        }

        public bool TryRemoveDynamicTag<T>(T source, GameplayTag tag)
        {
            return TryRemoveTag(m_DynamicTags, source, tag);
        }

        public bool TryAddTag<T>(Dictionary<GameplayTag, HashSet<object>> container, T source, GameplayTag tag)
        {
            if (container.TryGetValue(tag, out var list))
            {
                if (list.Contains(source))
                    return false;

                list.Add(source);
            }
            else
            { 
                list = new HashSet<object>() { source };
                container.Add(tag, list);
            }

            return true;
        }

        public bool TryRemoveTag<T>(Dictionary<GameplayTag, HashSet<object>> container, T source, GameplayTag tag)
        {
            if (!container.TryGetValue(tag, out var list))
                return false;

            list.Remove(source);
            if (list.Count == 0)
                container.Remove(tag);

            return true;
        }

        public bool HasTag(GameplayTag tag)
        {
            foreach (var t in m_FixedTags.Keys)
            {
                if (t.HasTag(tag))
                    return true;
            }

            foreach (var t in m_DynamicTags.Keys)
            {
                if (t.HasTag(tag))
                    return true;
            }

            return false;
        }

        public bool HasAnyTags(GameplayTagSet other)
        {
            return HasAnyTags(other.Tags);
        }

        public bool HasAnyTags(params GameplayTag[] tags)
        {
            foreach (var tag in tags)
            {
                if (HasTag(tag)) return true;
            }

            return false;
        }

        public bool HasAllTags(GameplayTagSet other)
        {
            return HasAllTags(other.Tags);
        }

        public bool HasAllTags(params GameplayTag[] tags)
        {
            foreach (var tag in tags)
            {
                if (!HasTag(tag)) return false;
            }

            return true;
        }

        public bool HasNoneTags(GameplayTagSet other)
        {
            return HasNoneTags(other.Tags);
        }

        public bool HasNoneTags(params GameplayTag[] tags)
        {
            foreach (var tag in tags)
            {
                if (HasTag(tag)) 
                    return false;
            }

            return true;
        }
    }
}
