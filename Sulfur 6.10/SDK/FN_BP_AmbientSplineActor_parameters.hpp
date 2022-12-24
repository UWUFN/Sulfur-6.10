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

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.UserConstructionScript
struct ABP_AmbientSplineActor_C_UserConstructionScript_Params
{
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveBeginPlay
struct ABP_AmbientSplineActor_C_ReceiveBeginPlay_Params
{
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.Check Closest Point
struct ABP_AmbientSplineActor_C_Check_Closest_Point_Params
{
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ReceiveTick
struct ABP_AmbientSplineActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AmbientSplineActor.BP_AmbientSplineActor_C.ExecuteUbergraph_BP_AmbientSplineActor
struct ABP_AmbientSplineActor_C_ExecuteUbergraph_BP_AmbientSplineActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
