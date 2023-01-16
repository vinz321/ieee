using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

[System.Serializable]
public class UI
{
    [SerializeField] TMP_Text uiText, menuText;
    [SerializeField] GameObject uiMenu, surveyPanel, messagePanel;
    [SerializeField] Image colorPicker;

    public void SetText(string text)
    {
        if(uiText!=null)
            uiText.text = text;
    }

    public void SetMenuText(string text)
    {
        if(menuText!=null)
            menuText.text = text;
    }

    public void SetColorPickerColor(Color color)
    {
        if(colorPicker!=null)
            colorPicker.color = color;
    }

    public void SetColorPickerPosition(Vector3 position)
    {
        if(colorPicker!=null)
            colorPicker.transform.position = position;
    }

    public void ShowSurvey()
    {
        //uiMenu.SetActive(false);
        messagePanel.SetActive(false);

        surveyPanel.gameObject.SetActive(true);
    }

    public void HideSurvey()
    {
        //uiMenu.SetActive(true);
        if(messagePanel!=null && surveyPanel!=null){
            messagePanel.SetActive(true);
            surveyPanel.gameObject.SetActive(false);
        }
    }

    public void ShowMenu()
    {
        if(uiMenu!=null)
            uiMenu.SetActive(!uiMenu.activeSelf);
    }
}
