using System.Collections;
using System.Collections.Generic;
using UnityEngine;

enum Versions {
    Base,
    Multipattern,
    multiColor
}

enum Model {
    Pyramid,
    Sphere
}

public class SceneManager : MonoBehaviour
{    
    public static SceneManager Instance {get; private set;}
    private Versions version;
    private Model model;
    [SerializeField] private GameObject pyramid, sphere;
    [SerializeField] private Tracer tracer;
    [SerializeField] public UI ui;
    

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
        model = Model.Pyramid;
        version = Versions.Base;
        ShowVersion();
    }

    public void ShowVersion()
    {
        Debug.Log("Show Model " + model + " and version " + version);
        if (model <= Model.Sphere)
        {
            if (version > Versions.multiColor)
            {
                version = Versions.Base;
                model++;
            }
            
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

            tracer.SetVersion(((int)version));
            
            version++;
        }
        else
        {
            EndScene();
        }
    }

    public void ShowSurvey()
    {
        // hide everything
        pyramid.SetActive(false);
        sphere.SetActive(false);
        ui.ShowSurvey();
    }

    public void HideSurvey()
    {
        ui.HideSurvey();
        ShowVersion();
    }

    public void EndScene()
    {
        Debug.Log("The scene is ended");
    }
}

