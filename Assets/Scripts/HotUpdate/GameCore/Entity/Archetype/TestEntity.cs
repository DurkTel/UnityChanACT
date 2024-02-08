using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public class TestEntity : IArchetype
    {
        public Type[] GetComponents()
        {
            return new Type[] 
            {
                typeof(SkinComponent)
            };
        }

        public void OnCustomOperation(int entity)
        {
            
        }

        public void OnInitData(int entity)
        {
            
        }

        
    }
}
