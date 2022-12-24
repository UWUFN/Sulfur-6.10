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

// BlueprintGeneratedClass DA_HandyPack.DA_HandyPack_C
// 0x0030 (0x0C18 - 0x0BE8)
class ADA_HandyPack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0BE8(0x0008) (Transient, DuplicateTransient)
	float                                              MinHeldTime;                                              // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0BF4(0x0004) MISSED OFFSET
	struct FTimerHandle                                ButtonHeldTimer;                                          // 0x0BF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               CanFire;                                                  // 0x0C00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlreadyReleased;                                          // 0x0C01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0C02(0x0006) MISSED OFFSET
	class ABP_Med_Pack_OverlapVolume_C*                OverlapVolume;                                            // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      TargetToKnock;                                            // 0x0C10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DA_HandyPack.DA_HandyPack_C");
		return ptr;
	}


	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper** FortDecoHelper);
	void BPReleaseTrigger(class AFortDecoHelper** FortDecoHelper);
	void ExecuteUbergraph_DA_HandyPack(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
