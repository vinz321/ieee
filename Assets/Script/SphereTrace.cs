using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class SphereTrace : MonoBehaviour
{
    [SerializeField] private ActionBasedController abcLeft, abcRight;
    [SerializeField] private Material defaultMat;
    XRRayInteractor xrri;
    RaycastHit hit;
    bool selected = false, inUse = false;
    List<GameObject> faces;
    int lastFaceId;
    
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
        }
    }

    public void setUnActive(InputAction.CallbackContext ctx)
    {
        selected = inUse = false;
        
        clearFaces();

        faces.Clear();
    }

    void clearFaces() 
    {
        string sus = "[ ";
        foreach(GameObject c in faces)
        {
            MeshRenderer m = c.GetComponent<MeshRenderer>();
            m.material = defaultMat;
            m.enabled = false;
            sus += c.name + ", ";
        }
        sus += " ]";
        Debug.Log(sus);
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
                if (currentObj.GetComponent<Side>())
                {
                    Debug.Log(currentObj.GetComponent<Side>().FaceId);
                }                
                MeshRenderer currentMeshRenderer = currentObj.GetComponent<MeshRenderer>();
                currentMeshRenderer.enabled = true;
                if (!faces.Contains(currentObj)) faces.Add(currentObj);
                if (faces.Count > 1)
                {
                    if (currentObj == faces[faces.Count-2])
                    {
                        
                        MeshRenderer lastMeshRenderer = faces[faces.Count-1].GetComponent<MeshRenderer>();
                        
                        if (lastMeshRenderer.material.color != defaultMat.color)
                        {
                            lastMeshRenderer.material.color -= new Color(1.0f, 0.0f, 0.0f);
                        }
                        else 
                        {
                            lastMeshRenderer.enabled = false;
                        }

                        faces.RemoveAt(faces.Count-1);
                    }
                    if (currentObj != faces[faces.Count-1] && currentObj != faces[faces.Count-2] && faces.Contains(currentObj))
                    {
                        faces.Add(currentObj);
                        currentMeshRenderer.material.color += new Color(1.0f, 0.0f, 0.0f);
                    }
                }
            }
        }
    }
}
