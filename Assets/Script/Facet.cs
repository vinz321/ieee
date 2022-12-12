using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Facet : MonoBehaviour
{
    protected MeshRenderer mr;
    protected Color color;

    protected void Start(){

        mr=GetComponent<MeshRenderer>();
    }

    public void TurnOn(){
        mr.enabled=true;
    }

    public void TurnOn(Color color){
        
        if(mr.enabled){
            this.color=this.color+2*color;
        }
            
        else{
            mr.enabled=true;
            this.color=2*color;
        }
        mr.material.SetColor("_EmissionColor",this.color);
    }
    public void TurnOff(){
        mr.enabled=false;

    }

    public void TurnOff(Color color){
        if(mr.enabled){
            this.color=this.color-2*color;
            mr.material.SetColor("_EmissionColor",this.color);

            if(this.color.r+this.color.b+this.color.g<0.1f){
                TurnOff();
            }
        }
        
        
    }
    public abstract bool isAdjacent(Facet facet);

    public abstract bool isOn { get; }
}
