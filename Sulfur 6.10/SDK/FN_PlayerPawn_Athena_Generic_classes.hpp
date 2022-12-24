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

// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// 0x02B9 (0x2879 - 0x25C0)
class APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x25C0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Effect_Player_In_Water;                                   // 0x25C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Slide_Land;                                 // 0x25D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Run_Land;                                   // 0x25D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_Player_Walk_Land;                                  // 0x25E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Effect_WaterInteraction_FX;                               // 0x25E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailPS;                                              // 0x25F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HitDamageParticles;                                       // 0x25F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CapsuleFadeTL_RemoveShadow_3B9EF0C6475C736BCC63B3852E8CAE42;// 0x2600(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CapsuleFadeTL__Direction_3B9EF0C6475C736BCC63B3852E8CAE42;// 0x2604(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2605(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CapsuleFadeTL;                                            // 0x2608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamageDirection;                 // 0x2610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerHealthDamage;                          // 0x2618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamageDirection;                 // 0x2620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ScreenEffect_PlayerShieldDamage;                          // 0x2628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Run_Particle_Activate_Speed;                              // 0x2630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Dust_Activate_Speed;                                 // 0x2634(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walk_Particle_Reset_Speed;                                // 0x2638(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnRunKickupFX_;                                     // 0x263C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnWalkKickupFX_;                                    // 0x263D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnDustLandFX_;                                      // 0x263E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInWater;                                                // 0x263F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RunWalkParticleRotation;                                  // 0x2640(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNinjaInShadowStance_;                                   // 0x264C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x264D(0x0003) MISSED OFFSET
	struct FGameplayTagContainer                       GameplayTagsForHitByHuskMeleeSound;                       // 0x2650(0x0020) (Edit, BlueprintVisible)
	int                                                WaterCounter;                                             // 0x2670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Tick_Delta_Seconds;                                       // 0x2674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Impact;                                      // 0x2678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_Destroyed;                                   // 0x2680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_FullyCharged;                                // 0x2688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Shield_StartRecharge;                               // 0x2690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_GameplayCueDamageShielded;                             // 0x2698(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LatestDamageIsShieldDamage;                               // 0x26B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x26B9(0x0003) MISSED OFFSET
	float                                              Damage_Taken;                                             // 0x26BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Last_Shield_Damage_Time;                                  // 0x26C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x26C4(0x0004) MISSED OFFSET
	class UPoseableMeshComponent*                      NewVar_1_2;                                               // 0x26C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               BodyValid;                                                // 0x26D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BackpackValid;                                            // 0x26D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HatValid;                                                 // 0x26D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FaceValid;                                                // 0x26D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CharmValid;                                               // 0x26D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HeadValid;                                                // 0x26D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x26D6(0x0002) MISSED OFFSET
	class UParticleSystem*                             P_DBNOResurrect;                                          // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DBNOResurrectSound;                                       // 0x26E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_LandedDust;                                 // 0x26E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            TempArray;                                                // 0x26F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USceneComponent*                             Sound_Player_Hit;                                         // 0x2700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UForceFeedbackEffect*                        DamageForceFeedback;                                      // 0x2708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_Player_Landed_WindVector_P;                        // 0x2710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SpeechBubbleWidgetClass;                                  // 0x2718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FText                                       LastSpeechText;                                           // 0x2720(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      DamageCameraShake;                                        // 0x2738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAnimTrailsNotifies;                                    // 0x2740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x2741(0x0003) MISSED OFFSET
	float                                              Time_when_you_ll_be_able_to_splash_again;                 // 0x2744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      CurrentWaterMeshActor;                                    // 0x2748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHitResult                                  WaterTraceHitLocation;                                    // 0x2750(0x0088) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StableVelocityVector;                                     // 0x27D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x27E4(0x0004) MISSED OFFSET
	class UParticleSystem*                             PlayerRunTemplate_Ground;                                 // 0x27E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Ground;                                // 0x27F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerRunTemplate_Water;                                  // 0x27F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             PlayerWalkTemplate_Water;                                 // 0x2800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Pawn_Charm_Skeletal_Mesh;                                 // 0x2808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    AnimTrailsPS_Ref;                                         // 0x2810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          WeaponMaterialOverride;                                   // 0x2818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TickWaterLevel;                                           // 0x2820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x2821(0x0007) MISSED OFFSET
	class UTextureRenderTarget2D*                      WetnessDepthTexture;                                      // 0x2828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterLevelMID;                                            // 0x2830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WaterDecayMID;                                            // 0x2838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Was_RTT_Enabled_Var_Set;                                  // 0x2840(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_RTT_Enabled;                                           // 0x2841(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x2842(0x0002) MISSED OFFSET
	float                                              SlideAudioIntensity;                                      // 0x2844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingMinCapsuleShadowVis;                              // 0x2848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShielded;                                               // 0x284C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x284D(0x0003) MISSED OFFSET
	float                                              InstigatorCheckDistanceSqrd;                              // 0x2850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x2854(0x0004) MISSED OFFSET
	class UAudioComponent*                             SlidingAudio_Inst;                                        // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              SlideDustActivateSpeed;                                   // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSpawnSlideKickupFX_;                                   // 0x2864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x2865(0x0003) MISSED OFFSET
	class UParticleSystem*                             Effect_Player_ShieldActivate;                             // 0x2868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             Effect_PLayer_ShieldBreak;                                // 0x2870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GhostMode;                                                // 0x2878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C");
		return ptr;
	}


	void Melee_Effect_Color(struct FVector* Melee_Color_Set);
	void GetHitPoint_FXLocation(class AActor* Object, struct FVector* OutputLocation);
	void SetSlidingFXEnabled(bool Enabled);
	void SetSlidingAudioEnabled(bool Enabled);
	void Are_the_wind_and_water_RTT_passes_enabled(bool* NewParam);
	void DisableWaterLevelTick();
	void Create_and_Duplicate_Effect_Poseable_Skeletal_Mesh(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array, class UPoseableMeshComponent** PoseableMesh);
	void SlaveAMeshToTheBody(class USkeletalMeshComponent* Mesh, class USkeletalMeshComponent* Master);
	void Create_and_Duplicate_Effect_Skeletal_Meshes_Parent(TEnumAsByte<EFortCustomPartType> BodyType, class UMaterialInterface* Material_to_Apply, int TranslucentSortPriority, class USkeletalMeshComponent** DuplicatedSkeletalMeshComponent, TArray<class UMaterialInstanceDynamic*>* Empty_MID_Array);
	void UserConstructionScript();
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void MeleeSwingRight();
	void MeleeSwingLeft();
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnLanded(struct FHitResult* Hit);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnWeaponEquipped(class AFortWeapon** NewWeapon, class AFortWeapon** PrevWeapon);
	void FootStepLeft();
	void FootStepRight();
	void OnCharacterPartsReinitialized();
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier1(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_Generic_HarvestBuff_Tier2(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_Activation_DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveDestroyed();
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void Entered_WaterVolume();
	void CharacterDestroyed(class AActor* DestroyedActor);
	void BindOnDestroyed();
	void FadeOutCapsuleShadow();
	void AnimTrailsNotify(bool* bActive);
	void AnimTrailsSetup(class UParticleSystem** ParticleSystemReference, struct FName* FirstSocketName, struct FName* SecondSocketName, float* Width);
	void AnimTrailsDisable();
	void OnSignificantTick(float* Significance);
	void GameplayCue_Abilities_Death_FadeCapsule_Athena(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Abilities_SpookyMist_Loop(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void OnPawnLODChanged(int* NewLOD);
	void OnSlidingStateChanged(bool* bNewSlidingState);
	void OnLand_CE();
	void GameplayCue_Shield_PotionConsumed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Damage_Shielded(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void GameplayCue_Shield_Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
