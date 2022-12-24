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

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.GetTimespanValue
struct UChallengeBundleLockedReasonDisplay_C_GetTimespanValue_Params
{
	struct FTimespan                                   Result;                                                   // (Parm, OutParm)
};

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.HandleTick
struct UChallengeBundleLockedReasonDisplay_C_HandleTick_Params
{
	class UObject*                                     Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetTimespanSource
struct UChallengeBundleLockedReasonDisplay_C_SetTimespanSource_Params
{
	TScriptInterface<class UFortTimespanDataSource>    Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.UpdateLockReasonDisplay
struct UChallengeBundleLockedReasonDisplay_C_UpdateLockReasonDisplay_Params
{
};

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.SetLockReason
struct UChallengeBundleLockedReasonDisplay_C_SetLockReason_Params
{
	struct FFortChallengeBundleInfoLockedReason        Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.Construct
struct UChallengeBundleLockedReasonDisplay_C_Construct_Params
{
};

// Function ChallengeBundleLockedReasonDisplay.ChallengeBundleLockedReasonDisplay_C.ExecuteUbergraph_ChallengeBundleLockedReasonDisplay
struct UChallengeBundleLockedReasonDisplay_C_ExecuteUbergraph_ChallengeBundleLockedReasonDisplay_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
