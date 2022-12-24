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

// BlueprintGeneratedClass MegaStormManagerAthena.MegaStormManagerAthena_C
// 0x0008 (0x0368 - 0x0360)
class AMegaStormManagerAthena_C : public AMegaStormManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaStormManagerAthena.MegaStormManagerAthena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
