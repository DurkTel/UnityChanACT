using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;
using UnityEngine.UI;

namespace LGameFramework.GameCore
{
    public class AnimationPlayer : MonoBehaviour
    {
        [Range(0f, 1f)]
        public float transition;
        [Range(0f, 1f)]
        public float layerWeight1;
        [Range(0f, 1f)]
        public float layerWeight2;
        public AvatarMask mask;

        [SerializeField]
        private AnimationClip[] m_Clips;
        public AnimationClip[] Clips
        {
            get { return m_Clips; }
            set { if (m_Clips == value) return; m_Clips = value; m_AnimationQueue.UpdateMixerInput(); }
        }

        private PlayableGraph m_PlayableGraph;

        private AnimationQueue m_AnimationQueue;

        private void Start()
        {

            m_PlayableGraph = PlayableGraph.Create("AnimationPlayer");
            var queue = ScriptPlayable<AnimationQueue>.Create(m_PlayableGraph);
            m_AnimationQueue = queue.GetBehaviour();
            m_AnimationQueue.OnInit(GetComponent<Animator>(), mask);
            m_AnimationQueue.Clips = m_Clips;
            m_AnimationQueue.transition = transition;

            var output = AnimationPlayableOutput.Create(m_PlayableGraph, "Output", GetComponent<Animator>());

            output.SetSourcePlayable(queue);

            m_PlayableGraph.Play();
        }

        private void Update()
        {
            m_AnimationQueue.SetLayerWeight(0, layerWeight1);
            m_AnimationQueue.SetLayerWeight(1, layerWeight2);
        }

        private void OnDestroy()
        {
            if (m_PlayableGraph.IsValid())
                m_PlayableGraph.Destroy();
        }

        private void OnGUI()
        {
            if (GUILayout.Button("ÇÐ»»¶¯»­"))
            {
                m_AnimationQueue.transition = transition;
                m_AnimationQueue.DoNext();
            }
        }
    }


    public class AnimationQueue : PlayableBehaviour
    {
        public float transition;

        private float m_TransitionTimer;

        private AnimationClip[] m_Clips;
        public AnimationClip[] Clips
        {
            get { return m_Clips; }
            set { if (m_Clips == value) return; m_Clips = value; UpdateMixerInput(); }
        }

        private int m_CurrentIndex;

        private int m_TargetIndex;

        private bool m_InTransition;

        private Animator m_Animator;

        private PlayableGraph m_PlayableGraph;

        private Playable m_Owner;

        private AnimationMixerPlayable m_Mix;

        private AnimationLayerMixerPlayable m_LayerMixer;
        private AvatarMask m_AvatarMask;

        public void OnInit(Animator animator, AvatarMask mask)
        {
            m_Animator = animator;
            m_AvatarMask = mask;
            m_CurrentIndex = 0;
            m_PlayableGraph = m_Owner.GetGraph();

            m_LayerMixer = AnimationLayerMixerPlayable.Create(m_PlayableGraph);
            m_Owner.AddInput(m_LayerMixer, 0, 1);

            m_Mix = AnimationMixerPlayable.Create(m_PlayableGraph);
            m_LayerMixer.AddInput(m_Mix, 0, 1);

        }

        public void SetLayerWeight(int index, float weight)
        {
            m_LayerMixer.SetInputWeight(index, weight);
        }

        public void UpdateMixerInput()
        {
            if (m_Clips.Length == m_Mix.GetInputCount()) return;

            for (int i = 0; i < m_Mix.GetInputCount(); i++)
            {
                m_Mix.DisconnectInput(i);
            }
            

            for (int i = 0; i < m_Clips.Length; i++)
            {
                var clipPlayable = AnimationClipPlayable.Create(m_PlayableGraph, m_Clips[i]);
                clipPlayable.SetDuration(m_Clips[i].length);
                m_Mix.AddInput(clipPlayable, 0, i == m_CurrentIndex ? 1 : 0);
            }


            var clip = AnimationClipPlayable.Create(m_PlayableGraph, m_Clips[0]);
            m_LayerMixer.AddInput(clip, 0, 1);

            m_LayerMixer.SetLayerMaskFromAvatarMask(1, m_AvatarMask);
            m_LayerMixer.SetLayerAdditive(1, false);

        }

        public override void OnPlayableCreate(Playable playable)
        {
            m_Owner = playable;
        }

        public override void PrepareFrame(Playable playable, FrameData info)
        {
            if (m_InTransition)
            {
                m_TransitionTimer -= info.deltaTime;
                float weight = m_TransitionTimer / transition;
                m_Mix.SetInputWeight(m_CurrentIndex, Mathf.Lerp(m_Mix.GetInputWeight(m_CurrentIndex), 0, 1 - weight));
                m_Mix.SetInputWeight(m_TargetIndex, Mathf.Lerp(m_Mix.GetInputWeight(m_TargetIndex), 1, 1 - weight));

                if (weight <= 0)
                {
                    m_CurrentIndex = m_TargetIndex;
                    m_InTransition = false;
                }

            }

            UpdateQueue();
        }

        public void DoNext()
        {
            m_TargetIndex = m_CurrentIndex + 1;
            if (m_TargetIndex >= m_Mix.GetInputCount())
                m_TargetIndex = 0;

            m_InTransition = true;
            m_TransitionTimer = transition;
            m_Mix.GetInput(m_TargetIndex).SetTime(0);
            m_Mix.GetInput(m_TargetIndex).SetDone(false);

        }

        private void UpdateQueue()
        {
            int count = m_Mix.GetInputCount();
            if (count <= 0) return;

            if (!m_InTransition && m_Mix.GetInput(m_CurrentIndex).IsValid() && m_Mix.GetInput(m_CurrentIndex).IsDone())
            {
                DoNext();
            }
        }
    }
}
