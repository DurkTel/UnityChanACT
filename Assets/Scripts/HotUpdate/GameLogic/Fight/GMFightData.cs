using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 攻击信息（一个招式、技能）
    /// </summary>
    public class AttackInfo : IDisposable
    {
        /// <summary>
        /// 攻击id
        /// </summary>
        public int AttackId;

        /// <summary>
        /// 这个攻击信息由哪个实体发起的
        /// </summary>
        public int SourceEntity;

        /// <summary>
        /// 实际进行攻击的实体
        /// （脱手技能是新实体 与发起实体不一样）
        /// </summary>
        public int AttackEntity;

        /// <summary>
        /// 这个攻击信息由哪个动作发起的
        /// </summary>
        public string ActionId;

        /// <summary>
        /// 是否攻击后摇阶段
        /// </summary>
        public bool IsAttackWindup;

        /// <summary>
        /// 击中信息
        /// </summary>
        public HitInfo HitInfo;

        /// <summary>
        /// 攻击配置
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
    /// 一次击中的信息
    /// </summary>
    public class HitInfo : IDisposable
    {
        /// <summary>
        /// 已经击中了多少次 entityId to count
        /// </summary>
        public Dictionary<int, int> HitCount;

        /// <summary>
        /// 是否已经击中 entityId to ishit
        /// </summary>
        public Dictionary<int, bool> HitRecord;

        /// <summary>
        /// 是否击中过
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
        /// 记录击中次数
        /// </summary>
        /// <param name="targetId">受击者</param>
        public void RecordHitCount(int targetId)
        {
            HitCount ??= new Dictionary<int, int>();
            if (!HitCount.ContainsKey(targetId))
                HitCount[targetId] = 1;
            else
                HitCount[targetId]++;
        }

        /// <summary>
        /// 获取击中次数
        /// </summary>
        /// <param name="targetId">受击者</param>
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
        /// 记录击中
        /// </summary>
        /// <param name="targetId">受击者</param>
        public void RecordHit(int targetId)
        {
            HitRecord ??= new Dictionary<int, bool>();
            HitRecord[targetId] = true;

            RecordHitCount(targetId);
        }

        /// <summary>
        /// 清除击中信息
        /// </summary>
        public void ClearHitRecord()
        {
            if (HitRecord == null)
                return;

            HitRecord.Clear();
        }

        /// <summary>
        /// 是否已经击中
        /// </summary>
        /// <param name="targetId">受击者</param>
        /// <returns></returns>
        public bool IsHit(int targetId)
        {
            if (HitRecord == null)
                return false;

            return HitRecord.ContainsKey(targetId);
        }
    }

}
