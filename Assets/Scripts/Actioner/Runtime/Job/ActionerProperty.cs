using System;
using System.Collections.Generic;
using Unity.Collections;
using UnityEngine;
using UnityEngine.Animations;

namespace Actioner.Runtime
{

    public class ActionerProperty : IDisposable
    {
        protected Job m_Job;

        protected AnimationScriptPlayable m_Playable;

        protected ActionerPlayable m_Actioner;

        private CurveProperty m_CurveProperty;
        public CurveProperty CurveProperty { get { return m_CurveProperty; } }

        private IntProperty m_IntProperty;
        public IntProperty IntProperty { get { return m_IntProperty; } }

        private FloatProperty m_FloatProperty;
        public FloatProperty FloatProperty { get { return m_FloatProperty; } }

        private BoolProperty m_BoolProperty;
        public BoolProperty BoolProperty { get { return m_BoolProperty; } }

        public ActionerProperty(ActionerPlayable actioner, int count, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
        {
            m_Actioner = actioner;
            m_CurveProperty = new CurveProperty(actioner.Animator, count, NativeArrayOptions.ClearMemory);
            m_IntProperty = new IntProperty(10);
            m_FloatProperty = new FloatProperty(10);
            m_BoolProperty = new BoolProperty(10);


            m_Job = new Job() { curveProperty = m_CurveProperty };
            m_Playable = m_Actioner.InsertOutputJob(m_Job);
            m_Actioner.TryAddDispose(this);
        }

        public void Dispose()
        {
            m_CurveProperty.Dispose();
            m_CurveProperty = null;

            m_IntProperty.Dispose();
            m_IntProperty = null;

            m_FloatProperty.Dispose();
            m_FloatProperty = null;

            m_BoolProperty.Dispose();
            m_BoolProperty = null;

            if (m_Actioner != null)
            {
                ActionerUtility.RemovePlayable(m_Playable);
                m_Actioner = null;
            }
        }

        public struct Job : IAnimationJob
        {
            public CurveProperty curveProperty;

            public void ProcessRootMotion(AnimationStream stream) { }

            public void ProcessAnimation(AnimationStream stream)
            {
                curveProperty.UpdateProperty(stream);
            }
        }
    }

    public interface IProperty<T>
    { 
        public T GetValue(string property);

        public void SetValue(string property, T value);
    }

    public abstract class Property<T> : IProperty<T>, IDisposable
    {
        private Dictionary<string, T> m_Properties;

        public Property(int count)
        {
            m_Properties = new Dictionary<string, T>(count);
        }

        public void Dispose()
        {
            m_Properties.Clear();
            m_Properties = null;
        }

        public T GetValue(string property)
        {
            return m_Properties.GetValueOrDefault(property);
        }

        public void SetValue(string property, T value)
        {
            if (m_Properties.ContainsKey(property))
                m_Properties[property] = value;
            else
                m_Properties.Add(property, value);
        }
    }

    public class IntProperty : Property<int>
    {
        public IntProperty(int count) : base(count)
        {
        }
    }

    public class FloatProperty : Property<float>
    {
        public FloatProperty(int count) : base(count)
        {
        }
    }

    public class BoolProperty : Property<bool>
    {
        public BoolProperty(int count) : base(count)
        {
        }
    }

    public abstract class PropertyJob<T> : IProperty<T>, IDisposable where T : struct
    {
        private Dictionary<string, int> m_PropertyDic;
        protected Animator m_Animator;
        protected NativeArray<PropertyStreamHandle> m_Property;
        protected NativeArray<T> m_Values;
        protected int m_RealCount;

        public int Length { get { return m_RealCount; } }
        public T this[int index]
        {
            get { return m_Values[index]; } 
        }

        public PropertyJob(Animator animator, int count, NativeArrayOptions options = NativeArrayOptions.ClearMemory)
        {
            m_RealCount = 0;
            m_Animator = animator;
            m_Property = new NativeArray<PropertyStreamHandle>(count, Allocator.Persistent, options);
            m_Values = new NativeArray<T>(count, Allocator.Persistent);
            m_PropertyDic = new Dictionary<string, int>(10);
        }

        public void Dispose()
        {
            if (m_Property.IsCreated)
            {
                m_Property.Dispose();
                m_Values.Dispose();
            }

            m_PropertyDic.Clear();
            m_PropertyDic = null;
        }

        public abstract void UpdateProperty(AnimationStream stream);

        public T GetValue(string property)
        {
            if (!m_PropertyDic.ContainsKey(property))
                return default(T);

            return m_Values[m_PropertyDic[property]];
        }

        public void SetValue(string property, T value)
        {
            throw new NotImplementedException();
        }

        public virtual void Add(string propertyName)
        {
            if (m_PropertyDic.ContainsKey(propertyName))
                return;

            if (++m_RealCount >= m_Property.Length)
                Expansion();

            m_PropertyDic.Add(propertyName, m_RealCount);
        }

        protected void Expansion()
        {
            int newSize = m_Property.Length * 2;
            NativeArray<PropertyStreamHandle> newArray = new NativeArray<PropertyStreamHandle>(newSize, Allocator.Persistent);
            NativeArray<PropertyStreamHandle>.Copy(m_Property, newArray, m_Property.Length);

            NativeArray<T> newArray2 = new NativeArray<T>(newSize, Allocator.Persistent);
            NativeArray<T>.Copy(m_Values, newArray2, m_Values.Length);

            m_Property.Dispose();
            m_Property = newArray;

            m_Values.Dispose();
            m_Values = newArray2;
        }
    }

    public class CurveProperty : PropertyJob<float>
    {
        public const string c_CurvePrefix = "ActionerCurve_";

        public CurveProperty(Animator animator, int count, NativeArrayOptions options = NativeArrayOptions.ClearMemory) : base(animator, count, options)
        {
        }

        public override void Add(string propertyName)
        {
            base.Add(propertyName);

            m_Property[m_RealCount] = m_Animator.BindStreamProperty(m_Animator.transform, typeof(Animator), c_CurvePrefix + propertyName);
        }

        public override void UpdateProperty(AnimationStream stream)
        {
            for (int i = m_Property.Length - 1; i >= 0; i--)
            {
                if (m_Property[i].IsValid(stream))
                    m_Values[i] = m_Property[i].GetFloat(stream);
            }
        }
    }

}
