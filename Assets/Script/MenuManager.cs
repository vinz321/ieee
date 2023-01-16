using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public enum Versions {
    Single,
    Multi,
    Color
}

public enum Model {
    Pyramid,
    Cube
}

public class MenuManager : MonoBehaviour
{
    private const string folderPath = @"./Test/";
    private string filename;
    public static MenuManager Instance { get; private set; }
    private Versions version;
    private Model model;
    [SerializeField] private GameObject pyramid, Cube;
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

    public float sinTime, offset, intensity;
    [SerializeField] private int SingleMinCount=3, MultipleMinCount=1;
    [SerializeField] private GameObject number;
    private Quaternion bRotPyramid, bRotCube;
    [SerializeField]
    private bool enableVersionChange=false;
    [SerializeField]
    private int nextScene=1;

    //[SerializeField] private LightRefPattern lrp=new LightRefPattern();

    private int counter = 0;

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
        //time += Time.deltaTime;



        //if (animTCopy.Count > 0)
        //{
        //    Debug.Log(animTCopy.Count);
        //    Debug.Log(counter);
        //    animTCopy[counter].ChangeAlpha(time * 3);
        //    if (time > 0.33)
        //    {
        //        time = 0;
        //        counter++;
        //        if (counter >= animTCopy.Count)
        //        {
        //            foreach (Triangle t in animTCopy)
        //            {
        //                t.ChangeAlpha(0);
        //            }
        //            counter = 0;
        //        }
        //    }

        //    //for(int i = 0; i < animTCopy.Count; i++)
        //    //{
        //    //    if (i == 0) animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(1.0f, 0.0f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animTCopy.Count - 1 - i)*offset))/intensity);
        //    //    else if (i == animTCopy.Count-1) animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animTCopy.Count - 1 - i)*offset))/intensity);
        //    //    else animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0.5f, 0.5f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animTCopy.Count - 1 - i)*offset))/intensity);
        //    //}
        //}

        //else if (animSCopy.Count > 0)
        //{

        //    animSCopy[counter].ChangeAlpha(time * 3);
        //    if (time > 0.33)
        //    {
        //        time = 0;
        //        counter++;
        //        if (counter >= animSCopy.Count)
        //        {
        //            foreach (Side t in animSCopy)
        //            {
        //                t.ChangeAlpha(0);
        //            }
        //            counter = 0;
        //        }
        //    }

            //for(int i = 0; i < animTCopy.Count; i++)
            //{
            //    if (i == 0) animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(1.0f, 0.0f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animTCopy.Count - 1 - i)*offset))/intensity);
            //    else if (i == animTCopy.Count-1) animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animTCopy.Count - 1 - i)*offset))/intensity);
            //    else animTCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0.5f, 0.5f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animTCopy.Count - 1 - i)*offset))/intensity);
            //}
        //}
        //else if (animSCopy.Count > 0)
        //{
        //    for(int i = 0; i < animSCopy.Count; i++)
        //    {
        //        if (i == 0) animSCopy[i].GetComponent<MeshRenderer>().material.color = new Color(1.0f, 0.0f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animSCopy.Count - 1 - i)*offset))/intensity);
        //        else if (i == animSCopy.Count-1) animSCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animSCopy.Count - 1 - i)*offset))/intensity);
        //        else animSCopy[i].GetComponent<MeshRenderer>().material.color = new Color(0.5f, 0.5f, 0.0f, Mathf.Abs(Mathf.Sin(time/sinTime + (animSCopy.Count - 1 - i)*offset))/intensity);
        //    }
        //}
    }

    private void Start()
    {
        bRotPyramid=pyramid.transform.rotation;
        bRotCube=Cube.transform.rotation;
        init();
    }

    private void init()
    {
        test = false;
        trainCount = 0;
        model = Model.Pyramid;
        version = Versions.Single;
        tracer.SetTries(3);
        if(enableVersionChange)
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
        Anchor.rotation = Quaternion.identity;
        string currentV = "" + version;
        ui.SetMenuText(currentV);
        switch (model)
        {
            case Model.Pyramid:
                Cube.SetActive(false);
                pyramid.SetActive(true);
                pyramid.transform.rotation = bRotPyramid;
                break;
            case Model.Cube:
                pyramid.SetActive(false);
                Cube.SetActive(true);
                Cube.transform.rotation = bRotCube;
                break;
            default:
                break;
        }

        tracer.SetVersion(model.ToString(), ((int)version), test);
        // set new minPath
        tracer.minPatternCount = version > Versions.Single ? MultipleMinCount : SingleMinCount;
        //tracer.FormatCurrentRef();
        Debug.Log("Show Model " + model + " and version " + version + ". Min: " + tracer.minPatternCount);
        ClearGuide();
    }

    public void NextVersion()
    {
        tracer.ResetColor();
        tracer.ResetTries();
        if (test)
        {
            if (model <= Model.Cube)
            {
                version++;
                if (version > Versions.Color)
                {
                    version = Versions.Single;
                    model++;
                }

                ShowVersion();
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
                ShowVersion();
                return;
            }
            switch (trainCount)
            {
                case 0:
                    model = Model.Pyramid;
                    version = Versions.Single;
                    break;
                case 1:
                    model = Model.Cube;
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

    public void ResetRot()
    {
        Anchor.rotation = Quaternion.identity;
    }

    public void ShowSurvey()
    {
        // hide everything
        pyramid.SetActive(false);
        Cube.SetActive(false);
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
        //             Cube.SetActive(false);
        //             pyramid.SetActive(true);
        //             pyramid.transform.rotation = Quaternion.identity;
        //             break;
        //         case Model.Cube:
        //             pyramid.SetActive(false);
        //             Cube.SetActive(true);
        //             Cube.transform.rotation = Quaternion.identity;
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

    public void ClearGuide()
    {
        animTriangles.Clear();
        animSide.Clear();
        foreach (Triangle t in animTCopy) Object.Destroy(t.gameObject);
        foreach (Side s in animSCopy) Object.Destroy(s.gameObject);
        animTCopy.Clear();
        animSCopy.Clear();
    }



    private Color readColor(string[] pattern_fsplit, int offset)
    {
        string[] components = pattern_fsplit[offset].Replace(",",".").Split("_");

        return new Color(float.Parse(components[0]), 
                        float.Parse(components[1]),
                         float.Parse(components[2]));
    }

    private Triangle AddTri(string pattern_facet)
    {
        string[] parts = pattern_facet.Split("_");
        string a = parts[0];
        string b = parts[1];

        return trs.Find(x => (x.BigF.ToString() == a && x.SmallF.ToString() == b));
    }
    private Side AddSide(string pattern_facet)
    {
        string[] parts = pattern_facet.Split("_");
        string a = parts[0];
        string b = parts[1];

        return sds.Find(x => (x.BigF.ToString() == a && x.SmallF.ToString() == b));
    }

    private string[] extractSinglePatterns(string pattern)
    {
        string[] output = pattern.Split("endpthstpth_");
        return output;
    }

    private int readSinglePattern(string pattern,int offset)
    {

        string[] spt;
        string o = pattern.Replace("stpth_", "").Replace("endpth", "");
        Debug.Log(/*pattern + "------------------" +*/ o);
        //o = o.Substring(34, o.Length - 34 - 7);
        Color refColor;
        if (o.Contains("t"))
        {
            spt = o.Split("t");
            Debug.Log(/*pattern + "------------------" +*/ spt.Length);
            refColor = readColor(spt, 0);
            Debug.Log(refColor);
            for (int i = 1; i < spt.Length; i++)
            {
                Debug.Log(/*pattern + "------------------" + */spt[i]);
                //string[] parts = spt[i].Split("_");
                //string a = parts[0];
                //string b = parts[1];

                //animTriangles.Add(trs.Find(x => (x.BigT.ToString() == a && x.SmallT.ToString() == b)));
                animTriangles.Add(AddTri(spt[i]));
                animTCopy.Add((Triangle)CreateAnimFacet(AddTri(spt[i]), refColor / 2,offset+i));
            }
            return spt.Length - 1;
        }
        else if (o.Contains("s"))
        {
            spt = o.Split("s");
            refColor = readColor(spt, 0);
            for (int i = 1; i < spt.Length; i++)
            {
                //string[] parts = spt[i].Split("_");
                //string a = parts[0];
                //string b = parts[1];

                //animSide.Add(sds.Find(x => (x.SideId.ToString() == a && x.FaceId.ToString() == b)));
                animSide.Add(AddSide(spt[i]));
                animSCopy.Add((Side)CreateAnimFacet(AddSide(spt[i]), refColor / 2,offset+i));
            }
            return spt.Length - 1;
        }
        else return -1;

    }
    public void Read()
    {
        string str = folderPath + "ref" + model + version;
        string o;
        string[] spt;
        str += test ? "Test.txt" : "Train.txt";
        //print(str);
        ClearGuide();
        if (File.Exists(str))
        {


            StreamReader sr = new StreamReader(str);
            o = sr.ReadToEnd();
            sr.Close();
            // get substring with values
            spt = extractSinglePatterns(o);
            int accum = 0;
            for(int i= 0; i< spt.Length;i++)
            {
                Debug.Log(spt[i]);
                accum+=readSinglePattern(spt[i],accum);
            }
        }
        else
        {
            print("File: " + str + " NOT EXISTS!");
        }
        time = 0.0f;
    }

    private Facet CreateAnimFacet(Facet f)
    {
        Facet copy = GameObject.Instantiate(f, Vector3.zero, Quaternion.identity);
        copy.gameObject.layer = LayerMask.NameToLayer("Guide");
        copy.transform.SetParent(Anchor);
        copy.transform.position = f.transform.position;
        copy.transform.rotation = f.transform.rotation;
        copy.transform.localScale = new Vector3(.3f, .3f, .3f);
        MeshRenderer mr = copy.GetComponent<MeshRenderer>();
        mr.material = guideMat;
        mr.enabled = true;
        return copy;
    }
    private Facet CreateAnimFacet(Facet f, Color c,int n)
    {
        //yield return new WaitForSeconds(0.2f);
        Facet copy = GameObject.Instantiate(f, f.transform.parent); // Vector3.zero, Quaternion.identity
        copy.gameObject.layer = LayerMask.NameToLayer("Guide");
        //copy.transform.SetParent(Anchor,true);
        //copy.transform.position = f.transform.position;
        //copy.transform.rotation = f.transform.rotation;
        copy.transform.localScale = copy.transform.localScale * 0.999f;
        MeshRenderer mr = copy.GetComponent<MeshRenderer>();
        mr.material = guideMat;
        mr.enabled = true;
        copy.SetColor(c);
        copy.ChangeAlpha(0.5f);
        //copy.transform.renderer.bounds.center

        //------- NUMBERS FACE-ALIGNED --------//
        Vector3 offset = (copy.transform.GetComponent<Renderer>().bounds.center-copy.transform.position).normalized;
        Transform temp = GameObject.Instantiate(number, copy.transform).transform;
        temp.position = copy.transform.GetComponent<Renderer>().bounds.center + offset*0.1f*0.3f;
        temp.localScale = temp.localScale / copy.transform.localScale.x;
        RaycastHit hit;
        Physics.Raycast(temp.position, -offset, out hit, LayerMask.GetMask("Guide"));
        temp.position = hit.point;
        temp.forward = -hit.normal;
        temp.position -= temp.forward * 0.01f;
        temp.GetComponent<TextMeshPro>().text = n.ToString();
        //------- NUMBERS FACE-ALIGNED --------//
        return copy;
    }

    //IEnumerator AnimatorMesh(string f, Color c)
    //{
    //    yield return new WaitForSeconds(1f);
    //    //CreateAnimFacet(f, c);
    //    animSide.Add(AddSide(spt[i]));
    //    animSCopy.Add((Side)CreateAnimFacet(AddSide(spt[i]), refColor / 2));
    //}

    public void Create()
    {
        if (animSide.Count <= 0 && animTriangles.Count <= 0) return;

        int index = 0;

        if (animSide.Count <= 0)
        {
            // triangles
            foreach (Triangle t in animTriangles)
            {
                //Triangle copy = GameObject.Instantiate(t, Vector3.zero, Quaternion.identity);
                //copy.gameObject.layer = LayerMask.NameToLayer("Guide");
                //copy.transform.SetParent(Anchor);
                //copy.transform.position = t.transform.position;
                //copy.transform.rotation = t.transform.rotation;
                //copy.transform.localScale = new Vector3(.3f,.3f,.3f);
                //MeshRenderer mr = copy.GetComponent<MeshRenderer>();
                //mr.material = guideMat;
                //mr.enabled = true;
                animTCopy.Add((Triangle)CreateAnimFacet(t));
            }
        }
        else
        {
            // side
            foreach (Side s in animSide)
            {
                //Side copy = GameObject.Instantiate(s, Vector3.zero, Quaternion.identity);
                //copy.gameObject.layer = LayerMask.NameToLayer("Guide");
                //copy.transform.SetParent(Anchor);
                //copy.transform.position = s.transform.position;
                //copy.transform.rotation = s.transform.rotation;
                //copy.transform.localScale = s.transform.localScale * 0.26638f;
                //MeshRenderer mr = copy.GetComponent<MeshRenderer>();
                //mr.material = guideMat;
                //mr.enabled = true;
                animSCopy.Add((Side)CreateAnimFacet(s));
            }
        }
    }
    public void EndScene()
    {
        Debug.Log("The scene is ended");
    }

    public void ChangeScene(){
        SceneManager.LoadScene(nextScene);
        Debug.Log("The scene is being loaded "+nextScene);
    }

    public int NextScene{
        get=>nextScene;
        set{nextScene=value;}
    }
}

