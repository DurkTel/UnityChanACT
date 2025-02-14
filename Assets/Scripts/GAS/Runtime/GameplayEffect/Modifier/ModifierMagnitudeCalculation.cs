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
        /// �޸�˭������
        /// </summary>
        public AttributeFrom ToTarget;

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
        /// ������ȡ��
        /// </summary>
        public bool AnswerNegation;

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
            float answer = 0f;

            if (param.valueSource == AttributeSource.Attaribute)
            {
                var asc = param.form == AttributeFrom.Source ? effect.Source : effect.Target;

                if (param.capture == AttributeCaptureType.SnapShot && effect.AttributeSnapshot != null) //effect����յ�����
                {
                    var snapShotMap = effect.AttributeSnapshot;
                    answer = snapShotMap.GetValueOrDefault(param.attributeSetName + "." + param.attributeName);
                }
                else
                {
                    answer = asc.Attributes.GetAttributeCurrentValue(param.attributeSetName, param.attributeName);
                }
            }
            else if (param.valueSource == AttributeSource.Variable && effect.AttributeSnapshot != null)
            {
                var snapShotMap = effect.AttributeSnapshot;
                answer = snapShotMap.GetValueOrDefault(param.variableName);
            }
            else if (param.valueSource == AttributeSource.MMC && param.mmc != null)
                answer = param.mmc.CalculateMagnitude(effect);
            else
                answer = param.magnitude;

            return param.negation ? -answer : answer;   
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
        /// ȡ��
        /// </summary>
        public bool negation;

        /// <summary>
        /// ��ֵ��Դ
        /// </summary>
        public AttributeSource valueSource;

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
        public string attributeSetName;

        /// <summary>
        /// ��Ҫ�޸ĵ�����
        /// </summary>
        public string attributeName;

        /// <summary>
        /// �����޸�ֵ
        /// </summary>
        public float magnitude;

        /// <summary>
        /// ����ֵ��
        /// </summary>
        public string variableName;

        /// <summary>
        /// �޸���
        /// </summary>
        public ModifierMagnitudeCalculation mmc;
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
        Target,
        None
    }

    /// <summary>
    /// ���Բ���ʽ
    /// </summary>
    public enum AttributeCaptureType
    {
        SnapShot,
        Track
    }

    /// <summary>
    /// ���Լ��㷽ʽ
    /// </summary>
    public enum AttributeSource
    { 
        /// <summary>
        /// ���Լ���
        /// </summary>
        Attaribute,
        /// <summary>
        /// ����
        /// </summary>
        Const,
        /// <summary>
        /// �޸���
        /// </summary>
        MMC,
        /// <summary>
        /// ����
        /// </summary>
        Variable
    }
}
