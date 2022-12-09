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
        abc.activateAction.action.started+=Anchor;
        abc.activateAction.action.canceled+=Detach;
    }

    // Update is called once per frame
    void Update()
    {
        if(anchored){
            transform.LookAt(handle.position);
        }
    }

    void Anchor(InputAction.CallbackContext context){
        Transform temp=transform.GetChild(0);
        temp.parent=null;
        transform.LookAt(handle.position,Vector3.up);
        temp.parent=transform;
        // forward=transform.InverseTransformDirection(forward);
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
