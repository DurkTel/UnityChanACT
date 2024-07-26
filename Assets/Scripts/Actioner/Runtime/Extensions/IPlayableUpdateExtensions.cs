using UnityEngine;

namespace Actioner.Runtime
{
    public static class IPlayableUpdateExtensions
    {
        /// <summary>
        /// 请求更新
        /// </summary>
        /// <param name="node">更新的节点</param>
        /// <param name="step">更新的步骤</param>
        public static void RequireUpdate(this IUpdateNode node, UpdateStep step)
        {
            if (node.Root == null)
                return;
            if (!node.Root.UpdatablesDic.TryGetValue(step, out var updatable))
            {
                updatable = new IndexedSet<IUpdateNode>();
                node.Root.UpdatablesDic.Add(step, updatable);
            }

            if (!updatable.Contains(node))
                updatable.Add(node);

            if (node.Root.CancelUpdatablesDic.TryGetValue(step, out var cancelTable))
            {
                if (cancelTable.Contains(node))
                    cancelTable.Remove(node);
            }
        }

        /// <summary>
        /// 取消更新
        /// </summary>
        /// <param name="node">更新的节点</param>
        /// <param name="step">更新的步骤</param>
        public static void CancelUpdate(this IUpdateNode node, UpdateStep step)
        {
            if (node.Root == null)
                return;
            if (!node.Root.CancelUpdatablesDic.TryGetValue(step, out var updatable))
            {
                updatable = new IndexedSet<IUpdateNode>();
                node.Root.CancelUpdatablesDic.Add(step, updatable);
            }

            if (!updatable.Contains(node))
                updatable.Add(node);
        }

        /// <summary>
        /// 清除所有更新
        /// </summary>
        /// <param name="node"></param>
        public static void CancelAllUpdate(this IUpdateNode node)
        {
            IndexedSet<IUpdateNode> updatable;
            for (int i = (int)UpdateStep.PrePlay; i < (int)UpdateStep.UpdateEnd; i++)
            {
                if (node.Root == null)
                    continue;
                if (node.Root.CancelUpdatablesDic.TryGetValue((UpdateStep)i, out updatable) && updatable.Contains(node))
                    updatable.Remove(node);

                if (node.Root.UpdatablesDic.TryGetValue((UpdateStep)i, out updatable) && updatable.Contains(node))
                    updatable.Remove(node);
            }
             
        }
    }
}
