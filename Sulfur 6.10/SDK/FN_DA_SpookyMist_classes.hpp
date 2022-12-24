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

// BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C
// 0x0040 (0x0C28 - 0x0BE8)
class ADA_SpookyMist_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE8(0x0008) (Transient, DuplicateTransient)
	bool                                               CanCancelAbility;                                         // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0BF1(0x0007) MISSED OFFSET
	struct FTimerHandle                                CanCancelTimer;                                           // 0x0BF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                              CancelDelay;                                              // 0x0C00(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0C20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_SpookyMist.DA_SpookyMist_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPPressSecondaryFire(class AFortDecoHelper** FortDecoHelper);
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void BPOnUnEquip();
	void BPReleaseSecondaryFire(class AFortDecoHelper** FortDecoHelper);
	void CanCancel();
	void ReceiveBeginPlay();
	void On_DBNO();
	void ExecuteUbergraph_DA_SpookyMist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
