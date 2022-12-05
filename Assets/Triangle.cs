using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Triangle : MonoBehaviour
{
    [SerializeField]
    private int bigT, smallT;

    private MeshRenderer mr;
    // Start is called before the first frame update
    void Start()
    {
        mr=GetComponent<MeshRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void TurnOn(){
        mr.enabled=true;
    }
    public void TurnOff(){
        mr.enabled=false;
    }

    public bool isAdjacent(Triangle t){
        return(smallT*t.smallT<1 && bigT==t.bigT) || (smallT==t.smallT && bigT!=t.bigT);
    }

    public override string ToString(){
        return ""+bigT+smallT;
    }
}
