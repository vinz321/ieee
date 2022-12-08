using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Triangle : MonoBehaviour
{
    [SerializeField]
    private int bigT, smallT;

    private MeshRenderer mr;
    private Color color;
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

    public void TurnOn(Color color){
        mr.enabled=true;

        mr.material.SetColor("_EmissionColor",color+color);
        this.color=color;
    }
    public void TurnOff(){
        mr.enabled=false;
    }

    public bool isAdjacent(Triangle t){
        return((smallT<0 || t.smallT<0) && bigT==t.bigT) || (smallT==t.smallT && bigT!=t.bigT);
    }

    public override string ToString(){
        return ""+bigT+smallT+color;
    }
}
