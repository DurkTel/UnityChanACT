using Actioner.Runtime;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor.Experimental.GraphView;
using UnityEditor.UIElements;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using System.IO;
using UnityEditor.Callbacks;

namespace Actioner.Editor
{

    public class ActionerTagsGraphView : GraphView
    {
        public void OnInitGraph(SerializeActionerTags data)
        {
            SetupZoom(ContentZoomer.DefaultMinScale, ContentZoomer.DefaultMaxScale);

            this.AddManipulator(new ContentDragger());
            this.AddManipulator(new SelectionDragger());
            this.AddManipulator(new RectangleSelector());

            Dictionary<ActionerTag, TagsNode> tempDic = new Dictionary<ActionerTag, TagsNode>();

            float x = 0f;
            float y = 0f;
            float width = 120f;
            float height = 100f;

            bool GetNodeByDic(ActionerTag tag, out TagsNode node)
            {
                if (!tempDic.TryGetValue(tag, out node))
                {
                    node = GetNode(tag);
                    tempDic.Add(tag, node);
                    return true;
                }
                return false;
            }

            float GetNodeYPos(int index, int count)
            {
                if (count <= 1)
                    return 0f;

                float maxHeight = count * height;
                float sY = -(maxHeight / 2f);
                return sY + index * height + height * 0.5f;
            }

            if (data == null || data.tagsMap.Count == 0)
            {
                int count = 0;
                foreach (ActionerTag tag in Enum.GetValues(typeof(ActionerTag)))
                {
                    if (tag != ActionerTag.None && GetNodeByDic(tag, out var node))
                    {
                        var rect = new Rect(x, y, width, height);
                        node.SetPosition(rect);
                        node.rect = rect;
                        count++;
                        x += 260f;
                        if (count % 5 == 0)
                        {
                            x = 0f;
                            y += 150f;
                        }
                    }
                }
            }
            else
            {
                foreach (var item in data.tagsMap)
                {
                    if (GetNodeByDic(item.Key, out var node))
                    {
                        var rect = new Rect(x, y, width, height);
                        node.SetPosition(rect);
                        node.rect = rect;
                    }
                    for (int i = 0; i < item.Value.Length; i++)
                    {
                        var rect = node.rect;
                        rect.x += 260f;
                        rect.y += GetNodeYPos(i, item.Value.Length);
                        GetNodeByDic(item.Value[i], out var child);
                        child.SetPosition(rect);
                        child.rect = rect;
                        AddEdgeByPort((Port)node.outputContainer[0], (Port)child.inputContainer[0]);
                    }
                    y += item.Value.Length * height;
                }
            }
        }

        public override List<Port> GetCompatiblePorts(Port startPort, NodeAdapter nodeAdapter)
        {
            List<Port> compatiblePorts = new List<Port>();

            foreach (var port in ports)
            {
                if (port != startPort && port.node != startPort.node)
                {
                    compatiblePorts.Add(port);
                }
            }

            return compatiblePorts;
        }

        public void SerializeTag()
        {
            string path = EditorUtility.OpenFolderPanel("将文件保存至", "", "");
            if (string.IsNullOrEmpty(path)) return;
            string filePath = Path.Combine(path, "ActionerSerializeTag.asset");
            filePath = filePath.Substring(Application.dataPath.Length - 6).Replace("\\", "/");
            if (File.Exists(filePath))
            {
                if (!EditorUtility.DisplayDialog("警告", "该路径有重复文件，是否覆盖？", "确认", "取消"))
                    return;
                AssetDatabase.DeleteAsset(filePath);
                AssetDatabase.Refresh();
            }

            var serializeTag = ScriptableObject.CreateInstance<SerializeActionerTags>();
            AssetDatabase.CreateAsset(serializeTag, filePath);
            AssetDatabase.Refresh();

            List<ActionerTag> childs = new List<ActionerTag>();
            foreach (TagsNode node in nodes)
            {
                if (node.outputContainer.childCount <= 0)
                    continue;
                var port = ((Port)node.outputContainer[0]).connections;
                childs.Clear();
                foreach (Edge item in port)
                {
                    childs.Add(((TagsNode)item.input.node).tag);
                }
                serializeTag.tagsMap.Add(node.tag, childs.ToArray<ActionerTag>());
            }


            EditorUtility.SetDirty(serializeTag);
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
            EditorUtility.DisplayDialog("提示", "导出Tags完成", "确定");

        }

        public void DeserializeTag()
        {
            string filePath = EditorUtility.OpenFilePanel("选择要加载的文件", "", "asset");
            if (string.IsNullOrEmpty(filePath))
                return;
            filePath = filePath.Substring(Application.dataPath.Length - 6).Replace("\\", "/");

            SerializeActionerTags tags = AssetDatabase.LoadAssetAtPath<SerializeActionerTags>(filePath);
            ActionerTagsGraphWindow.OpenNodeGraphWindow(tags);

        }

        private TagsNode GetNode(ActionerTag tag)
        {
            TagsNode node = new TagsNode()
            {
                tag = tag,
            };

            node.title = node.tag.ToString();
            AddElement(node);

            var port = GetPortForNode(node, Direction.Input);
            port.portName = "Input";
            node.inputContainer.Add(port);

            node.RefreshExpandedState();
            node.RefreshPorts();

            AddOutputPort(node);

            return node;
        }

        private Port GetPortForNode(Node node, Direction portDir, Port.Capacity capacity = Port.Capacity.Multi)
        {
            return node.InstantiatePort(Orientation.Horizontal, portDir, capacity, typeof(float));
        }

        private void AddOutputPort(TagsNode node)
        {
            var outPort = GetPortForNode(node, Direction.Output);

            var count = node.outputContainer.Query("connector").ToList().Count;
            outPort.portName = $"Output{count}";
            node.outputContainer.Add(outPort);
            node.RefreshExpandedState();
            node.RefreshPorts();
        }

        private void AddEdgeByPort(Port output, Port input)
        {
            Edge edge = new Edge() { output = output, input = input };
            edge.input.Connect(edge);
            edge.output.Connect(edge);
            Add(edge);
        }
    }

    public class TagsNode : Node
    {
        public ActionerTag tag;
        public Rect rect;
    }

    public class ActionerTagsGraphWindow : EditorWindow
    {
        [MenuItem("Graph/OpenTagsGraph")]
        public static void Open()
        {
            ShowWindow();
            m_Instance.m_TagsGraphView.OnInitGraph(null);
        }

        private ActionerTagsGraphView m_TagsGraphView;

        private static ActionerTagsGraphWindow m_Instance;
        private static void ShowWindow()
        {
            string title = "层次化标签编辑器";
            if (m_Instance == null)
            {
                m_Instance = GetWindow<ActionerTagsGraphWindow>(title, true);
            }
            else
            {
                m_Instance.rootVisualElement.Clear();
                m_Instance.CreateGUI();
                m_Instance.Show();
            }
        }

        public static void OpenNodeGraphWindow(SerializeActionerTags data)
        {
            ShowWindow();
            m_Instance.m_TagsGraphView.OnInitGraph(data);
        }

        private void OnDisable()
        {
            rootVisualElement.Remove(m_TagsGraphView);
            m_Instance = null;
            m_TagsGraphView = null;
        }

        private void CreateGUI()
        {
            m_TagsGraphView = new ActionerTagsGraphView();
            m_TagsGraphView.StretchToParentSize();
            Toolbar toolbar = new Toolbar();

            Button loadBtn = new Button(m_TagsGraphView.DeserializeTag);
            loadBtn.text = "Load";
            Button saveBtn = new Button(m_TagsGraphView.SerializeTag);
            saveBtn.text = "Save";

            toolbar.Add(loadBtn);
            toolbar.Add(saveBtn);
            rootVisualElement.Add(m_TagsGraphView);
            rootVisualElement.Add(toolbar);
        }

        [OnOpenAsset(1)]
        public static bool CallOpenNodeGraph(int instanceID, int line)
        {
            var obj = EditorUtility.InstanceIDToObject(instanceID);
            if (obj is SerializeActionerTags)
            {
                OpenNodeGraphWindow(obj as SerializeActionerTags);
                return true;
            }
            return false;
        }
    }
}
