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

// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.HandleActionSourceValueChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionDetailsSourceKeybindWidget_C::HandleActionSourceValueChange(class UObject* Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.HandleActionSourceValueChange");

	UActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.BindActionSourceEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDetailsSourceKeybindWidget_C::BindActionSourceEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.BindActionSourceEvents");

	UActionDetailsSourceKeybindWidget_C_BindActionSourceEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UnbindActionSourceEvents
// (Public, BlueprintCallable, BlueprintEvent)

void UActionDetailsSourceKeybindWidget_C::UnbindActionSourceEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UnbindActionSourceEvents");

	UActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.SetActionSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UFortGlobalActionDetailsDataSource> Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActionDetailsSourceKeybindWidget_C::SetActionSource(const TScriptInterface<class UFortGlobalActionDetailsDataSource>& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.SetActionSource");

	UActionDetailsSourceKeybindWidget_C_SetActionSource_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UpdateInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UActionDetailsSourceKeybindWidget_C::UpdateInputAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UpdateInputAction");

	UActionDetailsSourceKeybindWidget_C_UpdateInputAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
