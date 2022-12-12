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
    private bool keepPass;

    [SerializeField] 
    private InputActionReference iarLeft,iarRight;
    void Start()
    {
        xrri=GetComponent<XRRayInteractor>();
        lv=GetComponent<XRInteractorLineVisual>();
        // InputAction a=GetComponent<ActionBasedController>().selectAction.action;
        Action<InputAction.CallbackContext> startAction=(context)=>{if(!passStarted) passStarted=true;
                                                                    };

        Action<InputAction.CallbackContext> stopAction=(context)=>{if(passStarted) passStarted=false; 
                                if(keepPass) PrintPassKeep(); else PrintPass();};
        Action<InputAction.CallbackContext> changeColor=(context)=>{idColor++;
                                idColor%=colorSpan.Count;
                                };
        abcLeft.activateAction.action.started+=startAction;
        abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft;};
        abcLeft.activateAction.action.canceled+=stopAction;
        abcRight.activateAction.action.started+=startAction;
        abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight;};
        abcRight.activateAction.action.canceled+=stopAction;
        iarLeft.action.started+=changeColor;
        iarRight.action.started+=changeColor;
    }

    void PrintPass(){
        int count=pass.Count;
        string p=active+" ";
        active.TurnOff();
        active=null;
        for(int i=0;i<count;i++){
            pass.Peek().TurnOff();
            p+=pass.Pop()+" ";

        }
        print(p);
        
    }

    void PrintPassKeep(){
        List<Facet> temp=new List<Facet>(pass);
        string p=active+" ";
        pass.Push(active);
        active=null;
        for(int i=temp.Count-1;i>=0;i--){
            
            p+=temp[i]+" ";
        }
        print(p);
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
