// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_RocketLauncher_Military_Athena_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.UserConstructionScript");

	AB_RocketLauncher_Military_Athena_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Persistent_Fire                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Military_Athena_C::Muzzle_Flash_FX(bool* Persistent_Fire)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.Muzzle Flash FX");

	AB_RocketLauncher_Military_Athena_C_Muzzle_Flash_FX_Params params;
	params.Persistent_Fire = Persistent_Fire;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<EFortReloadFXState>* ReloadStage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Military_Athena_C::OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.OnPlayReloadFX");

	AB_RocketLauncher_Military_Athena_C_OnPlayReloadFX_Params params;
	params.ReloadStage = ReloadStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.SoundFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EmitterTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ParticleTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Normal                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Military_Athena_C::SoundFX(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.SoundFX");

	AB_RocketLauncher_Military_Athena_C_SoundFX_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ResetDoOnce
// (BlueprintCallable, BlueprintEvent)

void AB_RocketLauncher_Military_Athena_C::ResetDoOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ResetDoOnce");

	AB_RocketLauncher_Military_Athena_C_ResetDoOnce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ExecuteUbergraph_B_RocketLauncher_Military_Athena
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AB_RocketLauncher_Military_Athena_C::ExecuteUbergraph_B_RocketLauncher_Military_Athena(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C.ExecuteUbergraph_B_RocketLauncher_Military_Athena");

	AB_RocketLauncher_Military_Athena_C_ExecuteUbergraph_B_RocketLauncher_Military_Athena_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
