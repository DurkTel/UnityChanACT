using UnityEngine;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public static class ActionerExtensions
    {
        ///<seealso cref="ActionerPlayable"/>
        #region ActionerPlayable 

        /// <summary>
        /// ����һ����Ϊ�ڵ�
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
        #region IPlayableNode�ڵ�
        /// <summary>
        /// ��ȡ�����һ����Ч�Ľڵ�
        /// </summary>
        /// <returns>�ڵ��±�</returns>
        public static int TryGetValidInput(this IPlayableNode node)
        {
            int count = node.Playable.GetInputCount();
            //������û�п��еĽӿ�
            for (int i = 0; i < count; i++)
            {
                if (!node.Playable.GetInput(i).IsValid())
                    return i;
            }

            //û�о��¼�һ��
            node.Playable.SetInputCount(++count);
            return count - 1;
        }

        /// <summary>
        /// ��ȡ��Ч���ӽڵ���
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
        /// ���ӵ����ڵ���
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
        #region IActionAddable�ڵ�

        /// <summary>
        /// ���������Ϊ
        /// </summary>
        /// <param name="clip">����Ƭ��</param>
        /// <param name="action">���ص���Ϊ</param>
        /// <returns>�Ƿ��Ѿ�����</returns>
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
