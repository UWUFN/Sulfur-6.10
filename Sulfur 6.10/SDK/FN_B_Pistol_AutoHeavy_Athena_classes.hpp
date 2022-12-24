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

// BlueprintGeneratedClass B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C
// 0x0008 (0x0FD0 - 0x0FC8)
class AB_Pistol_AutoHeavy_Athena_C : public AB_Pistol_Auto_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnWeaponAttached();
	void ExecuteUbergraph_B_Pistol_AutoHeavy_Athena(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
