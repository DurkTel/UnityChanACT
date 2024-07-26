using Actioner.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

public class TestActionerClass : MonoBehaviour
{
    public AnimationClip clip;

    public ParticleSystem xparticleSystem;

    PlayableGraph playableGraph;

    private AnimationClipPlayable ClipPlayable;


    private float m_Time;

    public float Time
    {
        get { return m_Time; }
        set 
        {
            m_Time = value;
            //ClipPlayable.SetTime(m_Time * clip.length);
            //playableGraph.Evaluate(0.02f);

            xparticleSystem.Simulate(m_Time, true, true, true);
        }
    }

    void Start()

    {

        //playableGraph = PlayableGraph.Create();

        //playableGraph.SetTimeUpdateMode(DirectorUpdateMode.Manual);

        //var playableOutput = AnimationPlayableOutput.Create(playableGraph, "Animation", GetComponent<Animator>());

        //// 将剪辑包裹在可播放项中

        //ClipPlayable = AnimationClipPlayable.Create(playableGraph, clip);

        //// 将可播放项连接到输出

        //playableOutput.SetSourcePlayable(ClipPlayable);

        //// 播放该图。

        //playableGraph.Play();

    }

    private void OnGUI()
    {
        Time = GUILayout.HorizontalSlider(Time, 0, 1, GUILayout.Width(200));
    }

    void OnDisable()

    {

        //销毁该图创建的所有可播放项和 PlayableOutput。

        //playableGraph.Destroy();

    }

}
