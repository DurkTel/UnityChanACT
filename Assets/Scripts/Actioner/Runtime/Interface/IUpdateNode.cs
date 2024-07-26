namespace Actioner.Runtime
{
    public interface IUpdateNode
    {
        /// <summary>
        /// 根节点
        /// </summary>
        public ActionerPlayable Root { get; }

        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="deltaTime">帧间隔</param>
        /// <returns>更新是否完成</returns>
        public void Update(UpdateStep step, float deltaTime);
    }

    public enum UpdateStep
    { 
        /// <summary>
        /// 准备播放
        /// </summary>
        PrePlay,
        /// <summary>
        /// 更新权重
        /// </summary>
        Weight,
        /// <summary>
        /// 更新进度
        /// </summary>
        Progress,
        /// <summary>
        /// 结束标识
        /// </summary>
        UpdateEnd,
    }
}
