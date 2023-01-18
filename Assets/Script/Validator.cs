using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Globalization;
using System.IO;

[Serializable]
public class Validator 
{
    [SerializeField]
    private bool multiPattern_; 

    private string fileContent;

    
    private string filename;
    private float time;
    private bool timeStarted=false;
    private string reference;

    private int errors;
    private bool _completeMatch;
    private float totTime=0.0f;
    private int totTries=0, triesLimit = 4;
    private string folderPath;
    private string refPath;
    private bool patternStarted = false;
    
    private Action callback;
    [SerializeField]
    private bool finalBuild;

    

    public Validator(){
        
        // if(!finalBuild){
        //     DateTimeFormatInfo d=new DateTimeFormatInfo();
        //     folderPath=@"./Test/";
        //     d.DateSeparator="_";
        //     d.TimeSeparator="_";
        //     DateTime date=DateTime.Now;
        //     filename=@"./Test/"+date.ToString("yyyy_MM_ddTHH_mm_ss")+".txt";
        //     refPath=folderPath+"Reference.txt";
        //     Debug.Log("Creating Folder "+finalBuild);
        //     init();
        // }
        
        
        callback+=()=>{if(Debug.isDebugBuild) Debug.Log("Callback called");};
        if(!finalBuild)
            callback+=()=>MenuManager.Instance.ShowSurvey();
    }


    public bool GetReference(){
        if(!finalBuild){
            if(File.Exists(refPath)){
                reference=File.ReadAllText(refPath);
                reference=reference.Replace(",",".");}
            else{
                reference="";
                return false;
            }
        }else{
            return !(reference==null || reference.Equals("")) ;
        }
            
        return true;
    }

     private void init(){
        if(!Directory.Exists(folderPath))
            Directory.CreateDirectory(folderPath);
    }
//////// DA USARE PER L'UI /////////////
    public void DeleteReference(){
        if(!finalBuild){
            if(File.Exists(refPath)){
                File.Delete(refPath);
            }}
        else{
            reference=null;
        }
    }

    public bool CreateReference(){
        if(!finalBuild){
            if(!File.Exists(refPath) && fileContent != null){ // prevent to set empty pattern
                StreamWriter fs=new StreamWriter(refPath,true);
                if(Debug.isDebugBuild)
                Debug.Log(fileContent);
                fs.Write(fileContent);
                fs.Close();
                fileContent="";
                return true;
            }
        }else{
            reference=fileContent;
            fileContent="";
            return true;
        }
        return false;
    }

////// FINE DA USARE PER L'UI //////////

    public void SetRef(string name)
    {
        refPath = folderPath + name;
        if(Debug.isDebugBuild)
        Debug.Log(refPath);
    }

    public void Clear()
    {
        fileContent = "";
    }

    public bool Validate(string pattern){
        // //if valid
        //fileContent = "";
        fileContent +=pattern.Replace(",",".");
        patternStarted = true;
        if(GetReference() && !ValidatePartialPattern()){
            if(Debug.isDebugBuild){
            Debug.Log("Error committed");
            Debug.Log(fileContent);}
            errors++;
            WriteTry(false);
            fileContent="";
            timeStarted=false;
            return false;
        }
       _completeMatch=ValidatePattern();

        if(!multiPattern && !recording){
            WriteTry(true);
        }
        return true;
    }

    bool ValidatePartialPattern(){
        if(reference==null || reference=="") return false;
        fileContent=fileContent.Replace(",",".");
        string r=(fileContent.Length<reference.Length)?reference.Substring(0,fileContent.Length):reference;
        return r.Equals(fileContent);
    }

    bool ValidatePattern(){
        if(reference==null || reference=="") return false;
        if (fileContent.Length != reference.Length)
        {
            if(Debug.isDebugBuild)
            Debug.Log("Reference length is different "+fileContent.Length+" "+fileContent+" "+reference.Length+" "+reference);
        }
           //return false;
        fileContent=fileContent.Replace(",",".");
        return reference.Equals(fileContent);
    }
    public void StartTimer(){
        if(!timeStarted)
            time=Time.time;
        timeStarted=true;
    }
    public void StopTimer()
    {
        if(!patternStarted)
            timeStarted = false;
    }
    public void WriteBack(){
        if(!finalBuild){StreamWriter fs=new StreamWriter(filename,true);
        //fs.AutoFlush=true;
            fs.Write((multiPattern)?"Multipattern":"SinglePattern"+"\n"+
                        "Completed with time: "+(Time.time-time)+" s, errors: "+errors+" Pattern: \n"+
                        fileContent+"\n");
            fs.Close();
            
            timeStarted=false;
        }
        fileContent="";
        //File.WriteAllText(filename,fileContent);
    }

    public void WriteTry(bool correct){
        if(!finalBuild){
            StreamWriter fs=new StreamWriter(filename,true);
            //fs.AutoFlush=true;
            fs.Write(((multiPattern)?"Multipattern":"SinglePattern")+"\n"+
                        ((correct)?"Correct":"Error")+"\n"+
                        "Time: "+(Time.time-time)+" s, Pattern: \n"+
                        fileContent+"\n");
            fs.Close();
            
            timeStarted=false;
            totTime+=(Time.time-time);
            totTries++;
            patternStarted = false;
            if(totTries>=triesLimit){
                WriteTotal();
            }
        }
        MenuManager.Instance.ResetRot();
        fileContent="";
    }

    public void WriteTotal(){
        if(!finalBuild){
            StreamWriter fs=new StreamWriter(filename,true);
            //fs.AutoFlush=true;
            fs.Write("\n"+((multiPattern)?"Multipattern":"SinglePattern")+"\n"+
                        "Total Time: "+(totTime)+" s, Total Errors:"+errors+" \n"+"\n");
            fs.Close();
            fileContent="";
            timeStarted=false;
            errors=0;
            totTime=0;
            totTries=0;
        }
        fileContent="";
        callback();
    }

    // public string GetCurrentReference()
    // {
    //     if (!File.Exists(refPath)) return "NaN";
    //     StreamReader sr = new StreamReader(refPath);
    //     string srt = sr.ReadToEnd();
    //     sr.Close();
    //     return srt;
    // }

    public bool completeMatch{
        get =>_completeMatch;
    }

    public bool recording{
        get=> reference==null || reference=="";
    }

    public bool multiPattern{
        get=>multiPattern_;
        set=>multiPattern_=value;
    }

    public int TriesLimit{
        get=>triesLimit;
        set=>triesLimit=value;
    }

    public int TotTries
    {
        get=>totTries;
        set=>totTries = value;
    }

    public string Ref{
        get=>refPath;
        set=>refPath=folderPath+value;
    }
}
