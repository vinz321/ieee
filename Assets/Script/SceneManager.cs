using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

enum Versions {
    Single,
    Multipattern,
    multiColor
}

enum Model {
    Pyramid,
    Sphere
}

public class SceneManager : MonoBehaviour
{    
    private const string folderPath=@"./Test/";
    private string filename;
    public static SceneManager Instance {get; private set;}
    private Versions version;
    private Model model;
    [SerializeField] private GameObject pyramid, sphere;
    [SerializeField] private Tracer tracer;
    [SerializeField] public UI ui;
    [SerializeField] public bool test = true; // flase : is training || true : is test 

    private const int trainMax = 3;
    private int trainCount = 0;
    

    private void Awake()
    {
        if (Instance != null && Instance != this) 
        { 
            Destroy(this); 
        } 
        else 
        { 
            Instance = this; 
        } 
        
    }

    private void Start()
    {
        init();
    }

    private void init()
    {
        test = false;
        trainCount = 0;
        model = Model.Pyramid;
        version = Versions.Single;
        tracer.SetTries(3);
        NextVersion();
    }


    public void shMenu()
    {
        ui.ShowMenu();
    }
    public void ResetScene()
    {
        init();
    }

    public void ShowVersion()
    {
        string currentV = "" + version;
        ui.SetMenuText(currentV);
        switch(model)
        {
            case Model.Pyramid:
                sphere.SetActive(false);
                pyramid.SetActive(true);
                pyramid.transform.rotation = Quaternion.identity;
                break;
            case Model.Sphere:
                pyramid.SetActive(false);
                sphere.SetActive(true);
                sphere.transform.rotation = Quaternion.identity;
                break;
            default:
                break;
        }

        tracer.SetVersion(model.ToString(), ((int)version), test);
        // set new minPath
        tracer.minPatternCount = version > Versions.Single ? 2 : 3;
        //tracer.FormatCurrentRef();
        Debug.Log("Show Model " + model + " and version " + version + ". Min: " + tracer.minPatternCount);
    }

    public void NextVersion()
    {
        if (test)
        {
            if (model <= Model.Sphere)
            {
                if (version > Versions.multiColor)
                {
                    version = Versions.Single;
                    model++;
                }
                    
                ShowVersion();
                    
                version++;
            }
            else 
            {
                EndScene();
            }
        }
        else
        {
            if (trainCount >= trainMax)
            {
                model = Model.Pyramid;
                version = Versions.Single;
                test = true;
                tracer.SetTries(4);
                NextVersion();
                return;
            }
            switch (trainCount)
            {
                case 0:
                    model = Model.Pyramid;
                    version = Versions.Single;
                    break;
                case 1:
                    model = Model.Sphere;
                    version = Versions.Multipattern;
                    break;
                case 2:
                    model = Model.Pyramid;
                    version = Versions.multiColor;
                    break;
                default:
                    break;
            }
            trainCount++;   
            ShowVersion();
        }
        
    }

    public string PrintModVers()
    {
        string print = "Model: " + model + " | Version: " + version + " | MinPath: " + tracer.minPatternCount;
        return print;
    }

    public void ShowSurvey()
    {
        // hide everything
        pyramid.SetActive(false);
        sphere.SetActive(false);
        ui.ShowSurvey();
    }

    public void PreVersion()
    {
        // if (model >= Model.Pyramid)
        // {
        //     version--;
        //     if (version < Versions.Single)
        //     {
        //         model--;
        //         version = Versions.Multipattern;
        //     }

        //     switch(model)
        //     {
        //         case Model.Pyramid:
        //             sphere.SetActive(false);
        //             pyramid.SetActive(true);
        //             pyramid.transform.rotation = Quaternion.identity;
        //             break;
        //         case Model.Sphere:
        //             pyramid.SetActive(false);
        //             sphere.SetActive(true);
        //             sphere.transform.rotation = Quaternion.identity;
        //         break;
        //         default:
        //             break;
        //     }

        //     tracer.SetVersion(((int)version), false);
        //     // set new minPath
        //     tracer.minPatternCount = version > Versions.Single ? 2 : 3;
        //     Debug.Log("Show Model " + model + " and version " + version + ". Min: " + tracer.minPatternCount);
        // }
    }

    public void HideSurvey()
    {
        ui.HideSurvey();
    }

    public void closeSurvey()
    {
        ui.HideSurvey();
        NextVersion();
    }

    public void Read()
    {
        // string str = folderPath + "ref" + model + version;
        // string o;
        // string[] spt;
        // str += test ? "Test.txt" : "Train.txt"; 
        // //print(str);
        // if (File.Exists(str))
        // {
        //     StreamReader sr = new StreamReader(str);
        //     o = sr.ReadToEnd();
        //     sr.Close();

        //     GameObject[] facets = GameObject.FindGameObjectsWithTag(o[0] + "Face");


        //     o = o.Substring(34, o.Length - 34 - 7);
        //     spt = o.Split("t");

            
        // }
        // else
        // {
        //     print("File: " + str + " NOT EXISTS!");
        // }
    }

    public void EndScene()
    {
        Debug.Log("The scene is ended");
    }
}

