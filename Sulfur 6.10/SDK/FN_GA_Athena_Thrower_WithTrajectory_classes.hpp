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

// BlueprintGeneratedClass GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C
// 0x0290 (0x0B80 - 0x08F0)
class UGA_Athena_Thrower_WithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x08F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                              // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrenadeSpeedMin;                                          // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMax;                                          // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class USoundBase*                                  GrenadeSound;                                             // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0928(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                        // 0x0930(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                          // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                    // 0x09B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrenadeAmmo;                                              // 0x09D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlasmaGrenades;                                           // 0x09D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Flashbang;                                                // 0x09D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x09D3(0x0001) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x09D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x09E9(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryUpdateInterval;                                 // 0x09F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrenadeTargetingOriginOffset_Crouched;                    // 0x0A08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	class ABP_Thrower_Trajectory_C*                    TrajectoryIndicator;                                      // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorClass;                                 // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0A28(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AbilityKeyPressed;                                        // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              MaxSpeedPitch;                                            // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	struct FGameplayEventData                          Event_Data;                                               // 0x0A98(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostThrowCancelDelay;                                     // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostThrowEndDelay;                                        // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         ProjectileReference;                                      // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       NewVar_0_1;                                               // 0x0B60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_Thrower_WithTrajectory.GA_Athena_Thrower_WithTrajectory_C");
		return ptr;
	}


	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents);
	class UClass* GetProjectileTrajectoryActor();
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void Completed_3599970A4E9210FEBE2B88AC88FE29D2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_3599970A4E9210FEBE2B88AC88FE29D2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_3599970A4E9210FEBE2B88AC88FE29D2(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_37B0203E4AC7F2A18426DE80F86A009C();
	void Destroyed_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData);
	void Exploded_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData);
	void Stopped_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData);
	void Bounced_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData);
	void Touched_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData);
	void Created_F93DCAF245C97EABF008A49FAE8CFF0B(const struct FProjectileEventData& ProjectileData);
	void OnFinish_4151964B41B373DEE708F8A881431167();
	void OnFinish_1A815B544646D9E0ECCCA69DE38E5BAA();
	void OnCancelled_C38B946747458248EFD32B823552103E();
	void OnInterrupted_C38B946747458248EFD32B823552103E();
	void OnBlendOut_C38B946747458248EFD32B823552103E();
	void OnCompleted_C38B946747458248EFD32B823552103E();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool* bWasCancelled);
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void TossGrenade();
	void InitTrajectoryVariables();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void FireMontage();
	void ExecuteUbergraph_GA_Athena_Thrower_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
