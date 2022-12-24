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

// BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C
// 0x0030 (0x0920 - 0x08F0)
class UGAB_GenericStunned_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      StunActiveEffect;                                         // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveStun;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                      RestoreControlResistEffect;                               // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GE_ImpactImmunity;                                        // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 ActiveImpactImmunity;                                     // 0x0918(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericStunned.GAB_GenericStunned_C");
		return ptr;
	}


	void K2_OnEndAbility(bool* bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_GenericStunned(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
