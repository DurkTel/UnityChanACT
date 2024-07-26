using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.Playables;

namespace Actioner.Runtime
{
    /// <summary>
    /// 动画层级混合
    /// </summary>
    public class ActionerLayerMixer : ActionerNode
    {
        public override IPlayableNode Parent { get { return Root; } }

        private List<ActionerLayer> m_Layer;

        public override void OnInit(ActionerPlayable controller, IPlayableNode parent, object param = null)
        {
            base.OnInit(controller, parent);
            m_Layer = new List<ActionerLayer>(1); //默认1个层级
            Weight = 1.0f;
        }

        public override IPlayableNode GetChild(int index)
        {
            if (index < 0 || index >= m_Layer.Count) return null;
            return m_Layer[index];
        }

        protected override void CreatePlayable(out Playable playable)
        {
            playable = AnimationLayerMixerPlayable.Create(Root.Graph);
        }

        public ActionerLayer TryAddLayer(int index)
        {
            if (index < 0)
                throw new System.Exception("AnimePlayable.TryGetLayer输入下标为无效值");

            if (index >= m_Layer.Count)
            {
                var layer = Root.InsertNode<ActionerLayer>(this);
                m_Layer.Add(layer);
                return layer;
            }

            return m_Layer[index];
        }

        public bool TryRemoveLayer(int index)
        {
            if (index < 0 || index >= m_Layer.Count)
            {
                return false;
            }

            m_Layer.RemoveAt(index);
            return true;
        }

        public override void Dispose()
        {
            m_Layer.Clear();
            m_Layer = null;
            base.Dispose();
        }
    }
}
