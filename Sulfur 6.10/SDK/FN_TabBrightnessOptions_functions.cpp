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

// Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Set_Default_Call_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Set Default Call Out");

	UTabBrightnessOptions_C_Set_Default_Call_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data
// (Public, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Initialize_Data()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Initialize Data");

	UTabBrightnessOptions_C_Initialize_Data_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTabBrightnessOptions_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Construct");

	UTabBrightnessOptions_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::UpdateOptionsTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.UpdateOptionsTab");

	UTabBrightnessOptions_C_UpdateOptionsTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::CenterOnTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.CenterOnTab");

	UTabBrightnessOptions_C_CenterOnTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabBrightnessOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature");

	UTabBrightnessOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.Setting Value Changed
// (BlueprintCallable, BlueprintEvent)

void UTabBrightnessOptions_C::Setting_Value_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.Setting Value Changed");

	UTabBrightnessOptions_C_Setting_Value_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UTabBrightnessOptions_C::BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature");

	UTabBrightnessOptions_C_BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature_Params params;
	params.Item = Item;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTabBrightnessOptions_C::ExecuteUbergraph_TabBrightnessOptions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TabBrightnessOptions.TabBrightnessOptions_C.ExecuteUbergraph_TabBrightnessOptions");

	UTabBrightnessOptions_C_ExecuteUbergraph_TabBrightnessOptions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
