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

// BlueprintGeneratedClass B_GrenadeLauncher_Generic_Athena.B_GrenadeLauncher_Generic_Athena_C
// 0x0010 (0x0FD8 - 0x0FC8)
class AB_GrenadeLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{
public:
	class UStaticMeshComponent*                        Reload_MagazineReload;                                    // 0x0FC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Reload_Ammo;                                              // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_GrenadeLauncher_Generic_Athena.B_GrenadeLauncher_Generic_Athena_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
