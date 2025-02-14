using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ������Ϣ��һ����ʽ�����ܣ�
    /// </summary>
    public class AttackInfo : IDisposable
    {
        /// <summary>
        /// ����id
        /// </summary>
        public int AttackId;

        /// <summary>
        /// ���������Ϣ���ĸ�ʵ�巢���
        /// </summary>
        public int SourceEntity;

        /// <summary>
        /// ʵ�ʽ��й�����ʵ��
        /// �����ּ�������ʵ�� �뷢��ʵ�岻һ����
        /// </summary>
        public int AttackEntity;

        /// <summary>
        /// ���������Ϣ���ĸ����������
        /// </summary>
        public string ActionId;

        /// <summary>
        /// �Ƿ񹥻���ҡ�׶�
        /// </summary>
        public bool IsAttackWindup;

        /// <summary>
        /// ������Ϣ
        /// </summary>
        public HitInfo HitInfo;

        /// <summary>
        /// ��������
        /// </summary>
        public AttackConfigAsset ConfigAsset;

        public AttackInfo()
        {
            HitInfo = new HitInfo();    
        }

        public void Dispose()
        {
            IsAttackWindup = false;
            ActionId = null;
            ConfigAsset = null;
            HitInfo.Dispose();
        }

    }

    /// <summary>
    /// һ�λ��е���Ϣ
    /// </summary>
    public class HitInfo : IDisposable
    {
        /// <summary>
        /// �Ѿ������˶��ٴ� entityId to count
        /// </summary>
        public Dictionary<int, int> HitCount;

        /// <summary>
        /// �Ƿ��Ѿ����� entityId to ishit
        /// </summary>
        public Dictionary<int, bool> HitRecord;

        /// <summary>
        /// �Ƿ���й�
        /// </summary>
        public bool HasHited { get { return HitCount != null && HitCount.Count > 0; } }

        public void Dispose()
        {
            if (HitCount != null)
            {
                HitCount.Clear();
                HitCount = null;
            }

            if (HitRecord != null)
            {
                HitRecord.Clear();
                HitRecord = null;
            }
        }

        /// <summary>
        /// ��¼���д���
        /// </summary>
        /// <param name="targetId">�ܻ���</param>
        public void RecordHitCount(int targetId)
        {
            HitCount ??= new Dictionary<int, int>();
            if (!HitCount.ContainsKey(targetId))
                HitCount[targetId] = 1;
            else
                HitCount[targetId]++;
        }

        /// <summary>
        /// ��ȡ���д���
        /// </summary>
        /// <param name="targetId">�ܻ���</param>
        /// <returns></returns>
        public int GetHitCount(int targetId)
        {
            if (HitCount == null)
                return 0;

            if (!HitCount.ContainsKey(targetId))
                return 0;

            return HitCount[targetId];
        }

        /// <summary>
        /// ��¼����
        /// </summary>
        /// <param name="targetId">�ܻ���</param>
        public void RecordHit(int targetId)
        {
            HitRecord ??= new Dictionary<int, bool>();
            HitRecord[targetId] = true;

            RecordHitCount(targetId);
        }

        /// <summary>
        /// ���������Ϣ
        /// </summary>
        public void ClearHitRecord()
        {
            if (HitRecord == null)
                return;

            HitRecord.Clear();
        }

        /// <summary>
        /// �Ƿ��Ѿ�����
        /// </summary>
        /// <param name="targetId">�ܻ���</param>
        /// <returns></returns>
        public bool IsHit(int targetId)
        {
            if (HitRecord == null)
                return false;

            return HitRecord.ContainsKey(targetId);
        }
    }

}
