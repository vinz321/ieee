using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PatternSetMenu : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    private List<MeshRenderer> singlePath1, singlePath2, singlePath3;
    [SerializeField]
    private List<Material> materials;
    public void turnOnPath(bool multiPattern){
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

}
