using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class SphereTrace : MonoBehaviour
{

    
    [SerializeField] private ActionBasedController abcLeft, abcRight;
    XRRayInteractor xrri;
    RaycastHit hit;
    bool selected = false, inUse = false;

    List<GameObject> faces;

    private void Start()
    {
        faces = new List<GameObject>();
        initControllers();
    }
    void Update()
    {
        drawFaces();
    }

    #region initialization
    void initControllers()
    {
        abcLeft.activateAction.action.started += SetActive;
        abcLeft.activateAction.action.canceled += setUnActive;
        abcRight.activateAction.action.started += SetActive;
        abcRight.activateAction.action.canceled += setUnActive;
    }

    public void SetActive(InputAction.CallbackContext ctx)
    {
        if (!inUse) 
        {
            if (abcLeft.activateAction.action.IsPressed())
            {
                xrri = abcLeft.gameObject.GetComponent<XRRayInteractor>();
            }
            if (abcRight.activateAction.action.IsPressed())
            {
                xrri = abcRight.gameObject.GetComponent<XRRayInteractor>();
            }
            selected = inUse = true;
            Debug.Log("YO");
        }
    }

    public void setUnActive(InputAction.CallbackContext ctx)
    {
        selected = inUse = false;
        foreach(GameObject c in faces)
        {
            c.GetComponent<MeshRenderer>().enabled = false;
        }
    }
    #endregion initialization

    void drawFaces()
    {
        if (selected && xrri.TryGetCurrent3DRaycastHit(out hit))
        {
            string currentLayer = LayerMask.LayerToName(hit.transform.gameObject.layer);
            if (currentLayer == "Face")
            {
                GameObject currentObj = hit.transform.gameObject;
                currentObj.GetComponent<MeshRenderer>().enabled = true;
                faces.Add(currentObj);
            }
        }
    }
}
