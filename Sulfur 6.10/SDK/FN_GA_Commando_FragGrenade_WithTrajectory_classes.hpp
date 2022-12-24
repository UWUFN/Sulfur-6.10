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

// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// 0x03DE (0x0DB8 - 0x09DA)
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x09DA(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09E0(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTag                                EventActivation;                                          // 0x09E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventComplete;                                            // 0x09F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      Prj_Grenade;                                              // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMin;                                          // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeSpeedMax;                                          // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GravityScale;                                             // 0x0A08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class USoundBase*                                  GrenadeSound;                                             // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       TC_ClusterBomb;                                           // 0x0A18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                MaxClusterGrenades;                                       // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0A3C(0x0004) MISSED OFFSET
	class UClass*                                      Prj_Cluster;                                              // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterSpeedMax;                                          // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A4C(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_BiggerIsBetter;                                        // 0x0A50(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_DefaultExplosion;                                      // 0x0A70(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_IncreasedRadius;                                       // 0x0A78(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec            EC_ReturnedEffect;                                        // 0x0A80(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ExplosionRadius;                                          // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditionalThrowAngle;                                     // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMinPitch;                                          // 0x0B08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClusterMaxPitch;                                          // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                EC_ClusterExplosion;                                      // 0x0B10(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ClusterSpeedMin;                                          // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B1C(0x0004) MISSED OFFSET
	struct FFortFeedbackHandle                         GrenadeDialogFeedback;                                    // 0x0B20(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_KeepOut;                                               // 0x0B38(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EC_KeepOut;                                               // 0x0B58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      AOE_KeepOut;                                              // 0x0B60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter;                                           // 0x0B68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb;                                              // 0x0B69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               KeepOut;                                                  // 0x0B6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0B6B(0x0005) MISSED OFFSET
	struct FGameplayTagContainer                       TC_GrenadeAmmo;                                           // 0x0B70(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GrenadeCost;                                           // 0x0B90(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       TC_GrenadeDamage;                                         // 0x0BB0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               GrenadeAmmo;                                              // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeCost;                                              // 0x0BD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrenadeDamage;                                            // 0x0BD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x0BD3(0x0001) MISSED OFFSET
	int                                                GrenadeAmmoUpgrade;                                       // 0x0BD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                GrenadeAmmoDefault;                                       // 0x0BD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxGrenadeAmmo;                                           // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusTooltip;                                   // 0x0BE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusDefault;                                   // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ExplosionRadiusUpgrade;                                   // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0BEC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_PlasmaGrenades;                                        // 0x0BF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               PlasmaGrenades;                                           // 0x0C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0C11(0x0007) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Flashbang;                                             // 0x0C18(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Flashbang;                                                // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	struct FVector                                     GrenadeTargetingOriginOffset;                             // 0x0C3C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AFortProjectileBase*                         DummyProjectile;                                          // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               DummyShouldBounce;                                        // 0x0C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0C51(0x0003) MISSED OFFSET
	float                                              DummyBounciness;                                          // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyFriction;                                            // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TrajectoryUpdateInterval;                                 // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyMaxSpeed;                                            // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyGravity;                                             // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyTimeStep;                                            // 0x0C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DummyExtent;                                              // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InThrowWindup;                                            // 0x0C70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0C71(0x0007) MISSED OFFSET
	class ABP_ProjectileTrajectory_C*                  TrajectoryIndicator;                                      // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TrajectoryIndicatorClass;                                 // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFortGameplayAbilityMontageInfo             ThrowWindupMontage;                                       // 0x0C88(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               AbilityKeyPressed;                                        // 0x0CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0CE9(0x0003) MISSED OFFSET
	float                                              MaxSpeedPitch;                                            // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinSpeedPitch;                                            // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTossPitch;                                             // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxTrajectoryBounces;                                     // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0CFC(0x0004) MISSED OFFSET
	struct FGameplayTagContainer                       TC_Tactical_Clusterbomb;                                  // 0x0D00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Tactical_Clusterbomb;                                     // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0D21(0x0007) MISSED OFFSET
	struct FGameplayTag                                EC_ClusterExplosion_Tactical;                             // 0x0D28(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              F_FrameDelay;                                             // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseNewPerkSystem;                                         // 0x0D34(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter_T01;                                       // 0x0D35(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BiggerIsBetter_T02;                                       // 0x0D36(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb_T01;                                          // 0x0D37(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ClusterBomb_T02;                                          // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0D39(0x0007) MISSED OFFSET
	struct FGameplayTag                                T_BiggerIsBetter_T01;                                     // 0x0D40(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_BiggerIsBetter_T02;                                     // 0x0D48(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_ClusterBomb_T01;                                        // 0x0D50(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_ClusterBomb_T02;                                        // 0x0D58(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SF_ClusterBombCount_T01;                                  // 0x0D60(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              SF_ClusterBombCount_T02;                                  // 0x0D80(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                                ThrowMontage;                                             // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                T_Event_Activate;                                         // 0x0DA8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                T_Event_Deactivate;                                       // 0x0DB0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C");
		return ptr;
	}


	void ActiveAbilitySetup(class UAbilitySystemComponent** AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut);
	void SpawnFragGrenade(class UClass* ProjectileClass, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale, struct FVector* SpawnLocation);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed);
	void UpdateTrajectorySpline();
	void SetupDummyProjectile();
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale);
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(const struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool* bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void ServerSpawnProjectile();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
