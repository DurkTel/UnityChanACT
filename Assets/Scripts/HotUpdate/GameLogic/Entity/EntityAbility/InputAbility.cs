using GameMessage;
using GAS.Runtime;
using Google.Protobuf.Collections;
using LGameFramework.GameBase;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameLogic
{
    public class InputAbility : BaseInputAbility, IGameplayUpdate
    {
        private GMOrbitCamera m_Camera;
        public GMOrbitCamera Camera { get { return m_Camera; } }

        //[AbilityInject("")]
        //private SyncAbility m_SyncAbility;

        public override void OnInit(GameplayAbilityAsset abilityAsset, IAbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);

            m_Camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
            m_Camera.Focus = m_ASC.Transform;

            RegisterInput();
        }

        public void OnUpdate(float deltaTime)
        {
            //for (int i = 0; i < (int)EClientOperation.End; i++)
            //{
            //    //检测除方向输入外的按键
            //    var key = (EClientOperation)i;
            //    if (InputUtility.GetButtonDown(KeyCommand2InputAction(key)))
            //        AddInput(key, EOperationType.Down);
            //    if (InputUtility.GetButtonUp(KeyCommand2InputAction(key)))
            //    {
            //        Debug.Log(key);
            //        AddInput(key, EOperationType.Up);
            //    }
            //}

            //八方向输入检测
            var inputDir = InputUtility.GetAxis(InputActionArgs.InputAction_Move);
            //if (inputDir[0] > 0) AddInput(EClientOperation.Right, EOperationType.Down);
            //if (inputDir[0] < 0) AddInput(EClientOperation.Left, EOperationType.Down);
            //if (inputDir[1] > 0) AddInput(EClientOperation.Forward, EOperationType.Down);
            //if (inputDir[1] < 0) AddInput(EClientOperation.Backward, EOperationType.Down);

            //if (inputDir[0] > 0 && inputDir[1] > 0) AddInput(EClientOperation.RightForward, EOperationType.Down);
            //if (inputDir[0] > 0 && inputDir[1] < 0) AddInput(EClientOperation.RightBackward, EOperationType.Down);
            //if (inputDir[0] < 0 && inputDir[1] > 0) AddInput(EClientOperation.LeftForward, EOperationType.Down);
            //if (inputDir[0] < 0 && inputDir[1] < 0) AddInput(EClientOperation.LeftBackward, EOperationType.Down);

            m_WorldDirection = m_Camera.TransformDirection(inputDir);
        }

        private string KeyCommand2InputAction(EClientOperation key)
        {
            switch (key)
            {
                case EClientOperation.Attack:
                    return InputActionArgs.InputAction_Attack;
                case EClientOperation.Skill:
                    return InputActionArgs.InputAction_SpecialAttack;
                case EClientOperation.Defense:
                    return InputActionArgs.InputAction_Guard;
                case EClientOperation.Dodge:
                    return InputActionArgs.InputAction_Dodge;
            }

            return "";
        }

        public override void AddInput(EClientOperation key, EOperationType type)
        {
            base.AddInput(key, type);
            if (BattlefieldLogic.s_EnablePrediction)
            {
                //RepeatedField<OperationCommandRecord> records = new RepeatedField<OperationCommandRecord>();
                //records.AddRange(InputRecord);
                //m_SyncAbility.AddCommand(records, true);
            }
        }

        public override void UpdateDirection(Vector3 direction)
        {
            base.UpdateDirection(direction);
            if (BattlefieldLogic.s_EnablePrediction)
            {
                //var comVec3 = new CommonVector3() { X = WorldDirection.x, Y = WorldDirection.y, Z = WorldDirection.z };
                //m_SyncAbility.AddDirection(comVec3, true);
            }
        }

        private void RegisterInput()
        {
            for (int i = 0; i < (int)EClientOperation.End; i++)
            {
                //检测除方向输入外的按键
                var key = (EClientOperation)i;
                var actionName = KeyCommand2InputAction(key);
                InputUtility.RegisterListener((actionName, InputMode.Click), (p) => { AddInput(key, EOperationType.Down); });
                InputUtility.RegisterListener((actionName, InputMode.Release), (p) => { AddInput(key, EOperationType.Up); });
                InputUtility.RegisterListener((actionName, InputMode.Hold), (p) => { AddInput(key, EOperationType.Hold); });
            }
        }
    }
}
