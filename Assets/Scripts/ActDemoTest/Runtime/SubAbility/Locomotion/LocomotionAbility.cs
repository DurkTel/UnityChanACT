using UnityChanAct;
using Actioner.Runtime;
using UnityEngine;
using System;
using LGameFramework.GameBase.Blackboard;

namespace GAS.Runtime
{
    public class LocomotionAbility : GameplayAbility
    {
        private LocomotionAbilityAsset m_LocomotionAsset;

        private GameplayAttributeSetLib.Locomotion m_LocomotionAttribute;

        private LocomotionController m_LocomotionController;

        private GameBlackboard m_Blackboard;


        //因为在键鼠下 触发折返跑一般会先松开原先的输入方向 会走进停止移动的逻辑 移动——>停止——>折返 加个标识判断是冲刺折返
        private bool m_SprintStopFlag;

        public override void OnInit(GameplayAbilityAsset abilityAsset, AbilitySystemComponent asc)
        {
            base.OnInit(abilityAsset, asc);
            m_Blackboard = asc.TryAddComponent<GameBlackboard>();
            m_LocomotionController = asc.GetComponent<LocomotionController>();
            m_LocomotionAsset = abilityAsset as LocomotionAbilityAsset;
            m_ASC.Attributes.TryGetAttributeSet(out m_LocomotionAttribute);

            m_LocomotionController.tiltAngle = m_LocomotionAsset.TiltAngle;
            m_LocomotionController.tiltSpeed = m_LocomotionAsset.TiltSpeed;
            m_LocomotionController.rotateSpeed = m_LocomotionAsset.RotateSpeed;
            m_LocomotionController.startRotateTime = m_LocomotionAsset.StartRotateTime;
            m_LocomotionController.rootMotionMove = true;

            m_LocomotionController.OnMoveing += OnMoveing;
            m_LocomotionController.OnMoveReturnStart += OnMoveReturnStart;
            m_LocomotionController.OnMoveReturnTransition = OnMoveReturnTransition;
            m_LocomotionController.OnMoveReturnEnd += OnMoveReturnEnd;
        }

        public override void OnActivation(params object[] paramsArgs)
        {
            base.OnActivation();
            //AnimationCue.Trigger<AnimationActionCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.A_Idle });

            m_ASC.Abilitys.TryActivateAbility<ActionAbility>("Action_Idle");

        }

        private void OnMoveing(bool isMoveing)
        {
            if (isMoveing)
            {
                if (m_LocomotionController.IsMoveing && !m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_Sprint))
                {
                    //慢跑动画
                    //AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Move, index = 0, duration = ActionerPlayable.s_DefaultFadeSpeed });
                    m_Blackboard.SetValue<float>(PlayerController.s_AnimationDurationKey, 0.25f);
                    m_ASC.Abilitys.TryActivateAbility<ActionAbility>("Action_Run");
                }
            }
            else
            {
                if (m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_Dodge))
                    return;

                //急停动画
                m_SprintStopFlag = m_ASC.Tags.HasTag(GameplayTagsLib.Event_Locomotion_Sprint);
                //int index = m_SprintStopFlag ? 1 : 0;
                //AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_MoveStop, index = index, duration = ActionerPlayable.s_DefaultFadeSpeed });

                var actionName = m_SprintStopFlag ? "Action_SprintStop" : "Action_RunStop";
                m_ASC.Abilitys.TryActivateAbility<ActionAbility>(actionName);

                m_ASC.Abilitys.TryInActivateAbility<SprintAbility>();
            }
        }

        private float OnMoveReturnStart()
        {
            //折返跑动画
            //var index = m_SprintStopFlag ? 1 : 0;
            //var cue = AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Return, index = index, duration = 0.03f });
            //return cue.Action.Length;
            var actionName = m_SprintStopFlag ? "Action_SprintReturn" : "Action_RunReturn";
            m_ASC.Abilitys.TryActivateAbility<ActionAbility>(actionName);

            return m_SprintStopFlag ? 0.567f : 0.8f;
        }

        private void OnMoveReturnTransition(float fadeTime)
        {
            m_Blackboard.SetValue<float>(PlayerController.s_AnimationDurationKey, fadeTime);
            if (m_SprintStopFlag)
            {
                m_ASC.Abilitys.TryActivateAbility<ActionAbility>("Action_Sprint");

                //m_ASC.Abilitys.TryActivateAbility<SprintAbility>(fadeTime);
                m_SprintStopFlag = false;
            }
            else
                m_ASC.Abilitys.TryActivateAbility<ActionAbility>("Action_Run");

            //AnimationCue.Trigger<AnimationBudleCue>(m_ASC, new AnimationCueArg() { name = PlayerAction.B_Move, index = 0, duration = fadeTime });
        }

        private void OnMoveReturnEnd()
        {
            //if (m_SprintStopFlag)
            //{
            //    m_ASC.Abilitys.TryActivateAbility<SprintAbility>();
            //    m_SprintStopFlag = false;
            //}
        }
    }
}
