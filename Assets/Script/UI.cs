using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

[System.Serializable]
public class UI
{
    [SerializeField] TMP_Text uiText;
    [SerializeField] GameObject uiMenu, surveyPanel, messagePanel;
    [SerializeField] Image colorPicker;

    public void SetText(string text)
    {
        uiText.text = text;
    }

    public void SetColorPickerColor(Color color)
    {
        colorPicker.color = color;
    }

    public void SetColorPickerPosition(Vector3 position)
    {
        colorPicker.transform.position = position;
    }

    public void ShowSurvey()
    {
        uiMenu.SetActive(false);
        messagePanel.SetActive(false);

        surveyPanel.gameObject.SetActive(true);
    }

    public void HideSurvey()
    {
        uiMenu.SetActive(true);
        messagePanel.SetActive(true);

        surveyPanel.gameObject.SetActive(false);
    }
}
