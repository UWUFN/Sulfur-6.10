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

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.UserConstructionScript
struct AB_RocketLauncher_Military_Athena_C_UserConstructionScript_Params
{
};

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.Muzzle Flash FX
struct AB_RocketLauncher_Military_Athena_C_Muzzle_Flash_FX_Params
{
	bool*                                              Persistent_Fire;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.OnPlayReloadFX
struct AB_RocketLauncher_Military_Athena_C_OnPlayReloadFX_Params
{
	TEnumAsByte<EFortReloadFXState>*                   ReloadStage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.SoundFX
struct AB_RocketLauncher_Military_Athena_C_SoundFX_Params
{
	struct FName                                       EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EmitterTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ParticleTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ResetDoOnce
struct AB_RocketLauncher_Military_Athena_C_ResetDoOnce_Params
{
};

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ExecuteUbergraph_B_RocketLauncher_Military_Athena
struct AB_RocketLauncher_Military_Athena_C_ExecuteUbergraph_B_RocketLauncher_Military_Athena_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
