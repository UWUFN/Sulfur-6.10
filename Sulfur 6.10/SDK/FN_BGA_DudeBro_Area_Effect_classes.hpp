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

// BlueprintGeneratedClass BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C
// 0x0181 (0x0879 - 0x06F8)
class ABGA_DudeBro_Area_Effect_C : public AFortAthenaLowGravZone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06F8(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           VortexSafeZone;                                           // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_DudeBro_Vortex_GroundDebris_01;                         // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_CubeVortex_DebrisField;                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_DudeBro_Vortex_Ring_01;                                 // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_DudeBro_VortexBase_Inverted_01;                        // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Cube_Chan;                                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_DebrisField;                                            // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sm_DudeBro_VortexBase_01;                                 // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CubeRetaliatingTimeline_LookAround_75F9391E48CAE04A443672ABE38C0886;// 0x0740(0x000C) (IsPlainOldData)
	float                                              CubeRetaliatingTimeline_LookAt_75F9391E48CAE04A443672ABE38C0886;// 0x074C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CubeRetaliatingTimeline_Glow_75F9391E48CAE04A443672ABE38C0886;// 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CubeRetaliatingTimeline__Direction_75F9391E48CAE04A443672ABE38C0886;// 0x0754(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CubeRetaliatingTimeline;                                  // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Offset_3EFDD5454B1654F64C36C596573FE9A5;       // 0x0760(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Flash_3EFDD5454B1654F64C36C596573FE9A5;        // 0x0764(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_3EFDD5454B1654F64C36C596573FE9A5;   // 0x0768(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0769(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Gravity;                                                  // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x077C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        MeshComponent;                                            // 0x0780(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PrintingEffect;                                           // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RuneAmbientEffect;                                        // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              DebrisSpawnRateScale;                                     // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokeSpawnRateScale;                                      // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EmberSpawnRateScale;                                      // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowSpawnRateScale;                                       // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DebrisReset;                                              // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07AC(0x0004) MISSED OFFSET
	class ABP_IslandScripting_C*                       ScriptingActor;                                           // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              TraceGroundIgnoredActors;                                 // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               IsAtRune;                                                 // 0x07C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07C9(0x0003) MISSED OFFSET
	struct FVector                                     GroundLocation;                                           // 0x07CC(0x000C) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableSafeZone;                                           // 0x07D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07D9(0x0003) MISSED OFFSET
	float                                              ZeroGravPrj;                                              // 0x07DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CubeLookDirection;                                        // 0x07E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x07EC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              Overlaps;                                                 // 0x07F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      ZapTarget;                                                // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     DirectionToPlayer;                                        // 0x0808(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceEndLocation;                                         // 0x0814(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceStartLocation;                                       // 0x0820(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceMaxDistance;                                         // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceHitLocation;                                         // 0x0830(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TraceHitNormal;                                           // 0x083C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             ZapInstigator;                                            // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACUBE_Simple_C*                              CubeActor;                                                // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScalableFloat                              CubeZapStrength;                                          // 0x0858(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               TraceDown;                                                // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BGA_DudeBro_Area_Effect.BGA_DudeBro_Area_Effect_C");
		return ptr;
	}


	void ReduceChannelingFX();
	void GetSocketClosestToTarget(class AActor* Target, struct FVector* LookAtDirection, struct FVector* SocketLocation);
	void ToyExit(class APhysicsBall_Master_C* Projectile);
	void ToyEnter(class APhysicsBall_Master_C* Projectile);
	void ProjExit(class AFortProjectileBase* Projectile);
	void ProjEnter(class AFortProjectileBase* Projectile);
	void OnRep_EnableSafeZone();
	bool IsIslandAtRune();
	void OnRep_GroundLocation();
	void SetVortexBaseVisibilitiesFX(bool Visible);
	void ImpulseAndSetSkydiveUpperDownward(class UObject* Object);
	void ImpulseAndSetSkydiveLower(class UObject* Object);
	void ImpulseAndSetSkydiveUpper(class UObject* Object);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void CubeRetaliatingTimeline__FinishedFunc();
	void CubeRetaliatingTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginChanneling();
	void NoChanneling();
	void Trace();
	void ToggleBaseVisibility();
	void On_Channeling_Zap_Audio(const struct FName& EventName, float EmitterTime, const struct FVector& Location, const struct FVector& Velocity);
	void BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__VortexSafeZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__Sm_DudeBro_VortexBase_01_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void CubeBounceFX(const struct FVector& Location, const struct FVector& Normal, class AActor* Target);
	void CubeRetaliationTelegraph();
	void ZapPlayer(class AFortPlayerPawn* InstigatingPlayer);
	void TraceDownward();
	void ZapVehicle(class AFortAthenaVehicle* Vehicle, const struct FVector& Normal, const struct FVector& Location);
	void SpawnGC(class AActor* GCTarget, const struct FVector& Location, const struct FVector& Normal);
	void setupEffects(const struct FVector& Position);
	void SetupGroundLocation(const struct FVector& Position);
	void ExecuteUbergraph_BGA_DudeBro_Area_Effect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
