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
    private int faceLayer;
    int lastSideId, lastFaceId;

    private void Start()
    {
        faceLayer = LayerMask.NameToLayer("Face");
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
        int i = 0;
        string sus = "[ ";
        foreach(GameObject c in faces)
        {
            MeshRenderer m = c.GetComponent<MeshRenderer>();
            m.material = defaultMat;
            m.enabled = false;
            if (i < faces.Count-1)
            {
                sus += c.name + ", ";
            }
        }
        sus += faces[faces.Count-1].name + " ]";
        Debug.Log(sus);
    }
    #endregion initialization

    #region adjacent
    bool isAdjacent(GameObject current)
    {
        if(faces.Count<1) return true;
        bool adj = false;
        Side oldSide = faces[faces.Count-1].GetComponent<Side>();
        Side cSide = current.GetComponent<Side>();

        adj=oldSide.isAdjacent(cSide);
        Debug.Log(adj);
        return adj;
    }
    #endregion adjacent

    void drawFaces()
    {
        if (selected && xrri.TryGetCurrent3DRaycastHit(out hit))
        {
            int currentLayer=hit.transform.gameObject.layer;
            if (currentLayer == faceLayer)
            {
                GameObject currentObj = hit.transform.gameObject;            
                MeshRenderer currentMeshRenderer = currentObj.GetComponent<MeshRenderer>();

                
                if (!faces.Contains(currentObj) && isAdjacent(currentObj)){ 
                    faces.Add(currentObj);
                    currentMeshRenderer.enabled = true;
                }
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
                    else if (currentObj != faces[faces.Count-1] && currentObj != faces[faces.Count-2] && faces.Contains(currentObj) && isAdjacent(currentObj))
                    {
                        faces.Add(currentObj);
                        currentMeshRenderer.material.color += new Color(1.0f, 0.0f, 0.0f);
                    }
                }
            }
        }
    }
}
