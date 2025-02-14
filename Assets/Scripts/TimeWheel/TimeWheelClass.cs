using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class TimeWheelClass : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            GMTimeWheelManager.Instance.OnInitTimeWheel();
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                UnityEngine.Profiling.Profiler.BeginSample("��ʱ������");
                for (int i = 0; i < 1; i++)
                {
                    GMTimeWheelManager.Instance.AddTimer(Test, 1f, 3, 2f, new TestArg() { testInt = 99, testString = "����" });

                }
                UnityEngine.Profiling.Profiler.EndSample();

                Debug.Log($"��ʼ��ʱ�� ��ʱ��ʱ�䣺{GMTimeWheelManager.Instance.TotalTime}");
            }
        }

        private void Test(TimeTaskArg arg)
        {
            TestArg testArg = arg as TestArg;
            Debug.Log($"ִ�ж�ʱ������ ��ʱ��ʱ�䣺{GMTimeWheelManager.Instance.TotalTime} ������{testArg.testInt} {testArg.testString}");
        }
    }

    public class TestArg : TimeTaskArg
    {
        public int testInt;

        public string testString;

        public override void Reset()
        {
            
        }
    }
}
