using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

[System.Serializable]
public class UI
{
    /* UI VAR */
    [SerializeField] TMP_Text uiText;
    /* ------ */

    public void SetText(string text)
    {
        uiText.text = text;
    }
}   
