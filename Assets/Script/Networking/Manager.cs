using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
public class Manager : MonoBehaviour
{
    // Start is called before the first frame update
    NetworkManager nm;
    [SerializeField]
    private GameObject startPlayer;

    [SerializeField]
    TMP_InputField ifld_address, ifld_port;
    [SerializeField]
    private bool StartOnStart=false, isClient=true;
    ChangeIP cip;

    private bool started=false;
    void Start()
    {
        nm=GetComponent<NetworkManager>();
        cip=FindObjectOfType<ChangeIP>();
        
        if(StartOnStart){
                if(isClient){
                    StartClient();
                }else{
                    StartHost();
                }
            }
    }


    // Update is called once per frame
    void Update(){
        if(!started){
            
            if(NetworkManager.Singleton.IsConnectedClient || NetworkManager.Singleton.IsHost){
                startPlayer.SetActive(false);
            }
            started=false;
        }

        
    }
    public void StartHost(){
         NetworkManager.Singleton.StartHost();
        
    }

    public void StartClient(){
         NetworkManager.Singleton.StartClient();
        //startPlayer.SetActive(false);
    }

    public void Stop(){
        if(NetworkManager.Singleton.IsClient)
            NetworkManager.Singleton.DisconnectClient(NetworkManager.Singleton.LocalClientId);
        else
            NetworkManager.Singleton.Shutdown();
        SceneManager.LoadScene(1);
    }
}
