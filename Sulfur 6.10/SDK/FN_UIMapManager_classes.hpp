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

// BlueprintGeneratedClass UIMapManager.UIMapManager_C
// 0x0008 (0x0480 - 0x0478)
class AUIMapManager_C : public AFortInGameMapManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass UIMapManager.UIMapManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
