using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fader : MonoBehaviour
{
    // Start is called before the first frame update
    public void StartFade(){
        MenuManager.Instance.ChangeScene();
    }
}
