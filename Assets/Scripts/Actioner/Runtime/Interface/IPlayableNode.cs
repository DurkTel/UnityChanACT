using System;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public interface IPlayableNode : IDisposable
    {
        /// <summary>
        /// 销毁时间
        /// </summary>
        public float DestroyTime { get; set; }

        /// <summary>
        /// 是否可销毁
        /// </summary>
        public bool IsCanDestroy { get; set; }

        /// <summary>
        /// 这个节点的可自定义的运行时对象
        /// </summary>
        public Playable Playable { get; }

        /// <summary>
        /// 父节点
        /// </summary>
        public IPlayableNode Parent { get; }

        /// <summary>
        /// 根节点
        /// </summary>
        public ActionerPlayable Root { get; }

        /// <summary>
        /// 下标
        /// </summary>
        public int Index { get; }

        /// <summary>
        /// 节点的权重
        /// </summary>
        public float Weight { get; }

        /// <summary>
        /// 节点的速度
        /// </summary>
        public double Speed { get; set; }

        /// <summary>
        /// 倒放 1为正放 -1为倒放
        /// </summary>
        public int Reverse { get; }

        /// <summary>
        /// 子节点数量
        /// </summary>
        public int ChildCount { get; }

        /// <summary>
        /// 是否连接在父节点上
        /// </summary>
        public bool IsConnected { get; set; }

        /// <summary>
        /// 获取子节点
        /// </summary>
        /// <param name="index">下标</param>
        /// <returns>子节点</returns>
        public IPlayableNode GetChild(int index);

    }
}
