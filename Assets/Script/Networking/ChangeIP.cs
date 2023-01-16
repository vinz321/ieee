using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
public class ChangeIP : MonoBehaviour
{
    // Start is called before the first frame update
    UnityTransport utp;
    void Start()
    {
        utp=FindObjectOfType<UnityTransport>();
    }
    public void changeIP(string s){
        
        utp.ConnectionData.Address=s;
    }

    public void changePort(string p){
        int pi;
        if(int.TryParse(p,out pi)){
            utp.ConnectionData.Port=(ushort)pi;
        }
    }
}
