#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CameraTypeChanged
struct UFortReplayCameraSettingsTab_C_CameraTypeChanged_Params
{
	class AFortPlayerControllerSpectating*             SpectatorController;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESpectatorCameraType                               New_Cam_Type;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetOutsideSafeZoneOpacityWidget
struct UFortReplayCameraSettingsTab_C_SetOutsideSafeZoneOpacityWidget_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetNameplateViewDistanceWidget
struct UFortReplayCameraSettingsTab_C_SetNameplateViewDistanceWidget_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.HideBlendSettingsInReplays
struct UFortReplayCameraSettingsTab_C_HideBlendSettingsInReplays_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPAutoFollowWidget
struct UFortReplayCameraSettingsTab_C_SetTPAutoFollowWidget_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPDistanceToSubjectWidget
struct UFortReplayCameraSettingsTab_C_SetTPDistanceToSubjectWidget_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ResetToDefault
struct UFortReplayCameraSettingsTab_C_ResetToDefault_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CenterOnTab
struct UFortReplayCameraSettingsTab_C_CenterOnTab_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnCameraTypeChanged
struct UFortReplayCameraSettingsTab_C_OnCameraTypeChanged_Params
{
	class AFortPlayerControllerSpectating**            FortPlayerControllerSpectating;                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESpectatorCameraType*                              CameraType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetWidgetValues
struct UFortReplayCameraSettingsTab_C_SetWidgetValues_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.InitializeWidgets
struct UFortReplayCameraSettingsTab_C_InitializeWidgets_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Destruct
struct UFortReplayCameraSettingsTab_C_Destruct_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Construct
struct UFortReplayCameraSettingsTab_C_Construct_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnActivated
struct UFortReplayCameraSettingsTab_C_OnActivated_Params
{
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature_Params
{
	float                                              Slider_Value;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection Changed__DelegateSignature
struct UFortReplayCameraSettingsTab_C_BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature_Params
{
	int                                                Selected_Index;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.PreConstruct
struct UFortReplayCameraSettingsTab_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ExecuteUbergraph_FortReplayCameraSettingsTab
struct UFortReplayCameraSettingsTab_C_ExecuteUbergraph_FortReplayCameraSettingsTab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
