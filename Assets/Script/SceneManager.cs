using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

enum Versions {
    Single,
    Multi,
    Color
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
    // fixed lists of triangles and sides to animate
    [SerializeField] private List<Triangle> trs;
    [SerializeField] private List<Side> sds;
    private List<Triangle> animTriangles, animTCopy;
    private List<Side> animSide, animSCopy;
    [SerializeField] public UI ui;
    [SerializeField] public bool test = true; // flase : is training || true : is test 
    [SerializeField] private Transform Anchor;
    [SerializeField] private Material guideMat;
    private const int trainMax = 3;
    private int trainCount = 0;
    private float time = 0;
    

    private void Awake()
    {
        if (Instance != null && Instance != this) 
        { 
            Destroy(this); 
        } 
        else 
        { 
            Instance = this; 
            animTriangles = new List<Triangle>();
            animTCopy = new List<Triangle>();
            animSide = new List<Side>();
            animSCopy = new List<Side>();
        } 
        
    }

    private void Update()
    {
        time += Time.deltaTime;
        if (animTCopy.Count > 0)
        {

            for(int i = 0; i < animTCopy.Count; i++)
            {
                animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0.5f, 0.5f, 0.0f, -Mathf.Abs(Mathf.Sin(time + (animTCopy.Count - 1 - i)*0.1f))/0.5f);
            }
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
                if (version > Versions.Color)
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
                    version = Versions.Multi;
                    break;
                case 2:
                    model = Model.Pyramid;
                    version = Versions.Color;
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
        //         version = Versions.Multi;
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
        string str = folderPath + "ref" + model + version;
        string o;
        string[] spt;
        str += test ? "Test.txt" : "Train.txt"; 
        //print(str);
        if (File.Exists(str))
        {
            animTriangles.Clear();
            animSide.Clear();
            foreach (Triangle t in animTCopy) Destroy(t);
            foreach (Side s in animSCopy) Destroy(s);
            animTCopy.Clear();
            animSCopy.Clear();
            
            StreamReader sr = new StreamReader(str);
            o = sr.ReadToEnd();
            sr.Close();
            // get substring with values
            o = o.Substring(34, o.Length - 34 - 7);

            if (o[0] == 't') 
            {
                spt = o.Split("t");
                for (int i = 1; i < spt.Length; i++)
                {
                    string[] parts = spt[i].Split("_");
                    string a = parts[0];
                    string b = parts[1];

                    animTriangles.Add(trs.Find(x => (x.BigT.ToString() == a && x.SmallT.ToString() == b)));
                }
            }
            else if (o[0] == 's') 
            {
                spt = o.Split("s");
                for (int i = 1; i < spt.Length; i++)
                {
                    string[] parts = spt[i].Split("_");
                    string a = parts[0];
                    string b = parts[1];

                    animSide.Add(sds.Find(x => (x.SideId.ToString() == a && x.FaceId.ToString() == b)));
                }
            }
            else return;

            
        }
        else
        {
            print("File: " + str + " NOT EXISTS!");
        }
    }

    public void Create()
    {
        if (animSide.Count <= 0 && animTriangles.Count <= 0) return;

        int index = 0;

        if (animSide.Count <= 0)
        {
            // triangles
            foreach (Triangle t in animTriangles)
            {
                Triangle copy = GameObject.Instantiate(t, Vector3.zero, Quaternion.identity);
                copy.gameObject.layer = LayerMask.NameToLayer("Guide");
                copy.transform.SetParent(Anchor);
                copy.transform.position = t.transform.position;
                copy.transform.rotation = t.transform.rotation;
                copy.transform.localScale = new Vector3(.3f,.3f,.3f);
                MeshRenderer mr = copy.GetComponent<MeshRenderer>();
                mr.material = guideMat;
                mr.enabled = true;
                animTCopy.Add(copy);
            }
        }
        else
        {
            // side

        }
    }
    public void EndScene()
    {
        Debug.Log("The scene is ended");
    }
}

