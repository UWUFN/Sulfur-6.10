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

// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.GetListItemObject
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UOptionsMenuInputOneKeyDisplayOnly_C::GetListItemObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.GetListItemObject");

	UOptionsMenuInputOneKeyDisplayOnly_C_GetListItemObject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UOptionsMenuInputOneKeyDisplayOnly_C::BP_OnEntryReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnEntryReleased");

	UOptionsMenuInputOneKeyDisplayOnly_C_BP_OnEntryReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsExpanded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKeyDisplayOnly_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemExpansionChanged");

	UOptionsMenuInputOneKeyDisplayOnly_C_BP_OnItemExpansionChanged_Params params;
	params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKeyDisplayOnly_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.BP_OnItemSelectionChanged");

	UOptionsMenuInputOneKeyDisplayOnly_C_BP_OnItemSelectionChanged_Params params;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                 ListItemObject                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKeyDisplayOnly_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.OnListItemObjectSet");

	UOptionsMenuInputOneKeyDisplayOnly_C_OnListItemObjectSet_Params params;
	params.ListItemObject = ListItemObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKeyDisplayOnly_C::ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly");

	UOptionsMenuInputOneKeyDisplayOnly_C_ExecuteUbergraph_OptionsMenuInputOneKeyDisplayOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.UnbindClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_in_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UOptionsMenuInputOneKey_C* Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UOptionsMenuInputOneKeyDisplayOnly_C::UnbindClicked__DelegateSignature(int Number_in_List, class UOptionsMenuInputOneKey_C* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.UnbindClicked__DelegateSignature");

	UOptionsMenuInputOneKeyDisplayOnly_C_UnbindClicked__DelegateSignature_Params params;
	params.Number_in_List = Number_in_List;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.Input Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Number_in_List                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Primary_Button              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOptionsMenuInputOneKeyDisplayOnly_C::Input_Clicked__DelegateSignature(int Number_in_List, bool Is_Primary_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function OptionsMenuInputOneKeyDisplayOnly.OptionsMenuInputOneKeyDisplayOnly_C.Input Clicked__DelegateSignature");

	UOptionsMenuInputOneKeyDisplayOnly_C_Input_Clicked__DelegateSignature_Params params;
	params.Number_in_List = Number_in_List;
	params.Is_Primary_Button = Is_Primary_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
