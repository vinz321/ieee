using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class Fader : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]
    private Animator anim;

    void Start(){
        SceneManager.sceneLoaded+=(scene,scenemode)=>{if(anim!=null) anim.Play("FadeIn");};
    }
    public void StartFade(){
        MenuManager.Instance.ChangeScene();
    }

    
}
