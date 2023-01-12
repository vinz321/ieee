using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(SceneManager))]
public class CustomSceneManagerEditor : Editor
{
    public override void OnInspectorGUI()
    {
        // rest of the inspector
        base.OnInspectorGUI();


        SceneManager sm = (SceneManager)target;
        EditorGUILayout.Separator();
        EditorGUILayout.LabelField(sm.test ? "CURRENT: IS TEST" : "CURRENT: IS TRAINING");
        EditorGUILayout.Separator();
        EditorGUILayout.LabelField(sm.PrintModVers());  
        EditorGUILayout.Separator();
        EditorGUILayout.LabelField("Scene Settings");

        if (GUILayout.Button("Next Method") && Application.isPlaying)
        {
            sm.NextVersion();
            sm.HideSurvey();
        }
        // if (GUILayout.Button("Prev Method") && Application.isPlaying)
        // {
        //     sm.PreVersion();
        // }
        if (GUILayout.Button("Reset") && Application.isPlaying)
        {
            sm.ResetScene();
            sm.HideSurvey();
        }
        EditorGUILayout.Separator();
        if (GUILayout.Button("Read Path") )//&& Application.isPlaying)
        {
            sm.Read();
        }
        if (GUILayout.Button("Create Anim") && Application.isPlaying)
        {
            sm.Create();
        }
        EditorGUILayout.Separator();
        EditorGUILayout.LabelField("UI Menu");
        if (GUILayout.Button("Show/Hide menu") )//&& Application.isPlaying)
        {
            sm.shMenu();
        }

        
    }
}
