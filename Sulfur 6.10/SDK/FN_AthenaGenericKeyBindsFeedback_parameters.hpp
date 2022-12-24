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

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.RefreshGhostModeKeys
struct UAthenaGenericKeyBindsFeedback_C_RefreshGhostModeKeys_Params
{
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.GetKeybindInputType
struct UAthenaGenericKeyBindsFeedback_C_GetKeybindInputType_Params
{
	ECommonInputType                                   InputType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.Construct
struct UAthenaGenericKeyBindsFeedback_C_Construct_Params
{
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HideFeedback
struct UAthenaGenericKeyBindsFeedback_C_HideFeedback_Params
{
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.ShowFeedback
struct UAthenaGenericKeyBindsFeedback_C_ShowFeedback_Params
{
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.OnKeybindsChanged_Bind
struct UAthenaGenericKeyBindsFeedback_C_OnKeybindsChanged_Bind_Params
{
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HandleOnGhostModeChanged
struct UAthenaGenericKeyBindsFeedback_C_HandleOnGhostModeChanged_Params
{
	bool                                               bEnteredGhostMode;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.HandleOnEnterExitVehicle
struct UAthenaGenericKeyBindsFeedback_C_HandleOnEnterExitVehicle_Params
{
};

// Function AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C.ExecuteUbergraph_AthenaGenericKeyBindsFeedback
struct UAthenaGenericKeyBindsFeedback_C_ExecuteUbergraph_AthenaGenericKeyBindsFeedback_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
