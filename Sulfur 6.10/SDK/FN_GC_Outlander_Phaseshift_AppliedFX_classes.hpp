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

// BlueprintGeneratedClass GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C
// 0x0068 (0x0900 - 0x0898)
class AGC_Outlander_Phaseshift_AppliedFX_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       Teleport_PostProcess;                                     // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Teleport_PP_TL_PP_6347A40E47BF409410B4188DE9502B23;       // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Teleport_PP_TL__Direction_6347A40E47BF409410B4188DE9502B23;// 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Teleport_PP_TL;                                           // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Phase_Shift_Activation_Timeline_Sweep_6835A456414AB2F2B480A5A3FF3B8FB9;// 0x08B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Phase_Shift_Activation_Timeline_Opacity_6835A456414AB2F2B480A5A3FF3B8FB9;// 0x08BC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Phase_Shift_Activation_Timeline__Direction_6835A456414AB2F2B480A5A3FF3B8FB9;// 0x08C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08C1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Phase_Shift_Activation_Timeline;                          // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Phase_Shift_Material;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Dust_Emitters;                                            // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_SplineVolumeTrail_v1b_C*                 TeleportSpline;                                           // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              DuplicateMeshes;                                          // 0x08F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_Outlander_Phaseshift_AppliedFX.GC_Outlander_Phaseshift_AppliedFX_C");
		return ptr;
	}


	void UserConstructionScript();
	void Phase_Shift_Activation_Timeline__FinishedFunc();
	void Phase_Shift_Activation_Timeline__UpdateFunc();
	void Teleport_PP_TL__FinishedFunc();
	void Teleport_PP_TL__UpdateFunc();
	void OnApplication(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void Activate_PP();
	void Remove_PP();
	void Spawn_Spline_Actor(class APlayerPawn_Outlander_C* Player_Pawn);
	void Stop_Splines_if_Valid();
	void ExecuteUbergraph_GC_Outlander_Phaseshift_AppliedFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
