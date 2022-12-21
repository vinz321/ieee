using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneManager : MonoBehaviour
{    
    [SerializeField] Validator validator;
    
    public void SetUp()
    {
        Debug.Log("Creazione della psw");
        validator.CreateReference();
    }

    public void Reset()
    {
        Debug.Log("Eliminazione della psw");
        validator.DeleteReference();
    }
}
