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

// BlueprintGeneratedClass GAT_DanceGrenade.GAT_DanceGrenade_C
// 0x0017 (0x0918 - 0x0901)
class UGAT_DanceGrenade_C : public UGAT_TriggeredAbility_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0908(0x0008) (Transient, DuplicateTransient)
	class AFortPlayerPawn*                             PlayerPawn;                                               // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAT_DanceGrenade.GAT_DanceGrenade_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAT_DanceGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
