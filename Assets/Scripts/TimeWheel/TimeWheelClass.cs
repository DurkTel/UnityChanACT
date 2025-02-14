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
                UnityEngine.Profiling.Profiler.BeginSample("计时器生成");
                for (int i = 0; i < 1; i++)
                {
                    GMTimeWheelManager.Instance.AddTimer(Test, 1f, 3, 2f, new TestArg() { testInt = 99, testString = "测试" });

                }
                UnityEngine.Profiling.Profiler.EndSample();

                Debug.Log($"开始定时器 定时器时间：{GMTimeWheelManager.Instance.TotalTime}");
            }
        }

        private void Test(TimeTaskArg arg)
        {
            TestArg testArg = arg as TestArg;
            Debug.Log($"执行定时器任务 定时器时间：{GMTimeWheelManager.Instance.TotalTime} 参数：{testArg.testInt} {testArg.testString}");
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
