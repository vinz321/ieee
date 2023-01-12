using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Triangle : Facet
{
    [SerializeField]
    private int bigT, smallT;
    //private Color color;
    // Start is called before the first frame update
    new void Start()
    {
        base.Start();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    

    public bool isAdjacent(Triangle t){
        return((smallT<0 || t.smallT<0) && bigT==t.bigT) || (smallT>=0 && smallT==t.smallT && bigT!=t.bigT);
    }

    public override bool isAdjacent(Facet facet){
        return isAdjacent((Triangle) facet);
    }

    public override string ToString(){
        return "t"+bigT+"_"+smallT; //+"_"+color.r+"_"+color.g+"_"+color.b;
    }


    public override bool isOn{
        get{
            return mr.enabled;
        }
    }

    public int BigT{
        get => bigT;
    }

    public int SmallT{
        get => smallT;
    }
}
