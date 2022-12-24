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

// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateActionDetailsContext
// (Protected, BlueprintCallable, BlueprintEvent)

void UGlobalActionKeybindWidget_C::PropagateActionDetailsContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateActionDetailsContext");

	UGlobalActionKeybindWidget_C_PropagateActionDetailsContext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetActionDetailsContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGlobalActionDetailsFunctionContext Value                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UGlobalActionKeybindWidget_C::SetActionDetailsContext(const struct FFortGlobalActionDetailsFunctionContext& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetActionDetailsContext");

	UGlobalActionKeybindWidget_C_SetActionDetailsContext_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetGlobalAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortGlobalAction              Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalActionKeybindWidget_C::SetGlobalAction(EFortGlobalAction Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetGlobalAction");

	UGlobalActionKeybindWidget_C_SetGlobalAction_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateGlobalAction
// (Protected, BlueprintCallable, BlueprintEvent)

void UGlobalActionKeybindWidget_C::PropagateGlobalAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateGlobalAction");

	UGlobalActionKeybindWidget_C_PropagateGlobalAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGlobalActionKeybindWidget_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.OnInitialized");

	UGlobalActionKeybindWidget_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.ExecuteUbergraph_GlobalActionKeybindWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalActionKeybindWidget_C::ExecuteUbergraph_GlobalActionKeybindWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.ExecuteUbergraph_GlobalActionKeybindWidget");

	UGlobalActionKeybindWidget_C_ExecuteUbergraph_GlobalActionKeybindWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
