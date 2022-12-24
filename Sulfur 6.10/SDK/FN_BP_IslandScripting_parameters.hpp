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

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_IslandPosition
struct ABP_IslandScripting_C_OnRep_IslandPosition_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.ConvertDebugPosToTime
struct ABP_IslandScripting_C_ConvertDebugPosToTime_Params
{
	float                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CachedTime
struct ABP_IslandScripting_C_OnRep_CachedTime_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.SetupDebug
struct ABP_IslandScripting_C_SetupDebug_Params
{
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_CubeletGrowthstage
struct ABP_IslandScripting_C_OnRep_CubeletGrowthstage_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnRep_BeaconActive
struct ABP_IslandScripting_C_OnRep_BeaconActive_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.SetupCrackProgress
struct ABP_IslandScripting_C_SetupCrackProgress_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.GetIslandPositionFromTime
struct ABP_IslandScripting_C_GetIslandPositionFromTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_IslandScripting.BP_IslandScripting_C.SetupSplineLengthArray
struct ABP_IslandScripting_C_SetupSplineLengthArray_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.UserConstructionScript
struct ABP_IslandScripting_C_UserConstructionScript_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnLoaded_55D3F973490D118E6671D19F32CF8F64
struct ABP_IslandScripting_C_OnLoaded_55D3F973490D118E6671D19F32CF8F64_Params
{
	class UClass*                                      Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_9931B789480C855772A26B8B418C71A1
struct ABP_IslandScripting_C_OnEventEnded_9931B789480C855772A26B8B418C71A1_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_9931B789480C855772A26B8B418C71A1
struct ABP_IslandScripting_C_OnEventUpdated_9931B789480C855772A26B8B418C71A1_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_9931B789480C855772A26B8B418C71A1
struct ABP_IslandScripting_C_OnEventActive_9931B789480C855772A26B8B418C71A1_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3
struct ABP_IslandScripting_C_OnEventEnded_C6F400BE49C068496ADDFAAD2584BBF3_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3
struct ABP_IslandScripting_C_OnEventUpdated_C6F400BE49C068496ADDFAAD2584BBF3_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3
struct ABP_IslandScripting_C_OnEventActive_C6F400BE49C068496ADDFAAD2584BBF3_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventEnded_8E09FC134C440494335C22A68BF144C5
struct ABP_IslandScripting_C_OnEventEnded_8E09FC134C440494335C22A68BF144C5_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventUpdated_8E09FC134C440494335C22A68BF144C5
struct ABP_IslandScripting_C_OnEventUpdated_8E09FC134C440494335C22A68BF144C5_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.OnEventActive_8E09FC134C440494335C22A68BF144C5
struct ABP_IslandScripting_C_OnEventActive_8E09FC134C440494335C22A68BF144C5_Params
{
	struct FString                                     EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTimespan                                   TimeUntilEnd;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FTimespan                                   TimeSinceBegin;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_IslandScripting.BP_IslandScripting_C.BindCalendarEvents
struct ABP_IslandScripting_C_BindCalendarEvents_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.GetIslandPosition
struct ABP_IslandScripting_C_GetIslandPosition_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.ReceiveBeginPlay
struct ABP_IslandScripting_C_ReceiveBeginPlay_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.ToggleAreaEffect
struct ABP_IslandScripting_C_ToggleAreaEffect_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.SetupRemainingVariables
struct ABP_IslandScripting_C_SetupRemainingVariables_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.TrySetIslandLocation
struct ABP_IslandScripting_C_TrySetIslandLocation_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.ExecuteUbergraph_BP_IslandScripting
struct ABP_IslandScripting_C_ExecuteUbergraph_BP_IslandScripting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_IslandScripting.BP_IslandScripting_C.DataAssetLoaded__DelegateSignature
struct ABP_IslandScripting_C_DataAssetLoaded__DelegateSignature_Params
{
};

// Function BP_IslandScripting.BP_IslandScripting_C.IslandPositionUpdate__DelegateSignature
struct ABP_IslandScripting_C_IslandPositionUpdate__DelegateSignature_Params
{
	struct FVector                                     Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
