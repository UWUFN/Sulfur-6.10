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

// BlueprintGeneratedClass GA_Trap_CeilingFreeze_Athena.GA_Trap_CeilingFreeze_Athena_C
// 0x0000 (0x0970 - 0x0970)
class UGA_Trap_CeilingFreeze_Athena_C : public UGA_Trap_FloorFreeze_Athena_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GA_Trap_CeilingFreeze_Athena.GA_Trap_CeilingFreeze_Athena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
