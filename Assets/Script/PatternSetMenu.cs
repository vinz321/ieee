using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class PatternSetMenu : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    private List<MeshRenderer> singlePath1, singlePath2, singlePath3;
    [SerializeField]
    private List<Material> materials;
    private bool multiPattern,multiColor;
    private Model shape;
    [SerializeField]
    private GameObject pyramid,cube;
    [SerializeField]
    private Tracer tracer;

    [SerializeField]
    private TextMeshPro patternName;
    
    public void turnOnPath(bool multiPattern){
        this.multiPattern=multiPattern;
        foreach(MeshRenderer mr in singlePath1){
            mr.enabled=true;
            mr.material=materials[0];
        }

            foreach(MeshRenderer mr in singlePath2){
                mr.enabled=multiPattern;
            }
            foreach(MeshRenderer mr in singlePath3){
                mr.enabled=multiPattern;
            }
        
    }

    public void turnOnMultiColor(bool multiColor){
        this.multiColor=multiColor;
        foreach(MeshRenderer mr in singlePath2){
                if(multiColor)
                    mr.material=materials[1];
                else
                    mr.material=materials[0];
            }
        foreach(MeshRenderer mr in singlePath3){
                if(multiColor)
                    mr.material=materials[2];
                else
                    mr.material=materials[0];
            }
    }

    public void SetMethod(){
        tracer.enabled=true;
        tracer.multiPattern=multiPattern;
        tracer.MultiColor=multiColor;
        if(multiPattern)
            tracer.minPatternCount=1;
        else
            tracer.minPatternCount=3;
        pyramid.SetActive(shape==Model.Pyramid);
        cube.SetActive(shape==Model.Cube);

        patternName.text=((multiPattern)?"Multi-Pattern ":"Single-Pattern ") + ((multiColor)?"Multi-Color":"Single-Color");
    }

    public void SetPyramidShape(){
        this.shape=Model.Pyramid;
    }
    public void SetCubeShape(){
        this.shape=Model.Cube;
    }
}
