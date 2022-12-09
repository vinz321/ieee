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
    private Camera cam;
    bool grabbed = false, setup = false;

    Vector3 startDir, newDir;
    float xzAngle, yzAngle, xyAngle;
    RaycastHit hit;
    LayerMask mask;

    private void Start()
    {
        cam = Camera.main;
    }

    private void FixedUpdate()
    {
        setAnchorRot();
        doRotate();
    }

    public void SetActive()
    {
        //hand.GetComponent<MeshRenderer>().enabled = false;
        grabbed = true;
        xzAngle = 0f;
        setup = true;
        //Debug.Log("grabbato");
    }

    public void setUnActive()
    {
        //hand.GetComponent<MeshRenderer>().enabled = true;
        grabbed = false;
        startDir = newDir;
        //Debug.Log("lasciato");
    }

    void setAnchorRot()
    {
        rotAnchor.transform.eulerAngles = new Vector3(0, transform.eulerAngles.y, 0);
    }

    void doRotate()
    {
        if (grabbed && xrri.TryGetCurrent3DRaycastHit(out hit))
        {
            if (setup) 
            {
                startDir = hit.point - transform.position;
                setup = false;
            }
            Debug.DrawLine(hit.point, transform.position, Color.red, 0f, false);
            newDir = (hit.point - transform.position).normalized;

            //Vector3 d = (cam.transform.position - transform.position).normalized;
            //Vector3 r = Vector3.Cross(localUp, d);

            Vector3 localUp = rotAnchor.InverseTransformDirection(rotAnchor.up);
            Vector3 localRight = rotAnchor.InverseTransformDirection(rotAnchor.right);
            Vector2 localForward = rotAnchor.InverseTransformDirection(rotAnchor.forward);

                        

            xzAngle = -Vector3.SignedAngle(new Vector3(newDir.x, 0, newDir.z), new Vector3(startDir.x, 0, startDir.z), localUp);
            yzAngle = -Vector3.SignedAngle(new Vector3(0, newDir.y, newDir.z), new Vector3(0, startDir.y, startDir.z), localRight);
            xyAngle = -Vector3.SignedAngle(new Vector3(newDir.x, newDir.y, 0), new Vector3(startDir.x, startDir.y, 0), localForward);
            transform.Rotate(new Vector3(0, xzAngle, 0), Space.World);
            transform.Rotate(new Vector3(yzAngle, 0, 0), Space.World);
            transform.Rotate(new Vector3(0, 0, xyAngle), Space.World);
        }
        startDir = newDir;
    }
}
