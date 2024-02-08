using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public class OnIninSkinCommand : Command
    {

        public override void Execute()
        {
            this.SetProperty<int>(EEntityAttribute.End, 1);
            
        }
    }
}
