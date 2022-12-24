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

// BlueprintGeneratedClass Announce_Gen_Basic.Announce_Gen_Basic_C
// 0x0008 (0x0488 - 0x0480)
class AAnnounce_Gen_Basic_C : public AFortClientAnnouncement_Basic
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Announce_Gen_Basic.Announce_Gen_Basic_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
