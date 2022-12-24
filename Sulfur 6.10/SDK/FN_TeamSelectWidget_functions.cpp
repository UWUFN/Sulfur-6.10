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

// Function TeamSelectWidget.TeamSelectWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamSelectWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSelectWidget.TeamSelectWidget_C.Construct");

	UTeamSelectWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTeamSelectWidget_C::BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature");

	UTeamSelectWidget_C_BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTeamSelectWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	UTeamSelectWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__TeamRotator_K2Node_ComponentBoundEvent_92_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Selected_Index                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamSelectWidget_C::BndEvt__TeamRotator_K2Node_ComponentBoundEvent_92_Selection_Changed__DelegateSignature(int Selected_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSelectWidget.TeamSelectWidget_C.BndEvt__TeamRotator_K2Node_ComponentBoundEvent_92_Selection Changed__DelegateSignature");

	UTeamSelectWidget_C_BndEvt__TeamRotator_K2Node_ComponentBoundEvent_92_Selection_Changed__DelegateSignature_Params params;
	params.Selected_Index = Selected_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamSelectWidget.TeamSelectWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UTeamSelectWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSelectWidget.TeamSelectWidget_C.OnActivated");

	UTeamSelectWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamSelectWidget.TeamSelectWidget_C.ExecuteUbergraph_TeamSelectWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamSelectWidget_C::ExecuteUbergraph_TeamSelectWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamSelectWidget.TeamSelectWidget_C.ExecuteUbergraph_TeamSelectWidget");

	UTeamSelectWidget_C_ExecuteUbergraph_TeamSelectWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
