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

// BlueprintGeneratedClass GA_Dudebro_Vortex.GA_DudeBro_Vortex_C
// 0x001C (0x090C - 0x08F0)
class UGA_DudeBro_Vortex_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      VehicleSkelMesh;                                          // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              GravFloorAltitude;                                        // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Dudebro_Vortex.GA_DudeBro_Vortex_C");
		return ptr;
	}


	void EventReceived_C064A1B545D792D62509919D8FFE8FBD(const struct FGameplayEventData& Payload);
	void EventReceived_600270C649671D219DB85584BE0265BC(const struct FGameplayEventData& Payload);
	void EventReceived_0A7014874570D996FD13889185F02E0A(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool* bWasCancelled);
	void PlayerCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_GA_DudeBro_Vortex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
