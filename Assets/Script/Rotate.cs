using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Rotate : MonoBehaviour
{
    [SerializeField] private ActionBasedController abcLeft, abcRight;
    [SerializeField] private Transform hitAnchor;
    Transform currentHand;
    XRRayInteractor xrri;
    RaycastHit hit;
    bool grabbed = false, setup = false, inUse = false;
    Vector3 oldDir, newDir, oldControlPos, newControlPos;
    float distance;

    

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
                currentHand = abcLeft.transform;
            }
            if (abcRight.selectAction.action.IsPressed())
            {
                xrri = abcRight.gameObject.GetComponent<XRRayInteractor>();
                currentHand = abcRight.transform;
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
        if (grabbed)
        {
            if (setup) 
            {
                if (xrri.TryGetCurrent3DRaycastHit(out hit))
                {
                    hitAnchor.position = hit.point;
                    distance = (transform.position - hitAnchor.position).magnitude;
                }
                oldControlPos = currentHand.position;
                oldDir = (transform.position - hitAnchor.position).normalized;
                setup = false;
            }       
            // translate the anchor
            newControlPos = currentHand.position;
            Vector3 currentControlDisplacement = oldControlPos - newControlPos;
            hitAnchor.position = hitAnchor.position - currentControlDisplacement;
            Vector3 newHitAnchorDir = (hitAnchor.position - transform.position);
            newHitAnchorDir = newHitAnchorDir.normalized * distance;
            hitAnchor.position = transform.position + newHitAnchorDir;

            // // calculate new direction from hitpoint to sphere center
            newDir = (transform.position - hitAnchor.position).normalized;

            Debug.DrawLine(transform.position, hitAnchor.position, Color.red, 0f, false);

            // // calculate 3D angle between old and new directions
            Quaternion newRot = Quaternion.FromToRotation(oldDir, newDir);

            // // apply first the *small rotation increment* and than apply *current sphere rotation*
            transform.rotation = newRot * transform.rotation;

            // // set old to new rot to prevent authomaitc rotation
            oldControlPos = newControlPos;
            oldDir = newDir;
        }
    }
}
