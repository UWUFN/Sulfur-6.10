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

// BlueprintGeneratedClass GCNL_Cube_Area.GCNL_Cube_Area_C
// 0x0040 (0x08D8 - 0x0898)
class AGCNL_Cube_Area_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class AEmitterCameraLensEffectBase*                CameraLensEffect;                                         // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    LoopingFX;                                                // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnTickSound;                                              // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  OnAppliedSound;                                           // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             CurrentTickSound;                                         // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ShieldFX;                                                 // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnRemovedSound;                                           // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCNL_Cube_Area.GCNL_Cube_Area_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void On_Shield_Squares_Spawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void ExecuteUbergraph_GCNL_Cube_Area(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
