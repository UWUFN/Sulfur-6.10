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

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.UserConstructionScript
struct AGCL_TNT_Fuse_Cook_C_UserConstructionScript_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ReceiveBeginPlay
struct AGCL_TNT_Fuse_Cook_C_ReceiveBeginPlay_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ModulateFuseSound
struct AGCL_TNT_Fuse_Cook_C_ModulateFuseSound_Params
{
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.OnLoopingStart
struct AGCL_TNT_Fuse_Cook_C_OnLoopingStart_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UParticleSystemComponent*>*           ParticleComponents;                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UAudioComponent*>*                    AudioComponents;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GCL_TNT_Fuse_Cook.GCL_TNT_Fuse_Cook_C.ExecuteUbergraph_GCL_TNT_Fuse_Cook
struct AGCL_TNT_Fuse_Cook_C_ExecuteUbergraph_GCL_TNT_Fuse_Cook_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
