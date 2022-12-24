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

// BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
// 0x0020 (0x0FE8 - 0x0FC8)
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC8(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     LaserScaleUntargeted;                                     // 0x0FD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LaserScaleTargeted;                                       // 0x0FDC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnSetTargeting(bool* bNewIsTargeting);
	void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
