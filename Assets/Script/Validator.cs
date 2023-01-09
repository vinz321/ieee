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
    private int totTries=0;
    private const string folderPath=@"./Test/";
    private const string refPath=folderPath+"Reference.txt";
    private Action callback;
    public Validator(bool multiPattern){
        this.multiPattern=multiPattern;
        DateTimeFormatInfo d=new DateTimeFormatInfo();
        d.DateSeparator="_";
        d.TimeSeparator="_";
        init();
        DateTime date=DateTime.Now;
        filename=@"./Test/"+date.ToString("yyyy_MM_ddTHH_mm_ss")+".txt";
        callback+=()=>{Debug.Log("Callback called");};
        callback+=()=>SceneManager.Instance.ShowSurvey();
    }


    public bool GetReference(){
        if(File.Exists(refPath))
            reference=File.ReadAllText(refPath);
        else{
            reference="";
            return false;
        }
            
        return true;
    }

     private void init(){
        if(!Directory.Exists(folderPath))
            Directory.CreateDirectory(folderPath);
    }
//////// DA USARE PER L'UI /////////////
    public void DeleteReference(){
        if(File.Exists(refPath)){
            File.Delete(refPath);
        }
    }

    public bool CreateReference(){
        if(!File.Exists(refPath) && fileContent != null){ // prevent to set empty pattern
            StreamWriter fs=new StreamWriter(refPath,true);
            fs.Write(fileContent);
            fs.Close();
            fileContent="";
            return true;
        }
        return false;
    }

////// FINE DA USARE PER L'UI //////////

    public bool Validate(string pattern){
        // //if valid
        fileContent+=pattern;
        
        if(GetReference() && !ValidatePartialPattern()){
            Debug.Log("Error committed");
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

        string r=(fileContent.Length<reference.Length)?reference.Substring(0,fileContent.Length):reference;
        return r.Equals(fileContent);
    }

    bool ValidatePattern(){
        if(reference==null || reference=="") return false;
        if (fileContent.Length != reference.Length)
        {
            Debug.Log("Reference length is different "+fileContent.Length+" "+fileContent+" "+reference.Length+" "+reference);
        }
           //return false;
        return reference.Equals(fileContent);
    }
    public void StartTimer(){
        if(!timeStarted)
            time=Time.time;
        timeStarted=true;
    }
    public void WriteBack(){
        StreamWriter fs=new StreamWriter(filename,true);
        //fs.AutoFlush=true;
        fs.Write((multiPattern)?"Multipattern":"SinglePattern"+"\n"+
                    "Completed with time: "+(Time.time-time)+" s, errors: "+errors+" Pattern: \n"+
                    fileContent+"\n");
        fs.Close();
        fileContent="";
        timeStarted=false;
        //File.WriteAllText(filename,fileContent);
    }

    public void WriteTry(bool correct){
        StreamWriter fs=new StreamWriter(filename,true);
        //fs.AutoFlush=true;
        fs.Write(((multiPattern)?"Multipattern":"SinglePattern")+"\n"+
                    ((correct)?"Correct":"Error")+"\n"+
                    "Time: "+(Time.time-time)+" s, Pattern: \n"+
                    fileContent+"\n");
        fs.Close();
        fileContent="";
        timeStarted=false;
        totTime+=(Time.time-time);
        totTries++;
        if(totTries>=4){
            WriteTotal();
        }
    }

    public void WriteTotal(){
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
        callback();
    }

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
}
