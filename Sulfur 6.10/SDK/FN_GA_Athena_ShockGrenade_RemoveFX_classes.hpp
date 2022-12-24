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

// BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C
// 0x0020 (0x0910 - 0x08F0)
class UGA_Athena_ShockGrenade_RemoveFX_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08F0(0x0008) (Transient, DuplicateTransient)
	class AFortPawn*                                   PlayerPawn;                                               // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTag                                Looping_GC;                                               // 0x0900(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                                Player_Landing_GC;                                        // 0x0908(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Athena_ShockGrenade_RemoveFX.GA_Athena_ShockGrenade_RemoveFX_C");
		return ptr;
	}


	void OnChange_4AD3DFC14DFECA79ED54A7B53F3A9E7E(TEnumAsByte<EMovementMode> NewMovementMode);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_Athena_ShockGrenade_RemoveFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
