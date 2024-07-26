using UnityEngine;

namespace Actioner.Runtime
{
    public class ActionerBlendTree2D : ActionerBlendTree
    {
        /// <summary>
        /// »ìºÏ²ÎÊý
        /// </summary>
        protected Vector2 m_BlendValue;

        private Vector2 m_Temp;

        private const float c_DirScale = 2f;


        protected override void UpdateBlendValue()
        {

            m_BlendValue.Set(m_Controller.GetFloat(m_BlendTreeData.parameter[0]), m_Controller.GetFloat(m_BlendTreeData.parameter[1]));
        }

        protected override void UpdateBlendWeight()
        {
            switch (m_BlendTreeType)
            {
                case BlendTreeType.Blend2DCartesian:
                    UpdateCartesian2D();
                    break;
                case BlendTreeType.Blend2DDirectional:
                    UpdateDirectional2D();
                    break;
            }
        }

        private void UpdateCartesian2D()
        {
            float totalWeight = 0f;

            float[] weights = new float[Motions.Length];

            for (int i = 0; i < Motions.Length; i++)
            {
                m_Temp.Set(Motions[i].thresholdX, Motions[i].thresholdY);
                var point_i = m_Temp;
                var vec_i2v = m_BlendValue - point_i;

                float weight = 1f;

                for (int j = 0; j < Motions.Length; j++)
                {
                    if (i == j) continue;

                    m_Temp.Set(Motions[j].thresholdX, Motions[j].thresholdY);
                    var point_j = m_Temp;
                    var vec_i2j = point_j - point_i;

                    float lensq_ij = Vector2.Dot(vec_i2j, vec_i2j);
                    float newWeight = Vector2.Dot(vec_i2v, vec_i2j) / lensq_ij;
                    newWeight = 1 - newWeight;
                    newWeight = Mathf.Clamp01(newWeight);

                    weight = Mathf.Min(weight, newWeight);
                }

                weights[i] = weight;
                totalWeight += weight;
            }

            for (int i = 0; i < Motions.Length; i++)
            {
                weights[i] = weights[i] / totalWeight;
                m_BlendAction[i].CrossFade(weights[i], 0f);
            }
        }

        private void UpdateDirectional2D()
        { 
            float totalWeight = 0f;
            float[] weights = new float[Motions.Length];

            float point_v_mag = Mathf.Sqrt(Vector2.SqrMagnitude(m_BlendValue));

            for (int i = 0; i < Motions.Length; i++)
            {
                m_Temp.Set(Motions[i].thresholdX, Motions[i].thresholdY);
                var point_i = m_Temp;
                float point_i_mag = Mathf.Sqrt(Vector2.SqrMagnitude(point_i));

                float weight = 1f;

                for (int j = 0; j < Motions.Length; j++)
                {
                    if (i == j) continue;

                    m_Temp.Set(Motions[j].thresholdX, Motions[j].thresholdY);
                    var point_j = m_Temp;
                    float point_j_mag = Mathf.Sqrt(Vector2.SqrMagnitude(point_j));

                    float ij_avg_mag = (point_i_mag + point_j_mag) * 0.5f;

                    float mag_i2v = (point_v_mag - point_i_mag) / ij_avg_mag;
                    float angle_i2v = Vector2.Angle(point_i, m_BlendValue);

                    float mag_i2j = (point_j_mag - point_i_mag) / ij_avg_mag;
                    float angle_i2j = Vector2.Angle(point_i, point_j);

                    var vec_i2v = new Vector2(mag_i2v, angle_i2v * c_DirScale);
                    var vec_i2j = new Vector2(mag_i2j, angle_i2j * c_DirScale);

                    float lensq_ij = Vector2.Dot(vec_i2j, vec_i2j);
                    float newWeight = Vector2.Dot(vec_i2v, vec_i2j) / lensq_ij;
                    newWeight = 1 - newWeight;
                    newWeight = Mathf.Clamp01(newWeight);

                    weight = Mathf.Min(weight, newWeight);
                }

                weights[i] = weight;
                totalWeight += weight;
            }

            for (int i = 0; i < Motions.Length; i++)
            {
                weights[i] = weights[i] / totalWeight;
                m_BlendAction[i].CrossFade(weights[i], 0f);
            }
        }
    }
}
