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

// BlueprintGeneratedClass BluGlo_Node.BluGlo_Node_C
// 0x00D8 (0x0D10 - 0x0C38)
class ABluGlo_Node_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)
	class UPointLightComponent*                        bluLight;                                                 // 0x0C40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    IdleParticles;                                            // 0x0C48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        bluglomesh;                                               // 0x0C50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Fort_BluGlo_loop_AudioComponent;                          // 0x0C58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortMiniMapComponent*                       FortMiniMap;                                              // 0x0C60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    BluGloSpawnparticle;                                      // 0x0C68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Trail_HorizontalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F;// 0x0C70(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Trail_VerticalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F;  // 0x0C74(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Trail__Direction_EEEFB2FD467DE31D5FDEDEA006F5C10F;        // 0x0C78(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0C79(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Trail;                                                    // 0x0C80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ActivateEffects;                                          // 0x0C88(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DeActivateEffects;                                        // 0x0C89(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanInteract;                                              // 0x0C8A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0C8B(0x0005) MISSED OFFSET
	struct FText                                       BluGloQuantity;                                           // 0x0C90(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class AFortPawn*                                   NewVar;                                                   // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x0CB0(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0CBC(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    TrailEffect;                                              // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Sound_BluGloLoop;                                         // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RandomSpawnRotation;                                      // 0x0CD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	class ABluGlow_MorphAnimation_C*                   BlugloRef;                                                // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UForceFeedbackEffect*                        PickupForceFeedback;                                      // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    BlugloItemDef;                                            // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       CollectText;                                              // 0x0CF8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BluGlo_Node.BluGlo_Node_C");
		return ptr;
	}


	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void OnRep_CanInteract();
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void OnRep_DeActivateEffects();
	void OnRep_ActivateEffects();
	void UserConstructionScript();
	void Trail__FinishedFunc();
	void Trail__UpdateFunc();
	void ReceiveBeginPlay();
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void HandleMissionEvent_LocateBluGlo(const struct FGuid& InMissionGuid, const struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, class UObject* EventFocus, class UDataAsset* EventContent, class AActor* EventInstigator, int GenericInt, float GenericFloat, const struct FText& GenericText, const struct FGameplayTagContainer& GameplayTags, const struct FFortMissionEvent& MissionEvent);
	void ShowSpawnTrail(const struct FVector& StartLocation, float AnimDelay);
	void ExecuteUbergraph_BluGlo_Node(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
