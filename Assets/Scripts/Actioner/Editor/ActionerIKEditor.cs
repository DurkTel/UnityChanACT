using Actioner.Runtime;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;

namespace Actioner.Editor
{

    [CustomEditor(typeof(ActionerIK))]
    public class ActionerIKEditor : UnityEditor.Editor
    {
        private FadeTabWindow m_FadeTab;

        private ActionerIK m_ActionerIK;

        public override VisualElement CreateInspectorGUI()
        {
            m_FadeTab = new FadeTabWindow(this);
            m_ActionerIK = (ActionerIK)target;
            m_FadeTab.TabPages.Add(new LookAtEffector(m_ActionerIK));
            m_FadeTab.TabPages.Add(new LimbEffector(m_ActionerIK));
            m_FadeTab.TabPages.Add(new HintEffector(m_ActionerIK));
            m_FadeTab.TabPages.Add(new BodyEffector(m_ActionerIK));
            m_FadeTab.OnEnable();
            return base.CreateInspectorGUI();
        }


        public override void OnInspectorGUI()
        {
            //base.OnInspectorGUI();
            m_FadeTab.OnGUI();
            m_ActionerIK.ApplyFootIK = EditorGUILayout.ToggleLeft("启用足部IK贴地", m_ActionerIK.ApplyFootIK);
            m_ActionerIK.showGizmos = EditorGUILayout.ToggleLeft("绘制IKHandle", m_ActionerIK.showGizmos);

            if (m_ActionerIK.showGizmos && GUILayout.Button("同步IKHandle位置"))
            {
                m_ActionerIK.syncIKGoal = true;
            }

        }

        public class LookAtEffector : FadeTabWindow.FadeTabPage
        {
            public LookAtEffector(ActionerIK actionerIK)
            {
                this.actionerIK = actionerIK;
            }

            private ActionerIK actionerIK;

            public override int Order => 6;

            public override string Instructions => "";

            public override string Name => "头部IK";

            protected override void DoBodyGUI()
            {
                EditorGUI.BeginChangeCheck();

                float eyesWeight = EditorGUILayout.Slider("眼部权重", actionerIK.LookAtEffector.eyesWeight, 0f, 1f);
                float headWeight = EditorGUILayout.Slider("头部权重", actionerIK.LookAtEffector.headWeight, 0f, 1f);
                float bodyWeight = EditorGUILayout.Slider("上半身部权重", actionerIK.LookAtEffector.bodyWeight, 0f, 1f);
                float clampWeight = EditorGUILayout.Slider("范围权重", actionerIK.LookAtEffector.clampWeight, 0f, 1f);

                if (EditorGUI.EndChangeCheck())
                {
                    actionerIK.LookAtEffector = new Actioner.Runtime.LookAtEffector()
                    {
                        bodyWeight = bodyWeight,
                        headWeight = headWeight,
                        eyesWeight = eyesWeight,
                        clampWeight = clampWeight
                    };
                }
            }
        }

        public class LimbEffector : FadeTabWindow.FadeTabPage
        {
            public LimbEffector(ActionerIK actionerIK)
            {
                this.actionerIK = actionerIK;
            }

            private float[,] m_Weight = new float[4, 3];

            private string[] m_LabelName = new string[]
            {
            "左脚IK", "右脚IK", "左手IK", "右手IK"
            };

            private ActionerIK actionerIK;

            public override int Order => 5;

            public override string Instructions => "";

            public override string Name => "四肢IK";

            protected override void DoBodyGUI()
            {
                EditorGUI.BeginChangeCheck();

                actionerIK.Stiffness = EditorGUILayout.Slider("推拉刚度系数", actionerIK.Stiffness, 0f, 2f);
                EditorGUILayout.Space();

                for (int i = 0; i < 4; i++)
                {
                    EditorGUILayout.LabelField(m_LabelName[i], EditorStyles.boldLabel);
                    m_Weight[i, 0] = EditorGUILayout.Slider("位置权重", actionerIK.LimbEffector[i].positionWeight, 0f, 1f);
                    m_Weight[i, 1] = EditorGUILayout.Slider("旋转权重", actionerIK.LimbEffector[i].rotationWeight, 0f, 1f);
                    m_Weight[i, 2] = EditorGUILayout.Slider("推拉质心权重", actionerIK.LimbEffector[i].pullWeight, 0f, 1f);
                    EditorGUILayout.Space();
                }


                if (EditorGUI.EndChangeCheck())
                {
                    var limb = new Actioner.Runtime.LimbEffector[4];
                    for (int i = 0; i < 4; i++)
                    {
                        limb[i].positionWeight = m_Weight[i, 0];
                        limb[i].rotationWeight = m_Weight[i, 1];
                        limb[i].pullWeight = m_Weight[i, 2];
                    }

                    actionerIK.LimbEffector = limb;
                }
            }
        }

        public class HintEffector : FadeTabWindow.FadeTabPage
        {
            public HintEffector(ActionerIK actionerIK)
            {
                this.actionerIK = actionerIK;
            }

            private float[] m_Weight = new float[4];

            private string[] m_LabelName = new string[]
            {
            "左膝盖IK", "右膝盖IK", "左手肘IK", "右手肘IK"
            };

            private ActionerIK actionerIK;

            public override int Order => 4;

            public override string Instructions => "";

            public override string Name => "四关节IK";

            protected override void DoBodyGUI()
            {
                EditorGUI.BeginChangeCheck();

                for (int i = 0; i < 4; i++)
                {
                    EditorGUILayout.LabelField(m_LabelName[i], EditorStyles.boldLabel);
                    m_Weight[i] = EditorGUILayout.Slider("权重", actionerIK.HintEffector[i].weight, 0f, 1f);
                    EditorGUILayout.Space();
                }

                if (EditorGUI.EndChangeCheck())
                {
                    var limb = new Actioner.Runtime.HintEffector[4];
                    for (int i = 0; i < 4; i++)
                    {
                        limb[i].weight = m_Weight[i];
                    }

                    actionerIK.HintEffector = limb;
                }
            }
        }

        public class BodyEffector : FadeTabWindow.FadeTabPage
        {
            public BodyEffector(ActionerIK actionerIK)
            {
                this.actionerIK = actionerIK;
            }

            private ActionerIK actionerIK;

            private Transform m_Handle;

            public override int Order => 3;

            public override string Instructions => "";

            public override string Name => "身体质心IK";

            public override void OnEnable(int index, FadeTabWindow tabWindow)
            {
                base.OnEnable(index, tabWindow);
                m_Handle = actionerIK.GetIKHandle(AvatarIKHandle.Body);
            }

            protected override void DoBodyGUI()
            {
                if (m_Handle == null)
                {
                    EditorGUILayout.HelpBox("没有身体质心的IKHandle", MessageType.Warning);
                    return;
                }

                EditorGUI.BeginChangeCheck();

                float angleX = EditorGUILayout.Slider("旋转角度X", m_Handle.eulerAngles.x, 0f, 360f);
                float angleY = EditorGUILayout.Slider("旋转角度Y", m_Handle.eulerAngles.y, 0f, 360f);
                float angleZ = EditorGUILayout.Slider("旋转角度Z", m_Handle.eulerAngles.z, 0f, 360f);


                if (EditorGUI.EndChangeCheck())
                {
                    if (m_Handle != null)
                    {
                        m_Handle.rotation = Quaternion.Euler(new Vector3(angleX, angleY, angleZ));
                    }
                }
            }
        }
    }
}