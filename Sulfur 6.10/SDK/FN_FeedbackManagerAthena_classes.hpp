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

// BlueprintGeneratedClass FeedbackManagerAthena.FeedbackManagerAthena_C
// 0x0008 (0x0468 - 0x0460)
class AFeedbackManagerAthena_C : public AFortFeedbackManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedbackManagerAthena.FeedbackManagerAthena_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
