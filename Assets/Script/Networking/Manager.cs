using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;
using TMPro;
public class Manager : MonoBehaviour
{
    // Start is called before the first frame update
    NetworkManager nm;
    [SerializeField]
    TMP_InputField ifld_address, ifld_port;
    [SerializeField]
    private bool StartOnStart=false;
    ChangeIP cip;
    void Start()
    {
        nm=GetComponent<NetworkManager>();
        cip=FindObjectOfType<ChangeIP>();
        if(StartOnStart)
            StartHost();
    }

    // Update is called once per frame
    public void StartHost(){
        NetworkManager.Singleton.StartHost();
        Camera.main.gameObject.SetActive(false);
    }

    public void StartClient(){
        NetworkManager.Singleton.StartClient();
        Camera.main.gameObject.SetActive(false);
    }

    public void Stop(){
        NetworkManager.Singleton.DisconnectClient(NetworkManager.Singleton.LocalClientId);
    }
}
