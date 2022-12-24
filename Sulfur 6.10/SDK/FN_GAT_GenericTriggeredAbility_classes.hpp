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

// BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// 0x00C1 (0x09C2 - 0x0901)
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0908(0x0008) (Transient, DuplicateTransient)
	struct FGameplayEventData                          EventData;                                                // 0x0910(0x00A8) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             FortPlayerPawn;                                           // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               isAutoCommitted;                                          // 0x09C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isStaminaLockedOut;                                       // 0x09C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C");
		return ptr;
	}


	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAT_GenericTriggeredAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
