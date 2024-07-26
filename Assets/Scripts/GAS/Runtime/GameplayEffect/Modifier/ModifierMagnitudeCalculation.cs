using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// �����޸�������
    /// </summary>
    public abstract class ModifierMagnitudeCalculation : ScriptableObject
    {
        /// <summary>
        /// ����
        /// </summary>
        public string Description;

        /// <summary>
        /// ��Ҫ�޸ĵ����Լ�
        /// </summary>
        public string AttributeSetName;

        /// <summary>
        /// ��Ҫ�޸ĵ�����
        /// </summary>
        public string AttributeName;

        /// <summary>
        /// �޸ķ�ʽ
        /// </summary>
        public ModifierOperation Operation;

        /// <summary>
        /// �����ֵ
        /// </summary>
        /// <param name="effect"></param>
        /// <returns></returns>
        public abstract float CalculateMagnitude(GameplayEffect effect);

        /// <summary>
        /// ��ʽ����
        /// </summary>
        public ModifierParameter[] Parameter;

        /// <summary>
        /// ��θ���
        /// </summary>
        public abstract int ParameterCount { get; }

        protected float GetParameterValue(GameplayEffect effect, int index)
        {
            if (index < 0 || index > Parameter.Length)
                return 0;

            var param = Parameter[index];

            if (param.useConst)
                return param.magnitude;

            var asc = param.form == AttributeFrom.Source ? effect.Source : effect.Target;

            if (param.capture == AttributeCaptureType.SnapShot) //effect����յ�����
            {
                var snapShotMap = effect.AttributeSnapshot;
                return snapShotMap.GetValueOrDefault(param.AttributeSetName + "." + param.AttributeName);
            }
            else
            {
                return asc.Attributes.GetAttributeCurrentValue(param.AttributeSetName, param.AttributeName);
            }
        }


        
#if UNITY_EDITOR //���ڱ༭��չʾ

        /// <summary>
        /// ���㹫ʽ
        /// </summary>
        public abstract string Formula { get; }

        /// <summary>
        /// ��ȡ��������
        /// </summary>
        /// <param name="index"></param>
        /// <returns></returns>
        public abstract string GetParameterStr(int index);
#endif
    }

    [System.Serializable]
    public struct ModifierParameter
    {
        /// <summary>
        /// ʹ�ó���
        /// </summary>
        public bool useConst;

        /// <summary>
        /// ʹ�����Ե���Դ
        /// </summary>
        public AttributeFrom form;

        /// <summary>
        /// ʹ�����ԵĲ���
        /// </summary>
        public AttributeCaptureType capture;

        /// <summary>
        /// ��Ҫ�޸ĵ����Լ�
        /// </summary>
        public string AttributeSetName;

        /// <summary>
        /// ��Ҫ�޸ĵ�����
        /// </summary>
        public string AttributeName;

        /// <summary>
        /// �����޸�ֵ
        /// </summary>
        public float magnitude;
    }

    /// <summary>
    /// �޸ķ�ʽ
    /// </summary>
    public enum ModifierOperation
    { 
        /// <summary>
        /// �ӷ�
        /// </summary>
        Add,
        /// <summary>
        /// �˷�
        /// </summary>
        Multiply,
        /// <summary>
        /// ����
        /// </summary>
        Override
    }

    /// <summary>
    /// ������Դ
    /// </summary>
    public enum AttributeFrom
    {
        Source,

        Target
    }

    /// <summary>
    /// ���Բ���ʽ
    /// </summary>
    public enum AttributeCaptureType
    {
        SnapShot,

        Track
    }
}
