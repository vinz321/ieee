using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class CubeTrace : MonoBehaviour
{

    [SerializeField] private XRRayInteractor xrri;
    RaycastHit hit;
    bool selected = false;

    List<GameObject> faces;

    private void Start()
    {
        faces = new List<GameObject>();
    }
    public void SetActive()
    {
        //hand.GetComponent<MeshRenderer>().enabled = false;
        selected = true;
        Debug.Log("Gnu");
    }

    public void setUnActive()
    {
        //hand.GetComponent<MeshRenderer>().enabled = true;
        foreach(GameObject c in faces)
        {
            c.GetComponent<MeshRenderer>().enabled = false;
        }
        selected = false;
        Debug.Log("Gne");
    }

    // Update is called once per frame
    void Update()
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
