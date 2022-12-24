#pragma once

// Fortnite (6.10) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C
// 0x0031 (0x1009 - 0x0FD8)
class AB_RocketLauncher_Military_Athena_C : public AB_RocketLauncher_Generic_Athena_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FD8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    P_M202_Muzzle_MagazineEject_Smoke;                        // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_M202_Muzzle_MagazineEject;                              // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ArrowBack;                                                // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    MuzzleBack;                                               // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFortReloadFXState>                    ReloadState;                                              // 0x1008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_RocketLauncher_Military_Athena.B_RocketLauncher_Military_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void Muzzle_Flash_FX(bool* Persistent_Fire);
	void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState>* ReloadStage);
	void SoundFX(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void ResetDoOnce();
	void ExecuteUbergraph_B_RocketLauncher_Military_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
