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

// Function InputBlockedWarning.InputBlockedWarning_C.Construct
struct UInputBlockedWarning_C_Construct_Params
{
};

// Function InputBlockedWarning.InputBlockedWarning_C.InputFiltered
struct UInputBlockedWarning_C_InputFiltered_Params
{
	ECommonInputType                                   AttemptedInput;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function InputBlockedWarning.InputBlockedWarning_C.WarningFinished
struct UInputBlockedWarning_C_WarningFinished_Params
{
};

// Function InputBlockedWarning.InputBlockedWarning_C.ExecuteUbergraph_InputBlockedWarning
struct UInputBlockedWarning_C_ExecuteUbergraph_InputBlockedWarning_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
