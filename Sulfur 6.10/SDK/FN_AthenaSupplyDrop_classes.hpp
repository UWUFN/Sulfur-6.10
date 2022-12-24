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

// BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C
// 0x0170 (0x09F0 - 0x0880)
class AAthenaSupplyDrop_C : public AFortAthenaSupplyDrop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0880(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             FallingAudio;                                             // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ReticlePSC;                                               // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               CrateCollision;                                           // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor;                                               // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             FlareAudio;                                               // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    FlarePSC;                                                 // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             ReticleAudio;                                             // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        CrateStaticMesh;                                          // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileMovementComponent*                ProjectileMovement;                                       // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AFortPawn*                                   MyInteractingPawn;                                        // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LootTableName;                                            // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LootSpawnOffset;                                          // 0x08E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08EC(0x0004) MISSED OFFSET
	class USoundBase*                                  Sound_Looted;                                             // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Destroyed;                                          // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Landing;                                            // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Opened;                                                   // 0x0908(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BalloonPopped;                                            // 0x0909(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x090A(0x0006) MISSED OFFSET
	class UParticleSystem*                             LandingFX;                                                // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             DestroyedFX;                                              // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             LootedFX;                                                 // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallSpeed;                                                // 0x0928(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReticleUpdateInterval;                                    // 0x092C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialFallDelay;                                         // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	struct FCurveTableRowHandle                        CurveTable_FallTime;                                      // 0x0938(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             FallTrailFX;                                              // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_Appear;                                             // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_ReticleAppear;                                      // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Sound_AlmostLanded;                                       // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandingLocation;                                          // 0x0968(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               AutoOpen;                                                 // 0x0974(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	struct FCurveTableRowHandle                        MinSpeed;                                                 // 0x0978(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCurveTableRowHandle                        MaxSpeed;                                                 // 0x0988(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FallHeight;                                               // 0x0998(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentOffsetMin;                                         // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentOffsetMax;                                         // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FallDirection;                                            // 0x09A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GroundLocation;                                           // 0x09B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentYOffsetMin;                                        // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DescentYOffsetMax;                                        // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGroundLocationInitialized;                               // 0x09C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bOverrideRotation;                                        // 0x09C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x09C6(0x0002) MISSED OFFSET
	struct FRotator                                    OverrideRotation;                                         // 0x09C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	struct FTimerHandle                                NewVar_0_1;                                               // 0x09D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               BlingDrop;                                                // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	struct FName                                       LootTableNameToUse;                                       // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AthenaSupplyDrop.AthenaSupplyDrop_C");
		return ptr;
	}


	void OnSetCustomDepthStencilValue(TArray<class UPrimitiveComponent*>* PrimComponents, bool* bUseCustomDepth, int* StencilValue, bool* bOutConsume);
	void HandleProjectileMovementStop(const struct FHitResult& ImpactResult);
	void ForceSetLocationOnLanding();
	void OnRep_LandingLocation();
	void AlmostLanded();
	void DisableFlare();
	void InitFallHeightAndSpeed();
	void PlayLandingFX();
	void InitFall();
	void OnRep_BalloonPopped();
	void BalloonDestroyed();
	void UpdateReticleLocation();
	void OpenSupplyDrop();
	void OnRep_Opened();
	void Setup_Bind_To_Building_Actor(class UObject* Object);
	struct FText BlueprintGetInteractionString(class AFortPawn** InteractingPawn);
	void GetLootSpawnLocation(struct FVector* LootSpawnLocation);
	void SpawnLoot();
	bool BlueprintCanInteract(class AFortPawn** InteractingPawn);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnLandingLocationChanged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, const struct FName& BoneName, const struct FVector& Momentum);
	void Multicast_ApplyGravityForFall();
	void BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	void OnDeathServer(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AController** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BlueprintOnInteract(class AFortPawn** InteractingPawn);
	void OnDeathPlayEffects(float* Damage, struct FGameplayTagContainer* DamageTags, struct FVector* Momentum, struct FHitResult* HitInfo, class AFortPawn** InstigatedBy, class AActor** DamageCauser, struct FGameplayEffectContextHandle* EffectContext);
	void BeginFallAudioTimeline();
	void StopFallAudioTimeline();
	void ExecuteUbergraph_AthenaSupplyDrop(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
