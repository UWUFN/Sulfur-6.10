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

// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.FocusWidget
// (Public, BlueprintCallable, BlueprintEvent)

void USpectatedPlayerSwitcher_C::FocusWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.FocusWidget");

	USpectatedPlayerSwitcher_C_FocusWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatedPlayerSwitcher_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.PreConstruct");

	USpectatedPlayerSwitcher_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.OnDisplayedTargetsUpdated
// (Event, Public, BlueprintEvent)

void USpectatedPlayerSwitcher_C::OnDisplayedTargetsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.OnDisplayedTargetsUpdated");

	USpectatedPlayerSwitcher_C_OnDisplayedTargetsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.ExecuteUbergraph_SpectatedPlayerSwitcher
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpectatedPlayerSwitcher_C::ExecuteUbergraph_SpectatedPlayerSwitcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpectatedPlayerSwitcher.SpectatedPlayerSwitcher_C.ExecuteUbergraph_SpectatedPlayerSwitcher");

	USpectatedPlayerSwitcher_C_ExecuteUbergraph_SpectatedPlayerSwitcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
