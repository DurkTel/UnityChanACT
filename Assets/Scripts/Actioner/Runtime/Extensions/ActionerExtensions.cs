using UnityEngine;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public static class ActionerExtensions
    {
        ///<seealso cref="ActionerPlayable"/>
        #region ActionerPlayable 

        /// <summary>
        /// 插入一个行为节点
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="controller"></param>
        /// <param name="parent"></param>
        /// <returns></returns>
        public static T InsertNode<T>(this ActionerPlayable controller, IPlayableNode parent, object param = null) where T : ActionerNode, new()
        {
            T node = new T();
            node.OnInit(controller, parent, param);
            return node;
        }


        #endregion

        ///<seealso cref="ActionerAction"/>
        #region ActionerAction 



        #endregion

        ///<seealso cref="IPlayableNode"/>
        #region IPlayableNode节点
        /// <summary>
        /// 获取或添加一个有效的节点
        /// </summary>
        /// <returns>节点下标</returns>
        public static int TryGetValidInput(this IPlayableNode node)
        {
            int count = node.Playable.GetInputCount();
            //看看有没有空闲的接口
            for (int i = 0; i < count; i++)
            {
                if (!node.Playable.GetInput(i).IsValid())
                    return i;
            }

            //没有就新加一个
            node.Playable.SetInputCount(++count);
            return count - 1;
        }

        /// <summary>
        /// 获取有效的子节点数
        /// </summary>
        /// <param name="node"></param>
        /// <returns></returns>
        public static int GetValidChildCount(this IPlayableNode node)
        {
            int count = 0;
            for (int i = 0; i < node.Playable.GetInputCount(); i++)
            {
                if (node.Playable.GetInput(i).IsValid())
                    count++;
            }

            return count;
        }

        /// <summary>
        /// 连接到父节点上
        /// </summary>
        public static void ConnectToParent(this IPlayableNode node)
        {
            if (node.Parent == null || node.IsConnected || node.Parent.Playable.GetInput(node.Index).IsValid())
                return;

            var parentPlayable = node.Parent.Playable;
            node.IsConnected = true;
            node.Root.Graph.Connect(node.Playable, 0, parentPlayable, node.Index);
            parentPlayable.SetInputWeight(node.Index, node.Weight);
            node.Root.RemovePreDestroy(node);
        }

        #endregion

        ///<seealso cref="IActionAddable"/>
        #region IActionAddable节点

        /// <summary>
        /// 尝试添加行为
        /// </summary>
        /// <param name="clip">动画片段</param>
        /// <param name="action">返回的行为</param>
        /// <returns>是否已经存在</returns>
        public static bool TryAddState(this IActionAddable node, AnimationClip clip, out ActionerAction action)
        {
            //if (!node.Root.StateMap.TryGetState(clip, out action))
            //{
            //    action.OnInit(node.Root, node, clip);
            //    return false;
            //}

            //return true;

            if (!node.Root.ActionMap.TryGetValue(clip, out action))
            {
                action = node.Root.InsertNode<ActionerAction>(node, clip);
                node.Root.ActionMap.Add(clip, action);
                return false;
            }

            return true;
        }

        #endregion

        public static float GetApproximate(this float value)
        {
            if (value < 0.000002f)
                return 0f;
            else if (value > 0.999998f)
                return 1f;

            return value;
        }
    }
}
