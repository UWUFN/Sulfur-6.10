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

// Function InputBlockedWarning.InputBlockedWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UInputBlockedWarning_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputBlockedWarning.InputBlockedWarning_C.Construct");

	UInputBlockedWarning_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputBlockedWarning.InputBlockedWarning_C.InputFiltered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType               AttemptedInput                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputBlockedWarning_C::InputFiltered(ECommonInputType AttemptedInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputBlockedWarning.InputBlockedWarning_C.InputFiltered");

	UInputBlockedWarning_C_InputFiltered_Params params;
	params.AttemptedInput = AttemptedInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputBlockedWarning.InputBlockedWarning_C.WarningFinished
// (BlueprintCallable, BlueprintEvent)

void UInputBlockedWarning_C::WarningFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function InputBlockedWarning.InputBlockedWarning_C.WarningFinished");

	UInputBlockedWarning_C_WarningFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function InputBlockedWarning.InputBlockedWarning_C.ExecuteUbergraph_InputBlockedWarning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UInputBlockedWarning_C::ExecuteUbergraph_InputBlockedWarning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InputBlockedWarning.InputBlockedWarning_C.ExecuteUbergraph_InputBlockedWarning");

	UInputBlockedWarning_C_ExecuteUbergraph_InputBlockedWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
