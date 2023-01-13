using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Facet : MonoBehaviour
{
    protected MeshRenderer mr;
    protected Color color;
    protected Color matColor;

    protected void Awake(){

        mr=GetComponent<MeshRenderer>();
        matColor = mr.material.GetColor("_BaseColor");
    }
    protected void Start()
    {
        
    }

    public void ChangeAlpha(float value)
    {
        matColor.a = value;
        mr.material.SetColor("_BaseColor", matColor);
    }

    public void SetColor(Color c)
    {
        matColor = c;
        mr.material.SetColor("_BaseColor", c);
    }

    public void Fade(float multiplier)
    {
        color = multiplier * color;
        mr.material.SetColor("_EmissionColor", color);
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

    public string colorFormat{ get => color.r+"_"+color.g+"_"+color.b;}

    public abstract int BigF
    {
        get;
    }
    public abstract int SmallF
    {
        get;
    }
}
