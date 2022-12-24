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

// BlueprintGeneratedClass BP_Thrower_Trajectory.BP_Thrower_Trajectory_C
// 0x0088 (0x03B0 - 0x0328)
class ABP_Thrower_Trajectory_C : public AFortProjectileTrajectory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             Fort_BluGlo_loop_Cue;                                     // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Thrower_FlameAOE;                                       // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Target;                                                   // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                MaxMeshCount;                                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                SplineMeshComponents;                                     // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    SplineMID;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineFadeDistance;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplineFadeStartDistance;                                  // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDecalComponent*                             Decal;                                                    // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Emitter;                                                  // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     NewVar_0_1;                                               // 0x0398(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    NewVar_1_2;                                               // 0x03A4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Thrower_Trajectory.BP_Thrower_Trajectory_C");
		return ptr;
	}


	void SetTrajectorySpline(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void UserConstructionScript();
	void SetTrajectoryFromNative(TArray<struct FVector>* SplinePoints, TArray<struct FVector>* SplineTangents);
	void BndEvt__Target_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Change_Material();
	void ReceiveBeginPlay();
	void BndEvt__Target_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Decal_Timer();
	void ExecuteUbergraph_BP_Thrower_Trajectory(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
