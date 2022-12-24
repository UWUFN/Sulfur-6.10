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

// BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C
// 0x018D (0x090D - 0x0780)
class AB_Prj_Hook_Athena_C : public AFortAttachableProjectileBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh3;                                              // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Comeback_NewTrack_0_CA913F9B4BFA9A9384E1D2AFF544018C;     // 0x07A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Comeback__Direction_CA913F9B4BFA9A9384E1D2AFF544018C;     // 0x07A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x07A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Comeback;                                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   Target;                                                   // 0x07B0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x07BC(0x0004) MISSED OFFSET
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               HookStopped;                                              // 0x07C8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Arrived;                                                  // 0x07C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x07CA(0x0006) MISSED OFFSET
	struct FTimerHandle                                ClawTimer;                                                // 0x07D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ArriveDistanceCheck;                                      // 0x07D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07DC(0x0004) MISSED OFFSET
	TArray<class AFortPickup*>                         FortPickupTarget;                                         // 0x07E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UProjectileMovementComponent*                ItemMovement;                                             // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              ArrayTest;                                                // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                                 vFortPickup;                                              // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_0_1;                                               // 0x0810(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BoomerangLocation;                                        // 0x081C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerLocation;                                           // 0x0828(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x0834(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               GotAnIdiot;                                               // 0x0840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0841(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0844(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               AirControl;                                               // 0x0850(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class USoundBase*                                  StickSound;                                               // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  StuckToPlayerSound;                                       // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetPullDelay;                                          // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromInstigator;                                   // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  TravelSound;                                              // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FToyAngleSelectorInfo>               LaunchAngleVariations;                                    // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AB_Hookgun_Athena_C*                         Weapon_Actor;                                             // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AB_HookGunRope_C*                            Rope;                                                     // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreLaunchVelocity;                                        // 0x0898(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FireAImPitch;                                             // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownPitchMin;                                             // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DownPitchMax;                                             // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalZ;                                              // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x08B4(0x0004) MISSED OFFSET
	class USoundBase*                                  YankBackSound;                                            // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  RopeDestroySound;                                         // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x08C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                BlockIncomingPickups;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ImpactNormal;                                             // 0x08D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x08E4(0x0004) MISSED OFFSET
	class USoundBase*                                  StickSound2D;                                             // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Offset_Distance_from_Physics_Mesh;                        // 0x08F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffsetDistanceFromBone;                                   // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      StruckActor;                                              // 0x08F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Momentum;                                                 // 0x0900(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               Launchpad;                                                // 0x090C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Hook_Athena.B_Prj_Hook_Athena_C");
		return ptr;
	}


	void HandleLaunch(bool* JumpPadding_);
	void OnRep_Momentum();
	void HandleMomentum();
	void HandleStuckProjectiles(class UObject* Object, class UPrimitiveComponent* Component);
	void OnRep_StruckActor();
	void HandleStuckSupplyDrop(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleStuckBuilding(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleStuckVehicle(class UObject* Object, class UPrimitiveComponent* Component);
	void HandleSticks(class UObject* Object, class UPrimitiveComponent* Component);
	void PickGrappleMontage(float PitchAngle, struct FName* SectionName);
	void PickGrappleMontageSection(float PitchAngle, struct FName* SectionName);
	void OnRep_HookStopped();
	void OnRep_Target();
	void Grapple();
	void CalculateYankForce();
	void IncapacitateTarget();
	void HandleHits(const struct FHitResult& Hit, class AActor** Target);
	void PlayStickSounds(const struct FVector& Location, class AActor* HitActor);
	void UserConstructionScript();
	void Comeback__FinishedFunc();
	void Comeback__UpdateFunc();
	void OnNotifyEnd_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnNotifyBegin_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnInterrupted_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnBlendOut_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnCompleted_0A1B172F45DE2A614770489FAD619748(const struct FName& NotifyName);
	void OnNotifyEnd_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnNotifyBegin_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnInterrupted_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnBlendOut_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void OnCompleted_46D1167E4A05BB9A8529A6981DFAD6A4(const struct FName& NotifyName);
	void ClawII();
	void OnStop(struct FHitResult* Hit);
	void ReceiveDestroyed();
	void TheClaw();
	void Yank();
	void Travel(const struct FVector& HitLocation);
	void WeaponCheck();
	void ReceiveBeginPlay();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void GrappleVehicle();
	void LaunchCheck();
	void ExecuteUbergraph_B_Prj_Hook_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
