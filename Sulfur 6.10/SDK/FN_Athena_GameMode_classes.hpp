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

// BlueprintGeneratedClass Athena_GameMode.Athena_GameMode_C
// 0x0008 (0x0F78 - 0x0F70)
class AAthena_GameMode_C : public AFortGameModeAthena
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_GameMode.Athena_GameMode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
