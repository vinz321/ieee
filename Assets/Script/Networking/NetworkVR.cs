using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.XR.Interaction.Toolkit;
using UnityEngine.XR.Interaction.Toolkit.Samples.StarterAssets;
using UnityEngine.XR.Interaction.Toolkit.Inputs;
using Unity.XR.CoreUtils;
using UnityEngine.InputSystem;
using Unity.Netcode.Components;
using Unity.Multiplayer.Samples.Utilities.ClientAuthority;
public class NetworkVR : NetworkBehaviour
{
    // Start is called before the first frame update
    public override void OnNetworkSpawn()
    {   
        if(IsClient && !IsOwner){
            GetComponent<XROrigin>().enabled=false;
            GetComponentInChildren<Camera>().enabled=false;
            GetComponentInChildren<AudioListener>().enabled=false;
            GetComponentInChildren<UnityEngine.InputSystem.XR.TrackedPoseDriver>().enabled=false;
            
            // ActionBasedController[] ctrls=GetComponentsInChildren<ActionBasedController>();
            // foreach(ActionBasedController c in ctrls){
            //     c.enabled=false;
            // }
            // XRRayInteractor[] xrri=GetComponentsInChildren<XRRayInteractor>();
            // foreach(XRRayInteractor x in xrri){
            //     x.enabled=false;
            // }

            //GetComponent<CharacterController>().enabled=false;
            GetComponent<ContinuousMoveProviderBase>().enabled=false;
            GetComponent<LocomotionSystem>().enabled=false;
            GetComponent<ContinuousTurnProviderBase>().enabled=false;
            ActionBasedController[] cmps=GetComponentsInChildren<ActionBasedController>();
            foreach(ActionBasedController c in cmps){
                c.enableInputActions=false;
                c.enableInputTracking=false;
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
