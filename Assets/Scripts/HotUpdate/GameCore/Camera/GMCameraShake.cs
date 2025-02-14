using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class GMCameraShake : MonoBehaviour
    {
        public enum ShakeMode
        {
            Horizontal, 
            Vertical,
            Forward,
            Curve
        }

        /// <summary>
        /// 震动模式
        /// </summary>
        private ShakeMode m_ShakeMode;

        /// <summary>
        /// 震动时间
        /// </summary>
        private float m_ShakeTime;

        /// <summary>
        /// 已经震动的时间
        /// </summary>
        private float m_CurrentTime;

        /// <summary>
        /// 是否震动中
        /// </summary>
        private bool m_IsShaking;

        /// <summary>
        /// 初始位置
        /// </summary>
        private Vector3 m_DefalutPos;

        /// <summary>
        /// 周期
        /// </summary>
        private float m_Period = 2;

        /// <summary>
        /// 偏移周期
        /// </summary>
        private float m_OffPeriod = 0;

        /// <summary>
        /// 最大波峰
        /// </summary>
        private float m_MaxWave = 5;

        /// <summary>
        /// 最小波峰
        /// </summary>
        private float m_MinWave = 1;

        /// <summary>
        /// 震动方向
        /// </summary>
        private Vector3 m_ShakeDir;

        /// <summary>
        /// 相机
        /// </summary>
        private Transform m_CameraTran;
        public Transform CameraTran { get { return m_CameraTran; } set { m_CameraTran = value; } }


        private void LateUpdate()
        {
            if (!m_IsShaking)
                return;
            if (m_ShakeMode == ShakeMode.Curve)
            { 
                
            }
            else
            {
                ShakeCameraByDir();
            }
        }

        public void ShakeScreen(ShakeMode stype, float period, float shakeTime, float maxWave, float minWave, float offPeriod = 0, UnityAction finish = null)
        {
            //不在振动状态        
            if (!m_IsShaking)
            {
                m_ShakeMode = stype;
                m_Period = period;
                m_ShakeTime = shakeTime;
                m_MaxWave = maxWave;
                m_MinWave = minWave;
                m_OffPeriod = offPeriod;

                //保存默认位置
                m_DefalutPos = transform.localPosition;

                //垂直方向 
                if (m_ShakeMode == ShakeMode.Vertical)
                {
                    m_ShakeDir = new Vector3(0, 1, 0);
                }
                else if (m_ShakeMode == ShakeMode.Forward)
                {
                    m_ShakeDir = m_CameraTran.forward;
                }
                else if (m_ShakeMode == ShakeMode.Horizontal)
                {
                    Vector3 v1 = new Vector3(0, 1, 0);
                    Vector3 v2 = m_CameraTran.forward;

                    m_ShakeDir = Vector3.Cross(v1, v2);
                    m_ShakeDir.Normalize();
                }

                m_IsShaking = true;
            }
        }

        private void ShakeCameraByDir()
        {
            float factor = m_CurrentTime / m_ShakeTime;
            //总周期
            float totalPeriod = m_Period * Mathf.PI;

            //当前时刻值
            float maxValue = m_MaxWave - (m_MaxWave - m_MinWave) * factor;

            //当前弧度值
            float radValue = m_OffPeriod * Mathf.PI + factor * totalPeriod;
            float value = maxValue * Mathf.Sin(radValue);

            //垂直振动，只固定y方向
            if (m_ShakeMode == ShakeMode.Vertical)
                transform.localPosition = new Vector3(transform.localPosition.x, m_DefalutPos.y, transform.localPosition.z) + m_ShakeDir * value;
            else
                transform.localPosition = m_DefalutPos + m_ShakeDir * value;


            m_CurrentTime += Time.deltaTime;
            //结束振屏状态上
            if (m_CurrentTime > m_ShakeTime)
            {

                m_IsShaking = false;
                m_CurrentTime = 0;

                transform.localPosition = m_DefalutPos;

                
            }
        }
    }
}
