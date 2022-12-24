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

// BlueprintGeneratedClass BP_Athena_RuneVent.BP_Athena_RuneVent_C
// 0x0130 (0x0760 - 0x0630)
class ABP_Athena_RuneVent_C : public ABuildingActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effects_Active;                                           // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             AmbientAudio;                                             // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Athena_RuneVent_Trigger;                                // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Vent;                                                     // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               VentIsActive;                                             // 0x0678(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	struct FScalableFloat                              ImpulseStrengthPlayer;                                    // 0x0680(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulsePlayerZ;                                           // 0x06A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ForceMultiplier;                                          // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06C4(0x0004) MISSED OFFSET
	struct FScalableFloat                              ImpulsePlayerZWalking;                                    // 0x06C8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APlayerPawn_Athena_C*                        PlayerTarget;                                             // 0x06E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RuneIndex;                                                // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06F4(0x0004) MISSED OFFSET
	class ABP_IslandScripting_C*                       IslandScripting;                                          // 0x06F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              LaunchXY_Velocity;                                        // 0x0700(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              LaunchZ_Velocity;                                         // 0x0720(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      LaunchCharacter;                                          // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerPawn_Athena_C*>                RootMotionPlayers;                                        // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                                RootMotionRetryTimer;                                     // 0x0758(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Athena_RuneVent.BP_Athena_RuneVent_C");
		return ptr;
	}


	void GetLaunchVector(class AActor* ActorToLaunch, struct FVector* LaunchVector);
	void DoLaunchEffects(class AActor* GCTarget);
	void OnRep_ForceActive();
	void SetActiveEffects();
	void OnRep_VentIsActive();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnWorldReady();
	void TimeReady(const struct FVector& Position);
	void ReplicateGC(class AActor* PlayerTarget);
	void RetryRootMotionPlayer();
	void TryLaunchPlayer();
	void TryLaunchVehicle();
	void ExecuteUbergraph_BP_Athena_RuneVent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
