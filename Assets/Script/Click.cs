using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Click : MonoBehaviour
{
    [SerializeField]
    private Material m;
    [SerializeField]
    private Transform t;
    [SerializeField]
    private LayerMask mask;
    [SerializeField]
    List<Transform> faces;
    [SerializeField]
    List<int> indexes;
    GameObject current;

    // Start is called before the first frame update
    void Start()
    {
        // populate faces array
        indexes = new List<int>();
    }

    // Update is called once per frame
    void Update()
    {
        castRay();
        rotateObj();
    }
    
    #region objRot
    void rotateObj()
    {
        if (Input.GetMouseButton(1))
        {
            float x = Input.GetAxis("Mouse X");
            float y = Input.GetAxis("Mouse Y");

            t.Rotate(new Vector3(0, -x * 10f, 0), Space.World);
            t.Rotate(new Vector3(y * 10f, 0, 0), Space.World);
        }
    }
    #endregion

    #region casting
    void castRay()
    {
        RaycastHit h;
        Ray r = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(r, out h, Mathf.Infinity, mask))
        {
            if (Input.GetMouseButton(0))
            {
                current = h.transform.gameObject;
                // int val = addValue();
                // if (val >= 0) indexes.Add(val);
                colorMesh();
            }
        }
    }

    int addValue()
    {
        int i = 0;
        foreach (Transform t in faces)
        {
            if (t == current.transform)
            {
                return i;
            }
            i++;
        }
        return -1;
    }

    void colorMesh()
    {
        if (current != null)
        {
            current.GetComponent<MeshRenderer>().material = m;
        }
    }
    #endregion
}

