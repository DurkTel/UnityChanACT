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

            if (param.useConst)
                return param.magnitude;

            var asc = param.form == AttributeFrom.Source ? effect.Source : effect.Target;

            if (param.capture == AttributeCaptureType.SnapShot) //effect里快照的数据
            {
                var snapShotMap = effect.AttributeSnapshot;
                return snapShotMap.GetValueOrDefault(param.AttributeSetName + "." + param.AttributeName);
            }
            else
            {
                return asc.Attributes.GetAttributeCurrentValue(param.AttributeSetName, param.AttributeName);
            }
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
        /// 使用常量
        /// </summary>
        public bool useConst;

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
        public string AttributeSetName;

        /// <summary>
        /// 需要修改的属性
        /// </summary>
        public string AttributeName;

        /// <summary>
        /// 常量修改值
        /// </summary>
        public float magnitude;
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

        Target
    }

    /// <summary>
    /// 属性捕获方式
    /// </summary>
    public enum AttributeCaptureType
    {
        SnapShot,

        Track
    }
}
