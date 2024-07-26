namespace GAS.Runtime
{
    [System.Serializable]
    public struct GameplayEffectStacking
    {
        /// <summary>
        /// �Ƿ����
        /// </summary>
        public StackingType stackingType;

        /// <summary>
        /// Ӧ�õ��Ӻ�ˢ������
        /// </summary>
        public StackingDurationRefreshType durationRefreshType;

        /// <summary>
        /// �������������
        /// </summary>
        public StackingExpirationType expirationType;

        /// <summary>
        /// ���Ķѵ�����
        /// </summary>
        public int maxStackNum;
    }

    /// <summary>
    /// �Ƿ����
    /// </summary>
    public enum StackingType
    { 
        /// <summary>
        /// ������
        /// </summary>
        None,
        /// <summary>
        /// ����
        /// </summary>
        Stacking,
    }

    /// <summary>
    /// Ӧ�õ��Ӻ�ˢ������
    /// </summary>
    public enum StackingDurationRefreshType
    {
        /// <summary>
        /// ��ˢ�³���ʱ��
        /// </summary>
        NeverRefresh,
        /// <summary>
        /// ÿ����һ��ˢ��һ�γ���ʱ��
        /// </summary>
        Refresh,
    }

    /// <summary>
    /// �������������
    /// </summary>
    public enum StackingExpirationType
    { 
        /// <summary>
        /// ����ʱ������в���
        /// </summary>
        ClearAllStack,
        /// <summary>
        /// ����ʱ����һ������
        /// �����¿�ʼ���� ֱ������Ϊ0
        /// </summary>
        RemoveOnceStack
    }
}
