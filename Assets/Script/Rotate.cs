using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Rotate : MonoBehaviour
{
    [SerializeField] private XRSimpleInteractable interactable;
    [SerializeField] private XRRayInteractor xrri;
    [SerializeField] private GameObject hand;
    [SerializeField] private Transform rotAnchor;
    //[SerializeField] private Transform player;
    private Camera cam;
    bool grabbed = false, setup = false;

    Vector3 startDir, oldDir, newDir;
    Vector3 lookDir;
    float xzAngle, yzAngle, xyAngle;
    RaycastHit hit;
    LayerMask mask;

    private void Start()
    {
        cam = Camera.main;
    }

    private void FixedUpdate()
    {
        doRotate();
    }

    public void SetActive()
    {
        grabbed = true;
        xzAngle = 0f;
        setup = true;
    }

    public void setUnActive()
    {
        grabbed = false;
        oldDir = newDir;
    }

    void look()
    {
        lookDir = (rotAnchor.position - newDir).normalized;
        rotAnchor.rotation = Quaternion.LookRotation(lookDir);
    }

    void doRotate()
    {
        if (grabbed && xrri.TryGetCurrent3DRaycastHit(out hit))
        {
            if (setup) 
            {
                startDir = oldDir = (transform.position - hit.point).normalized;
                setup = false;
            }

            newDir = (transform.position - hit.point).normalized;

            Debug.DrawLine(transform.position, hit.point, Color.red, 0f, false);
            
            Quaternion newRot = Quaternion.FromToRotation(oldDir, newDir);
            transform.rotation = newRot * transform.rotation;
            oldDir = newDir;
        }
    }
}
