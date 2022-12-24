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

// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
// 0x0140 (0x09D8 - 0x0898)
class AGCN_Loop_SpookyMist_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0898(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       PostProcess;                                              // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FadeInOut_Visbility_642089304BE20EFA276DDA9C98DD3C71;     // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeInOut__Direction_642089304BE20EFA276DDA9C98DD3C71;    // 0x08AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeInOut;                                                // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             TargetPlayer;                                             // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExpirationSoundPeriod;                                    // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityInterp;                                           // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            AttachedFX;                                               // 0x08C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              PlayerSkeletalMeshes;                                     // 0x08D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               FriendlyPlayer;                                           // 0x08E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x08E9(0x0007) MISSED OFFSET
	struct FTimerHandle                                ExpireTellDelayTimer;                                     // 0x08F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ExpirationSoundTimer;                                     // 0x08F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              VisbilityLevel;                                           // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkVisMultiplier;                                        // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SprintVisMultiplier;                                      // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFriendlyOpacity;                                       // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractVisibility;                                       // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0914(0x0004) MISSED OFFSET
	struct FScalableFloat                              DataDuration;                                             // 0x0918(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataTellDuration;                                         // 0x0938(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataWalkVisMult;                                          // 0x0958(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataSprintVisMult;                                        // 0x0978(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataFriendlyVisMult;                                      // 0x0998(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              DataShadowPlaneOpacity;                                   // 0x09B8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C");
		return ptr;
	}


	void GetSkeletalMeshes();
	void UserConstructionScript();
	void FadeInOut__FinishedFunc();
	void FadeInOut__UpdateFunc();
	void OnLoopingStart(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents);
	void OnRemoval(class AActor** MyTarget, struct FGameplayCueParameters* Parameters, TArray<class UParticleSystemComponent*>* ParticleComponents, TArray<class UAudioComponent*>* AudioComponents, class UCameraShake** BurstCameraShakeInstance, class ADecalActor** BurstDecalInstance);
	void ReceiveTick(float* DeltaSeconds);
	void BeginExpireTell();
	void ClearExpireTell();
	void ExpireWarningTick();
	void UpdateTeamVisbility();
	void Audio_Tick(float Velocity);
	void StartedInteract();
	void EndedInteract();
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
