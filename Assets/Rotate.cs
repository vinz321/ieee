using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class Rotate : MonoBehaviour
{
    [SerializeField] private Transform t;

    private XRGrabInteractable grabInteractable => GetComponent<XRGrabInteractable>();
    private XRBaseInteractor interactor;
    
    private void OnEnabled()
    {
        grabInteractable.selectEntered.AddListener(GrabStart);
        grabInteractable.selectExited.AddListener(GrabEnd);
    }
    private void OnDisable()
    {
        grabInteractable.selectEntered.RemoveListener(GrabStart);
        grabInteractable.selectExited.RemoveListener(GrabEnd);
    }

    private void GrabStart(SelectEnterEventArgs arg0)
    {
        
    }

    private void GrabEnd(SelectExitEventArgs arg0)
    {
        interactor = grabInteractable.selectingInteractor;
        interactor.GetComponent<XRDirectInteractor>().hideControllerOnSelect = true;
    }

    public float GetInteractorRot() => interactor. GetComponent<Transform>().eulerAngles.z; 
}
