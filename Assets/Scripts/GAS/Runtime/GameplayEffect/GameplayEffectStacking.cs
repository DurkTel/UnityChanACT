namespace GAS.Runtime
{
    [System.Serializable]
    public struct GameplayEffectStacking
    {
        /// <summary>
        /// 是否叠加
        /// </summary>
        public StackingType stackingType;

        /// <summary>
        /// 应用叠加后刷新类型
        /// </summary>
        public StackingDurationRefreshType durationRefreshType;

        /// <summary>
        /// 结束后清除类型
        /// </summary>
        public StackingExpirationType expirationType;

        /// <summary>
        /// 最大的堆叠数量
        /// </summary>
        public int maxStackNum;
    }

    /// <summary>
    /// 是否叠加
    /// </summary>
    public enum StackingType
    { 
        /// <summary>
        /// 不叠加
        /// </summary>
        None,
        /// <summary>
        /// 叠加
        /// </summary>
        Stacking,
    }

    /// <summary>
    /// 应用叠加后刷新类型
    /// </summary>
    public enum StackingDurationRefreshType
    {
        /// <summary>
        /// 不刷新持续时间
        /// </summary>
        NeverRefresh,
        /// <summary>
        /// 每叠加一次刷新一次持续时间
        /// </summary>
        Refresh,
    }

    /// <summary>
    /// 结束后清除类型
    /// </summary>
    public enum StackingExpirationType
    { 
        /// <summary>
        /// 结束时清除所有层数
        /// </summary>
        ClearAllStack,
        /// <summary>
        /// 结束时减少一个层数
        /// 并重新开始计数 直到层数为0
        /// </summary>
        RemoveOnceStack
    }
}
