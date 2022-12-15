#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// System.Collections.Generic.IEnumerable`1<Facet>
struct IEnumerable_1_tF900F6135F3FD9C4D6B8C117EC8250BA0003C0AE;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<Facet>
struct List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// System.Collections.Generic.Stack`1<Facet>
struct Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Facet[]
struct FacetU5BU5D_tB8779D989DF9B35630D9467D24C2693F0F732C0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Click
struct Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Facet
struct Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// UnityEngine.XR.Interaction.Toolkit.ILineRenderable
struct ILineRenderable_t31B0CD4F7660B33DA1844249EF11B0F653E36ADA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE;
// Rotating
struct Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81;
// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// Side
struct Side_tF565A181C011C574567477C6D5ABADD72BD917AA;
// SphereTrace
struct SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Tracer
struct Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F;
// TracerV2
struct TracerV2_tC2047EDF2061E262F98F212E39119732D3BC2C66;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Triangle
struct Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule
struct XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Side_tF565A181C011C574567477C6D5ABADD72BD917AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral110C2F18C5813FCC8E30386EB22D001E65600E00;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral23166A45A20385F0607F5AD491200A97F7A6296D;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8;
IL2CPP_EXTERN_C String_t* _stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral88DC01C1BA6D0D58EBE15B97D28F08D421C24908;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC4388FF3A386D0B58DCEEA1D9A6307947457F2;
IL2CPP_EXTERN_C String_t* _stringLiteralAA04D61F571FCE36A1C2A2A6DC28AB3E0DA65F13;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C String_t* _stringLiteralD29957B468738324743D2D98A8F2C16F231F0018;
IL2CPP_EXTERN_C String_t* _stringLiteralE1602CD594F39B601B0A34667ED3E03283DFB92E;
IL2CPP_EXTERN_C String_t* _stringLiteralEEE7A451DB007822CB1786FB135AC02A63245CDA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBABD617B0A5A1FB228876BA87C08F608FF37F3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEEFB360D43DCCF72325B60678208550237FC3E15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m20F569A1D95BE2691C64ECDEA3C2938AAD4D33C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotate_SetActive_m94A729CEA4A776C3CD1DCA9F20DA7631A32323E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotate_setUnActive_m7EFCE3DDDCC4E76B4E91A55489F7008EBB0A1AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotating_Anchor_mDFCF647263B33F3C18C9AC455406E8A5FBEDC467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotating_Detach_m9DEF88702D8BAE7C1B6E290B04A682A7B6506AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotating_U3CStartU3Eb__6_0_m0AC1DAF694865FB378E578F90597C32F87B9EE0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotating_U3CStartU3Eb__6_1_m647C921B37A6D9E9D1AAAFA8273F081706A77EC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotator_Anchor_m7FC1D1C3ED4CFEF5FD8785CF0C18C970B546BC92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rotator_Detach_m7CC46DC73E2987D1E844EE5A9848B003B1A3A4EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SphereTrace_SetActive_m12621CD85F762165C744140B81948E6C96633E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SphereTrace_setUnActive_mE7EFD7E56CE62415340BB6465552EB63AB9C0B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m7E91DDBF5FE451BC1041AB846DD5AC603189028D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tracer_U3CStartU3Eb__16_0_mA54E96DAE7291B7B3334A18249444C14937A21CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tracer_U3CStartU3Eb__16_1_mDC6E2E15E7E087DEF33E52EB6EA7955EC0EDD1F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tracer_U3CStartU3Eb__16_2_mAFA3B6E4CD5BB46F8051013E0732A23A63873C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tracer_U3CStartU3Eb__16_3_m75A31422AE6E5D653DCD45AE6BCFCD82AEC09493_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tracer_U3CStartU3Eb__16_4_mE569D8DE257D2815C8AA426931E5F1F2814CC3A5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Facet>
struct List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FacetU5BU5D_tB8779D989DF9B35630D9467D24C2693F0F732C0F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FacetU5BU5D_tB8779D989DF9B35630D9467D24C2693F0F732C0F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<Facet>
struct Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	FacetU5BU5D_tB8779D989DF9B35630D9467D24C2693F0F732C0F* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>
struct Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Click
struct Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material Click::m
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_4;
	// UnityEngine.Transform Click::t
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___t_5;
	// UnityEngine.LayerMask Click::mask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask_6;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Click::faces
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___faces_7;
	// System.Collections.Generic.List`1<System.Int32> Click::indexes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___indexes_8;
	// UnityEngine.GameObject Click::current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___current_9;
};

// Facet
struct Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.MeshRenderer Facet::mr
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___mr_4;
	// UnityEngine.Color Facet::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_5;
};

// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Rotate::abcLeft
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcLeft_4;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Rotate::abcRight
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcRight_5;
	// UnityEngine.Transform Rotate::hitAnchor
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___hitAnchor_6;
	// UnityEngine.Transform Rotate::currentHand
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentHand_7;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor Rotate::xrri
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___xrri_8;
	// UnityEngine.RaycastHit Rotate::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_9;
	// System.Boolean Rotate::grabbed
	bool ___grabbed_10;
	// System.Boolean Rotate::setup
	bool ___setup_11;
	// System.Boolean Rotate::inUse
	bool ___inUse_12;
	// UnityEngine.Vector3 Rotate::oldDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldDir_13;
	// UnityEngine.Vector3 Rotate::newDir
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newDir_14;
	// UnityEngine.Vector3 Rotate::oldControlPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oldControlPos_15;
	// UnityEngine.Vector3 Rotate::newControlPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newControlPos_16;
	// System.Single Rotate::distance
	float ___distance_17;
	// UnityEngine.Transform Rotate::camTsf
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___camTsf_18;
	// System.Int32 Rotate::initialized
	int32_t ___initialized_19;
};

// Rotating
struct Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Rotating::abcLeft
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcLeft_4;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Rotating::abcRight
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcRight_5;
	// UnityEngine.Transform Rotating::handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handle_6;
	// System.Boolean Rotating::anchored
	bool ___anchored_7;
	// UnityEngine.Vector3 Rotating::forward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward_8;
	// UnityEngine.Quaternion Rotating::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_9;
};

// Rotator
struct Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Rotator::abc
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abc_4;
	// UnityEngine.Transform Rotator::handle
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___handle_5;
	// System.Boolean Rotator::anchored
	bool ___anchored_6;
	// UnityEngine.Vector3 Rotator::forward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward_7;
	// UnityEngine.Quaternion Rotator::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_8;
};

// SphereTrace
struct SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController SphereTrace::abcLeft
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcLeft_4;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController SphereTrace::abcRight
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcRight_5;
	// UnityEngine.Material SphereTrace::defaultMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___defaultMat_6;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor SphereTrace::xrri
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___xrri_7;
	// UnityEngine.RaycastHit SphereTrace::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_8;
	// System.Boolean SphereTrace::selected
	bool ___selected_9;
	// System.Boolean SphereTrace::inUse
	bool ___inUse_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SphereTrace::faces
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___faces_11;
	// System.Int32 SphereTrace::faceLayer
	int32_t ___faceLayer_12;
	// System.Int32 SphereTrace::lastSideId
	int32_t ___lastSideId_13;
	// System.Int32 SphereTrace::lastFaceId
	int32_t ___lastFaceId_14;
};

// Tracer
struct Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Stack`1<Facet> Tracer::pass
	Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* ___pass_4;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor Tracer::xrriLeft
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___xrriLeft_5;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor Tracer::xrriRight
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___xrriRight_6;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Tracer::abcLeft
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcLeft_7;
	// UnityEngine.XR.Interaction.Toolkit.ActionBasedController Tracer::abcRight
	ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* ___abcRight_8;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor Tracer::xrri
	XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* ___xrri_9;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual Tracer::lv
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* ___lv_10;
	// Facet Tracer::active
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* ___active_11;
	// UnityEngine.RaycastHit Tracer::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_12;
	// System.Boolean Tracer::passStarted
	bool ___passStarted_13;
	// System.Collections.Generic.List`1<UnityEngine.Color> Tracer::colorSpan
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colorSpan_14;
	// System.Int32 Tracer::idColor
	int32_t ___idColor_15;
	// System.Boolean Tracer::traceback
	bool ___traceback_16;
	// System.Boolean Tracer::keepPass
	bool ___keepPass_17;
	// UnityEngine.InputSystem.InputActionReference Tracer::iarLeft
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___iarLeft_18;
	// UnityEngine.InputSystem.InputActionReference Tracer::iarRight
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___iarRight_19;
};

// TracerV2
struct TracerV2_tC2047EDF2061E262F98F212E39119732D3BC2C66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_16;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_22;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_23;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_25;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_27;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_28;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_29;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_30;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_31;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_33;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_40;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_41;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_34;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineWidth
	float ___m_LineWidth_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_OverrideInteractorLineLength
	bool ___m_OverrideInteractorLineLength_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineLength
	float ___m_LineLength_8;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_WidthCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_WidthCurve_9;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ValidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_ValidColorGradient_10;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_InvalidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_InvalidColorGradient_11;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_BlockedColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_BlockedColorGradient_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TreatSelectionAsValidState
	bool ___m_TreatSelectionAsValidState_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SmoothMovement
	bool ___m_SmoothMovement_14;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_FollowTightness
	float ___m_FollowTightness_15;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapThresholdDistance
	float ___m_SnapThresholdDistance_16;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_Reticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Reticle_17;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_BlockedReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BlockedReticle_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtFirstRaycastHit
	bool ___m_StopLineAtFirstRaycastHit_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtSelection
	bool ___m_StopLineAtSelection_20;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticlePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticlePos_21;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticleNormal_22;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_EndPositionInLine
	int32_t ___m_EndPositionInLine_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapCurve
	bool ___m_SnapCurve_24;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PerformSetup
	bool ___m_PerformSetup_25;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleToUse
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ReticleToUse_26;
	// UnityEngine.LineRenderer UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_LineRenderer_27;
	// UnityEngine.XR.Interaction.Toolkit.ILineRenderable UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderable
	RuntimeObject* ___m_LineRenderable_28;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsSelectInteractor
	RuntimeObject* ___m_LineRenderableAsSelectInteractor_29;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsBaseInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___m_LineRenderableAsBaseInteractor_30;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TargetPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_TargetPoints_31;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoTargetPoints
	int32_t ___m_NoTargetPoints_32;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_RenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RenderPoints_33;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoRenderPoints
	int32_t ___m_NoRenderPoints_34;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PreviousRenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_PreviousRenderPoints_35;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoPreviousRenderPoints
	int32_t ___m_NoPreviousRenderPoints_36;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ClearArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ClearArray_37;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_38;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticleAttached
	bool ___m_CustomReticleAttached_39;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_40;
};

struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_StaticFields
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::s_XROriginCache
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___s_XROriginCache_41;
};

// UnityEngine.XR.Interaction.Toolkit.ActionBasedController
struct ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_PositionAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_PositionAction_24;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotationAction_25;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TrackingStateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TrackingStateAction_26;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectAction_27;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_SelectActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_SelectActionValue_28;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateAction_29;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ActivateActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_ActivateActionValue_30;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressAction_31;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_UIPressActionValue
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_UIPressActionValue_32;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HapticDeviceAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_HapticDeviceAction_33;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_RotateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_RotateAnchorAction_34;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_DirectionalAnchorRotationAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_DirectionalAnchorRotationAction_35;
	// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_TranslateAnchorAction
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___m_TranslateAnchorAction_36;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledTrackingInputReferenceActions
	bool ___m_HasCheckedDisabledTrackingInputReferenceActions_37;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_HasCheckedDisabledInputReferenceActions
	bool ___m_HasCheckedDisabledInputReferenceActions_38;
	// System.Single UnityEngine.XR.Interaction.Toolkit.ActionBasedController::m_ButtonPressPoint
	float ___m_ButtonPressPoint_39;
};

// Side
struct Side_tF565A181C011C574567477C6D5ABADD72BD917AA  : public Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537
{
	// System.Int32 Side::sideId
	int32_t ___sideId_6;
	// System.Int32 Side::faceId
	int32_t ___faceId_7;
};

// Triangle
struct Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19  : public Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537
{
	// System.Int32 Triangle::bigT
	int32_t ___bigT_6;
	// System.Int32 Triangle::smallT
	int32_t ___smallT_7;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_43;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_46;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_47;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_48;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_50;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_52;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_54;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_55;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_56;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_59;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_67;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_72;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_78;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_79;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_80;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_85;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_86;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_87;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_82;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_94;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_95;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_96;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_100;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_101;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_104;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_105;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_107;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_108;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_110;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_111;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_112;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_113;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_114;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_117;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_118;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_119;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_120;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_InputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_InputModule_121;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredInputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_RegisteredInputModule_122;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_CurrentNearestObject
	RuntimeObject* ___m_CurrentNearestObject_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_124;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_125;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_126;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_127;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_128;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_129;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_130;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_131;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_132;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_133;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_134;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_137;
};

struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_88;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_135;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_136;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void Click::castRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_castRay_mB264B6D09E42D21C15613E0E3E75B6968A2E1DB3 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) ;
// System.Void Click::rotateObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_rotateObj_mA0EB2F4925255CF7714287B9DF77E11D4E809CAF (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Click::colorMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_colorMesh_mCF5E9E7467C2B32015E8D972B35958AD502C9C42 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Transform>::GetEnumerator()
inline Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::Dispose()
inline void Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::get_Current()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Transform>::MoveNext()
inline bool Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87 (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(System.Single,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline (float ___b0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Subtraction(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) ;
// System.Void Facet::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOff_m8B0506FCD89FA63A548B3541BE12213A1AB8918D (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) ;
// System.Void Rotate::initControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_initControllers_m19B89D4C672DA59E215BBEFDCFD22B9F2469C61F (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void Rotate::rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_rotate_m2FC51353C183691F053EAAC43C5D5EA8BE238FF5 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_selectAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::IsPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::TryGetCurrent3DRaycastHit(UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRRayInteractor_TryGetCurrent3DRaycastHit_m3B0B4ECA2D4B2786F08B42F1BA327D63706BB060 (XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___raycastHit0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m09EB01A6F34CB6BCE8EC0A13CAEF4899E2112B52 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, bool ___depthTest4, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_activateAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_forward(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionProperty UnityEngine.XR.Interaction.Toolkit.ActionBasedController::get_positionAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_positionAction_m754BEEC79908AD0B05827F441039715F3FF9F40A_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector3>()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 Side::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 Side::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) ;
// System.Int32 Side::GetFace(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_GetFace_m362077FED1E587A7CBC3DEF0BE8370C02B94EF86 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, int32_t ___x10, int32_t ___y11, const RuntimeMethod* method) ;
// System.Boolean Side::isAdjacent(Side)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Side_isAdjacent_m38040DE1907ACD243C5EB9A4BFE52E6C4914EA75 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, Side_tF565A181C011C574567477C6D5ABADD72BD917AA* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Facet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet__ctor_mFE9D9D79F93658CFE3C8913F1CA14FE3474738E8 (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void SphereTrace::initControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_initControllers_m1F38794E450FC4B92215E513F5F647301F112FC9 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) ;
// System.Void SphereTrace::drawFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_drawFaces_m627AC146540FCE097B2A98BFDFE33ED642D56676 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) ;
// System.Void SphereTrace::clearFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_clearFaces_m0DE4FF5AE87EFDC1768CA648638C0583F5421E40 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<Side>()
inline Side_tF565A181C011C574567477C6D5ABADD72BD917AA* GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Side_tF565A181C011C574567477C6D5ABADD72BD917AA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Boolean SphereTrace::isAdjacent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereTrace_isAdjacent_m9E22E839B3FDFFB5F63058FE6A9B0F10CBBC6BF0 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___current0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual>()
inline XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<Facet>::get_Count()
inline int32_t Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_inline (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<Facet>::Peek()
inline Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91 (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* __this, const RuntimeMethod* method)
{
	return ((  Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* (*) (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<Facet>::Pop()
inline Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9 (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* __this, const RuntimeMethod* method)
{
	return ((  Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* (*) (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Facet>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mBABD617B0A5A1FB228876BA87C08F608FF37F3E1 (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.Stack`1<Facet>::Push(T)
inline void Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* __this, Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9*, Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Facet>::get_Count()
inline int32_t List_1_get_Count_mEEFB360D43DCCF72325B60678208550237FC3E15_inline (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Facet>::get_Item(System.Int32)
inline Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* List_1_get_Item_m20F569A1D95BE2691C64ECDEA3C2938AAD4D33C7 (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* (*) (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, int32_t, const RuntimeMethod*))List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared)(__this, ___index0, method);
}
// System.Void Tracer::TracePath(UnityEngine.Color,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_TracePath_m0F7072BF89339F50BA6E590ADB995270282BECC4 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, bool ___traceback1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Facet>()
inline Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Facet::TurnOn(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOn_m275C2985D4E0EEFBB76CEF3DE9A9870D0CBC0B7E (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void Facet::TurnOff(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOff_mEF88BA027ED7C723F7137970DF8CCD9E32E2AB61 (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Facet>::.ctor()
inline void Stack_1__ctor_m7E91DDBF5FE451BC1041AB846DD5AC603189028D (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, const RuntimeMethod*))List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_gshared)(__this, method);
}
// System.Void Tracer::PrintPassKeep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_PrintPassKeep_mB562D9983476C861B07BA7F98972453E9D71237E (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) ;
// System.Void Tracer::PrintPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_PrintPass_mD7CEB56C784DB0A56E84894BDB29A724221DD318 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
inline int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, const RuntimeMethod*))List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_gshared_inline)(__this, method);
}
// System.Void Facet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_Start_m6B109A9636EAED9A2279644261D4F6ED96F6C2BA (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) ;
// System.Boolean Triangle::isAdjacent(Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle_isAdjacent_m217B98C5DCBBD6827E17AD38971AA59C174AF515 (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* ___t0, const RuntimeMethod* method) ;
// System.String UnityEngine.Color::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Click::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_Start_m803B298A1BB8C51A09E0AD261DE1502FE2645236 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// indexes = new List<int>();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___indexes_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___indexes_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void Click::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_Update_m758B18006EB99727A40268AD1966F2AF91C020F5 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	{
		// castRay();
		Click_castRay_mB264B6D09E42D21C15613E0E3E75B6968A2E1DB3(__this, NULL);
		// rotateObj();
		Click_rotateObj_mA0EB2F4925255CF7714287B9DF77E11D4E809CAF(__this, NULL);
		// }
		return;
	}
}
// System.Void Click::rotateObj()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_rotateObj_mA0EB2F4925255CF7714287B9DF77E11D4E809CAF (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (Input.GetMouseButton(1))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		// float x = Input.GetAxis("Mouse X");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_0 = L_1;
		// float y = Input.GetAxis("Mouse Y");
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_1 = L_2;
		// t.Rotate(new Vector3(0, -x * 10f, 0), Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___t_5;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), ((float)il2cpp_codegen_multiply(((-L_4)), (10.0f))), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_3, L_5, 0, NULL);
		// t.Rotate(new Vector3(y * 10f, 0, 0), Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___t_5;
		float L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), ((float)il2cpp_codegen_multiply(L_7, (10.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_6, L_8, 0, NULL);
		// Debug.Log(x);
		float L_9 = V_0;
		float L_10 = L_9;
		RuntimeObject* L_11 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Click::castRay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_castRay_mB264B6D09E42D21C15613E0E3E75B6968A2E1DB3 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Ray r = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (Physics.Raycast(r, out h, Mathf.Infinity, mask))
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_3 = __this->___mask_6;
		int32_t L_4;
		L_4 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_3, NULL);
		bool L_5;
		L_5 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_2, (&V_0), (std::numeric_limits<float>::infinity()), L_4, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// if (Input.GetMouseButton(0))
		bool L_6;
		L_6 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// current = h.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		__this->___current_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___current_9), (void*)L_8);
		// colorMesh();
		Click_colorMesh_mCF5E9E7467C2B32015E8D972B35958AD502C9C42(__this, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Int32 Click::addValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Click_addValue_m03CBC3E5DBF160DECB30453301E0B0E986156DB1 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// int i = 0;
		V_0 = 0;
		// foreach (Transform t in faces)
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = __this->___faces_7;
		NullCheck(L_0);
		Enumerator_t519AE1DAA64E517296768BEA2E732ED47F76A91D L_1;
		L_1 = List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5(L_0, List_1_GetEnumerator_m01FCD3FC513065087F7E312BC9DE2D1C3FF655E5_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5((&V_1), Enumerator_Dispose_m9BF6C1C74CD711998DC8FAE5D6B8083586F5CFB5_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0010_1:
			{
				// foreach (Transform t in faces)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
				L_2 = Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_inline((&V_1), Enumerator_get_Current_mCBBD283BB42C56D73B7C4194020EC95292B36129_RuntimeMethod_var);
				// if (t == current.transform)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___current_9;
				NullCheck(L_3);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
				L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, L_4, NULL);
				if (!L_5)
				{
					goto IL_002d_1;
				}
			}
			{
				// return i;
				int32_t L_6 = V_0;
				V_2 = L_6;
				goto IL_004c;
			}

IL_002d_1:
			{
				// i++;
				int32_t L_7 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
			}

IL_0031_1:
			{
				// foreach (Transform t in faces)
				bool L_8;
				L_8 = Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87((&V_1), Enumerator_MoveNext_mBAA697FE341E389C86536D9444A3E4AC02109E87_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// return -1;
		return (-1);
	}

IL_004c:
	{
		// }
		int32_t L_9 = V_2;
		return L_9;
	}
}
// System.Void Click::colorMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click_colorMesh_mCF5E9E7467C2B32015E8D972B35958AD502C9C42 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (current != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___current_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// current.GetComponent<MeshRenderer>().material = m;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___current_9;
		NullCheck(L_2);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_3;
		L_3 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_2, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = __this->___m_4;
		NullCheck(L_3);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_3, L_4, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Click::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Click__ctor_m395B5FD36F7BDEB48737455EB2A8A53C06C132E1 (Click_tFCF989D896ED3DAAC090F422DA55BE73214DEF38* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Facet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_Start_m6B109A9636EAED9A2279644261D4F6ED96F6C2BA (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mr=GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___mr_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mr_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void Facet::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOn_m693B2C12EDAB3C3847ABB08066819331E2B7CB2C (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) 
{
	{
		// mr.enabled=true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___mr_4;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Facet::TurnOn(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOn_m275C2985D4E0EEFBB76CEF3DE9A9870D0CBC0B7E (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mr.enabled){
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___mr_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_0, NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// this.color=this.color+2*color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___color_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline((2.0f), L_3, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_2, L_4, NULL);
		__this->___color_5 = L_5;
		goto IL_0048;
	}

IL_002b:
	{
		// mr.enabled=true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___mr_4;
		NullCheck(L_6);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// this.color=2*color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline((2.0f), L_7, NULL);
		__this->___color_5 = L_8;
	}

IL_0048:
	{
		// mr.material.SetColor("_EmissionColor",this.color);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_9 = __this->___mr_4;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = __this->___color_5;
		NullCheck(L_10);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_11, NULL);
		// }
		return;
	}
}
// System.Void Facet::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOff_m8B0506FCD89FA63A548B3541BE12213A1AB8918D (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) 
{
	{
		// mr.enabled=false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___mr_4;
		NullCheck(L_0);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Facet::TurnOff(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet_TurnOff_mEF88BA027ED7C723F7137970DF8CCD9E32E2AB61 (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(mr.enabled){
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = __this->___mr_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_0, NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// this.color=this.color-2*color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = __this->___color_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___color0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline((2.0f), L_3, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_2, L_4, NULL);
		__this->___color_5 = L_5;
		// mr.material.SetColor("_EmissionColor",this.color);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_6 = __this->___mr_4;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->___color_5;
		NullCheck(L_7);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_7, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_8, NULL);
		// if(this.color.r+this.color.b+this.color.g<0.1f){
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&__this->___color_5);
		float L_10 = L_9->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_11 = (&__this->___color_5);
		float L_12 = L_11->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&__this->___color_5);
		float L_14 = L_13->___g_1;
		if ((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_10, L_12)), L_14))) < ((float)(0.100000001f)))))
		{
			goto IL_0074;
		}
	}
	{
		// TurnOff();
		Facet_TurnOff_m8B0506FCD89FA63A548B3541BE12213A1AB8918D(__this, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void Facet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facet__ctor_mFE9D9D79F93658CFE3C8913F1CA14FE3474738E8 (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_mD322E77A3CF2BEF28C4DF71D3F529107F511B1FB (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// initControllers();
		Rotate_initControllers_m19B89D4C672DA59E215BBEFDCFD22B9F2469C61F(__this, NULL);
		// }
		return;
	}
}
// System.Void Rotate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Awake_m37950270F7B1C4B3300A061D890B62DF9CF2D481 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// camTsf = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___camTsf_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___camTsf_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void Rotate::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_FixedUpdate_m9F61E1367C647FC604344A5CBA52B939F6948AC4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// rotate();
		Rotate_rotate_m2FC51353C183691F053EAAC43C5D5EA8BE238FF5(__this, NULL);
		// }
		return;
	}
}
// System.Void Rotate::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_LateUpdate_mC53B69F2A1A8E552A6CA257F3CC698D1968F665C (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// if(initialized<3){
		int32_t L_0 = __this->___initialized_19;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_005d;
		}
	}
	{
		// transform.position=new Vector3(transform.position.x,camTsf.position.y-0.5f,transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___camTsf_18;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, ((float)il2cpp_codegen_subtract(L_7, (0.5f))), L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_11, NULL);
		// initialized++;
		int32_t L_12 = __this->___initialized_19;
		__this->___initialized_19 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Rotate::initControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_initControllers_m19B89D4C672DA59E215BBEFDCFD22B9F2469C61F (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotate_SetActive_m94A729CEA4A776C3CD1DCA9F20DA7631A32323E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotate_setUnActive_m7EFCE3DDDCC4E76B4E91A55489F7008EBB0A1AB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// abcLeft.selectAction.action.started += SetActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abcLeft_4;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)Rotate_SetActive_m94A729CEA4A776C3CD1DCA9F20DA7631A32323E1_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// abcLeft.selectAction.action.canceled += setUnActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_4 = __this->___abcLeft_4;
		NullCheck(L_4);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5;
		L_5 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)Rotate_setUnActive_m7EFCE3DDDCC4E76B4E91A55489F7008EBB0A1AB0_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_6, L_7, NULL);
		// abcRight.selectAction.action.started += SetActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_8 = __this->___abcRight_5;
		NullCheck(L_8);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_9;
		L_9 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_8, NULL);
		V_0 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, __this, (intptr_t)((void*)Rotate_SetActive_m94A729CEA4A776C3CD1DCA9F20DA7631A32323E1_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_10, L_11, NULL);
		// abcRight.selectAction.action.canceled += setUnActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_12 = __this->___abcRight_5;
		NullCheck(L_12);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_13;
		L_13 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_12, NULL);
		V_0 = L_13;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_15 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_15, __this, (intptr_t)((void*)Rotate_setUnActive_m7EFCE3DDDCC4E76B4E91A55489F7008EBB0A1AB0_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Rotate::SetActive(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetActive_m94A729CEA4A776C3CD1DCA9F20DA7631A32323E1 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (!inUse)
		bool L_0 = __this->___inUse_12;
		if (L_0)
		{
			goto IL_00a6;
		}
	}
	{
		// if (abcLeft.selectAction.action.IsPressed())
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_1 = __this->___abcLeft_4;
		NullCheck(L_1);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_2;
		L_2 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_3, NULL);
		if (!L_4)
		{
			goto IL_004c;
		}
	}
	{
		// xrri = abcLeft.gameObject.GetComponent<XRRayInteractor>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_5 = __this->___abcLeft_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_7;
		L_7 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_6, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		__this->___xrri_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_8), (void*)L_7);
		// currentHand = abcLeft.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_8 = __this->___abcLeft_4;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		__this->___currentHand_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentHand_7), (void*)L_9);
	}

IL_004c:
	{
		// if (abcRight.selectAction.action.IsPressed())
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_10 = __this->___abcRight_5;
		NullCheck(L_10);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_11;
		L_11 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_10, NULL);
		V_0 = L_11;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_12);
		bool L_13;
		L_13 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_12, NULL);
		if (!L_13)
		{
			goto IL_008d;
		}
	}
	{
		// xrri = abcRight.gameObject.GetComponent<XRRayInteractor>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_14 = __this->___abcRight_5;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_14, NULL);
		NullCheck(L_15);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_16;
		L_16 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_15, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		__this->___xrri_8 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_8), (void*)L_16);
		// currentHand = abcRight.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_17 = __this->___abcRight_5;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		__this->___currentHand_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentHand_7), (void*)L_18);
	}

IL_008d:
	{
		// inUse = grabbed = setup = true;
		int32_t L_19 = 1;
		V_1 = (bool)L_19;
		__this->___setup_11 = (bool)L_19;
		bool L_20 = V_1;
		bool L_21 = L_20;
		V_1 = L_21;
		__this->___grabbed_10 = L_21;
		bool L_22 = V_1;
		__this->___inUse_12 = L_22;
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void Rotate::setUnActive(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_setUnActive_m7EFCE3DDDCC4E76B4E91A55489F7008EBB0A1AB0 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// grabbed = inUse = false;
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->___inUse_12 = (bool)L_0;
		bool L_1 = V_0;
		__this->___grabbed_10 = L_1;
		// }
		return;
	}
}
// System.Void Rotate::rotate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_rotate_m2FC51353C183691F053EAAC43C5D5EA8BE238FF5 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (grabbed)
		bool L_0 = __this->___grabbed_10;
		if (!L_0)
		{
			goto IL_01c8;
		}
	}
	{
		// if (setup)
		bool L_1 = __this->___setup_11;
		if (!L_1)
		{
			goto IL_00a9;
		}
	}
	{
		// if (xrri.TryGetCurrent3DRaycastHit(out hit))
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_2 = __this->___xrri_8;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___hit_9);
		NullCheck(L_2);
		bool L_4;
		L_4 = XRRayInteractor_TryGetCurrent3DRaycastHit_m3B0B4ECA2D4B2786F08B42F1BA327D63706BB060(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		// hitAnchor.position = hit.point;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___hitAnchor_6;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_6, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_7, NULL);
		// distance = (transform.position - hitAnchor.position).magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___hitAnchor_6;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_11, NULL);
		V_3 = L_12;
		float L_13;
		L_13 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		__this->___distance_17 = L_13;
	}

IL_0068:
	{
		// oldControlPos = currentHand.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___currentHand_7;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		__this->___oldControlPos_15 = L_15;
		// oldDir = (transform.position - hitAnchor.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___hitAnchor_6;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_19, NULL);
		V_3 = L_20;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		__this->___oldDir_13 = L_21;
		// setup = false;
		__this->___setup_11 = (bool)0;
	}

IL_00a9:
	{
		// newControlPos = currentHand.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___currentHand_7;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		__this->___newControlPos_16 = L_23;
		// Vector3 currentControlDisplacement = oldControlPos - newControlPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = __this->___oldControlPos_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___newControlPos_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_24, L_25, NULL);
		V_0 = L_26;
		// hitAnchor.position = hitAnchor.position - currentControlDisplacement;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___hitAnchor_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___hitAnchor_6;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_30, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_31, NULL);
		// Vector3 newHitAnchorDir = (hitAnchor.position - transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___hitAnchor_6;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_35, NULL);
		V_1 = L_36;
		// newHitAnchorDir = newHitAnchorDir.normalized * distance;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		float L_38 = __this->___distance_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, L_38, NULL);
		V_1 = L_39;
		// hitAnchor.position = transform.position + newHitAnchorDir;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = __this->___hitAnchor_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_43, NULL);
		NullCheck(L_40);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_40, L_44, NULL);
		// newDir = (transform.position - hitAnchor.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = __this->___hitAnchor_6;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_48, NULL);
		V_3 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		__this->___newDir_14 = L_50;
		// Debug.DrawLine(transform.position, hitAnchor.position, Color.red, 0f, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_53 = __this->___hitAnchor_6;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_53, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m09EB01A6F34CB6BCE8EC0A13CAEF4899E2112B52(L_52, L_54, L_55, (0.0f), (bool)0, NULL);
		// Quaternion newRot = Quaternion.FromToRotation(oldDir, newDir);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = __this->___oldDir_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = __this->___newDir_14;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58;
		L_58 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_56, L_57, NULL);
		V_2 = L_58;
		// transform.rotation = newRot * transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_61);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62;
		L_62 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_61, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_60, L_62, NULL);
		NullCheck(L_59);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_59, L_63, NULL);
		// oldControlPos = newControlPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = __this->___newControlPos_16;
		__this->___oldControlPos_15 = L_64;
		// oldDir = newDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = __this->___newDir_14;
		__this->___oldDir_13 = L_65;
	}

IL_01c8:
	{
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m0EE5CC8EB699542BFC438DC3D547D39E442E9EE4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotating::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating_Start_m76DE940F63E90D09F398719674B8905D2B53916E (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotating_Anchor_mDFCF647263B33F3C18C9AC455406E8A5FBEDC467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotating_Detach_m9DEF88702D8BAE7C1B6E290B04A682A7B6506AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotating_U3CStartU3Eb__6_0_m0AC1DAF694865FB378E578F90597C32F87B9EE0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotating_U3CStartU3Eb__6_1_m647C921B37A6D9E9D1AAAFA8273F081706A77EC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// abcLeft.selectAction.action.started+=Anchor;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abcLeft_4;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)Rotating_Anchor_mDFCF647263B33F3C18C9AC455406E8A5FBEDC467_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// abcLeft.selectAction.action.started+=(context)=>handle=abcLeft.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_4 = __this->___abcLeft_4;
		NullCheck(L_4);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5;
		L_5 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)Rotating_U3CStartU3Eb__6_0_m0AC1DAF694865FB378E578F90597C32F87B9EE0C_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_6, L_7, NULL);
		// abcLeft.selectAction.action.canceled+=Detach;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_8 = __this->___abcLeft_4;
		NullCheck(L_8);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_9;
		L_9 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_8, NULL);
		V_0 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, __this, (intptr_t)((void*)Rotating_Detach_m9DEF88702D8BAE7C1B6E290B04A682A7B6506AB5_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_10, L_11, NULL);
		// abcRight.selectAction.action.started+=Anchor;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_12 = __this->___abcRight_5;
		NullCheck(L_12);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_13;
		L_13 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_12, NULL);
		V_0 = L_13;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_15 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_15, __this, (intptr_t)((void*)Rotating_Anchor_mDFCF647263B33F3C18C9AC455406E8A5FBEDC467_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_14, L_15, NULL);
		// abcRight.selectAction.action.started+=(context)=>handle=abcRight.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_16 = __this->___abcRight_5;
		NullCheck(L_16);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_17;
		L_17 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_16, NULL);
		V_0 = L_17;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_19 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_19, __this, (intptr_t)((void*)Rotating_U3CStartU3Eb__6_1_m647C921B37A6D9E9D1AAAFA8273F081706A77EC4_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_18, L_19, NULL);
		// abcRight.selectAction.action.canceled+=Detach;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_20 = __this->___abcRight_5;
		NullCheck(L_20);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_21;
		L_21 = ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline(L_20, NULL);
		V_0 = L_21;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_23 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_23, __this, (intptr_t)((void*)Rotating_Detach_m9DEF88702D8BAE7C1B6E290B04A682A7B6506AB5_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_22, L_23, NULL);
		// }
		return;
	}
}
// System.Void Rotating::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating_Update_m1C3AD46D92DE0407A4EC14F9AAA1FE87327714BA (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, const RuntimeMethod* method) 
{
	{
		// if(anchored){
		bool L_0 = __this->___anchored_7;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// transform.LookAt(handle.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___handle_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		NullCheck(L_1);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_1, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Rotating::Anchor(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating_Anchor_mDFCF647263B33F3C18C9AC455406E8A5FBEDC467 (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Transform temp=transform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		// temp.parent=null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// transform.LookAt(handle.position,Vector3.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___handle_6;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_3);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_3, L_5, L_6, NULL);
		// temp.parent=transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, L_7, NULL);
		// Debug.Log("Pressed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2, NULL);
		// anchored=true;
		__this->___anchored_7 = (bool)1;
		// }
		return;
	}
}
// System.Void Rotating::Detach(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating_Detach_m9DEF88702D8BAE7C1B6E290B04A682A7B6506AB5 (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23166A45A20385F0607F5AD491200A97F7A6296D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Detached");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral23166A45A20385F0607F5AD491200A97F7A6296D, NULL);
		// anchored=false;
		__this->___anchored_7 = (bool)0;
		// }
		return;
	}
}
// System.Void Rotating::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating__ctor_mE4616007FC6FA2F54FAF07E7B93A46F611FA7A7A (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 forward=Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___forward_8 = L_0;
		// private Quaternion rotation=Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_9 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Rotating::<Start>b__6_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating_U3CStartU3Eb__6_0_m0AC1DAF694865FB378E578F90597C32F87B9EE0C (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// abcLeft.selectAction.action.started+=(context)=>handle=abcLeft.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abcLeft_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___handle_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_6), (void*)L_1);
		return;
	}
}
// System.Void Rotating::<Start>b__6_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotating_U3CStartU3Eb__6_1_m647C921B37A6D9E9D1AAAFA8273F081706A77EC4 (Rotating_t47DA35229B7E18A9459AA3CB3626F9F34D55FE81* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// abcRight.selectAction.action.started+=(context)=>handle=abcRight.transform;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abcRight_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___handle_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___handle_6), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Rotator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Start_mE4B0451C7D2FC5AF3258D1E24B0A0CF1C58379C2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotator_Anchor_m7FC1D1C3ED4CFEF5FD8785CF0C18C970B546BC92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rotator_Detach_m7CC46DC73E2987D1E844EE5A9848B003B1A3A4EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// abc.activateAction.action.performed+=Anchor;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abc_4;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)Rotator_Anchor_m7FC1D1C3ED4CFEF5FD8785CF0C18C970B546BC92_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_2, L_3, NULL);
		// abc.activateAction.action.canceled+=Detach;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_4 = __this->___abc_4;
		NullCheck(L_4);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5;
		L_5 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)Rotator_Detach_m7CC46DC73E2987D1E844EE5A9848B003B1A3A4EE_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_mEDB0F4729DEB6075BDB3177DB5A90104D8020D68 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(anchored){
		bool L_0 = __this->___anchored_6;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// transform.forward=(transform.position-handle.position).normalized+forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___handle_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_5, NULL);
		V_0 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___forward_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_7, L_8, NULL);
		NullCheck(L_1);
		Transform_set_forward_mA178B5CF4F0F6133F9AF8ED3A4ECD2C604C60C26(L_1, L_9, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void Rotator::Anchor(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Anchor_m7FC1D1C3ED4CFEF5FD8785CF0C18C970B546BC92 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// rotation=transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		__this->___rotation_8 = L_1;
		// forward=transform.forward-(transform.position-handle.position).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___handle_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_7, NULL);
		V_0 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_9, NULL);
		__this->___forward_7 = L_10;
		// Debug.Log("Pressed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral461E3E44AE80BC4E861DB32ED3691F004543C3A2, NULL);
		// anchored=true;
		__this->___anchored_6 = (bool)1;
		// }
		return;
	}
}
// System.Void Rotator::Detach(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Detach_m7CC46DC73E2987D1E844EE5A9848B003B1A3A4EE (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23166A45A20385F0607F5AD491200A97F7A6296D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Detached");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral23166A45A20385F0607F5AD491200A97F7A6296D, NULL);
		// anchored=false;
		__this->___anchored_6 = (bool)0;
		// }
		return;
	}
}
// System.Void Rotator::FollowHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_FollowHandle_m690036F4CA0205F4D3CE22CBC0DCD3602FA12D45 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 position=abc.positionAction.action.ReadValue<Vector3>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abc_4;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = ActionBasedController_get_positionAction_m754BEEC79908AD0B05827F441039715F3FF9F40A_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE(L_2, InputAction_ReadValue_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m30270520598CDB38962B8367F8AA1B67B79174DE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_m6DD9F22CD049D079A6246125410EFE63DE76FAF2 (Rotator_t9CB1625F0502717B73E19E63A0256F034D3FA223* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 forward=Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___forward_7 = L_0;
		// private Quaternion rotation=Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		__this->___rotation_8 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Side::isAdjacent(Side)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Side_isAdjacent_m38040DE1907ACD243C5EB9A4BFE52E6C4914EA75 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, Side_tF565A181C011C574567477C6D5ABADD72BD917AA* ___s0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral110C2F18C5813FCC8E30386EB22D001E65600E00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DC4388FF3A386D0B58DCEEA1D9A6307947457F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA04D61F571FCE36A1C2A2A6DC28AB3E0DA65F13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD29957B468738324743D2D98A8F2C16F231F0018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEE7A451DB007822CB1786FB135AC02A63245CDA);
		s_Il2CppMethodInitialized = true;
	}
	Side_tF565A181C011C574567477C6D5ABADD72BD917AA* V_0 = NULL;
	Side_tF565A181C011C574567477C6D5ABADD72BD917AA* V_1 = NULL;
	int32_t V_2 = 0;
	Side_tF565A181C011C574567477C6D5ABADD72BD917AA* G_B15_0 = NULL;
	Side_tF565A181C011C574567477C6D5ABADD72BD917AA* G_B18_0 = NULL;
	{
		// Debug.Log("Face check "+sideId+" "+faceId+ " and "+s.sideId+" "+s.faceId);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD29957B468738324743D2D98A8F2C16F231F0018);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD29957B468738324743D2D98A8F2C16F231F0018);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___sideId_6);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int32_t* L_7 = (&__this->___faceId_7);
		String_t* L_8;
		L_8 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral6E2A118D02EEC0264ECB711997DC50620920E7B0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_11 = ___s0;
		NullCheck(L_11);
		int32_t* L_12 = (&L_11->___sideId_6);
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_12, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_10;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_16 = ___s0;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___faceId_7);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// if(s.sideId==sideId){
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_20 = ___s0;
		NullCheck(L_20);
		int32_t L_21 = L_20->___sideId_6;
		int32_t L_22 = __this->___sideId_6;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_00ac;
		}
	}
	{
		// if((Mathf.Abs(x-s.x) + Mathf.Abs(y-s.y))==1){
		int32_t L_23;
		L_23 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(__this, NULL);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_24 = ___s0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(L_24, NULL);
		int32_t L_26;
		L_26 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(((int32_t)il2cpp_codegen_subtract(L_23, L_25)), NULL);
		int32_t L_27;
		L_27 = Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27(__this, NULL);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_28 = ___s0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27(L_28, NULL);
		int32_t L_30;
		L_30 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(((int32_t)il2cpp_codegen_subtract(L_27, L_29)), NULL);
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_26, L_30))) == ((uint32_t)1))))
		{
			goto IL_00a0;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00a0:
	{
		// Debug.Log("Same Side different Face");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAA04D61F571FCE36A1C2A2A6DC28AB3E0DA65F13, NULL);
		// return false;
		return (bool)0;
	}

IL_00ac:
	{
		// else if(s.sideId<4 && sideId<4){
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_31 = ___s0;
		NullCheck(L_31);
		int32_t L_32 = L_31->___sideId_6;
		if ((((int32_t)L_32) >= ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_33 = __this->___sideId_6;
		if ((((int32_t)L_33) >= ((int32_t)4)))
		{
			goto IL_0102;
		}
	}
	{
		// if((sideId+s.sideId)%2==0) return false;
		int32_t L_34 = __this->___sideId_6;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_35 = ___s0;
		NullCheck(L_35);
		int32_t L_36 = L_35->___sideId_6;
		if (((int32_t)(((int32_t)il2cpp_codegen_add(L_34, L_36))%2)))
		{
			goto IL_00d1;
		}
	}
	{
		// if((sideId+s.sideId)%2==0) return false;
		return (bool)0;
	}

IL_00d1:
	{
		// if(s.y==y && Mathf.Abs(s.x-x)==2){
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_37 = ___s0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27(L_37, NULL);
		int32_t L_39;
		L_39 = Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27(__this, NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_39))))
		{
			goto IL_00f6;
		}
	}
	{
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_40 = ___s0;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(L_40, NULL);
		int32_t L_42;
		L_42 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(__this, NULL);
		int32_t L_43;
		L_43 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(((int32_t)il2cpp_codegen_subtract(L_41, L_42)), NULL);
		if ((!(((uint32_t)L_43) == ((uint32_t)2))))
		{
			goto IL_00f6;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_00f6:
	{
		// Debug.Log("Different Side Different Face");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8DC4388FF3A386D0B58DCEEA1D9A6307947457F2, NULL);
		// return false;
		return (bool)0;
	}

IL_0102:
	{
		// Side vSide=(s.sideId>=4)?s:this;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_44 = ___s0;
		NullCheck(L_44);
		int32_t L_45 = L_44->___sideId_6;
		if ((((int32_t)L_45) >= ((int32_t)4)))
		{
			goto IL_010e;
		}
	}
	{
		G_B15_0 = __this;
		goto IL_010f;
	}

IL_010e:
	{
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_46 = ___s0;
		G_B15_0 = L_46;
	}

IL_010f:
	{
		V_0 = G_B15_0;
		// Side hSide=(s.sideId<4)?s:this;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_47 = ___s0;
		NullCheck(L_47);
		int32_t L_48 = L_47->___sideId_6;
		if ((((int32_t)L_48) < ((int32_t)4)))
		{
			goto IL_011c;
		}
	}
	{
		G_B18_0 = __this;
		goto IL_011d;
	}

IL_011c:
	{
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_49 = ___s0;
		G_B18_0 = L_49;
	}

IL_011d:
	{
		V_1 = G_B18_0;
		// if(vSide.sideId==4 && hSide.y==0 || vSide.sideId==5 && hSide.y==2){
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = L_50->___sideId_6;
		if ((!(((uint32_t)L_51) == ((uint32_t)4))))
		{
			goto IL_012f;
		}
	}
	{
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_52 = V_1;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27(L_52, NULL);
		if (!L_53)
		{
			goto IL_0147;
		}
	}

IL_012f:
	{
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___sideId_6;
		if ((!(((uint32_t)L_55) == ((uint32_t)5))))
		{
			goto IL_01cc;
		}
	}
	{
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27(L_56, NULL);
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			goto IL_01cc;
		}
	}

IL_0147:
	{
		// Debug.Log("VSideCheck");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEEE7A451DB007822CB1786FB135AC02A63245CDA, NULL);
		// switch(hSide.sideId){
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = L_58->___sideId_6;
		V_2 = L_59;
		int32_t L_60 = V_2;
		switch (L_60)
		{
			case 0:
			{
				goto IL_0170;
			}
			case 1:
			{
				goto IL_0186;
			}
			case 2:
			{
				goto IL_019c;
			}
			case 3:
			{
				goto IL_01b4;
			}
		}
	}
	{
		goto IL_01cc;
	}

IL_0170:
	{
		// return vSide.faceId==vSide.GetFace(0,hSide.x);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = L_61->___faceId_7;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_63 = V_0;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(L_64, NULL);
		NullCheck(L_63);
		int32_t L_66;
		L_66 = Side_GetFace_m362077FED1E587A7CBC3DEF0BE8370C02B94EF86(L_63, 0, L_65, NULL);
		return (bool)((((int32_t)L_62) == ((int32_t)L_66))? 1 : 0);
	}

IL_0186:
	{
		// return vSide.faceId==vSide.GetFace(hSide.x,2);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->___faceId_7;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_69 = V_0;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(L_70, NULL);
		NullCheck(L_69);
		int32_t L_72;
		L_72 = Side_GetFace_m362077FED1E587A7CBC3DEF0BE8370C02B94EF86(L_69, L_71, 2, NULL);
		return (bool)((((int32_t)L_68) == ((int32_t)L_72))? 1 : 0);
	}

IL_019c:
	{
		// return vSide.faceId==vSide.GetFace(2,2-hSide.x);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = L_73->___faceId_7;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_75 = V_0;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_76 = V_1;
		NullCheck(L_76);
		int32_t L_77;
		L_77 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(L_76, NULL);
		NullCheck(L_75);
		int32_t L_78;
		L_78 = Side_GetFace_m362077FED1E587A7CBC3DEF0BE8370C02B94EF86(L_75, 2, ((int32_t)il2cpp_codegen_subtract(2, L_77)), NULL);
		return (bool)((((int32_t)L_74) == ((int32_t)L_78))? 1 : 0);
	}

IL_01b4:
	{
		// return vSide.faceId==vSide.GetFace(2-hSide.x,0);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_79 = V_0;
		NullCheck(L_79);
		int32_t L_80 = L_79->___faceId_7;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_81 = V_0;
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00(L_82, NULL);
		NullCheck(L_81);
		int32_t L_84;
		L_84 = Side_GetFace_m362077FED1E587A7CBC3DEF0BE8370C02B94EF86(L_81, ((int32_t)il2cpp_codegen_subtract(2, L_83)), 0, NULL);
		return (bool)((((int32_t)L_80) == ((int32_t)L_84))? 1 : 0);
	}

IL_01cc:
	{
		// Debug.Log("Side problem");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral110C2F18C5813FCC8E30386EB22D001E65600E00, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Boolean Side::isAdjacent(Facet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Side_isAdjacent_mC752963224E2AC7ADFC72A1FAC0FEE53E6D51AFC (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* ___facet0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Side_tF565A181C011C574567477C6D5ABADD72BD917AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return isAdjacent((Side)facet);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_0 = ___facet0;
		bool L_1;
		L_1 = Side_isAdjacent_m38040DE1907ACD243C5EB9A4BFE52E6C4914EA75(__this, ((Side_tF565A181C011C574567477C6D5ABADD72BD917AA*)CastclassClass((RuntimeObject*)L_0, Side_tF565A181C011C574567477C6D5ABADD72BD917AA_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.Int32 Side::GetFace(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_GetFace_m362077FED1E587A7CBC3DEF0BE8370C02B94EF86 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, int32_t ___x10, int32_t ___y11, const RuntimeMethod* method) 
{
	{
		// return x1+3*y1;
		int32_t L_0 = ___x10;
		int32_t L_1 = ___y11;
		return ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(3, L_1))));
	}
}
// System.Int32 Side::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_get_x_mCF0D47CCD4B7FD78BC448A472C4A582645AF2A00 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		// get => faceId%3;
		int32_t L_0 = __this->___faceId_7;
		return ((int32_t)(L_0%3));
	}
}
// System.Int32 Side::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_get_y_mC93D18D2328FD6C50A3CB08EFE6BC3122DCFBB27 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		// get => faceId/3;
		int32_t L_0 = __this->___faceId_7;
		return ((int32_t)(L_0/3));
	}
}
// System.String Side::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Side_ToString_mEABDCF21E33979F983AA9CBC9603FB6E7E6F0F6D (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		// return ""+sideId+""+faceId;
		int32_t* L_0 = (&__this->___sideId_6);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		int32_t* L_2 = (&__this->___faceId_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Int32 Side::get_SideId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_get_SideId_m951AE44986640FCD823FB5A868802363A4E7E154 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		// get { return sideId; }
		int32_t L_0 = __this->___sideId_6;
		return L_0;
	}
}
// System.Int32 Side::get_FaceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Side_get_FaceId_m61141BEB29E89109DB577B612E7CC727D2E5B09D (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		// get { return faceId; }
		int32_t L_0 = __this->___faceId_7;
		return L_0;
	}
}
// System.Boolean Side::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Side_get_isOn_m42AEADD7DC03C5ECE0E90ED04B343918529D1D73 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		// public override bool isOn {get => mr.enabled;}
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ((Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)__this)->___mr_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_0, NULL);
		return L_1;
	}
}
// System.Void Side::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Side__ctor_m8B64B75E4039B8763D92D47C5113A615CA1523E3 (Side_tF565A181C011C574567477C6D5ABADD72BD917AA* __this, const RuntimeMethod* method) 
{
	{
		Facet__ctor_mFE9D9D79F93658CFE3C8913F1CA14FE3474738E8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SphereTrace::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_Start_m654804E31A47FE65B507524E8D483B41B486573A (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DC01C1BA6D0D58EBE15B97D28F08D421C24908);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceLayer = LayerMask.NameToLayer("Face");
		int32_t L_0;
		L_0 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral88DC01C1BA6D0D58EBE15B97D28F08D421C24908, NULL);
		__this->___faceLayer_12 = L_0;
		// faces = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___faces_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___faces_11), (void*)L_1);
		// initControllers();
		SphereTrace_initControllers_m1F38794E450FC4B92215E513F5F647301F112FC9(__this, NULL);
		// }
		return;
	}
}
// System.Void SphereTrace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_Update_m7F0300CE71A98BBF8D798F7351FA5EDC66B81CE8 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) 
{
	{
		// drawFaces();
		SphereTrace_drawFaces_m627AC146540FCE097B2A98BFDFE33ED642D56676(__this, NULL);
		// }
		return;
	}
}
// System.Void SphereTrace::initControllers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_initControllers_m1F38794E450FC4B92215E513F5F647301F112FC9 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereTrace_SetActive_m12621CD85F762165C744140B81948E6C96633E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SphereTrace_setUnActive_mE7EFD7E56CE62415340BB6465552EB63AB9C0B04_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// abcLeft.activateAction.action.started += SetActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_0 = __this->___abcLeft_4;
		NullCheck(L_0);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_1;
		L_1 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)SphereTrace_SetActive_m12621CD85F762165C744140B81948E6C96633E3E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// abcLeft.activateAction.action.canceled += setUnActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_4 = __this->___abcLeft_4;
		NullCheck(L_4);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_5;
		L_5 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)SphereTrace_setUnActive_mE7EFD7E56CE62415340BB6465552EB63AB9C0B04_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_6, L_7, NULL);
		// abcRight.activateAction.action.started += SetActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_8 = __this->___abcRight_5;
		NullCheck(L_8);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_9;
		L_9 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_8, NULL);
		V_0 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_11 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_11, __this, (intptr_t)((void*)SphereTrace_SetActive_m12621CD85F762165C744140B81948E6C96633E3E_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_10, L_11, NULL);
		// abcRight.activateAction.action.canceled += setUnActive;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_12 = __this->___abcRight_5;
		NullCheck(L_12);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_13;
		L_13 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_12, NULL);
		V_0 = L_13;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_15 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_15, __this, (intptr_t)((void*)SphereTrace_setUnActive_mE7EFD7E56CE62415340BB6465552EB63AB9C0B04_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void SphereTrace::SetActive(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_SetActive_m12621CD85F762165C744140B81948E6C96633E3E (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// if (!inUse)
		bool L_0 = __this->___inUse_10;
		if (L_0)
		{
			goto IL_0078;
		}
	}
	{
		// if (abcLeft.activateAction.action.IsPressed())
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_1 = __this->___abcLeft_4;
		NullCheck(L_1);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_2;
		L_2 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_1, NULL);
		V_0 = L_2;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_3, NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// xrri = abcLeft.gameObject.GetComponent<XRRayInteractor>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_5 = __this->___abcLeft_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_7;
		L_7 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_6, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		__this->___xrri_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_7), (void*)L_7);
	}

IL_0038:
	{
		// if (abcRight.activateAction.action.IsPressed())
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_8 = __this->___abcRight_5;
		NullCheck(L_8);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_9;
		L_9 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_8, NULL);
		V_0 = L_9;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_10;
		L_10 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_0), NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = InputAction_IsPressed_m40DF920F0E7D18170B62666DA2A2131AD336A301(L_10, NULL);
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		// xrri = abcRight.gameObject.GetComponent<XRRayInteractor>();
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_12 = __this->___abcRight_5;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		NullCheck(L_13);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_14;
		L_14 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_13, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		__this->___xrri_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_7), (void*)L_14);
	}

IL_0068:
	{
		// selected = inUse = true;
		int32_t L_15 = 1;
		V_1 = (bool)L_15;
		__this->___inUse_10 = (bool)L_15;
		bool L_16 = V_1;
		__this->___selected_9 = L_16;
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void SphereTrace::setUnActive(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_setUnActive_mE7EFD7E56CE62415340BB6465552EB63AB9C0B04 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// selected = inUse = false;
		int32_t L_0 = 0;
		V_0 = (bool)L_0;
		__this->___inUse_10 = (bool)L_0;
		bool L_1 = V_0;
		__this->___selected_9 = L_1;
		// clearFaces();
		SphereTrace_clearFaces_m0DE4FF5AE87EFDC1768CA648638C0583F5421E40(__this, NULL);
		// faces.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___faces_11;
		NullCheck(L_2);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_2, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SphereTrace::clearFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_clearFaces_m0DE4FF5AE87EFDC1768CA648638C0583F5421E40 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1602CD594F39B601B0A34667ED3E03283DFB92E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// int i = 0;
		V_0 = 0;
		// string sus = "[ ";
		V_1 = _stringLiteral37D21BB37C237B2168B65E84848CD02A9744D8C8;
		// foreach(GameObject c in faces)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___faces_11;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_0016_1:
			{
				// foreach(GameObject c in faces)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_3 = L_2;
				// MeshRenderer m = c.GetComponent<MeshRenderer>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_3;
				NullCheck(L_3);
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_4;
				L_4 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_3, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
				// m.material = defaultMat;
				MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_5 = L_4;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___defaultMat_6;
				NullCheck(L_5);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_5, L_6, NULL);
				// m.enabled = false;
				NullCheck(L_5);
				Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
				// if (i < faces.Count-1)
				int32_t L_7 = V_0;
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___faces_11;
				NullCheck(L_8);
				int32_t L_9;
				L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
				if ((((int32_t)L_7) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, 1)))))
				{
					goto IL_005a_1;
				}
			}
			{
				// sus += c.name + ", ";
				String_t* L_10 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_3;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
				String_t* L_13;
				L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_10, L_12, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
				V_1 = L_13;
				goto IL_0067_1;
			}

IL_005a_1:
			{
				// sus += c.name;
				String_t* L_14 = V_1;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_15, NULL);
				String_t* L_17;
				L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_14, L_16, NULL);
				V_1 = L_17;
			}

IL_0067_1:
			{
				// i++;
				int32_t L_18 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
			}

IL_006b_1:
			{
				// foreach(GameObject c in faces)
				bool L_19;
				L_19 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0084;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		// sus += " ]";
		String_t* L_20 = V_1;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_20, _stringLiteralE1602CD594F39B601B0A34667ED3E03283DFB92E, NULL);
		V_1 = L_21;
		// Debug.Log(sus);
		String_t* L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_22, NULL);
		// }
		return;
	}
}
// System.Boolean SphereTrace::isAdjacent(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SphereTrace_isAdjacent_m9E22E839B3FDFFB5F63058FE6A9B0F10CBBC6BF0 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___current0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Side_tF565A181C011C574567477C6D5ABADD72BD917AA* V_0 = NULL;
	{
		// if(faces.Count<1) return true;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___faces_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_1) >= ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		// if(faces.Count<1) return true;
		return (bool)1;
	}

IL_0010:
	{
		// Side oldSide = faces[faces.Count-1].GetComponent<Side>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___faces_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___faces_11;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_3, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_2, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_6;
		L_6 = GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619(L_5, GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619_RuntimeMethod_var);
		// Side cSide = current.GetComponent<Side>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = ___current0;
		NullCheck(L_7);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_8;
		L_8 = GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619(L_7, GameObject_GetComponent_TisSide_tF565A181C011C574567477C6D5ABADD72BD917AA_m137A011F159CBDE67A6B12E7B72F8FC0F08A1619_RuntimeMethod_var);
		V_0 = L_8;
		// adj=oldSide.isAdjacent(cSide);
		Side_tF565A181C011C574567477C6D5ABADD72BD917AA* L_9 = V_0;
		NullCheck(L_6);
		bool L_10;
		L_10 = Side_isAdjacent_m38040DE1907ACD243C5EB9A4BFE52E6C4914EA75(L_6, L_9, NULL);
		// Debug.Log(adj);
		bool L_11 = L_10;
		bool L_12 = L_11;
		RuntimeObject* L_13 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_13, NULL);
		// return adj;
		return L_11;
	}
}
// System.Void SphereTrace::drawFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace_drawFaces_m627AC146540FCE097B2A98BFDFE33ED642D56676 (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_1 = NULL;
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* V_2 = NULL;
	{
		// if (selected && xrri.TryGetCurrent3DRaycastHit(out hit))
		bool L_0 = __this->___selected_9;
		if (!L_0)
		{
			goto IL_01ca;
		}
	}
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_1 = __this->___xrri_7;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2 = (&__this->___hit_8);
		NullCheck(L_1);
		bool L_3;
		L_3 = XRRayInteractor_TryGetCurrent3DRaycastHit_m3B0B4ECA2D4B2786F08B42F1BA327D63706BB060(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_01ca;
		}
	}
	{
		// int currentLayer=hit.transform.gameObject.layer;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_4 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_4, NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_6, NULL);
		// if (currentLayer == faceLayer)
		int32_t L_8 = __this->___faceLayer_12;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_01ca;
		}
	}
	{
		// GameObject currentObj = hit.transform.gameObject;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_9 = (&__this->___hit_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_9, NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		V_0 = L_11;
		// MeshRenderer currentMeshRenderer = currentObj.GetComponent<MeshRenderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13;
		L_13 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_12, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		V_1 = L_13;
		// if (!faces.Contains(currentObj) && isAdjacent(currentObj)){
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___faces_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_14, L_15, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_0083;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_0;
		bool L_18;
		L_18 = SphereTrace_isAdjacent_m9E22E839B3FDFFB5F63058FE6A9B0F10CBBC6BF0(__this, L_17, NULL);
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		// faces.Add(currentObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___faces_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		NullCheck(L_19);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_19, L_20, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// currentMeshRenderer.enabled = true;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_21 = V_1;
		NullCheck(L_21);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_21, (bool)1, NULL);
	}

IL_0083:
	{
		// if (faces.Count > 1)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___faces_11;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_22, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_23) <= ((int32_t)1)))
		{
			goto IL_01ca;
		}
	}
	{
		// if (currentObj == faces[faces.Count-2])
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = __this->___faces_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_26 = __this->___faces_11;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_26, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 2)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, L_28, NULL);
		if (!L_29)
		{
			goto IL_013d;
		}
	}
	{
		// MeshRenderer lastMeshRenderer = faces[faces.Count-1].GetComponent<MeshRenderer>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->___faces_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_31 = __this->___faces_11;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_31, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_30);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_30, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_33);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_34;
		L_34 = GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D(L_33, GameObject_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m7FF948365C38BC39333D82B235A7C4EAD219960D_RuntimeMethod_var);
		V_2 = L_34;
		// if (lastMeshRenderer.material.color != defaultMat.color)
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_35 = V_2;
		NullCheck(L_35);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_36;
		L_36 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_35, NULL);
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_36, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_38 = __this->___defaultMat_6;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_38, NULL);
		bool L_40;
		L_40 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_011e;
		}
	}
	{
		// lastMeshRenderer.material.color -= new Color(1.0f, 0.0f, 0.0f);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_41 = V_2;
		NullCheck(L_41);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42;
		L_42 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_41, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43 = L_42;
		NullCheck(L_43);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		L_44 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_43, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		memset((&L_45), 0, sizeof(L_45));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_45), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		L_46 = Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline(L_44, L_45, NULL);
		NullCheck(L_43);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_43, L_46, NULL);
		goto IL_0125;
	}

IL_011e:
	{
		// lastMeshRenderer.enabled = false;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_47 = V_2;
		NullCheck(L_47);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_47, (bool)0, NULL);
	}

IL_0125:
	{
		// faces.RemoveAt(faces.Count-1);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_48 = __this->___faces_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_49 = __this->___faces_11;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_49, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_48);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_48, ((int32_t)il2cpp_codegen_subtract(L_50, 1)), List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
	}

IL_013d:
	{
		// if (currentObj != faces[faces.Count-1] && currentObj != faces[faces.Count-2] && faces.Contains(currentObj) && isAdjacent(currentObj))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_52 = __this->___faces_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_53 = __this->___faces_11;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_53, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_52, ((int32_t)il2cpp_codegen_subtract(L_54, 1)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_51, L_55, NULL);
		if (!L_56)
		{
			goto IL_01ca;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_58 = __this->___faces_11;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_59 = __this->___faces_11;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_59, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_58);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_58, ((int32_t)il2cpp_codegen_subtract(L_60, 2)), List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_57, L_61, NULL);
		if (!L_62)
		{
			goto IL_01ca;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_63 = __this->___faces_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = V_0;
		NullCheck(L_63);
		bool L_65;
		L_65 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_63, L_64, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (!L_65)
		{
			goto IL_01ca;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = V_0;
		bool L_67;
		L_67 = SphereTrace_isAdjacent_m9E22E839B3FDFFB5F63058FE6A9B0F10CBBC6BF0(__this, L_66, NULL);
		if (!L_67)
		{
			goto IL_01ca;
		}
	}
	{
		// faces.Add(currentObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_68 = __this->___faces_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_0;
		NullCheck(L_68);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_68, L_69, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// currentMeshRenderer.material.color += new Color(1.0f, 0.0f, 0.0f);
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_70 = V_1;
		NullCheck(L_70);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_71;
		L_71 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_70, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_72 = L_71;
		NullCheck(L_72);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_73;
		L_73 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_72, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74;
		memset((&L_74), 0, sizeof(L_74));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_74), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75;
		L_75 = Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline(L_73, L_74, NULL);
		NullCheck(L_72);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_72, L_75, NULL);
	}

IL_01ca:
	{
		// }
		return;
	}
}
// System.Void SphereTrace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SphereTrace__ctor_m00741A404D8DC14D4BE8163312183DFF697EF9EC (SphereTrace_t8C5CBE70C4D3A5A228AE4A2A759AA198BD5BF5A1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tracer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_Start_m8A913A30809F6096AB4EEF744155E311F5BAC19E (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracer_U3CStartU3Eb__16_0_mA54E96DAE7291B7B3334A18249444C14937A21CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracer_U3CStartU3Eb__16_1_mDC6E2E15E7E087DEF33E52EB6EA7955EC0EDD1F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracer_U3CStartU3Eb__16_2_mAFA3B6E4CD5BB46F8051013E0732A23A63873C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracer_U3CStartU3Eb__16_3_m75A31422AE6E5D653DCD45AE6BCFCD82AEC09493_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tracer_U3CStartU3Eb__16_4_mE569D8DE257D2815C8AA426931E5F1F2814CC3A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* V_0 = NULL;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* V_1 = NULL;
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* V_2 = NULL;
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// xrri=GetComponent<XRRayInteractor>();
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0;
		L_0 = Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4(__this, Component_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_m0347BCF4E0361AA2A76B2D7C9C21327E8C4ADFE4_RuntimeMethod_var);
		__this->___xrri_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_9), (void*)L_0);
		// lv=GetComponent<XRInteractorLineVisual>();
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_1;
		L_1 = Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160(__this, Component_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m5D8A8F360840FDED02943C3A2AB04222BF59E160_RuntimeMethod_var);
		__this->___lv_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lv_10), (void*)L_1);
		// Action<InputAction.CallbackContext> startAction=(context)=>{if(!passStarted) passStarted=true;
		//                                                             };
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_2 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_2, __this, (intptr_t)((void*)Tracer_U3CStartU3Eb__16_0_mA54E96DAE7291B7B3334A18249444C14937A21CB_RuntimeMethod_var), NULL);
		V_0 = L_2;
		// Action<InputAction.CallbackContext> stopAction=(context)=>{if(passStarted) passStarted=false;
		//                         if(keepPass) PrintPassKeep(); else PrintPass();};
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)Tracer_U3CStartU3Eb__16_1_mDC6E2E15E7E087DEF33E52EB6EA7955EC0EDD1F8_RuntimeMethod_var), NULL);
		V_1 = L_3;
		// Action<InputAction.CallbackContext> changeColor=(context)=>{idColor++;
		//                         idColor%=colorSpan.Count;
		//                         };
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_4 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_4, __this, (intptr_t)((void*)Tracer_U3CStartU3Eb__16_2_mAFA3B6E4CD5BB46F8051013E0732A23A63873C98_RuntimeMethod_var), NULL);
		V_2 = L_4;
		// abcLeft.activateAction.action.started+=startAction;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_5 = __this->___abcLeft_7;
		NullCheck(L_5);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_6;
		L_6 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_5, NULL);
		V_3 = L_6;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7;
		L_7 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_8 = V_0;
		NullCheck(L_7);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_7, L_8, NULL);
		// abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft;};
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_9 = __this->___abcLeft_7;
		NullCheck(L_9);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_10;
		L_10 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_9, NULL);
		V_3 = L_10;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11;
		L_11 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, __this, (intptr_t)((void*)Tracer_U3CStartU3Eb__16_3_m75A31422AE6E5D653DCD45AE6BCFCD82AEC09493_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_11, L_12, NULL);
		// abcLeft.activateAction.action.canceled+=stopAction;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_13 = __this->___abcLeft_7;
		NullCheck(L_13);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_14;
		L_14 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_13, NULL);
		V_3 = L_14;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_15;
		L_15 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_16 = V_1;
		NullCheck(L_15);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_15, L_16, NULL);
		// abcRight.activateAction.action.started+=startAction;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_17 = __this->___abcRight_8;
		NullCheck(L_17);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_18;
		L_18 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_17, NULL);
		V_3 = L_18;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_19;
		L_19 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_20 = V_0;
		NullCheck(L_19);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_19, L_20, NULL);
		// abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight;};
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_21 = __this->___abcRight_8;
		NullCheck(L_21);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_22;
		L_22 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_21, NULL);
		V_3 = L_22;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_24 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_24, __this, (intptr_t)((void*)Tracer_U3CStartU3Eb__16_4_mE569D8DE257D2815C8AA426931E5F1F2814CC3A5_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_23, L_24, NULL);
		// abcRight.activateAction.action.canceled+=stopAction;
		ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* L_25 = __this->___abcRight_8;
		NullCheck(L_25);
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_26;
		L_26 = ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline(L_25, NULL);
		V_3 = L_26;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_27;
		L_27 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47((&V_3), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_28 = V_1;
		NullCheck(L_27);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_27, L_28, NULL);
		// iarLeft.action.started+=changeColor;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_29 = __this->___iarLeft_18;
		NullCheck(L_29);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30;
		L_30 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_29, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_31 = V_2;
		NullCheck(L_30);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_30, L_31, NULL);
		// iarRight.action.started+=changeColor;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_32 = __this->___iarRight_19;
		NullCheck(L_32);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33;
		L_33 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_32, NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_34 = V_2;
		NullCheck(L_33);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_33, L_34, NULL);
		// }
		return;
	}
}
// System.Void Tracer::PrintPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_PrintPass_mD7CEB56C784DB0A56E84894BDB29A724221DD318 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B2_0 = NULL;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// int count=pass.Count;
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_0 = __this->___pass_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_inline(L_0, Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_RuntimeMethod_var);
		V_0 = L_1;
		// string p=active+" ";
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_2 = __this->___active_11;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_5;
		// active.TurnOff();
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_6 = __this->___active_11;
		NullCheck(L_6);
		Facet_TurnOff_m8B0506FCD89FA63A548B3541BE12213A1AB8918D(L_6, NULL);
		// active=null;
		__this->___active_11 = (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___active_11), (void*)(Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)NULL);
		// for(int i=0;i<count;i++){
		V_2 = 0;
		goto IL_0076;
	}

IL_003f:
	{
		// pass.Peek().TurnOff();
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_7 = __this->___pass_4;
		NullCheck(L_7);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_8;
		L_8 = Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91(L_7, Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91_RuntimeMethod_var);
		NullCheck(L_8);
		Facet_TurnOff_m8B0506FCD89FA63A548B3541BE12213A1AB8918D(L_8, NULL);
		// p+=pass.Pop()+" ";
		String_t* L_9 = V_1;
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_10 = __this->___pass_4;
		NullCheck(L_10);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_11;
		L_11 = Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9(L_10, Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9_RuntimeMethod_var);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_12 = L_11;
		G_B5_0 = L_12;
		G_B5_1 = L_9;
		if (L_12)
		{
			G_B6_0 = L_12;
			G_B6_1 = L_9;
			goto IL_0062;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0067;
	}

IL_0062:
	{
		NullCheck(G_B6_0);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_13;
		G_B7_1 = G_B6_1;
	}

IL_0067:
	{
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B7_1, G_B7_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_14;
		// for(int i=0;i<count;i++){
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0076:
	{
		// for(int i=0;i<count;i++){
		int32_t L_16 = V_2;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_003f;
		}
	}
	{
		// print(p);
		String_t* L_18 = V_1;
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_18, NULL);
		// }
		return;
	}
}
// System.Void Tracer::PrintPassKeep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_PrintPassKeep_mB562D9983476C861B07BA7F98972453E9D71237E (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBABD617B0A5A1FB228876BA87C08F608FF37F3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEEFB360D43DCCF72325B60678208550237FC3E15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m20F569A1D95BE2691C64ECDEA3C2938AAD4D33C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B2_0 = NULL;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	{
		// List<Facet> temp=new List<Facet>(pass);
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_0 = __this->___pass_4;
		List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* L_1 = (List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2*)il2cpp_codegen_object_new(List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBABD617B0A5A1FB228876BA87C08F608FF37F3E1(L_1, L_0, List_1__ctor_mBABD617B0A5A1FB228876BA87C08F608FF37F3E1_RuntimeMethod_var);
		V_0 = L_1;
		// string p=active+" ";
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_2 = __this->___active_11;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_5;
		// pass.Push(active);
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_6 = __this->___pass_4;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_7 = __this->___active_11;
		NullCheck(L_6);
		Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F(L_6, L_7, Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F_RuntimeMethod_var);
		// active=null;
		__this->___active_11 = (Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___active_11), (void*)(Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)NULL);
		// for(int i=temp.Count-1;i>=0;i--){
		List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mEEFB360D43DCCF72325B60678208550237FC3E15_inline(L_8, List_1_get_Count_mEEFB360D43DCCF72325B60678208550237FC3E15_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_006f;
	}

IL_004c:
	{
		// p+=temp[i]+" ";
		String_t* L_10 = V_1;
		List_1_tF41A442C6C97A4DF6A2D359AF1E88171F34651D2* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_13;
		L_13 = List_1_get_Item_m20F569A1D95BE2691C64ECDEA3C2938AAD4D33C7(L_11, L_12, List_1_get_Item_m20F569A1D95BE2691C64ECDEA3C2938AAD4D33C7_RuntimeMethod_var);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_14 = L_13;
		G_B5_0 = L_14;
		G_B5_1 = L_10;
		if (L_14)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_10;
			goto IL_005b;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		G_B7_1 = G_B5_1;
		goto IL_0060;
	}

IL_005b:
	{
		NullCheck(G_B6_0);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B6_0);
		G_B7_0 = L_15;
		G_B7_1 = G_B6_1;
	}

IL_0060:
	{
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B7_1, G_B7_0, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_16;
		// for(int i=temp.Count-1;i>=0;i--){
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_006f:
	{
		// for(int i=temp.Count-1;i>=0;i--){
		int32_t L_18 = V_2;
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		// print(p);
		String_t* L_19 = V_1;
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_19, NULL);
		// }
		return;
	}
}
// System.Void Tracer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_FixedUpdate_mD692627B844B8F17B98A04FB5B9CC1B7C52671A7 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TracePath(colorSpan[idColor], traceback);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_0 = __this->___colorSpan_14;
		int32_t L_1 = __this->___idColor_15;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F(L_0, L_1, List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		bool L_3 = __this->___traceback_16;
		Tracer_TracePath_m0F7072BF89339F50BA6E590ADB995270282BECC4(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void Tracer::TracePath(UnityEngine.Color,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_TracePath_m0F7072BF89339F50BA6E590ADB995270282BECC4 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, bool ___traceback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* V_0 = NULL;
	{
		// if(passStarted && xrri.TryGetCurrent3DRaycastHit(out hit)){
		bool L_0 = __this->___passStarted_13;
		if (!L_0)
		{
			goto IL_00fc;
		}
	}
	{
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_1 = __this->___xrri_9;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_2 = (&__this->___hit_12);
		NullCheck(L_1);
		bool L_3;
		L_3 = XRRayInteractor_TryGetCurrent3DRaycastHit_m3B0B4ECA2D4B2786F08B42F1BA327D63706BB060(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_00fc;
		}
	}
	{
		// if(active==null){
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_4 = __this->___active_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// active=hit.transform.GetComponent<Facet>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___hit_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_6, NULL);
		NullCheck(L_7);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_8;
		L_8 = Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE(L_7, Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE_RuntimeMethod_var);
		__this->___active_11 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___active_11), (void*)L_8);
		// if(active!=null)
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_9 = __this->___active_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00fc;
		}
	}
	{
		// active.TurnOn(color);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_11 = __this->___active_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___color0;
		NullCheck(L_11);
		Facet_TurnOn_m275C2985D4E0EEFBB76CEF3DE9A9870D0CBC0B7E(L_11, L_12, NULL);
		return;
	}

IL_0063:
	{
		// Facet temp=hit.transform.GetComponent<Facet>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (&__this->___hit_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_13, NULL);
		NullCheck(L_14);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_15;
		L_15 = Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE(L_14, Component_GetComponent_TisFacet_t85869DAC35E37B57259F8CF6271DC874D2E92537_m411C8CB2F8B2676BD15266A349104E47D0E336AE_RuntimeMethod_var);
		V_0 = L_15;
		// if(temp!=null && temp!=active){
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_00fc;
		}
	}
	{
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_18 = V_0;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_19 = __this->___active_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_00fc;
		}
	}
	{
		// if(pass.Count>0 && temp==pass.Peek()){
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_21 = __this->___pass_4;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_inline(L_21, Stack_1_get_Count_m6A75803E82F967AA938707DE4F1B80792893EF11_RuntimeMethod_var);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_23 = V_0;
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_24 = __this->___pass_4;
		NullCheck(L_24);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_25;
		L_25 = Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91(L_24, Stack_1_Peek_m709620C60005BE4790B146E2ED6E989B6A645C91_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00ca;
		}
	}
	{
		// active.TurnOff(color);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_27 = __this->___active_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = ___color0;
		NullCheck(L_27);
		Facet_TurnOff_mEF88BA027ED7C723F7137970DF8CCD9E32E2AB61(L_27, L_28, NULL);
		// active=pass.Pop();
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_29 = __this->___pass_4;
		NullCheck(L_29);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_30;
		L_30 = Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9(L_29, Stack_1_Pop_mCC1B622DAEE83D8CC05890CF3D2865F85980B5A9_RuntimeMethod_var);
		__this->___active_11 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___active_11), (void*)L_30);
		return;
	}

IL_00ca:
	{
		// else if(temp.isAdjacent(active) ){
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_31 = V_0;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_32 = __this->___active_11;
		NullCheck(L_31);
		bool L_33;
		L_33 = VirtualFuncInvoker1< bool, Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* >::Invoke(4 /* System.Boolean Facet::isAdjacent(Facet) */, L_31, L_32);
		if (!L_33)
		{
			goto IL_00fc;
		}
	}
	{
		// pass.Push(active);
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_34 = __this->___pass_4;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_35 = __this->___active_11;
		NullCheck(L_34);
		Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F(L_34, L_35, Stack_1_Push_m0CAA5B836FF650685E307F0D114E9D68238CBC0F_RuntimeMethod_var);
		// active=temp;
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_36 = V_0;
		__this->___active_11 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___active_11), (void*)L_36);
		// active.TurnOn(color);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_37 = __this->___active_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38 = ___color0;
		NullCheck(L_37);
		Facet_TurnOn_m275C2985D4E0EEFBB76CEF3DE9A9870D0CBC0B7E(L_37, L_38, NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void Tracer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer__ctor_m52859CB46E5D334735348FA6CCA65A3E52B99B25 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m7E91DDBF5FE451BC1041AB846DD5AC603189028D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Stack<Facet> pass=new Stack<Facet>();
		Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9* L_0 = (Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9*)il2cpp_codegen_object_new(Stack_1_t941DB0C0493778268DE58BC87A700249A51482D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m7E91DDBF5FE451BC1041AB846DD5AC603189028D(L_0, Stack_1__ctor_m7E91DDBF5FE451BC1041AB846DD5AC603189028D_RuntimeMethod_var);
		__this->___pass_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pass_4), (void*)L_0);
		// private List<Color> colorSpan=new List<Color>();
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_1 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D(L_1, List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		__this->___colorSpan_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorSpan_14), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Tracer::<Start>b__16_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_U3CStartU3Eb__16_0_mA54E96DAE7291B7B3334A18249444C14937A21CB (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// Action<InputAction.CallbackContext> startAction=(context)=>{if(!passStarted) passStarted=true;
		bool L_0 = __this->___passStarted_13;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Action<InputAction.CallbackContext> startAction=(context)=>{if(!passStarted) passStarted=true;
		__this->___passStarted_13 = (bool)1;
	}

IL_000f:
	{
		// };
		return;
	}
}
// System.Void Tracer::<Start>b__16_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_U3CStartU3Eb__16_1_mDC6E2E15E7E087DEF33E52EB6EA7955EC0EDD1F8 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// Action<InputAction.CallbackContext> stopAction=(context)=>{if(passStarted) passStarted=false;
		bool L_0 = __this->___passStarted_13;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Action<InputAction.CallbackContext> stopAction=(context)=>{if(passStarted) passStarted=false;
		__this->___passStarted_13 = (bool)0;
	}

IL_000f:
	{
		// if(keepPass) PrintPassKeep(); else PrintPass();};
		bool L_1 = __this->___keepPass_17;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if(keepPass) PrintPassKeep(); else PrintPass();};
		Tracer_PrintPassKeep_mB562D9983476C861B07BA7F98972453E9D71237E(__this, NULL);
		return;
	}

IL_001e:
	{
		// if(keepPass) PrintPassKeep(); else PrintPass();};
		Tracer_PrintPass_mD7CEB56C784DB0A56E84894BDB29A724221DD318(__this, NULL);
		// if(keepPass) PrintPassKeep(); else PrintPass();};
		return;
	}
}
// System.Void Tracer::<Start>b__16_2(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_U3CStartU3Eb__16_2_mAFA3B6E4CD5BB46F8051013E0732A23A63873C98 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action<InputAction.CallbackContext> changeColor=(context)=>{idColor++;
		int32_t L_0 = __this->___idColor_15;
		__this->___idColor_15 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// idColor%=colorSpan.Count;
		int32_t L_1 = __this->___idColor_15;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_2 = __this->___colorSpan_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_inline(L_2, List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_RuntimeMethod_var);
		__this->___idColor_15 = ((int32_t)(L_1%L_3));
		// };
		return;
	}
}
// System.Void Tracer::<Start>b__16_3(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_U3CStartU3Eb__16_3_m75A31422AE6E5D653DCD45AE6BCFCD82AEC09493 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft;};
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___xrriLeft_5;
		__this->___xrri_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_9), (void*)L_0);
		// abcLeft.activateAction.action.started+=(context)=>{xrri=xrriLeft;};
		return;
	}
}
// System.Void Tracer::<Start>b__16_4(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tracer_U3CStartU3Eb__16_4_mE569D8DE257D2815C8AA426931E5F1F2814CC3A5 (Tracer_t0DFCBDC56C649B7247FC03FAB9B51D970810F75F* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	{
		// abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight;};
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_0 = __this->___xrriRight_6;
		__this->___xrri_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xrri_9), (void*)L_0);
		// abcRight.activateAction.action.started+=(context)=>{xrri=xrriRight;};
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TracerV2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TracerV2_Start_mE7D5CEC35B06D9A5D207AAF7D99683ABDB7011E6 (TracerV2_tC2047EDF2061E262F98F212E39119732D3BC2C66* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TracerV2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TracerV2_Update_mA946A119EFBB6CA950CC9D29F8B73B96E7A626E7 (TracerV2_tC2047EDF2061E262F98F212E39119732D3BC2C66* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TracerV2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TracerV2__ctor_mC562E75FAE20D520CA929FE1944AB6029325B63E (TracerV2_tC2047EDF2061E262F98F212E39119732D3BC2C66* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Triangle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_Start_m536E82967EF52A26343AF79FEA77273421355A02 (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Facet_Start_m6B109A9636EAED9A2279644261D4F6ED96F6C2BA(__this, NULL);
		// }
		return;
	}
}
// System.Void Triangle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle_Update_mC18C5C55BB3499E5E80E369F770F829E5687D07E (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Triangle::isAdjacent(Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle_isAdjacent_m217B98C5DCBBD6827E17AD38971AA59C174AF515 (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* ___t0, const RuntimeMethod* method) 
{
	{
		// return((smallT<0 || t.smallT<0) && bigT==t.bigT) || (smallT==t.smallT && bigT!=t.bigT);
		int32_t L_0 = __this->___smallT_7;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* L_1 = ___t0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___smallT_7;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}

IL_0012:
	{
		int32_t L_3 = __this->___bigT_6;
		Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* L_4 = ___t0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___bigT_6;
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0042;
		}
	}

IL_0020:
	{
		int32_t L_6 = __this->___smallT_7;
		Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* L_7 = ___t0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___smallT_7;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = __this->___bigT_6;
		Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* L_10 = ___t0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___bigT_6;
		return (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0040:
	{
		return (bool)0;
	}

IL_0042:
	{
		return (bool)1;
	}
}
// System.Boolean Triangle::isAdjacent(Facet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle_isAdjacent_mB647FA5550030670F9530DDF2B638CB981CA81FF (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* ___facet0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return isAdjacent((Triangle) facet);
		Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537* L_0 = ___facet0;
		bool L_1;
		L_1 = Triangle_isAdjacent_m217B98C5DCBBD6827E17AD38971AA59C174AF515(__this, ((Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19*)CastclassClass((RuntimeObject*)L_0, Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19_il2cpp_TypeInfo_var)), NULL);
		return L_1;
	}
}
// System.String Triangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Triangle_ToString_m665EF90FF13E632954B8CF2E647FE0D305C7EE55 (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ""+bigT+smallT+color;
		int32_t* L_0 = (&__this->___bigT_6);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		int32_t* L_2 = (&__this->___smallT_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ((Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)__this)->___color_5;
		V_0 = L_4;
		String_t* L_5;
		L_5 = Color_ToString_m0018DE2184B3377CCA6FBD72D5D47886DC669147((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_3, L_5, NULL);
		return L_6;
	}
}
// System.Boolean Triangle::get_isOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle_get_isOn_mC2EC4F1540642B16522267462AEE04D9C17EA705 (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, const RuntimeMethod* method) 
{
	{
		// return mr.enabled;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0 = ((Facet_t85869DAC35E37B57259F8CF6271DC874D2E92537*)__this)->___mr_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_0, NULL);
		return L_1;
	}
}
// System.Void Triangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_mDEF6174BFF9D55A9F6EC7BC2BA298C69DFB8A53C (Triangle_t9A37C12D19D7A60603B65AAD0DB387BBB0E5FC19* __this, const RuntimeMethod* method) 
{
	{
		Facet__ctor_mFE9D9D79F93658CFE3C8913F1CA14FE3474738E8(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_m8503E764714E7AEF4E3CCBFDB1E09C930E87EFE4_inline (float ___b0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a1;
		float L_1 = L_0.___r_0;
		float L_2 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___a1;
		float L_4 = L_3.___g_1;
		float L_5 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a1;
		float L_7 = L_6.___b_2;
		float L_8 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a1;
		float L_10 = L_9.___a_3;
		float L_11 = ___b0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Addition_mA7A51CACA49ED8D23D3D9CA3A0092D32F657E053_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Subtraction_mF003448D819F2A41405BB6D85F1563CDA900B07F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___a0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___b1;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___a0;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___b1;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___a0;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___b1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___a0;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___b1;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_selectAction_mB7F0F7A3FDA18D5753FFC539AB4D9A9451C78C3C_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_SelectAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_SelectAction_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_activateAction_mD97B355F98BF302391A562F2A661DB97CA72C845_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ActivateAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_ActivateAction_29;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ActionBasedController_get_positionAction_m754BEEC79908AD0B05827F441039715F3FF9F40A_inline (ActionBasedController_tB9D8E7E013191571EA5507EA68057414B6969A68* __this, const RuntimeMethod* method) 
{
	{
		// get => m_PositionAction;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD L_0 = __this->___m_PositionAction_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
