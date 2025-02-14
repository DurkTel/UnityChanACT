using Cysharp.Threading.Tasks;
using GameMessage;
using GAS.Runtime;
using LGameFramework.GameCore;
using LGameFramework.GameLogic.GUI;
using LGameFramework.GameNet;
using System;
using System.Collections.Generic;
using System.Security.AccessControl;
using UnityEngine;
using UnityEngine.TextCore.Text;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 战局实例
    /// </summary>
    public class BattlefieldLogic : IDisposable
    {
        public const float c_SyncTime = 0.066f;

        public static bool s_Offline = false;

        public static bool s_EnablePrediction = true;

        public static async UniTask<BattlefieldLogic> StartLogic(BattlefieldStart data)
        { 
            await NetworkUtility.ConnentFightServer();

            var battkefield = new BattlefieldLogic(data);
            return battkefield;
        }

        private readonly OfflineBattlefield m_OfflineServer;

        private readonly int m_FightId;
        public int FightId { get { return m_FightId; } }

        private readonly Dictionary<int, PlayerData> m_AllPlayers;
        /// <summary>
        /// 所有玩家数据
        /// clientid to data
        /// </summary>
        public Dictionary<int, PlayerData> AllPlayers { get { return m_AllPlayers; } }

        private readonly Dictionary<int, GMEntity> m_PlayerEntitys;
        /// <summary>
        /// 所有玩家实体
        /// clientid to entityid
        /// </summary>
        public Dictionary<int, GMEntity> PlayerEntitys { get { return m_PlayerEntitys; } }

        private List<int> m_RobotList;

        private GMEntity m_LocalEntity;


        public BattlefieldLogic(BattlefieldStart data)
        {
            m_FightId = data.FightID;
            m_AllPlayers = new Dictionary<int, PlayerData>();
            m_PlayerEntitys = new Dictionary<int, GMEntity>();
            m_RobotList = new List<int>();

            Module.Data.Battlefield.FightId = data.FightID;
            Module.Data.Battlefield.StartTimestamp = data.StartTimestamp;
            Module.Data.Battlefield.AllPlayers = data.AllPlayers;

            foreach (var item in data.AllPlayers)
            {
                m_AllPlayers.Add(item.Key, item.Value);
            }

            foreach (var character in data.AllCharacter)
            {
                Debug.Log($"客户端id：{character.Key}");
                bool isLocal = character.Key == Module.Data.Login.ClientId;
                
                var entitiy = OnInitEntity(character.Value, isLocal);
                if (entitiy == null)
                    continue;
                
                m_PlayerEntitys.Add(character.Key, entitiy);
                //由这个客户端模拟的ai
                if (-character.Key == Module.Data.Login.ClientId && character.Value.IsAI)
                    m_RobotList.Add(character.Key);
            }

            if (s_Offline)
            {
                m_OfflineServer = new OfflineBattlefield(data.FightID, 1);
                TimerUtility.AddFrame(m_OfflineServer.FightStart, 0, 3);

            }
            else
            {
                TimerUtility.AddTimer(() => 
                {
                    var ip = NetworkUtility.GetFightIp();
                    Module.Proxy.Battlefield.FightLoadCompleteAsyn(FightId, Module.Data.Login.PlayerUID, ip.Address.ToString(), ip.Port, () => { });

                    foreach (var robotId in m_RobotList)
                        Module.Proxy.Battlefield.RobotLoadCompleteAsyn(robotId, FightId, Module.Data.Login.PlayerUID, ip.Address.ToString(), ip.Port, () => { });
                }, 0, 1);
            }

            UIUtility.OpenView<MainTopLeftView>();
            //UIUtility.OpenView<MainBossHPBarView>();

            //TimerUtility.AddTimer(SendPlayerOperation, 0, BattlefieldLogic.c_SyncTime, -1);
        }

        public void OnSyncFrameUpdate(SyncFrameInfo syncInfo)
        {
            Module.Data.Battlefield.FightId = syncInfo.FightID;
            //Debug.Log($"收到服务端同步操作 操作帧{syncInfo.FrameOpt.Count}个");

            foreach (var info in syncInfo.FrameOpt)
            {
                if (Module.Data.Battlefield.SyncFrame > info.Frame) //过时的帧
                    continue;

                Module.Data.Battlefield.SyncFrame = info.Frame;
                Module.Data.Battlefield.AllOperation = info;

                //更新操作
                foreach (var item in info.OperateInfo)
                {
                    if (!m_PlayerEntitys.TryGetValue(item.ClientID, out var entity))
                        continue;

                    if (!entity.Abilitys.TryGetAbility<SyncAbility>(out var sync))
                        continue;

                    sync.AddCommand(item.OperateCommand);
                    sync.AddDirection(item.Direction);
                    //Debug.Log($"更新方向{item.Direction} 更新操作{item.OperateCommand} 当前帧帧号：{item.Frame}");
                }

                //更新实体
                EntityUtility.Evaluate(info.Frame);

                //更新物理
                PhysicUtility.Evaluate(info.Frame);
            }

            SendPlayerOperation();
            SendRobotOperation();
        }

        private void SendPlayerOperation()
        {
            var selfOt = new OperationInfo();
            var input = m_LocalEntity.Abilitys.GetAbility<InputAbility>();
            selfOt.OperateCommand.AddRange(input.InputRecord);
            selfOt.FightID = Module.Data.Battlefield.FightId;
            selfOt.Frame = Module.Data.Battlefield.SyncFrame + 1;
            selfOt.ClientID = Module.Data.Login.ClientId;
            selfOt.Direction = new CommonVector3() { X = input.WorldDirection.x, Y = input.WorldDirection.y, Z = input.WorldDirection.z };
            //Debug.Log($"发送给服务端方向{selfOt.Direction} 下一帧帧号：{selfOt.Frame}");
            input.ClearInput();

            //发送下一帧的操作
            if (s_Offline)
                m_OfflineServer.UpdatePlayerOperation(selfOt);
            else
                Module.Proxy.Battlefield.SynFightInfoAsyn(selfOt, () => { });
        }

        private void SendRobotOperation()
        {
            foreach (var robotId in m_RobotList)
            {
                if (!m_PlayerEntitys.TryGetValue(robotId, out var entity))
                    continue;
                if (!entity.Abilitys.TryGetAbility<ExternalInputAbility>(out var input))
                    continue;

                var selfOt = new OperationInfo();
                selfOt.OperateCommand.AddRange(input.InputRecord);
                selfOt.FightID = Module.Data.Battlefield.FightId;
                selfOt.Frame = Module.Data.Battlefield.SyncFrame + 1;
                selfOt.ClientID = robotId;
                selfOt.Direction = new CommonVector3() { X = input.WorldDirection.x, Y = input.WorldDirection.y, Z = input.WorldDirection.z };
                //Debug.Log($"发送给服务端方向{selfOt.Direction} 下一帧帧号：{selfOt.Frame}");
                input.ClearInput();

                //发送下一帧的操作
                if (s_Offline)
                    m_OfflineServer.UpdatePlayerOperation(selfOt);
                else
                    Module.Proxy.Battlefield.SynRobotFightInfoAsyn(robotId, selfOt, () => { });
            }
        }

        public void SendRobotOperation(List<OperationCommandRecord> command, Vector3 dir, int clientId)
        {
            var ot = new OperationInfo();

            ot.OperateCommand.AddRange(command);
            ot.FightID = Module.Data.Battlefield.FightId;
            ot.Frame = Module.Data.Battlefield.SyncFrame + 1;
            ot.ClientID = clientId;
            ot.Direction = new CommonVector3() { X = dir.x, Y = dir.y, Z = dir.z };
            //Debug.Log($"发送给服务端方向{selfOt.Direction} 下一帧帧号：{selfOt.Frame}");

            //发送下一帧的操作
            if (s_Offline)
                m_OfflineServer.UpdatePlayerOperation(ot);
            else
                Module.Proxy.Battlefield.SynFightInfoAsyn(ot, () => { });
        }

        public void Dispose()
        {
            
        }

        private GMEntity OnInitEntity(CharacterData data, bool isLocal)
        {
            var archetype = AssetUtility.LoadAsset<AbilitySystemArchetype>(data.ArchetypeAsset);
            if (archetype == null)
                return null;

            var entitiy = EntityUtility.EnterEntity(archetype);

            entitiy.Tags.AddFixedTags(entitiy, data.CampName.ToGameplayTag());

            if (isLocal)
            {
                m_LocalEntity = entitiy;
                m_LocalEntity.Abilitys.RemoveAbility<ExternalInputAbility>();
                m_LocalEntity.Abilitys.AddAbility<InputAbility>(AssetUtility.LoadAsset<InputAbilityAsset>("InputAbility.asset"));
                m_LocalEntity.Tags.AddFixedTags(m_LocalEntity, GameplayTagsLib.Camp_Local);
            }

            if (data.IsAI)
            {
                entitiy.Abilitys.AddAbility<ExternalInputAbility>(AssetUtility.LoadAsset<ExternalInputAbilityAsset>("ExternalInputAbility.asset"));
                entitiy.Abilitys.AddAbility<BehaviorAbility>(AssetUtility.LoadAsset<BehaviorAbilityAsset>("WarriorAI.asset"));
            }

            if (entitiy.Abilitys.TryGetAbility<SyncAbility>(out var sync))
            {
                sync.SyncPositionImmediately(new Vector3(data.Position.X, data.Position.Y, data.Position.Z));
            }


            TimerUtility.AddTimer(() =>
            {

                var weap = EntityUtility.EnterEntity(AssetUtility.LoadAsset<AbilitySystemArchetype>("Weapon.asset"));
                weap.Abilitys.TryActivateAbility("Sub_Weapon_1", entitiy);
            }, 0, 2);

            return entitiy;
        }
    }
}
