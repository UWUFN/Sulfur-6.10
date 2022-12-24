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

// BlueprintGeneratedClass BP_Athena_RuneSeal.BP_Athena_RuneSeal_C
// 0x017C (0x04A4 - 0x0328)
class ABP_Athena_RuneSeal_C : public AFortAlwaysRelevantReplicatedActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UAudioComponent*                             DudeBro_Seal_Amb_Spent_Cue;                               // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             DudeBro_Seal_Amb_Cue;                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_DebrisField_RuneSeal;                                   // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_DudeBro_Vortex_01;                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        RuneCollision;                                            // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Athena_Cube_PillarsOfLight;                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_LightShaft;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_DFHeight;                                               // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           CapsulePostProcessVolume;                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight;                                                // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Seal;                                                     // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               SealActive;                                               // 0x03A0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              Seal_ActiveHeight;                                        // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Seal_ClosedHeight;                                        // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	TArray<class ABP_Athena_RuneVent_C*>               Seal_Vents;                                               // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ABGA_DudeBro_Area_Effect_C*                  VortexActor;                                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_IslandScripting_C*                       IslandScripting;                                          // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                RuneIndex;                                                // 0x03D0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               ForceSealActive;                                          // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestSealActive;                                           // 0x03D5(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03D6(0x0002) MISSED OFFSET
	int                                                SealActiveInt;                                            // 0x03D8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IslandPassed;                                             // 0x03DC(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	TArray<class ATiered_Chest_Athena_C*>              Chests;                                                   // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	float                                              Seal_PassedHeight;                                        // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RuneRotation;                                             // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      RuneRotations;                                            // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstance*>                   RuneMaterials;                                            // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SealSequenceTime;                                         // 0x0418(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	TArray<struct FVector>                             ChestLocations;                                           // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RuneSpent;                                                // 0x0430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              DelayBeforeFly;                                           // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeMove;                                          // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FTransform                                  SpentTransform;                                           // 0x0440(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ArrivalTime;                                              // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SealMoveTime;                                             // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class APlayerPawn_Athena_C*>                CharactersWalkingOnRune;                                  // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FVector                                     EndEffectLocation;                                        // 0x0488(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SealChargeCubeTime;                                       // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortStaticMeshActor*                        MapRuneGround;                                            // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              DebugSequenceTime;                                        // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Athena_RuneSeal.BP_Athena_RuneSeal_C");
		return ptr;
	}


	void TurnOnPillarOfLight();
	void SetupRuneSeal();
	void SpawnCubeChargeEffects();
	bool IsSealFlying();
	float RemapTime(float A);
	void RepositionChestsOnIsland();
	void OnRep_IslandPassed();
	void OnRep_SealActiveInt();
	void OnRep_TestSealActive();
	void AddVentToArray(class ABP_Athena_RuneVent_C* NewVent);
	void SpawnVortex();
	void DeactivateVents();
	void ActivateVents();
	void CloseSeal();
	void OpenSeal();
	void OnRep_SealActive();
	void UserConstructionScript();
	void GetIslandTime(const struct FVector& Position);
	void ReceiveBeginPlay();
	void HarvestChestLocations();
	void BndEvt__Seal_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BndEvt__OverlapForSkydiving_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void DeactivateSeal();
	void BndEvt__RuneCollision_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__RuneCollision_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActivateSeal();
	void ExecuteUbergraph_BP_Athena_RuneSeal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
