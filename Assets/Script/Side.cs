using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Side : MonoBehaviour
{
    [SerializeField] private int sideId;
    [SerializeField] private int faceId;

    public int SideId {
        get { return sideId; }
    }
    public int FaceId {
        get { return faceId; }
    }
}
