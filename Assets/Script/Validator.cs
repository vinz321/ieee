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
    private bool multiPattern; 

    private string fileContent;

    
    private string filename;
    private float time;
    private bool timeStarted=false;
    private string reference;

    private int errors;
    private bool _completeMatch;

    private const string refPath=@"./Test/Reference.txt";
    public Validator(bool multiPattern){
        this.multiPattern=multiPattern;
        DateTimeFormatInfo d=new DateTimeFormatInfo();
        d.DateSeparator="_";
        d.TimeSeparator="_";
        
        DateTime date=DateTime.Now;
        filename=@"./Test/"+date.ToString("yyyy_MM_ddTHH_mm_ss")+".txt";
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
        if(!Directory.Exists(@"./Test"))
            Directory.CreateDirectory(@"./Test");
    }
//////// DA USARE PER L'UI /////////////
    public void DeleteReference(){
        if(File.Exists(refPath)){
            File.Delete(refPath);
        }
    }

    public bool CreateReference(){
        if(!File.Exists(refPath)){
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
            fileContent="";
            timeStarted=false;
            return false;
        }
       _completeMatch=ValidatePattern();

        if(!multiPattern && !recording)
            WriteBack();
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

    public bool completeMatch{
        get =>_completeMatch;
    }

    public bool recording{
        get=> reference==null || reference=="";
    }
}
