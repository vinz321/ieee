using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
public class Player : NetworkBehaviour
{
    // Start is called before the first frame update
    NetworkVariable<Vector3> Position=new NetworkVariable<Vector3>(Vector3.zero);
    CharacterController cc;
    new void OnNetworkSpawn()
    {
        if(!(NetworkManager.Singleton.IsServer && HasNetworkObject))
            enabled=false;
        transform.position+=Vector3.up;
        base.OnNetworkSpawn();

    }
    void Awake(){
        
        cc=GetComponent<CharacterController>();
    }

    // Update is called once per frame
    void Update()
    {
        if(IsOwner){
            if(NetworkManager.Singleton.IsHost)
                cc.Move(new Vector3(Input.GetAxis("Horizontal"),0,Input.GetAxis("Vertical"))*Time.deltaTime);
            else
                MoveServerRpc(new Vector3(Input.GetAxis("Horizontal"),0,Input.GetAxis("Vertical"))*Time.deltaTime);
        }
       
    }

    [ServerRpc]
    public void MoveServerRpc(Vector3 move){
        cc.Move(move);
    }
}
