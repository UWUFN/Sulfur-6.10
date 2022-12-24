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

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.CalculateTraceDistance
struct AB_Rifle_Sniper_Heavy_Athena_C_CalculateTraceDistance_Params
{
	struct FVector                                     StartPoint;                                               // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.UserConstructionScript
struct AB_Rifle_Sniper_Heavy_Athena_C_UserConstructionScript_Params
{
};

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ReceiveTick
struct AB_Rifle_Sniper_Heavy_Athena_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_Rifle_Sniper_Heavy_Athena.B_Rifle_Sniper_Heavy_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena
struct AB_Rifle_Sniper_Heavy_Athena_C_ExecuteUbergraph_B_Rifle_Sniper_Heavy_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
