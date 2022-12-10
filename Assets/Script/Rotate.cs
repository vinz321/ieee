using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Rotate : MonoBehaviour
{
    [SerializeField] private XRRayInteractor xrri;
    [SerializeField] private ActionBasedController abc;
    bool grabbed = false, setup = false;
    Vector3 oldDir, newDir;
    RaycastHit hit;

    void Start()
    {
        abc.selectAction.action.started += SetActive;
        abc.selectAction.action.canceled += setUnActive;
    }

    private void FixedUpdate()
    {
        rotate();
    }

    public void SetActive(InputAction.CallbackContext context)
    {
        grabbed = true;
        setup = true;
    }

    public void setUnActive(InputAction.CallbackContext context)
    {
        grabbed = false;
        //oldDir = newDir;
    }

    void rotate()
    {
        if (grabbed && xrri.TryGetCurrent3DRaycastHit(out hit))
        {
            if (setup) 
            {
                oldDir = (transform.position - hit.point).normalized;
                setup = false;
            }
            // calculate new direction from hitpoint to sphere center
            newDir = (transform.position - hit.point).normalized;

            // Debug.DrawLine(transform.position, hit.point, Color.red, 0f, false);

            // calculate 3D angle between old and new directions
            Quaternion newRot = Quaternion.FromToRotation(oldDir, newDir);

            // apply first the *small rotation increment* and than apply *current sphere rotation*
            transform.rotation = newRot * transform.rotation;

            // set old to new rot to prevent authomaitc rotation
            oldDir = newDir;
        }
    }
}
