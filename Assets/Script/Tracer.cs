using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;
using System;
public class Tracer : MonoBehaviour
{
    // Start is called before the first frame update
    private Stack<Facet> pattern=new Stack<Facet>();
    [SerializeField]
    private XRRayInteractor xrriLeft, xrriRight;
    private bool left;
    [SerializeField]
    private ActionBasedController abcLeft,abcRight;
    private XRRayInteractor xrri;
    private XRInteractorLineVisual lv;
    private Facet active=null;
    private RaycastHit hit;
    private bool patternStarted;
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

    private int startPointer=0;


    void Start()
    {
        v=new Validator(multiPath);
        xrri=GetComponent<XRRayInteractor>();
        lv=GetComponent<XRInteractorLineVisual>();
        // InputAction a=GetComponent<ActionBasedController>().selectAction.action;
        Action<InputAction.CallbackContext> startAction=(context)=>{if(!patternStarted) patternStarted=true;
                                                                    if(v.recording && !multiPath) Discard();
                                                                    v.StartTimer();};

        abcLeft.activateAction.action.started+=startAction;
        abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft; left=true;};
        abcLeft.activateAction.action.canceled+=(context)=>{Validate(true);};

        abcRight.activateAction.action.started+=startAction;
        abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight; left=false;};
        abcRight.activateAction.action.canceled+=(context)=>{Validate(false);};
        iarLeft.action.started+=(context)=>ChangeColor();
        iarRight.action.started+=(context)=>ChangeColor();
    }


    void Validate(bool left){
        if(!patternStarted || this.left!=left)  //Hand handler
            return; 
        patternStarted=false; 

        if((pattern.Count-startPointer)<3){   //Too Short
            Discard();
            return;
        }
        

        if(v.Validate(Getpattern())){       //Read and if finished input write to file
            if(!multiPath && !v.recording){
                Discard();
            }
            else if(v.completeMatch){
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

//////PER L'UI//////
    void Discard(){
        
        int count=pattern.Count;
        //string p="stpsd_"+active.colorFormat+"_"+active+"_";
        if(active!=null)
            active.TurnOff();
        active=null;
        for(int i=0;i<count;i++){
            pattern.Peek().TurnOff();
            pattern.Pop();
            //p+=pattern.Pop()+"_";
        }
        startPointer=0;
        //p+="psdend";
        //print(p);
        //return p;
    }

    string Getpattern(){
        List<Facet> temp=new List<Facet>(pattern);
        string p="stpth_"+active.colorFormat+"_";
        pattern.Push(active);
        for(int i=temp.Count-1;i>=startPointer;i--){
            p+=temp[i]+"_";
        }
        p+=active+"_endpth";
        startPointer=temp.Count+1;
        print(p);
        return p;
    }
    // Update is called once per frame
    void Update(){
        if(Input.GetKeyDown(KeyCode.Return)){
            v.CreateReference();
        }
        if(Input.GetKeyDown(KeyCode.Delete)){
            v.DeleteReference();
            Discard();
        }
    }
    void FixedUpdate()
    {
        TracePath(colorSpan[idColor], traceback);
    }

    void TracePath(Color color, bool traceback){
        if(patternStarted && xrri.TryGetCurrent3DRaycastHit(out hit)){
            if(active==null){
                active=hit.transform.GetComponent<Facet>();
                if(active!=null)
                    active.TurnOn(color);
            }
            else{
                Facet temp=hit.transform.GetComponent<Facet>();
                if(temp!=null && temp!=active){
                    if(pattern.Count>0 && temp==pattern.Peek()){
                        active.TurnOff(color);
                        active=pattern.Pop();
                    }
                    else if(temp.isAdjacent(active) ){
                        pattern.Push(active);
                        active=temp;
                        active.TurnOn(color);
                    }
                }

            }
        }
    }

}
