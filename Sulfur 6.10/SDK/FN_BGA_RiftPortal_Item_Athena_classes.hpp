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

// BlueprintGeneratedClass BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
// 0x0330 (0x0A68 - 0x0738)
class ABGA_RiftPortal_Item_Athena_C : public AFortAthenaRiftPortal
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       RiftPostProcess;                                          // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            PostProcessRadius;                                        // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_RiftClosingUp;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Rift_Idle_Loop;                                         // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           OverlapCapsule;                                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Rift;                                                  // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Audio_Looping;                                            // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266;   // 0x0780(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266;   // 0x0784(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266;// 0x0788(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class UTimelineComponent*                          FragmentMovement;                                         // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6;// 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6;// 0x079C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Audio_RiftDestroyed;                                      // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111;        // 0x07A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111;  // 0x07AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          VectorScale;                                              // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             DeathEffects;                                             // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  EnteredRift;                                              // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  RiftDestroyed;                                            // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x07D0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeleportLocation;                                         // 0x07D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07E4(0x0004) MISSED OFFSET
	class UParticleSystem*                             EnterRift;                                                // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortAthenaVehicle*                          Vehicle;                                                  // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               PortalOpen;                                               // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	class UAnimMontage*                                FallingAnimation;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              TeleportHeight;                                           // 0x0808(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ActiveDuration;                                           // 0x0828(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hangtime;                                                 // 0x0848(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TeleportDelay;                                            // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x086C(0x0004) MISSED OFFSET
	TArray<class AFortPlayerPawn*>                     PassengerArray;                                           // 0x0870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             CrackExitRift;                                            // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  PlayerExitSkyCrack;                                       // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorOriginalLocation;                                    // 0x0890(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSpawnHeightMultiplier;                                 // 0x089C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItem;                                                // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ObjectiveBackendName;                                     // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjStat;                                                  // 0x08B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UFortQuestItemDefinition*                    RiftPortalLocationsQuest;                                 // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjStatLoc_1_2;                                           // 0x08C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_2_3;                                           // 0x08D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_3_4;                                           // 0x08E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_4_5;                                           // 0x08F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_5_6;                                           // 0x0908(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_6_7;                                           // 0x0918(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_7_8;                                           // 0x0928(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_8_9;                                           // 0x0938(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_9_10;                                          // 0x0948(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_10_11;                                         // 0x0958(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_11_12;                                         // 0x0968(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_12_13;                                         // 0x0978(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_13_14;                                         // 0x0988(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_14_15;                                         // 0x0998(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_15_16;                                         // 0x09A8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_16_17;                                         // 0x09B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_17_18;                                         // 0x09C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_18_19;                                         // 0x09D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_19_20;                                         // 0x09E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_20_21;                                         // 0x09F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_21_22;                                         // 0x0A08(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_22_23;                                         // 0x0A18(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_23_24;                                         // 0x0A28(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                         ObjStatLoc_24_25;                                         // 0x0A38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CreativeMode;                                             // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0A49(0x0007) MISSED OFFSET
	class AActor*                                      OverlapActor;                                             // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RiftLocationNum;                                          // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ActorRotation;                                            // 0x0A5C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C");
		return ptr;
	}


	void UseRiftQuestUpdate(class AController* InController);
	void CheckForRiftLocUpdate(class AController* InController);
	void OnRep_PlayerPawn();
	void OnRep_Vehicle();
	void OnRep_TeleportLocation();
	void PlayExpandOrCollapseAudio(bool Expand);
	void UserConstructionScript();
	void Audio_RiftDestroyed__FinishedFunc();
	void Audio_RiftDestroyed__UpdateFunc();
	void VectorScale__FinishedFunc();
	void VectorScale__UpdateFunc();
	void FragmentMovement__FinishedFunc();
	void FragmentMovement__UpdateFunc();
	void DestroyRift();
	void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ReceiveBeginPlay();
	void PlayTeleportFX(const struct FVector& PlayerLocation);
	void PlayCosmeticFX();
	void OverlappingOnBeginPlay(class AActor** Actor);
	void VehicleTeleportEvent();
	void NotifyTeleportedVehicle(class AFortAthenaVehicle** Vehicle);
	void PlaylistLoaded(const struct FName& PlaylistName, const struct FGameplayTagContainer& PlaylistContextTags);
	void VehicleInteractionFailed(class AFortPlayerPawnAthena* FortPlayerPawnAthena);
	void ExecuteUbergraph_BGA_RiftPortal_Item_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
