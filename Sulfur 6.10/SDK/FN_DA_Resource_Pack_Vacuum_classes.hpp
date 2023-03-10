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

// BlueprintGeneratedClass DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C
// 0x0068 (0x0C50 - 0x0BE8)
class ADA_Resource_Pack_Vacuum_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE8(0x0008) (Transient, DuplicateTransient)
	struct FGameplayTagContainer                       ErrorReason;                                              // 0x0BF0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorReasonGamepad;                                       // 0x0C10(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                       ErrorCannotUse;                                           // 0x0C30(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_Resource_Pack_Vacuum.DA_Resource_Pack_Vacuum_C");
		return ptr;
	}


	void IsOnGround(bool* bOnGround);
	void RaiseUsageError(const struct FGameplayTagContainer& FailedReason);
	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_DA_Resource_Pack_Vacuum(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
