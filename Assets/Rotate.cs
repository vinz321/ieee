using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Rotate : MonoBehaviour
{
    [SerializeField] private ActionBasedController abc;
    [SerializeField] private Transform handle;

    void Start() 
    {
        abc.selectAction.action.performed+=Anchor;
        abc.selectAction.action.canceled+=Detach;
    }

    void Anchor(InputAction.CallbackContext context){
        Debug.Log("Pressed");
    }
    void Detach(InputAction.CallbackContext context){
        Debug.Log("Detached");
    }

}
