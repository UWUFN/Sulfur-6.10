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

// BlueprintGeneratedClass BP_Athena_Water.BP_Athena_Water_C
// 0x0074 (0x039C - 0x0328)
class ABP_Athena_Water_C : public AFortAthenaWater
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UPostProcessComponent*                       WaterPost;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Water_Base;                                               // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Water_Plane;                                              // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstance*                           WaterMaterial;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HideGroundPlane;                                          // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UMaterialInterface*                          GroundPlaneMaterialOverride;                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CorruptWaterMat;                                          // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsBouncy;                                                 // 0x0369(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x036A(0x0006) MISSED OFFSET
	class AFortAthenaVehicle*                          VehicleToBounce;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AFortAthenaVehicle*>                  RecentlyBouncedVehicles;                                  // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsLootLake;                                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x038C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                BounceLake;                                               // 0x0398(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Athena_Water.BP_Athena_Water_C");
		return ptr;
	}


	void OnRep_BounceLake();
	void OnRep_IsBouncy();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetSpreadMaterial();
	void SetTurnedOnMaterial();
	void SetBouncy(bool Bouncy);
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Bouncy();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void PlayBounceGC(class AActor* Target);
	void BounceVehicle();
	void ClearRecentlyBounced();
	void SetDefaultMaterial();
	void ReplicateGCVehicles(class AActor* Actor);
	void BouncePawn(class APlayerPawn_Athena_C* Pawn);
	void ExecuteUbergraph_BP_Athena_Water(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
