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

// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageLeft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonAboutWidget_C::HandlePageLeft(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageLeft");

	UAthenaSeasonAboutWidget_C_HandlePageLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageRight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bPassThrough                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonAboutWidget_C::HandlePageRight(bool* bPassThrough)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageRight");

	UAthenaSeasonAboutWidget_C_HandlePageRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bPassThrough != nullptr)
		*bPassThrough = params.bPassThrough;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonAboutWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*           Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UAthenaSeasonAboutWidget_C::BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonAboutWidget_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnActivated");

	UAthenaSeasonAboutWidget_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAthenaSeasonAboutWidget_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.OnDeactivated");

	UAthenaSeasonAboutWidget_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAthenaSeasonAboutWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.Construct");

	UAthenaSeasonAboutWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandleWidgetCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFortItem*               Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonAboutWidget_C::HandleWidgetCreated(class UWidget* Widget, class UFortItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandleWidgetCreated");

	UAthenaSeasonAboutWidget_C_HandleWidgetCreated_Params params;
	params.Widget = Widget;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaSeasonAboutWidget_C::BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature");

	UAthenaSeasonAboutWidget_C_BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)

void UAthenaSeasonAboutWidget_C::BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature");

	UAthenaSeasonAboutWidget_C_BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.ExecuteUbergraph_AthenaSeasonAboutWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAthenaSeasonAboutWidget_C::ExecuteUbergraph_AthenaSeasonAboutWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.ExecuteUbergraph_AthenaSeasonAboutWidget");

	UAthenaSeasonAboutWidget_C_ExecuteUbergraph_AthenaSeasonAboutWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
