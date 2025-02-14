using GAS.Runtime;
using LGameFramework.GameCore;
using UnityEngine;

#if UNITY_EDITOR
using UnityEditor;

[CustomPropertyDrawer(typeof(LGameFramework.GameLogic.CameraShakeCueSpec.Parameter))]
public class CameraShakeCueParameter : PropertyDrawer
{
    private GUIContent m_FoldTitleContent = new GUIContent("相机抖动参数");
    private GUIContent m_ShakeModeContent = new GUIContent("抖动模式");
    private GUIContent m_PeriodContent = new GUIContent("周期");
    private GUIContent m_ShakeTimeContent = new GUIContent("时间");
    private GUIContent m_MinWaveContent = new GUIContent("最小波峰");
    private GUIContent m_MaxWaveContent = new GUIContent("最大波峰");
    private GUIContent m_OffPeriodContent = new GUIContent("偏移周期");

    private bool m_IsFolded = false;

    private float height = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;

    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        EditorGUI.BeginProperty(position, label, property);

        position.height = EditorGUIUtility.singleLineHeight;

        // 缩进和标签显示
        m_IsFolded = EditorGUI.Foldout(position, m_IsFolded, m_FoldTitleContent);

        if (m_IsFolded)
        {
            position.x += 20;
            position.y += height;

            // 计算每个字段的宽度和位置
            var shakeModeRect = new Rect(position);
            position.y += height;
            var periodRect = new Rect(position);
            position.y += height;
            var shakeTimeRect = new Rect(position);
            position.y += height;
            var minWaveRect = new Rect(position);
            position.y += height;
            var maxWaveRect = new Rect(position);
            position.y += height;
            var offPeriodRect = new Rect(position);

            // 获取结构体内的字段
            SerializedProperty shakeModeProp = property.FindPropertyRelative("shakeMode");
            SerializedProperty periodProp = property.FindPropertyRelative("period");
            SerializedProperty shakeTimeProp = property.FindPropertyRelative("shakeTime");
            SerializedProperty minWaveProp = property.FindPropertyRelative("minWave");
            SerializedProperty maxWaveProp = property.FindPropertyRelative("maxWave");
            SerializedProperty offPeriodProp = property.FindPropertyRelative("offPeriod");

            // 绘制字段
            EditorGUI.PropertyField(shakeModeRect, shakeModeProp, m_ShakeModeContent);
            EditorGUI.PropertyField(periodRect, periodProp, m_PeriodContent);
            EditorGUI.PropertyField(shakeTimeRect, shakeTimeProp, m_ShakeTimeContent);
            EditorGUI.PropertyField(minWaveRect, minWaveProp, m_MinWaveContent);
            EditorGUI.PropertyField(maxWaveRect, maxWaveProp, m_MaxWaveContent);
            EditorGUI.PropertyField(offPeriodRect, offPeriodProp, m_OffPeriodContent);
        }


        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        if (!m_IsFolded)
            return EditorGUIUtility.singleLineHeight;
        return (height) * 7;
    }
}

#endif

namespace LGameFramework.GameLogic
{
    public class CameraShakeCueSpec : GameplayCue
    {
        public override void Dispose()
        {
            
        }

        public override void Trigger<V>(V arg)
        {
            if (arg is not Parameter param)
                return;

            var camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
            camera.CameraShake.ShakeScreen(param.shakeMode, param.period, param.shakeTime, param.maxWave, param.minWave, param.offPeriod);
        }

        [System.Serializable]
        public struct Parameter
        {
            public GMCameraShake.ShakeMode shakeMode;
            public float period;
            public float shakeTime;
            public float minWave;
            public float maxWave;
            public float offPeriod;
        }
    }

}


