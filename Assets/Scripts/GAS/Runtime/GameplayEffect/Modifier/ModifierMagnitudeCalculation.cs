using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Runtime
{
    /// <summary>
    /// 属性修改器基类
    /// </summary>
    public abstract class ModifierMagnitudeCalculation : ScriptableObject
    {
        /// <summary>
        /// 描述
        /// </summary>
        public string Description;

        /// <summary>
        /// 修改谁的属性
        /// </summary>
        public AttributeFrom ToTarget;

        /// <summary>
        /// 需要修改的属性集
        /// </summary>
        public string AttributeSetName;

        /// <summary>
        /// 需要修改的属性
        /// </summary>
        public string AttributeName;

        /// <summary>
        /// 修改方式
        /// </summary>
        public ModifierOperation Operation;

        /// <summary>
        /// 结算结果取反
        /// </summary>
        public bool AnswerNegation;

        /// <summary>
        /// 计算幅值
        /// </summary>
        /// <param name="effect"></param>
        /// <returns></returns>
        public abstract float CalculateMagnitude(GameplayEffect effect);

        /// <summary>
        /// 公式参数
        /// </summary>
        public ModifierParameter[] Parameter;

        /// <summary>
        /// 入参个数
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

                if (param.capture == AttributeCaptureType.SnapShot && effect.AttributeSnapshot != null) //effect里快照的数据
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


        
#if UNITY_EDITOR //用于编辑器展示

        /// <summary>
        /// 计算公式
        /// </summary>
        public abstract string Formula { get; }

        /// <summary>
        /// 获取参数名字
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
        /// 取反
        /// </summary>
        public bool negation;

        /// <summary>
        /// 数值来源
        /// </summary>
        public AttributeSource valueSource;

        /// <summary>
        /// 使用属性的来源
        /// </summary>
        public AttributeFrom form;

        /// <summary>
        /// 使用属性的捕获
        /// </summary>
        public AttributeCaptureType capture;

        /// <summary>
        /// 需要修改的属性集
        /// </summary>
        public string attributeSetName;

        /// <summary>
        /// 需要修改的属性
        /// </summary>
        public string attributeName;

        /// <summary>
        /// 常量修改值
        /// </summary>
        public float magnitude;

        /// <summary>
        /// 变量值名
        /// </summary>
        public string variableName;

        /// <summary>
        /// 修改器
        /// </summary>
        public ModifierMagnitudeCalculation mmc;
    }

    /// <summary>
    /// 修改方式
    /// </summary>
    public enum ModifierOperation
    { 
        /// <summary>
        /// 加法
        /// </summary>
        Add,
        /// <summary>
        /// 乘法
        /// </summary>
        Multiply,
        /// <summary>
        /// 覆盖
        /// </summary>
        Override
    }

    /// <summary>
    /// 属性来源
    /// </summary>
    public enum AttributeFrom
    {
        Source,
        Target,
        None
    }

    /// <summary>
    /// 属性捕获方式
    /// </summary>
    public enum AttributeCaptureType
    {
        SnapShot,
        Track
    }

    /// <summary>
    /// 属性计算方式
    /// </summary>
    public enum AttributeSource
    { 
        /// <summary>
        /// 属性计算
        /// </summary>
        Attaribute,
        /// <summary>
        /// 常量
        /// </summary>
        Const,
        /// <summary>
        /// 修改器
        /// </summary>
        MMC,
        /// <summary>
        /// 变量
        /// </summary>
        Variable
    }
}
