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
    private bool multiPath; 

    private string fileContent;

    
    private string filename;
    private float time;
    private bool timeStarted=false;
    private string reference;

    private int errors;
    public Validator(bool multiPath){
        this.multiPath=multiPath;
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
        if(GetReference() && !ValidatePartialPath()){
            Debug.Log("Error committed");
            errors++;
            fileContent="";
            timeStarted=false;
            return false;
        }
        
        if(!multiPath)
            WriteBack();
        return true;
    }

    bool ValidatePartialPath(){
        if(reference==null) return false;

        string r=(fileContent.Length<reference.Length)?reference.Substring(0,fileContent.Length):reference;
        return r.Equals(fileContent);
    }

    bool ValidatePath(string path){
        if(reference==null) return false;

        string[] r=reference.Split("stpth_");
        string[] p=path.Split("stpth_");
        bool res=true;
        for(int i=0;i<p.Length;i++){
            if(!r.Equals(p))
                res=false;
        }
        return res;
    }
    public void StartTimer(){
        if(!timeStarted)
            time=Time.time;
        timeStarted=true;
    }
    public void WriteBack(){
        StreamWriter fs=new StreamWriter(filename,true);
        //fs.AutoFlush=true;
        fs.Write("Completed with time: "+(Time.time-time)+" s, errors: "+errors+" path: \n"+fileContent+"\n");
        fs.Close();
        fileContent="";
        timeStarted=false;
        //File.WriteAllText(filename,fileContent);
    }
}
