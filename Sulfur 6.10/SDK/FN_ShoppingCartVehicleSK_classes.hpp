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

// BlueprintGeneratedClass ShoppingCartVehicleSK.ShoppingCartVehicleSK_C
// 0x02A0 (0x0E50 - 0x0BB0)
class AShoppingCartVehicleSK_C : public AFortAthenaSKPushVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BB0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               BulletCollision;                                          // 0x0BB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PawnStepUpCollision_Bottom;                               // 0x0BC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               OverlapTrigger;                                           // 0x0BC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               PawnStepUpCollision;                                      // 0x0BD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioWind;                                                // 0x0BD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Shopping_Cart_Vehicle_WheelDust;                        // 0x0BE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortCollisionAudioComponent*                FortCollisionAudio;                                       // 0x0BE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioScrape;                                              // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioInAir;                                               // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioSkid;                                                // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioCoast;                                               // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFortVehicleAudioVoice*                      AudioMovement;                                            // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  OnDeathSound;                                             // 0x0C18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PassengerPawn;                                            // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              ImpulsePower;                                             // 0x0C28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RearVectorThreshold;                                      // 0x0C48(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ImpulseVector;                                            // 0x0C68(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C74(0x0004) MISSED OFFSET
	TArray<class AFortPickup*>                         AttachedPickups;                                          // 0x0C78(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AFortPickup*                                 FortPickup;                                               // 0x0C88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPickups;                                               // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentPickups;                                           // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UFortWorldItemDefinition*                    ObjectReference;                                          // 0x0C98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           DrivingPlayerController;                                  // 0x0CA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningAmount;                                            // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CAC(0x0004) MISSED OFFSET
	class UCameraShake*                                CameraShake;                                              // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AB_RocketLauncher_Generic_Athena_C*          BoundRocket;                                              // 0x0CB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             DriverPawn;                                               // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CorrectiveImpulse;                                        // 0x0CC8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0CD4(0x0004) MISSED OFFSET
	class UCameraShake*                                CoastingCameraShake;                                      // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NormalizedSpeed;                                          // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMin;                                  // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeFrequencyMax;                                  // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreenShakeYawFrequencyMultipier;                         // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMin;                                             // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AmplitudeMax;                                             // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InAirSmoothed;                                            // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraShakeSpeedCurvePow;                                 // 0x0CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedSpringCompression;                                // 0x0D00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0D04(0x0004) MISSED OFFSET
	struct FScalableFloat                              ScreenShakeMult;                                          // 0x0D08(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              RumbleMultipier;                                          // 0x0D28(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              RumbleMulti;                                              // 0x0D48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SparksRumbleMulti;                                        // 0x0D4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCoastingCameraShake;                                     // 0x0D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0D51(0x0003) MISSED OFFSET
	float                                              SprintAmplitude;                                          // 0x0D54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             LastDriver;                                               // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ZImpulseMultiplier;                                       // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinVelocityToLaunch;                                      // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxLaunchVelocity;                                        // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchAngle;                                              // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawnAthena*                       LastHitPlayer;                                            // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LaunchMultiplier;                                         // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	struct FScalableFloat                              Hit_ZImpulseMultiplier;                                   // 0x0D80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_LateralImpulseMultiplier;                             // 0x0DA0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              Hit_MaxImpulseVelocity;                                   // 0x0DC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HealthToDestroyProp;                                      // 0x0DE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IgnoreHitLastDriver;                                      // 0x0DE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PassengerIsInstigator;                                    // 0x0DE5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0DE6(0x0002) MISSED OFFSET
	class UStaticMeshComponent*                        DoorMesh;                                                 // 0x0DE8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              CanLaunchPlayer;                                          // 0x0DF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              PassengerCameraShakeMultiplier;                           // 0x0E10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0E14(0x0004) MISSED OFFSET
	class UCameraShake*                                PassengerCameraShake;                                     // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APlayerController*                           PassengerPlayerController;                                // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UFortQuestItemDefinition*                    QuestItem;                                                // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ObjBackendName;                                           // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableRowHandle                         ObjStat;                                                  // 0x0E38(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*                    InWaterFX;                                                // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShoppingCartVehicleSK.ShoppingCartVehicleSK_C");
		return ptr;
	}


	struct FName GetVehicleSeatPrimaryAction(class AFortPlayerPawn** FortPlayerPawn);
	TArray<struct FText> GetVehicleSeatActionLabels(class AFortPlayerPawn** PlayerPawn, ECommonInputType* OverrideInputType);
	TArray<struct FText> GetVehicleSeatLabels(class AFortPlayerPawn** PlayerPawn, ECommonInputType* OverrideInputType);
	TArray<struct FName> GetVehicleSeatActionNames(class AFortPlayerPawn** PlayerPawn, ECommonInputType* OverrideInputType);
	void UpdateDynamicCameraShake();
	void IsLocalPlayerRiding(bool* Result);
	void OnRep_CorrectiveImpulse();
	void PlayHapticsOnHit(float HitMagnitude);
	void AttachWeaponToCart(int Selection);
	void OnRep_ImpulseVector();
	void UserConstructionScript();
	void DropItems();
	void PedalForceFeedback();
	void AttachToCart();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnPawnEnterVehicle(class AFortPlayerPawn** PlayerPawn, int* SeatIdx);
	void OnWeaponEquipped(class AFortWeapon* NewWeapon, class AFortWeapon* PrevWeapon);
	void RocketSpawned();
	void ApplyImpulse();
	void OnPawnExitVehicle(class AFortPlayerPawn** PlayerPawn, struct FName* ExitSocketName);
	void OnDamaged(float* Damage, struct FGameplayTagContainer* DamageTags, struct FGameplayEffectContextHandle* EffectContext, class AController** EventInstigator, class AActor** DamageCauser);
	void Update_Damage_State(float Damage);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnCollisionHitEffects(struct FVector* HitLocation, struct FVector* HitNormalImpulse, struct FVector* HitFrictionImpulse, struct FVector* HitNormal, class AActor** HitActor);
	void OnSpringCompression();
	void OnEnteredWaterVolume(struct FVector* WaterSurfacePoint);
	void OnExitedWaterVolume(struct FVector* WaterSurfacePoint);
	void CheckWater();
	void UpdateMovementCosmeticParameters();
	void OnIsCoastingChanged();
	void OnIsSprintingChanged();
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveTick(float* DeltaSeconds);
	void StopDriverRumble();
	void StartDriverRumble();
	void StartDriverCameraShake();
	void StopCoastCameraShake();
	void StopDriverCameraShake();
	void CanHitLastDriver();
	void ExecuteUbergraph_ShoppingCartVehicleSK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
