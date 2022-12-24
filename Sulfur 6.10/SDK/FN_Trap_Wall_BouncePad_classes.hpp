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

// BlueprintGeneratedClass Trap_Wall_BouncePad.Trap_Wall_BouncePad_C
// 0x01E9 (0x0F31 - 0x0D48)
class ATrap_Wall_BouncePad_C : public ABuildingTrapWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D48(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BouncePadFX;                                              // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Trigger;                                                  // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_BouncePad_Wall_Glow;                                   // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   Trap_Active_Sound;                                        // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Fire_Sound;                                          // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Explode_Sound;                                       // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Place_Trap_Sound;                                         // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   Trap_Destroyed_Sound;                                     // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      OverlappedActor;                                          // 0x0D90(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              Player_DestructionRange;                                  // 0x0D98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D9C(0x0004) MISSED OFFSET
	struct FGameplayTag                                BouncePadTagMaxCount;                                     // 0x0DA0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawnAthena*                       LaunchedPlayer;                                           // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortAthenaVehicle*                          LaunchedVehicle;                                          // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_LowGravity;                                            // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BounceTracker1;                                        // 0x0DC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_BounceTracker2;                                        // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              PlayerMinLateralVelocity;                                 // 0x0DD0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerVelocityMultiplier;                                 // 0x0DF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMaxLateralVelocity;                                 // 0x0E10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMinZVelocity;                                       // 0x0E30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              PlayerMaxZVelocity;                                       // 0x0E50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleVelocityMultiplier;                                // 0x0E70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleZVelocity;                                         // 0x0E90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMinLateralVelocity;                                // 0x0EB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              VehicleMaxVelocity;                                       // 0x0ED0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               IgnoreFallDamage;                                         // 0x0EF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0EF1(0x0007) MISSED OFFSET
	class UClass*                                      GE_NoFXLowGravity;                                        // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              SetIgnoreFallDamage;                                      // 0x0F00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      GE_LowGravityWithHopRocks;                                // 0x0F20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AEnemyPawn_Parent_C*                         DeimosPawn;                                               // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayFewerSounds;                                         // 0x0F30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trap_Wall_BouncePad.Trap_Wall_BouncePad_C");
		return ptr;
	}


	void BP_OnTrigger(TArray<class AActor*>* TouchingActors, bool* bOutConsumeEvent);
	void DeimosApplyGameplayEffects();
	void DeimosLaunch(class AEnemyPawn_Parent_C* DeimosPawn);
	void PlayerApplyGameplayEffects();
	void OnRep_Overlappedactor();
	void VehicleLaunch(class AFortAthenaVehicle* Vehicle);
	void PlayerLaunch(class AFortPlayerPawnAthena* FortPlayerPawn, const struct FVector& InVec);
	void UserConstructionScript();
	void OnPlaced();
	void OnFinishedBuilding();
	void GameplayCue_Abilities_Activation_Traps_ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Trap_Wall_BouncePad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
