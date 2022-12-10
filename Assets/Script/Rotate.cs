using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Rotate : MonoBehaviour
{
    [SerializeField] private ActionBasedController abcLeft, abcRight;
    XRRayInteractor xrri;
    RaycastHit hit;
    bool grabbed = false, setup = false, inUse = false;
    Vector3 oldDir, newDir;
    

    void Start()
    {
        initControllers();
    }

    private void FixedUpdate()
    {
        rotate();
    }

    #region initialization
    void initControllers()
    {
        abcLeft.selectAction.action.started += SetActive;
        abcLeft.selectAction.action.canceled += setUnActive;
        abcRight.selectAction.action.started += SetActive;
        abcRight.selectAction.action.canceled += setUnActive;
    }

    void SetActive(InputAction.CallbackContext ctx)
    {
        if (!inUse) 
        {
            if (abcLeft.selectAction.action.IsPressed())
            {
                xrri = abcLeft.gameObject.GetComponent<XRRayInteractor>();
            }
            if (abcRight.selectAction.action.IsPressed())
            {
                xrri = abcRight.gameObject.GetComponent<XRRayInteractor>();
            }
            inUse = grabbed = setup = true;
        }
    }

    void setUnActive(InputAction.CallbackContext ctx)
    {
        grabbed = inUse = false;
    }
    #endregion initialization

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
