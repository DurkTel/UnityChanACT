using GAS.Runtime;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GAS.Editor
{
    public partial class TimeLinePreview : UnityEditor.EditorWindow
    {
        public class TimeLineHitBoxPreview : TimeLineClipPreview
        {
            public TimeLineHitBoxPreview(TimeLineAbilityClip clip, TimeLinePreview preview, object obj) : base(clip, preview, obj)
            {
            }

            public override void Dispose()
            {
                throw new System.NotImplementedException();
            }

            public override void OnEnter()
            {
                throw new System.NotImplementedException();
            }

            public override void OnExit()
            {
                throw new System.NotImplementedException();
            }

            public override void Repaint()
            {
                throw new System.NotImplementedException();
            }
        }

    }
}
