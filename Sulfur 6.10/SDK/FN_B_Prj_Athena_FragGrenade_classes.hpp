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

// BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
// 0x000C (0x0768 - 0x075C)
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0760(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C");
		return ptr;
	}


	void UserConstructionScript();
	void FuseEnded();
	void ExecuteUbergraph_B_Prj_Athena_FragGrenade(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
