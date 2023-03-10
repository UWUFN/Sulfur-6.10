// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CameraTypeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating* SpectatorController            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType           New_Cam_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::CameraTypeChanged(class AFortPlayerControllerSpectating* SpectatorController, ESpectatorCameraType New_Cam_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CameraTypeChanged");

	UFortReplayCameraSettingsTab_C_CameraTypeChanged_Params params;
	params.SpectatorController = SpectatorController;
	params.New_Cam_Type = New_Cam_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetOutsideSafeZoneOpacityWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::SetOutsideSafeZoneOpacityWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetOutsideSafeZoneOpacityWidget");

	UFortReplayCameraSettingsTab_C_SetOutsideSafeZoneOpacityWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetNameplateViewDistanceWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::SetNameplateViewDistanceWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetNameplateViewDistanceWidget");

	UFortReplayCameraSettingsTab_C_SetNameplateViewDistanceWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.HideBlendSettingsInReplays
// (Public, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::HideBlendSettingsInReplays()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.HideBlendSettingsInReplays");

	UFortReplayCameraSettingsTab_C_HideBlendSettingsInReplays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPAutoFollowWidget
// (Private, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::SetTPAutoFollowWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPAutoFollowWidget");

	UFortReplayCameraSettingsTab_C_SetTPAutoFollowWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPDistanceToSubjectWidget
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::SetTPDistanceToSubjectWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetTPDistanceToSubjectWidget");

	UFortReplayCameraSettingsTab_C_SetTPDistanceToSubjectWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ResetToDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::ResetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ResetToDefault");

	UFortReplayCameraSettingsTab_C_ResetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CenterOnTab
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.CenterOnTab");

	UFortReplayCameraSettingsTab_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnCameraTypeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerSpectating** FortPlayerControllerSpectating (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESpectatorCameraType*          CameraType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::OnCameraTypeChanged(class AFortPlayerControllerSpectating** FortPlayerControllerSpectating, ESpectatorCameraType* CameraType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnCameraTypeChanged");

	UFortReplayCameraSettingsTab_C_OnCameraTypeChanged_Params params;
	params.FortPlayerControllerSpectating = FortPlayerControllerSpectating;
	params.CameraType = CameraType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetWidgetValues
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::SetWidgetValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.SetWidgetValues");

	UFortReplayCameraSettingsTab_C_SetWidgetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.InitializeWidgets
// (Event, Protected, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::InitializeWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.InitializeWidgets");

	UFortReplayCameraSettingsTab_C_InitializeWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__CameraCollision_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__NamePlates_K2Node_ComponentBoundEvent_1_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__PlayerOutlines_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__RelevancyZone_K2Node_ComponentBoundEvent_3_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__TPAutoFollow_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__TPDistanceToSubject_K2Node_ComponentBoundEvent_0_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Destruct");

	UFortReplayCameraSettingsTab_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__DamageEffects_K2Node_ComponentBoundEvent_29_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.Construct");

	UFortReplayCameraSettingsTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UFortReplayCameraSettingsTab_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.OnActivated");

	UFortReplayCameraSettingsTab_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__ShareLensSettings_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__BlendSettings_K2Node_ComponentBoundEvent_2_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__NameViewDistance_K2Node_ComponentBoundEvent_3_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__StormEffects_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature(float Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__OutsideSafeZoneOpacity_K2Node_ComponentBoundEvent_6_SliderChanged__DelegateSignature_Params params;
	params.Slider_Value = Slider_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection Changed__DelegateSignature");

	UFortReplayCameraSettingsTab_C_BndEvt__MapWeaponTracers_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.PreConstruct");

	UFortReplayCameraSettingsTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ExecuteUbergraph_FortReplayCameraSettingsTab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFortReplayCameraSettingsTab_C::ExecuteUbergraph_FortReplayCameraSettingsTab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FortReplayCameraSettingsTab.FortReplayCameraSettingsTab_C.ExecuteUbergraph_FortReplayCameraSettingsTab");

	UFortReplayCameraSettingsTab_C_ExecuteUbergraph_FortReplayCameraSettingsTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
