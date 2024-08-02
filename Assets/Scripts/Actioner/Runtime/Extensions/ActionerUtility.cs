using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    public static class ActionerUtility
    {
        /// <summary>
        /// �½�һ����Ϊplayable
        /// </summary>
        /// <param name="animator"></param>
        /// <returns></returns>
        public static ActionerPlayable Create(ActionerController controller, DirectorUpdateMode updateMode = DirectorUpdateMode.GameTime)
        {
            ActionerTags.OnInitTags();
            var graph = PlayableGraph.Create();
            graph.SetTimeUpdateMode(updateMode);
            var playable = ScriptPlayable<ActionerPlayable>.Create(graph, ActionerPlayable.s_Template).GetBehaviour();
            playable.OnCreateOutput(controller);
            return playable;
        }

        /// <summary>
        /// �Ƴ�Playable
        /// </summary>
        /// <param name="playable"></param>
        /// <param name="destroy"></param>
        public static void RemovePlayable(Playable playable, bool destroy = true)
        {
            if (!playable.IsValid())
                return;

            //�����ڵ����뵥�����
            if (playable.GetInputCount() != 1 || playable.GetOutputCount() != 1)
                return;

            var graph = playable.GetGraph();
            var output = playable.GetOutput(0);

            var input = playable.GetInput(0);
            if (!input.IsValid())
            {
                graph.Disconnect(output, 0);

                if (destroy)
                    playable.Destroy();
                return;
            }

            //���Ĳ���PlayableOutput ��input��������ڵ��output�ڵ�
            if (output.IsValid())
            {
                graph.Disconnect(output, 0);
                graph.Disconnect(playable, 0);
                graph.Connect(input, 0, output, 0);
            }
            else //��input����graph��output
            {
                graph.Disconnect(playable, 0);

                graph.GetOutput(0).SetSourcePlayable(input);
            }

            if (destroy)
                playable.Destroy();
        }

        /// <summary>
        /// ����һ������
        /// </summary>
        /// <param name="name"></param>
        /// <param name="localPosition"></param>
        /// <param name="rotation"></param>
        /// <param name="parent"></param>
        /// <returns></returns>
        public static GameObject CreateElement(string name, Transform parent = null, Vector3 localPosition = default, Quaternion rotation = default)
        { 
            GameObject effectElement = new GameObject(name);
            effectElement.transform.SetParent(parent);
            effectElement.transform.localPosition = localPosition;
            effectElement.transform.rotation = rotation;

            return effectElement;
        }

        /// <summary>
        /// ����һ������ ����������
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <param name="parent"></param>
        /// <returns></returns>
        public static T CreateComponentContainer<T>(string name, Transform parent = null) where T : Component
        {
            var go = CreateElement(name, parent);
            T c = go.TryAddComponent<T>();    

            return c;
        }
    }
}
