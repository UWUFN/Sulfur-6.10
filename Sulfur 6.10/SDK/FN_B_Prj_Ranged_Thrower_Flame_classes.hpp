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

// BlueprintGeneratedClass B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C
// 0x0060 (0x0860 - 0x0800)
class AB_Prj_Ranged_Thrower_Flame_C : public AB_Prj_Ranged_Rocket_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0800(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            DestroyRadius;                                            // 0x0808(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0810(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_PPFade_B2E851DA40C71C8DC3C27D847773FE81;       // 0x0818(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_B2E851DA40C71C8DC3C27D847773FE81;   // 0x081C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x0820(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      Rocket_AOECloud;                                          // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Aoe_Sound_Cue;                                            // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             Aoe_FX_Loop;                                              // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Stop_Rot_X;                                               // 0x0840(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x084C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          AoEDecal;                                                 // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortAreaOfEffectCloud*                      NewVar_0_1;                                               // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Ranged_Thrower_Flame.B_Prj_Ranged_Thrower_Flame_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void CustomEvent_1_2(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnExploded(TArray<class AActor*>* HitActors, TArray<struct FHitResult>* HitResults);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void CustomEvent();
	void BndEvt__DestroyRadius_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult* Hit);
	void OnBounce(struct FHitResult* Hit);
	void ExecuteUbergraph_B_Prj_Ranged_Thrower_Flame(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
