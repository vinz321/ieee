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
    private XRInteractorLineVisual lv;
    private Triangle active=null;
    private RaycastHit hit;
    private bool passStarted;
    [SerializeField]
    private List<Color> colorSpan=new List<Color>();
    private int idColor=0;
    void Start()
    {
        xrri=GetComponent<XRRayInteractor>();
        lv=GetComponent<XRInteractorLineVisual>();
        InputAction a=GetComponent<ActionBasedController>().selectAction.action;
        InputAction b=GetComponent<ActionBasedController>().activateAction.action;
        a.started+=(context)=>{passStarted=true;};
        a.canceled+=(context)=>{passStarted=false; PrintPassKeep();};

        b.started+=(context)=>{idColor++;
                                idColor%=colorSpan.Count;
                                };
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
        List<Triangle> temp=new List<Triangle>(pass);
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
        TracePath(colorSpan[idColor]);
    }

    void TracePath(Color color){
        if(passStarted && xrri.TryGetCurrent3DRaycastHit(out hit)){
            if(active==null){
                active=hit.transform.GetComponent<Triangle>();
                if(active!=null)
                    active.TurnOn(color);
            }
            else{
                Triangle temp=hit.transform.GetComponent<Triangle>();
                if(temp!=null && temp!=active){
                    if(pass.Count>0 && temp==pass.Peek()){
                        active.TurnOff();
                        active=pass.Pop();
                    }
                    else if(temp.isAdjacent(active)){
                        pass.Push(active);
                        active=temp;
                        active.TurnOn(color);
                    }
                }

            }
        }
    }

}
