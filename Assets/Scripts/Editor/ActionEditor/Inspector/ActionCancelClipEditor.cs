using GameMessage;
using LGameFramework.GameLogic;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEditor.UIElements;
using UnityEngine;

namespace LGameFramework.GameEditor
{
    public class ActionCancelClipEditor : ActionClipEditor
    {
        private ActionCancelClip m_CancelClip;

        private CommandList m_CommandList;

        public ActionCancelClipEditor(ActionClip actionClip) : base(actionClip)
        {
            m_CancelClip = actionClip as ActionCancelClip;
            m_CommandList = new CommandList(m_CancelClip.actionCommands);
            m_CommandList.OnEnable(true, true, true, true, 50);
        }

        public override bool OnInspectorGUI()
        {
            bool isDirty = base.OnInspectorGUI();

            m_CancelClip.cancelTag = (ActionCancelTag)EditorGUILayout.EnumFlagsField("�л���Tag", m_CancelClip.cancelTag);
            m_CancelClip.beCancelActionId = EditorGUILayout.TextField("ֻ���л���ActionId", m_CancelClip.beCancelActionId);

            m_CancelClip.priority = EditorGUILayout.IntField("�л����ӵ����ȼ�", m_CancelClip.priority);

            m_CancelClip.transitionDuration = EditorGUILayout.FloatField("�л����ɳ���ʱ��", m_CancelClip.transitionDuration);

            m_CancelClip.delayTick = EditorGUILayout.IntSlider("���ٸ�֮֡��Ŵ���", m_CancelClip.delayTick, m_CancelClip.StartTick, m_CancelClip.EndTick);
            using (new EditorGUILayout.HorizontalScope())
            {
                m_CancelClip.useCustomCommand = EditorGUILayout.ToggleLeft("����Զ��巽��", m_CancelClip.useCustomCommand);
                m_CancelClip.reverseCustomCommand = EditorGUILayout.ToggleLeft("�÷�����", m_CancelClip.reverseCustomCommand);
            }
            if (m_CancelClip.useCustomCommand)
                m_CancelClip.customCommand = EditorGUILayout.TextField("�Զ��巽����", m_CancelClip.customCommand);

            m_CancelClip.useActionCommand = EditorGUILayout.ToggleLeft("�����������", m_CancelClip.useActionCommand);
            if (m_CancelClip.useActionCommand)
            {
                Rect commandRect = new Rect(18, m_CancelClip.useCustomCommand ? 440 : 420, 610, 60);
                m_CommandList.RefreshList(commandRect);
                GUILayout.Space(m_CancelClip.actionCommands.Count * 60 + 30);
            }

            return isDirty;
        }

        public class CommandList : ReorderableGenericList<ActionCommand>
        {
            private List<string> m_ActionStr;
            public CommandList(List<ActionCommand> dataList, string[] headers = null) : base(dataList, headers)
            {
                m_ActionStr = new List<string>();
                for (int i = 0; i < (int)EClientOperation.End; i++)
                {
                    var key = (EClientOperation)i;
                    m_ActionStr.Add(Key2Str(key));
                }
            }

            protected override void DrawHeader(Rect rect)
            {
                EditorGUI.LabelField(rect, "���Դ���������");
            }

            protected override void DrawElement(Rect rect, int index, bool selected, bool focused)
            {
                Rect boxRect = new Rect(rect);
                boxRect.width = 70;
                boxRect.height = 50;

                Rect addRect = new Rect(rect);
                addRect.y += 10;
                addRect.x += boxRect.width + 10;
                addRect.width = 35;
                addRect.height = 35;

                Rect keyRect = new Rect(rect);
                keyRect.y -= 5;
                keyRect.width = 35;
                keyRect.height = 35;
                var command = Datas[index];

                Rect typeRect = new Rect(rect);
                typeRect.x += 5;
                typeRect.y += 25;
                typeRect.width = 60;
                typeRect.height = 20;

                Rect intRect = new Rect(rect);
                intRect.y += 3;
                intRect.x += 40;
                intRect.height = 20;
                intRect.width = 20;

                Rect btn1 = new Rect(rect);
                btn1.height = 20;
                btn1.xMin = btn1.xMax - 20;
                btn1.width = 20;

                Rect btn2 = new Rect(btn1);
                btn2.y += 25;

                
                if (GUI.Button(btn1, "+"))
                {
                    TogglesStringWindow.OpenWindow(m_ActionStr, "Key Select", true, (str) =>
                    {
                        command.operationSequence.Add(new Operation() { operation = Str2Key(str[0]) });
                    });
                }
                if (GUI.Button(btn2, "-"))
                {
                    if (command.operationSequence.Count > 0)
                        command.operationSequence.RemoveAt(command.operationSequence.Count - 1);
                }

                for (int i = 0; i < command.operationSequence.Count; i++)
                {
                    GUI.Box(boxRect, "", EditorStyles.helpBox);

                    var oper = command.operationSequence[i];
                    EditorGUI.LabelField(keyRect, Key2Str(oper.operation));
                    oper.type = (EOperationType)EditorGUI.EnumPopup(typeRect, oper.type);
                    oper.validInFrame = EditorGUI.IntField(intRect, oper.validInFrame);

                    if (i != command.operationSequence.Count - 1)
                    {
                        EditorGUI.LabelField(addRect, "+");
                    }

                    keyRect.x += 100;
                    intRect.x += 100;
                    typeRect.x += 100;
                    boxRect.x += 100;
                    addRect.x += 100;
                }
            }

            private string Key2Str(EClientOperation key)
            {
                string keyText = "";
                switch (key)
                {
                    case EClientOperation.Left: keyText = "������"; break;
                    case EClientOperation.LeftForward: keyText = "���I��"; break;
                    case EClientOperation.Forward: keyText = "������"; break;
                    case EClientOperation.RightForward: keyText = "���J��"; break;
                    case EClientOperation.Right: keyText = "������"; break;
                    case EClientOperation.RightBackward: keyText = "���K��"; break;
                    case EClientOperation.Backward: keyText = "������"; break;
                    case EClientOperation.LeftBackward: keyText = "���L��"; break;
                    case EClientOperation.Attack: keyText = "������"; break;
                    case EClientOperation.Skill: keyText = "������"; break;
                    case EClientOperation.Dodge: keyText = "������"; break;
                    case EClientOperation.Defense: keyText = "������"; break;
                }

                return keyText;
            }

            private EClientOperation Str2Key(string str)
            {
                var key = EClientOperation.End;
                switch (str)
                {
                    case "������": key = EClientOperation.Left; break;
                    case "���I��": key = EClientOperation.LeftForward; break;
                    case "������": key = EClientOperation.Forward; break;
                    case "���J��": key = EClientOperation.RightForward; break;
                    case "������": key = EClientOperation.Right; break;
                    case "���K��": key = EClientOperation.RightBackward; break;
                    case "������": key = EClientOperation.Backward; break;
                    case "���L��": key = EClientOperation.LeftBackward; break;
                    case "������": key = EClientOperation.Attack; break;
                    case "������": key = EClientOperation.Skill; break;
                    case "������": key = EClientOperation.Dodge; break;
                    case "������": key = EClientOperation.Defense; break;
                }

                return key;
            }
        }
    }
}
