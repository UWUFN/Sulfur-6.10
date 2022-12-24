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

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_IsCubeSinking
struct ACube_Dest_Scripting_C_OnRep_IsCubeSinking_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_LakeState
struct ACube_Dest_Scripting_C_OnRep_LakeState_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.UpdateCorruption
struct ACube_Dest_Scripting_C_UpdateCorruption_Params
{
	float                                              PercentComplete;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.ConvertLakeAudioActor
struct ACube_Dest_Scripting_C_ConvertLakeAudioActor_Params
{
	class ABP_AmbientLakeAudioActor_C*                 Lake;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CorruptRiverAudioActor
struct ACube_Dest_Scripting_C_CorruptRiverAudioActor_Params
{
	class ABP_AmbientSplineActor_C*                    River;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_LakeTurnedOn
struct ACube_Dest_Scripting_C_OnRep_LakeTurnedOn_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.OnRep_CubeSinking
struct ACube_Dest_Scripting_C_OnRep_CubeSinking_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.UserConstructionScript
struct ACube_Dest_Scripting_C_UserConstructionScript_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeStartSinking
struct ACube_Dest_Scripting_C_CubeStartSinking_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeStopSinking
struct ACube_Dest_Scripting_C_CubeStopSinking_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeSplash
struct ACube_Dest_Scripting_C_CubeSplash_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.LakeTurnOn
struct ACube_Dest_Scripting_C_LakeTurnOn_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.ReceiveBeginPlay
struct ACube_Dest_Scripting_C_ReceiveBeginPlay_Params
{
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.CubeDone
struct ACube_Dest_Scripting_C_CubeDone_Params
{
	int                                                CurrentIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cube_Dest_Scripting.Cube_Dest_Scripting_C.ExecuteUbergraph_Cube_Dest_Scripting
struct ACube_Dest_Scripting_C_ExecuteUbergraph_Cube_Dest_Scripting_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
