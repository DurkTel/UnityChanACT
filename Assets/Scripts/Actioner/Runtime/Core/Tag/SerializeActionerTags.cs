using System.Collections.Generic;
using UnityEngine;

namespace Actioner.Runtime
{
    public class SerializeActionerTags : ScriptableObject, ISerializationCallbackReceiver
    {
        [System.Serializable]
        public class TagsInfo
        {
            public ActionerTag parentTag;
            public ActionerTag[] childTags;
            public TagsInfo(ActionerTag parentTag, ActionerTag[] childTags)
            {
                this.parentTag = parentTag;
                this.childTags = childTags;
            }
        }

        public List<TagsInfo> tagsList = new List<TagsInfo>();

        public Dictionary<ActionerTag, ActionerTag[]> tagsMap = new Dictionary<ActionerTag, ActionerTag[]>();

        public void OnBeforeSerialize()
        {
            tagsList.Clear();
            foreach (var item in this.tagsMap)
                tagsList.Add(new TagsInfo(item.Key, item.Value));
        }

        public void OnAfterDeserialize()
        {
            foreach (var item in tagsList)
                if (!this.tagsMap.ContainsKey(item.parentTag))
                    this.tagsMap.Add(item.parentTag, item.childTags);
        }
    }
}
