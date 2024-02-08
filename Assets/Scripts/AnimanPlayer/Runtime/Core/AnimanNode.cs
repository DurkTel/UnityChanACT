using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace AnimanPlayer
{
    public abstract class AnimanNode
    {
        private Playable m_Playable;

        public Playable Playable { get { return m_Playable; } }
    }
}
