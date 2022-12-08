using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Rotating : MonoBehaviour
{
    [SerializeField]
    private ActionBasedController abc;
    [SerializeField]
    private Transform handle;
    private bool anchored=false;
    private Vector3 forward=Vector3.zero;
    private Quaternion rotation=Quaternion.identity;
    void Start()
    {
        //abc=FindObjectOfType<ActionBasedController>();
        abc.activateAction.action.performed+=Anchor;
        abc.activateAction.action.canceled+=Detach;
    }

    // Update is called once per frame
    void Update()
    {
        if(anchored){
            // transform.rotation=rotation*Quaternion.LookRotation(transform.position-handle.position,Vector3.up);
            transform.forward=(transform.position-handle.position).normalized+transform.TransformDirection(forward);
        }
    }

    void Anchor(InputAction.CallbackContext context){
        rotation=transform.rotation;
        forward=transform.forward-(transform.position-handle.position).normalized;
        forward=transform.InverseTransformDirection(forward);
        Debug.Log("Pressed");
        anchored=true;
    }
    void Detach(InputAction.CallbackContext context){
        Debug.Log("Detached");
        anchored=false;
    }

    void FollowHandle(){
        Vector3 position=abc.positionAction.action.ReadValue<Vector3>();
        
    }
}
