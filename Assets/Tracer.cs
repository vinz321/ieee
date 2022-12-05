using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;

public class Tracer : MonoBehaviour
{
    // Start is called before the first frame update
    private Stack<Triangle> pass=new Stack<Triangle>();
    private XRRayInteractor xrri;
    private Triangle active=null;
    private RaycastHit hit;
    private bool passStarted;
    void Start()
    {
        xrri=GetComponent<XRRayInteractor>();

        InputAction a=GetComponent<ActionBasedController>().selectAction.action;
        a.started+=(context)=>{passStarted=true;};
        a.canceled+=(context)=>{passStarted=false; PrintPass();};
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

    // Update is called once per frame
    void FixedUpdate()
    {
        if(passStarted && xrri.TryGetCurrent3DRaycastHit(out hit)){
            if(active==null){
                active=hit.transform.GetComponent<Triangle>();
                if(active!=null)
                    active.TurnOn();
            }
            else{
                Triangle temp=hit.transform.GetComponent<Triangle>();
                if(temp!=null){
                    if(pass.Count>0 && temp==pass.Peek()){
                        active.TurnOff();
                        active=pass.Pop();
                    }
                    else if(temp.isAdjacent(active)){
                        pass.Push(active);
                        active=temp;
                        active.TurnOn();
                    }
                }

            }
        }
    }

}
