using LGameFramework.GameBase;
using System.Collections.Generic;

namespace Actioner.Runtime
{
    public enum ActionerTag
    {
        None                = 0,
        Locomotion          = 1,
        Action              = 2,

        Idle                = 10,
        Move                = 11,
        Jump                = 12,

        Dance               = 20,
        Drink               = 21,

        MoveBack            = 30,
        MoveLeft            = 31,
    }


    public class ActionerTags
    {

        public static Dictionary<ActionerTag, ActionerTag[]> define = new Dictionary<ActionerTag, ActionerTag[]>()
        {
            [ActionerTag.Locomotion] = new ActionerTag[] { ActionerTag.Move, ActionerTag.Idle, ActionerTag.Jump },
            [ActionerTag.Action] = new ActionerTag[] { ActionerTag.Dance, ActionerTag.Drink, ActionerTag.Jump},
            [ActionerTag.Move] = new ActionerTag[] { ActionerTag.MoveBack, ActionerTag.MoveLeft},
        };

        private static MultiParentNode<ActionerTag> m_TagTree;

        private static Dictionary<ActionerTag, MultiParentNode<ActionerTag>> m_TagTreeDict;

        public static void OnInitTags()
        {
            if (m_TagTree != null) return;

            m_TagTreeDict = new Dictionary<ActionerTag, MultiParentNode<ActionerTag>>();
            m_TagTree = new MultiParentNode<ActionerTag>(ActionerTag.None);

            MultiParentNode<ActionerTag> node;
            foreach (var item in define)
            {
                node = GetNode(item.Key);
                foreach (var tag in item.Value)
                {
                    var child = GetNode(tag);
                    node.Add(child);
                }
            }

            foreach (var item in m_TagTreeDict.Values)
            {
                if (item.Parent == null || item.Parent.Count == 0)
                    m_TagTree.Add(item);
            }

        }

        private static MultiParentNode<ActionerTag> GetNode(ActionerTag tag)
        {
            MultiParentNode<ActionerTag> node;
            if (!m_TagTreeDict.TryGetValue(tag, out node))
            {
                node = new MultiParentNode<ActionerTag>(tag);
                m_TagTreeDict.Add(tag, node);
            }
            return node;
        }

        public static bool ContainsTag(MultiParentNode<ActionerTag> node, ActionerTag tag)
        {
            if (node.Data == tag) 
                return true;

            if (node.Parent == null || node.Parent.Count == 0)
                return false;

            for (int i = 0; i < node.Parent.Count; i++)
            {
                if (ContainsTag(node.Parent[i], tag))
                    return true;
            }

            return false;
        }
    }
}
