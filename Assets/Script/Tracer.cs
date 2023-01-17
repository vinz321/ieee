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

    public Action onRightPattern;
    
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

        MenuManager.Instance.ui.SetColorPickerColor(colorSpan[0]); // ui

        onRightPattern+=()=>{GetComponentInChildren<Animator>().Play("FadeOut");};

        // On start delete previous pattern
    }


    void Validate(bool left){
        
        if(!patternStarted || this.left!=left)  //Hand handler
            return; 
        patternStarted=false; 

        if((pattern.Count-startPointer)<minPattern){   //Too Short
            if(Debug.isDebugBuild)
                Debug.Log((pattern.Count)+" single pattern length");
            MenuManager.Instance.ui.SetText("Short Pattern!");
            DiscardPartially();
            v.StopTimer();
            return;
        }
        if(Debug.isDebugBuild)
        Debug.Log((pattern.Count)+" single pattern length");

        if(v.Validate(Getpattern())){       //Read and if finished input write to file
            if(!multiPattern && !v.recording){
                MenuManager.Instance.ui.SetText("Right Pattern!"); // ui
                onRightPattern();
                Discard();
            }
            else if(v.completeMatch){
                MenuManager.Instance.ui.SetText("Right Pattern!"); // ui
                onRightPattern();
                Discard();
                v.WriteTry(true);
            }
            active=null;
        }else{
            MenuManager.Instance.ui.SetText("Wrong Pattern!"); // ui
            idColor=0;
            Discard();
        }

        
    }

    bool ChangeColor(){
        if (!multiColor) return true;

        idColor++;
        bool r=idColor>=colorSpan.Count;
        idColor%=colorSpan.Count;

        SetColor(idColor);

        return r;
    }

    public void SetVersion(string model, int version, bool isTest) // versions 0, 1, 2 
    {
        string path = "ref" + model;

        switch(version)
        {
            case 0:
                path += isTest ? "SingleTest.txt" : "SingleTrain.txt";
                multiPattern = false;
                multiColor = false;
                break;
            case 1:
                path += isTest ? "MultiTest.txt" : "MultiTrain.txt";
                multiPattern = true;
                multiColor = false;
                break;
            case 2:
                path += isTest ? "ColorTest.txt" : "ColorTrain.txt";
                multiPattern = true;
                multiColor = true;
                break;
            default:
                break;
        }   

        if (path != "") v.Ref = path;
    }

//////PER L'UI//////
    public void SetPattern()
    {
        if(multiPattern && pattern.Count<4){
            MenuManager.Instance.ui.SetText("Short Pattern");
            return;
        }
        if (v.CreateReference())
        {
            MenuManager.Instance.ui.SetText("Pattern Set!\n Insert it again to Continue");
            //SaveList(new List<Facet>(pattern));
            Discard();
        }
        else
        {
            MenuManager.Instance.ui.SetText("Already Set!\n Insert it again to Continue");
        }
    }

    public void ResetPattern()
    {
        MenuManager.Instance.ui.SetText("Trace new Pattern");
        v.DeleteReference();
        v.Clear();
        Discard();
        if(Debug.isDebugBuild)
        Debug.Log(pattern.Count);
    }

    void SetColorPickerPosition()
    {
        MenuManager.Instance.ui.SetColorPickerPosition(abcRight.transform.position + Vector3.up * 0.1f);
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
        pattern.Push(active);
        List<Facet> temp=new List<Facet>(pattern);

        string p="stpth_"+active.colorFormat+"_";
        
        for(int i=temp.Count-startPointer-1;i>=0;i--){
            p+=temp[i]+"_";
        }
        p+="_endpth";
        startPointer=temp.Count;
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

        string path = v.Ref;
        path = path.Substring(0, path.Length-4) + ".json";
        
        using StreamWriter w = new StreamWriter(path);
        w.Write(json);
        w.Close();
        //
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

    public void SetColor(int idColor)
    {
        xrriLeft.GetComponent<XRInteractorLineVisual>().invalidColorGradient
        .SetKeys(new GradientColorKey[] { new GradientColorKey(colorSpan[idColor], 0.0f), new GradientColorKey(colorSpan[idColor], 1.0f) },
        new GradientAlphaKey[] { new GradientAlphaKey(1.0f, 0.0f) });
        xrriRight.GetComponent<XRInteractorLineVisual>().invalidColorGradient
        .SetKeys(new GradientColorKey[] { new GradientColorKey(colorSpan[idColor], 0.0f), new GradientColorKey(colorSpan[idColor], 1.0f) },
        new GradientAlphaKey[] { new GradientAlphaKey(1.0f, 0.0f) });
        MenuManager.Instance.ui.SetColorPickerColor(colorSpan[idColor]);
    }

    public void ResetColor()
    {
        idColor = 0;
        SetColor(idColor);
    }

    public void SetTries(int val)
    {
        v.TriesLimit = val;
    }

    public void ResetTries()
    {
        v.TotTries = 0;
    }

    public bool multiPattern{
        get => multiPath;
        set {multiPath=value; v.multiPattern=value;}
    }

    public bool MultiColor{
        get => multiColor;
        set {multiColor=value; ResetColor();}
    }

    public int minPatternCount{
        get=>  minPattern;
        set => minPattern=value;
    }
}




public class Save{
        public List<string> list;
}