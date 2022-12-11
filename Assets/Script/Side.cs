using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Side : MonoBehaviour
{
    [SerializeField] private int sideId; //BigFace
    [SerializeField] private int faceId; //SmallFace

    public bool isAdjacent(Side s){
        Debug.Log("Face check "+sideId+" "+faceId+ " and "+s.sideId+" "+s.faceId);
        //Same BigFace
        if(s.sideId==sideId){
            if((Mathf.Abs(x-s.x) + Mathf.Abs(y-s.y))==1){
                return true;
            }

            Debug.Log("Same Side different Face");
            return false;
        }

        //Horizontal Different BigFace
        else if(s.sideId<4 && sideId<4){
            if((4+Mathf.Abs(sideId-s.sideId))%4!=1) return false;
            if(s.y==y && Mathf.Abs(s.x-x)==2){
                return true;
            }
            Debug.Log("Different Side Different Face");
            return false;
        }
        else {
            Side vSide=(s.sideId>=4)?s:this;
            Side hSide=(s.sideId<4)?s:this;
            if(vSide.sideId==4 && hSide.y==0 || vSide.sideId==5 && hSide.y==2){
                Debug.Log("VSideCheck");
                switch(hSide.sideId){
                    case 0:   //left
                        
                        return vSide.faceId==vSide.GetFace(0,hSide.x);
                    case 1:   //down
                        return vSide.faceId==vSide.GetFace(hSide.x,2);
                    case 2:   //left
                        return vSide.sideId==vSide.GetFace(2,2-hSide.x);
                    case 3:   //left
                        return vSide.sideId==vSide.GetFace(2-hSide.x,0);    
                }
            }
        }
        Debug.Log("Side problem");
        return false;
    }

    private int GetFace(int x1,int y1){
        return x1+3*y1;
    }

    private int x{
        get => faceId%3;
    }
    private int y{
        get => faceId/3;
    }
    public int SideId {
        get { return sideId; }
    }
    public int FaceId {
        get { return faceId; }
    }
}
