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

// BlueprintGeneratedClass B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C
// 0x0219 (0x0901 - 0x06E8)
class AB_Prj_Athena_SuperTowerGrenade_C : public AFortSuperTowerGrenadeProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BaseDestination;                                          // 0x0708(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class UParticleSystem*                             P_BuildBuilding;                                          // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_CloseSound;                                           // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Cue_DistantSound;                                         // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GridExplosionOffset;                                      // 0x0730(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeXY;                                               // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridSizeZ;                                                // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridYOffset;                                              // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GridZOffset;                                              // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECardinalDirection>                    CardinalDirection;                                        // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	TMap<TEnumAsByte<ECardinalDirection>, float>       OrientationYawOffsets;                                    // 0x0750(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationLocationOffsets;                               // 0x07A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IsDebug;                                                  // 0x07F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x07F1(0x0003) MISSED OFFSET
	float                                              TireBuildDelay;                                           // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             ClearedCells_Normal;                                      // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     LastBounceLocation;                                       // 0x0808(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinBounceDistance;                                        // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastBounceTime;                                           // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenBounces;                                    // 0x081C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BounceSound;                                              // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             ClearedCells_Underground;                                 // 0x0828(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              BGAClasses_Tires;                                         // 0x0838(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             BGALocations_Tires;                                       // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FRotator>                            BGARotations_Tires;                                       // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ECardinalDirection>, struct FVector> OrientationDoortraceOffsets;                              // 0x0868(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     DoorTraceOffsetHigh;                                      // 0x08B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DoorTraceOffsetLow;                                       // 0x08C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_HitTerrain;                                             // 0x08D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	class USoundBase*                                  InAirLoopSound;                                           // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             InAirLoopComponent;                                       // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              BounceTimeout;                                            // 0x08E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x08EC(0x0004) MISSED OFFSET
	class UClass*                                      BuilderClass;                                             // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BuilderClassBasement;                                     // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               b_SpawnTires;                                             // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_SuperTowerGrenade.B_Prj_Athena_SuperTowerGrenade_C");
		return ptr;
	}


	void ClearOnly(bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells);
	void CallDynamicBuilder(class UClass* Class, const struct FVector& Location);
	void CalculateCardinalDirection();
	void HandleProps(TArray<class AActor*>* Array);
	void SpawnTires(const struct FVector& ReferenceLocation);
	void ClearAndBuild(TArray<class UClass*> BGAClassArray, bool DestroyFloorsQuickly, TArray<struct FVector>* ClearedGridCells, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void CreateBaseSection(const struct FVector& ReferenceLocation, TArray<class UClass*> BGAClassArray, TArray<struct FVector>* BGALocationArray, TArray<struct FRotator>* BGARotationArray);
	void SetBaseDestination(const struct FHitResult& Hit);
	void UserConstructionScript();
	void OnStop(struct FHitResult* Hit);
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void Handle_Bounce(const struct FVector& Hit_Location);
	void Delete_another_actor();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_B_Prj_Athena_SuperTowerGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
