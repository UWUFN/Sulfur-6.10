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

// BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// 0x0090 (0x0980 - 0x08F0)
class UGA_Rift_Athena_Skydive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                FallingAnimation;                                         // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Hangtimee;                                                // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0904(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      VehicleSkelMesh;                                          // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScalableFloat                              Hangtime;                                                 // 0x0910(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                EventTag;                                                 // 0x0930(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              KickFromVehicle_;                                         // 0x0938(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USoundBase*                                  LocalPlayerSound;                                         // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GameplayCueGE;                                            // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHolstered;                                               // 0x0970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	struct FName                                       RiftSkydiveHolster;                                       // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C");
		return ptr;
	}


	void OnCancelled_AA0523504B7CA4F488E1E6A11F48308A();
	void OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A();
	void OnCompleted_AA0523504B7CA4F488E1E6A11F48308A();
	void OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5(TEnumAsByte<EMovementMode> NewMovementMode);
	void K2_ActivateAbility();
	void SetPlayerToSkydive();
	void K2_OnEndAbility(bool* bWasCancelled);
	void ExecuteUbergraph_GA_Rift_Athena_Skydive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
