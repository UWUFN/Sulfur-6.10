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

// BlueprintGeneratedClass CUBE_Simple.CUBE_Simple_C
// 0x0210 (0x0908 - 0x06F8)
class ACUBE_Simple_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             AmbientAudio;                                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CubeAppearGlow_Glow_7F8FC8C2403FCB7F47961B9D982DC86C;     // 0x0718(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CubeAppearGlow__Direction_7F8FC8C2403FCB7F47961B9D982DC86C;// 0x071C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CubeAppearGlow;                                           // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ImpulsePlayerStrength;                                    // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseZStrength;                                         // 0x072C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseZStrengthWalking;                                  // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    CubeSetupComplete;                                        // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StopRuneGlow;                                             // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              AudioAmbFadeTime;                                         // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAudioDebugEnabled;                                       // 0x075C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x075D(0x0003) MISSED OFFSET
	float                                              DamageAccumulated;                                        // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class ACubeOverlapActor_C*                         OverlapActor;                                             // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              CubeDamageThreshold;                                      // 0x0770(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              ImpulseVehicleStrength;                                   // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0794(0x0004) MISSED OFFSET
	class AFortAthenaVehicle*                          ImpulsedVehicle;                                          // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    LandedAtRune;                                             // 0x07A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CubeReady;                                                // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              ImpulseStrengthZVehicle;                                  // 0x07C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x07C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    CubeLeftPosition;                                         // 0x07C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class APlayerPawn_Athena_C*>                LastLaunchedPlayer;                                       // 0x07D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScalableFloat                              ImpulseMultWalking;                                       // 0x07E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulseStrengthPlayer;                                    // 0x0808(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulseStrengthVehicle;                                   // 0x0828(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulseVehicleZ;                                          // 0x0848(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulsePlayerZ;                                           // 0x0868(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              ImpulsePlayerZWalking;                                    // 0x0888(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                RetriggerCleanupTimer;                                    // 0x08A8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTransform                                  Transform;                                                // 0x08B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABGA_DudeBro_Area_Effect_C*                  DudeBroAreaEffect;                                        // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              LaunchStrengthOnTouch;                                    // 0x08E8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CUBE_Simple.CUBE_Simple_C");
		return ptr;
	}


	void ImpulseVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location, float ZMultiplier);
	bool ShouldDie(float* Damage, class AController** EventInstigator, class AActor** DamageCauser);
	void LaunchPlayerAway(const struct FVector& HitLocation, const struct FVector& HitNormal, class APlayerPawn_Athena_C* Player, float ForceMultiplier, bool FlashCube);
	void UserConstructionScript();
	void CubeAppearGlow__FinishedFunc();
	void CubeAppearGlow__UpdateFunc();
	void RippleGC(const struct FVector& Location, const struct FVector& Normal, class AActor* Source, float Scale);
	void Set_Ambient_Audio_Enabled(bool Enabled);
	void OnDamageServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void OnDamagePlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ClearLastLaunchedPlayer();
	void CubeAppear();
	void ReceiveBeginPlay();
	void OnWorldReady();
	void RegisterDudebroActor(class ABGA_DudeBro_Area_Effect_C* DUDEBRO);
	void StartChanneling();
	void StopChanneling();
	void CheckChargingState(float CachedTime, float EventProgress);
	void ResetImpulseTimer();
	void ExecuteUbergraph_CUBE_Simple(int EntryPoint);
	void CubeLeftPosition__DelegateSignature();
	void CubeReady__DelegateSignature();
	void LandedAtRune__DelegateSignature(int Index);
	void StopRuneGlow__DelegateSignature();
	void CubeSetupComplete__DelegateSignature(int CurrentIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
