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
    public Validator(bool multiPattern){
        this.multiPattern=multiPattern;
        DateTimeFormatInfo d=new DateTimeFormatInfo();
        d.DateSeparator="_";
        d.TimeSeparator="_";
        
        DateTime date=DateTime.Now;
        filename=@"./Test/"+date.ToString("yyyy_MM_ddTHH_mm_ss")+".txt";
    }


    public bool GetReference(){
        if(File.Exists(@"./Test/Reference.txt"))
            reference=File.ReadAllText(@"./Test/Reference.txt");
        else
            return false;
        return true;
    }
    public bool Validate(string pass){
        // //if valid
        fileContent+=pass;
        if(GetReference() && !ValidatePartialPattern()){
            Debug.Log("Error committed");
            errors++;
            fileContent="";
            timeStarted=false;
            return false;
        }
        _completeMatch=ValidatePattern();

        if(!multiPattern)
            WriteBack();
        return true;
    }

    bool ValidatePartialPattern(){
        if(reference==null) return false;

        string r=(fileContent.Length<reference.Length)?reference.Substring(0,fileContent.Length):reference;
        return r.Equals(fileContent);
    }

    bool ValidatePattern(){
        if(reference==null) return false;
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
        fs.Write("Completed with time: "+(Time.time-time)+" s, errors: "+errors+" Pattern: \n"+fileContent+"\n");
        fs.Close();
        fileContent="";
        timeStarted=false;
        //File.WriteAllText(filename,fileContent);
    }

    public bool completeMatch{
        get =>_completeMatch;
    }
}
