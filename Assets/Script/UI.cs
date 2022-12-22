using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

[System.Serializable]
public class UI
{
    [SerializeField] TMP_Text uiText;
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
}
