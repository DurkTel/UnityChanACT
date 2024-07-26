using UnityEditor;
using UnityEngine;

public class InputStringWindow : EditorWindow
{
    public class InputStringSet
    {
        public string tips;

        public string initialString;

        public string editedString;   
    }

    public static void OpenWindow(string title = "Input", System.Action<string[]> callback = null, params InputStringSet[] inputSet)
    {
        var window = GetWindow<InputStringWindow>();
        window.titleContent = new GUIContent(title);
        window.m_InputSets = inputSet;
        window.minSize = new Vector2(300, 30 * inputSet.Length + 50);
        window.m_Callback = callback;

        window.ShowModalUtility();
    }

    private InputStringSet[] m_InputSets;

    private bool m_FocusInputField = false;

    private System.Action<string[]> m_Callback;

    private void OnGUI()
    {
        const string ctrlName = "InputField";
        if (!m_FocusInputField)
        {
            GUI.SetNextControlName(ctrlName);
        }

        foreach (var inputSet in m_InputSets)
            inputSet.editedString = EditorGUILayout.TextField($"{inputSet.tips}:", inputSet.editedString);

        // Focus the input field
        if (!m_FocusInputField)
        {
            m_FocusInputField = true;
            EditorGUI.FocusTextInControl(ctrlName);
        }

        EditorGUILayout.Space();

        if (GUILayout.Button("Save"))
        {
            Save();
        }
       
    }
    private void Save()
    {
        var str = new string[m_InputSets.Length];
        for (int i = 0; i < m_InputSets.Length; i++)
        {
            var inputSet = m_InputSets[i];

            if (!string.IsNullOrWhiteSpace(inputSet.initialString) && (inputSet.initialString != inputSet.editedString))
            {
                if (!EditorUtility.DisplayDialog("Warning",
                        $"Are you sure to save the changes?\n\n    {inputSet.initialString} => {inputSet.editedString}", "Yes", "No"))
                {
                    continue;
                }
            }

            if (string.IsNullOrEmpty(inputSet.editedString))
            {
                EditorUtility.DisplayDialog("Validation Failed", "Input IsNullOrEmpty", "OK");
                continue;
            }

            str[i] = inputSet.editedString;
        }
        m_Callback?.Invoke(str);
        
        Close();
    }
}
