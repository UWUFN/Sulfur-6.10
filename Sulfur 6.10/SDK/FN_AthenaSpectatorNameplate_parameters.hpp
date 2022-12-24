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

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.PreConstruct
struct UAthenaSpectatorNameplate_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerDataSet
struct UAthenaSpectatorNameplate_C_OnPlayerDataSet_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnDistanceStateChanged
struct UAthenaSpectatorNameplate_C_OnDistanceStateChanged_Params
{
	EAthenaSpectatorNameplateDistanceState*            NewDistanceState;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamColorChanged
struct UAthenaSpectatorNameplate_C_OnTeamColorChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               InTeamColor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnTeamNumberChanged
struct UAthenaSpectatorNameplate_C_OnTeamNumberChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               InTeamNumber;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.OnPlayerNameChanged
struct UAthenaSpectatorNameplate_C_OnPlayerNameChanged_Params
{
	class UAthenaRemotePlayerViewData**                InPlayerData;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    InPlayerName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function AthenaSpectatorNameplate.AthenaSpectatorNameplate_C.ExecuteUbergraph_AthenaSpectatorNameplate
struct UAthenaSpectatorNameplate_C_ExecuteUbergraph_AthenaSpectatorNameplate_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
