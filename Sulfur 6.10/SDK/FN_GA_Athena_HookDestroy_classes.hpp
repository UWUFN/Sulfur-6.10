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

// BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C
// 0x0070 (0x0960 - 0x08F0)
class UGA_Athena_HookDestroy_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 SwitchLockGE;                                             // 0x0900(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Hit_;                                                     // 0x0908(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0909(0x0003) MISSED OFFSET
	float                                              CleanedAngle;                                             // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FToyAngleSelectorInfo>               LaunchAngleVariations;                                    // 0x0910(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                TravelMontage;                                            // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	class AB_Hookgun_Athena_C*                         WeaponActor;                                              // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       ChangeEquipmentTag;                                       // 0x0938(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                RopeActiveTag;                                            // 0x0958(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_HookDestroy.GA_Athena_HookDestroy_C");
		return ptr;
	}


	void K2_OnEndAbility(bool* bWasCancelled);
	void PickGrappleMontage(float PitchAngle, struct FName* SectionName);
	void OnRep_AmmoReserves();
	void OnNotifyEnd_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnNotifyBegin_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnInterrupted_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnBlendOut_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void OnCompleted_CB1C85E64FAE092AD81A04933C6C3263(const struct FName& NotifyName);
	void EventReceived_056D82C6464BB95E4DA717BEB307DB74(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnNotifyBegin_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnInterrupted_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnBlendOut_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void OnCompleted_556AB31A412041E7414C21AA5F4A70CC(const struct FName& NotifyName);
	void EventReceived_3FEADD91456C78D266936684DE918289(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnNotifyBegin_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnInterrupted_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnBlendOut_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void OnCompleted_28C962BC449D96C668F3C4BE36E6CA62(const struct FName& NotifyName);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_HookDestroy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
