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

// BlueprintGeneratedClass CubeOverlapActor.CubeOverlapActor_C
// 0x00D0 (0x07C8 - 0x06F8)
class ACubeOverlapActor_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere;                                                   // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CubeBounceFlash_Offset_C4BEF74F49534998A43F64A7834C948F;  // 0x0710(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CubeBounceFlash_Flash_C4BEF74F49534998A43F64A7834C948F;   // 0x0714(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CubeBounceFlash__Direction_C4BEF74F49534998A43F64A7834C948F;// 0x0718(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0719(0x0007) MISSED OFFSET
	class UTimelineComponent*                          CubeBounceFlash;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CubeRetaliationGlow_LookAround_C44E1C044FDF7590933373B1C37E2619;// 0x0728(0x000C) (IsPlainOldData)
	float                                              CubeRetaliationGlow_LookAt_C44E1C044FDF7590933373B1C37E2619;// 0x0734(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CubeRetaliationGlow_Glow_C44E1C044FDF7590933373B1C37E2619;// 0x0738(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CubeRetaliationGlow__Direction_C44E1C044FDF7590933373B1C37E2619;// 0x073C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x073D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CubeRetaliationGlow;                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              Overlaps;                                                 // 0x0748(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     CubeLookDirection;                                        // 0x0758(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class AActor*                                      ZapTarget;                                                // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DirectionToPlayer;                                        // 0x0770(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceHitLocation;                                         // 0x077C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceHitNormal;                                           // 0x0788(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               TraceDown;                                                // 0x0794(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0795(0x0003) MISSED OFFSET
	class AFortPlayerPawn*                             ZapInstigator;                                            // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenRuneWubs;                                      // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	struct FScalableFloat                              ShieldOverlapRadius;                                      // 0x07A8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CubeOverlapActor.CubeOverlapActor_C");
		return ptr;
	}


	void GetSocketClosestToTarget(class AActor* TargetPlayer, struct FVector* LookAtDirection, struct FVector* SocketLocation);
	void UserConstructionScript();
	void CubeRetaliationGlow__FinishedFunc();
	void CubeRetaliationGlow__UpdateFunc();
	void CubeBounceFlash__FinishedFunc();
	void CubeBounceFlash__UpdateFunc();
	void ZapPlayer(class AFortPlayerPawn* InstigatingPlayer);
	void SpawnGC(class AActor* GCTarget, const struct FVector& Location, const struct FVector& Normal);
	void CubeRetaliationTelegraph();
	void CubeBounceFX(const struct FVector& Location, const struct FVector& Normal, class AActor* Target);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void TraceDownward();
	void ReceiveBeginPlay();
	void CubeRuneWub();
	void ZapVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location);
	void ReceiveDestroyed();
	void ExecuteUbergraph_CubeOverlapActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
