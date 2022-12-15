using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;
using System;
public class Tracer : MonoBehaviour
{
    // Start is called before the first frame update
    private Stack<Facet> pass=new Stack<Facet>();
    [SerializeField]
    private XRRayInteractor xrriLeft, xrriRight;
    private bool left;
    [SerializeField]
    private ActionBasedController abcLeft,abcRight;
    private XRRayInteractor xrri;
    private XRInteractorLineVisual lv;
    private Facet active=null;
    private RaycastHit hit;
    private bool passStarted;
    [SerializeField]
    private List<Color> colorSpan=new List<Color>();
    private int idColor=0;
    [SerializeField]
    private bool traceback;
    [SerializeField]
    private bool multiPath;

    [SerializeField] 
    private InputActionReference iarLeft,iarRight;

    [SerializeField]
    private Validator v;


    void Start()
    {
        v=new Validator(multiPath);
        xrri=GetComponent<XRRayInteractor>();
        lv=GetComponent<XRInteractorLineVisual>();
        // InputAction a=GetComponent<ActionBasedController>().selectAction.action;
        Action<InputAction.CallbackContext> startAction=(context)=>{if(!passStarted) passStarted=true;
                                                                    v.StartTimer();};

        abcLeft.activateAction.action.started+=startAction;
        abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft; left=true;};
        abcLeft.activateAction.action.canceled+=(context)=>{Validate(true);};

        abcRight.activateAction.action.started+=startAction;
        abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight; left=false;};
        abcRight.activateAction.action.canceled+=(context)=>{Validate(false);};
        // iarLeft.action.started+=changeColor;
        // iarRight.action.started+=changeColor;
    }


    void Validate(bool left){
        if(!passStarted || this.left!=left)
            return; 
        passStarted=false; 

        if(pass.Count<3){   //Too Short
            Discard();
            return;
        }
        

        if(v.Validate(GetPass())){    //Read and if finished input write to file
            if(!multiPath){
                Discard();
            }
            else if(ChangeColor()){
                Discard();
                v.WriteBack();
            }
            active=null;
        }else{
            idColor=0;
            Discard();
        }

        
    }

    bool ChangeColor(){
        idColor++;
        bool r=idColor>=colorSpan.Count;
        idColor%=colorSpan.Count;
        return r;
    }

    void Discard(){
        if(active==null)
            return;
        int count=pass.Count;
        //string p="stpsd_"+active.colorFormat+"_"+active+"_";
        active.TurnOff();
        active=null;
        for(int i=0;i<count;i++){
            pass.Peek().TurnOff();
            pass.Pop();
            //p+=pass.Pop()+"_";
        }
        //p+="psdend";
        //print(p);
        //return p;
    }

    string GetPass(){
        List<Facet> temp=new List<Facet>(pass);
        string p="stpth_"+active.colorFormat+"_";
        pass.Push(active);
        for(int i=temp.Count-1;i>=0;i--){
            p+=temp[i]+"_";
        }
        p+=active+"_endpth";
        print(p);
        return p;
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        TracePath(colorSpan[idColor], traceback);
    }

    void TracePath(Color color, bool traceback){
        if(passStarted && xrri.TryGetCurrent3DRaycastHit(out hit)){
            if(active==null){
                active=hit.transform.GetComponent<Facet>();
                if(active!=null)
                    active.TurnOn(color);
            }
            else{
                Facet temp=hit.transform.GetComponent<Facet>();
                if(temp!=null && temp!=active){
                    if(pass.Count>0 && temp==pass.Peek()){
                        active.TurnOff(color);
                        active=pass.Pop();
                    }
                    else if(temp.isAdjacent(active) ){
                        pass.Push(active);
                        active=temp;
                        active.TurnOn(color);
                    }
                }

            }
        }
    }

}
