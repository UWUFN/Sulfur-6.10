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

// BlueprintGeneratedClass B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C
// 0x0040 (0x05A8 - 0x0568)
class AB_Thrower_Flame_AOE_C : public AFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0568(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0570(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             Aoe_FX_Loop;                                              // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Aoe_Sound_Cue;                                            // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    StopRotX;                                                 // 0x0590(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StopLocatin;                                              // 0x059C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Thrower_Flame_AOE.B_Thrower_Flame_AOE_C");
		return ptr;
	}


	void GetRotation(const struct FRotator& Rotation, const struct FVector& Location);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_B_Thrower_Flame_AOE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
