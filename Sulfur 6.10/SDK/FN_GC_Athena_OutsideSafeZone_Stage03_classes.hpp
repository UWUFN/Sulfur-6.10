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

// BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C
// 0x0034 (0x08CC - 0x0898)
class AGC_Athena_OutsideSafeZone_Stage03_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Storm_ScreenEffect;                                    // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_Opacity_F0A4C399436DEBD08D1B4485D97E6CDE;      // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_F0A4C399436DEBD08D1B4485D97E6CDE;   // 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1_2;                                             // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Opacity_D70C1E12439995CE602A6BB6906563D6;      // 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_D70C1E12439995CE602A6BB6906563D6;   // 0x08BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              StormOpacity;                                             // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C");
		return ptr;
	}


	void RemoveStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void AddStormAudio(class APlayerPawn_Athena_C* PlayerPawnAthena);
	void ZapFX(int ZapCount, class APlayerPawn_Athena_C* PlayerPawnAthena);
	bool OnExecute(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void On_Distant_Lightning_Spawn(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void OnApplication(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
