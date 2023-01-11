using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.InputSystem;
using System.IO;
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
    [SerializeField] private bool multiColor = false;

    [SerializeField]
    private Validator v;

    private int startPointer=0;

    [SerializeField]
    private int minPattern=3;

    void Start()
    {
        v=new Validator(multiPattern);
        xrri=GetComponent<XRRayInteractor>();
        lv=GetComponent<XRInteractorLineVisual>();
        // InputAction a=GetComponent<ActionBasedController>().selectAction.action;
        Action<InputAction.CallbackContext> startAction=(context)=>{if(!patternStarted) patternStarted=true;
                                                                    if(v.recording && !multiPattern) Discard();
                                                                    v.StartTimer();};

        abcLeft.activateAction.action.started+=startAction;
        abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft; left=true;};
        abcLeft.activateAction.action.canceled+=(context)=>{Validate(true);};

        abcRight.activateAction.action.started+=startAction;
        abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight; left=false;};
        abcRight.activateAction.action.canceled+=(context)=>{Validate(false);};

        iarLeft.action.started+=(context)=>{
            if (!patternStarted) ChangeColor();
        };
        iarRight.action.started+=(context)=>{
            if (!patternStarted) ChangeColor();
        };
        SceneManager.Instance.ui.SetColorPickerColor(colorSpan[0]); // ui

        // On start delete previous pattern
    }


    void Validate(bool left){
        
        if(!patternStarted || this.left!=left)  //Hand handler
            return; 
        patternStarted=false; 

        if((pattern.Count-startPointer)<minPattern){   //Too Short
            SceneManager.Instance.ui.SetText("Short Pattern!");
            DiscardPartially();
            return;
        }
        

        if(v.Validate(Getpattern())){       //Read and if finished input write to file
            if(!multiPattern && !v.recording){
                SceneManager.Instance.ui.SetText("Right Pattern!"); // ui
                Discard();
            }
            else if(v.completeMatch){
                SceneManager.Instance.ui.SetText("Right Pattern!"); // ui
                Discard();
                v.WriteTry(true);
            }
            active=null;
        }else{
            SceneManager.Instance.ui.SetText("Wrong Pattern!"); // ui
            idColor=0;
            Discard();
        }

        
    }

    bool ChangeColor(){
        if (!multiColor) return true;

        idColor++;
        bool r=idColor>=colorSpan.Count;
        idColor%=colorSpan.Count;

        xrriLeft.GetComponent<XRInteractorLineVisual>().invalidColorGradient
        .SetKeys(new GradientColorKey[]{new GradientColorKey(colorSpan[idColor],0.0f),new GradientColorKey(colorSpan[idColor],1.0f)},
        new GradientAlphaKey[]{new GradientAlphaKey(1.0f,0.0f)});
        xrriRight.GetComponent<XRInteractorLineVisual>().invalidColorGradient
        .SetKeys(new GradientColorKey[]{new GradientColorKey(colorSpan[idColor],0.0f),new GradientColorKey(colorSpan[idColor],1.0f)},
        new GradientAlphaKey[]{new GradientAlphaKey(1.0f,0.0f)});
        SceneManager.Instance.ui.SetColorPickerColor(colorSpan[idColor]);
        return r;
    }

    public void SetVersion(int version, bool isTest) // versions 0, 1, 2 
    {
        string path = "";
        switch(version)
        {
            case 0:
                path = isTest ? "refSingleTest.txt" : "refSingleTrain.txt";
                multiPattern = false;
                multiColor = false;
                break;
            case 1:
                path = isTest ? "refMultiTest.txt" : "refMultiTrain.txt";
                multiPattern = true;
                multiColor = false;
                break;
            case 2:
                path = isTest ? "refColorTest.txt" : "refColorTrain.txt";
                multiPattern = true;
                multiColor = true;
                break;
            default:
                break;
        }   

        if (path != "") v.SetRef(path);
    }

//////PER L'UI//////
    public void SetPattern()
    {
        if (v.CreateReference())
        {
            SceneManager.Instance.ui.SetText("Pattern Set!");
            SaveList(new List<Facet>(pattern));
            Discard();
        }
        else
        {
            SceneManager.Instance.ui.SetText("Already Set!");
        }
    }

    public void ResetPattern()
    {
        SceneManager.Instance.ui.SetText("Trace new Pattern");
        v.DeleteReference();
        Discard();
    }

    void SetColorPickerPosition()
    {
        SceneManager.Instance.ui.SetColorPickerPosition(abcRight.transform.position + Vector3.up * 0.1f);
    }

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

    void DiscardPartially(){
        int count=pattern.Count;
        if(active!=null)
            active.TurnOff(colorSpan[idColor]);
        active=null;
        for(int i=startPointer;i<count;i++){
            pattern.Peek().TurnOff(colorSpan[idColor]);
            pattern.Pop();
            //p+=pattern.Pop()+"_";
        }
    }

    string Getpattern(){
        List<Facet> temp=new List<Facet>(pattern);
        string p="stpth_"+active.colorFormat+"_";
        pattern.Push(active);
        for(int i=temp.Count-1;i>=startPointer;i--){
            p+=temp[i]+"_";
        }
        temp.Add(active);
        p+=active+"_endpth";
        startPointer=temp.Count+1;
        print(p);
        return p;
    }

    void SaveList(List<Facet> list){
        Save s = new Save();
        List<string> test = new List<string>();
        foreach (Facet x in list)
        {
            string current = x.ToString();
            test.Add(current);
        }
        s.list = test;
        string json = JsonUtility.ToJson(s);

        using StreamWriter w = new StreamWriter(@"./Test/test.json");
        w.Write(json);

        //Debug.Log(json);
    }
    // Update is called once per frame
    void Update(){
        SetColorPickerPosition();
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

    // public void FormatCurrentRef()
    // {
    //     string str = v.GetCurrentReference();
    //     str = str.Substring(34, 36);
    //     print(str);
    // }

    public bool multiPattern{
        get => multiPath;
        set {multiPath=value; v.multiPattern=value;}
    }

    public int minPatternCount{
        get=>  minPattern;
        set => minPattern=value;
    }
}




public class Save{
        public List<string> list;
}