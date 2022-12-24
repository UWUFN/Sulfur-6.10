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

// BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C
// 0x03E0 (0x2938 - 0x2558)
class APlayerPawn_Outlander_C : public APlayerPawn_Generic_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2558(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               PhaseShiftHitBox;                                         // 0x2560(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AntiMaterialHitBox;                                       // 0x2568(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            KeenEyesRadius;                                           // 0x2570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Outlander_PhaseShift_Impact_01;                         // 0x2578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              PhaseShiftHitSweep_Sweep_81A0178F416D1106B841D9A9B7E8C737;// 0x2580(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    PhaseShiftHitSweep__Direction_81A0178F416D1106B841D9A9B7E8C737;// 0x2584(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2585(0x0003) MISSED OFFSET
	class UTimelineComponent*                          PhaseShiftHitSweep;                                       // 0x2588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_FragmentActivation;                                     // 0x2590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Core_Index_0_1;                                           // 0x2598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Core_Index_1_2;                                           // 0x25A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Core_Index_2_3;                                           // 0x25A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index3;                                           // 0x25B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index4;                                           // 0x25B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index5;                                           // 0x25C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sparkles_Index8;                                          // 0x25C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Smoke_Index7;                                             // 0x25D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Diamond_Index6;                                           // 0x25D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Sparkles_Index9;                                          // 0x25E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                OffensiveColor1;                                          // 0x25E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                OffensiveColor2;                                          // 0x25F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefensiveColor1;                                          // 0x2608(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                DefensiveColor2;                                          // 0x2618(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SpecialtyColor1;                                          // 0x2628(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                SpecialtyColor2;                                          // 0x2638(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_SpecialityBuff;                                        // 0x2648(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_DefensiveBuff;                                         // 0x2668(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_OffensiveBuff;                                         // 0x2688(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<E_Outlander_FragmentTypes>             FragType;                                                 // 0x26A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x26A9(0x0007) MISSED OFFSET
	class UParticleSystem*                             P_FragmentOffense;                                        // 0x26B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_FragmentDefense;                                        // 0x26B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_FragmentSpeciality;                                     // 0x26C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_InTheZone_Activate;                                     // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnPlayerBuiltFloor;                                       // 0x26D0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x26D1(0x0007) MISSED OFFSET
	struct FGameplayEventData                          EventData;                                                // 0x26D8(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventNeedRoadsActivate;                                   // 0x2780(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventNeedRoadsDeactivate;                                 // 0x2788(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_WhereWereGoingWeNeedRoads_0_1;                         // 0x2790(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             P_Fragment;                                               // 0x27B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Specialty;                                              // 0x27B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Defensive;                                              // 0x27C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Offensive;                                              // 0x27C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortFeedbackHandle                         Feedback_ShardGet;                                        // 0x27D0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_OffensiveShard;                                  // 0x27E8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_DefensiveShard;                                  // 0x2800(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortFeedbackHandle                         Feedback_SpecialtyShard;                                  // 0x2818(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  Sound_Frg_Offensive_Start;                                // 0x2830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Defensive_Start;                                // 0x2838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Resource_Start;                                 // 0x2840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Stop;                                           // 0x2848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Frg_Collect;                                        // 0x2850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_InTheZone_Running;                                      // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_InTheZone_Hit;                                          // 0x2860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Spawn_Color;                                              // 0x2868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            Head_Effect_Mesh_Materials;                               // 0x2870(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>            Body_Effect_Mesh_Materials;                               // 0x2880(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInterface*                          Phase_Shift_Material_;                                    // 0x2890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPhaseShiftActive_;                                       // 0x2898(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x2899(0x0007) MISSED OFFSET
	class UParticleSystem*                             KnockKnockFX;                                             // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_Handtrail;                                              // 0x28A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_AMCDustKickup;                                          // 0x28B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             P_AMCShockwave;                                           // 0x28B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    P_Handtrail_Active;                                       // 0x28C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             P_ArmThruster;                                            // 0x28C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    P_Arm_Thuster_Active;                                     // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USoundBase*                                  ChargeUpSoundCue;                                         // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             ChargeUpAudioComp;                                        // 0x28E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UClass*                                      ChargeUpCameraShake;                                      // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   AMCImpactEnemySound;                                      // 0x28F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   AMCImpactBuildingSound;                                   // 0x28F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AMCImpactCameraShake;                                     // 0x2900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Teleport_Particles;                                       // 0x2908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Index;                                            // 0x2910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x2914(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      GuantletReference;                                        // 0x2918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_SpawnedHandTrail;                                       // 0x2920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ChargeTrailIsVisible;                                     // 0x2928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x2929(0x0007) MISSED OFFSET
	class UParticleSystem*                             P_HitBurst;                                               // 0x2930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Outlander.PlayerPawn_Outlander_C");
		return ptr;
	}


	void OnRep_OnPlayerBuiltFloor();
	void UserConstructionScript();
	void PhaseShiftHitSweep__FinishedFunc();
	void PhaseShiftHitSweep__UpdateFunc();
	void GameplayCue_Explorer_Fragment(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Outlander_InTheZone_FX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceivePossessed(class AController** NewController);
	void GameplayCue_Explorer_Fragment_Offense_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Defense_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Explorer_Fragment_Specialty_PickupFX(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void WithinReachOfTreasure(const struct FLinearColor& VSpawnColor, bool Activate);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void RefreshIcons();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void EventOnDamagePlayFX();
	void GameplayCue_Outlander_KnockKnock(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialCharge(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeThruster(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeChargeUp(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Outlander_AntiMaterialChargeImpact(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ForceQuickbarUpdate();
	void ReceiveBeginPlay();
	void PlayGauntletMontage(class UAnimMontage* MontageName);
	void SetMenuScreenClassName();
	void ChargedUp();
	void PlayChargeCommonFX();
	void ExecuteUbergraph_PlayerPawn_Outlander(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
