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

// BlueprintGeneratedClass Athena_GameState.Athena_GameState_C
// 0x0028 (0x1B80 - 0x1B58)
class AAthena_GameState_C : public AFortGameStateAthena
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1B58(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x1B60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_21F3C11243B4DF8C6B6A958D51E85950;   // 0x1B68(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_21F3C11243B4DF8C6B6A958D51E85950;   // 0x1B6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1B6D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_0_1;                                             // 0x1B70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundBase*                                  Victory_Royale_Sound;                                     // 0x1B78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Athena_GameState.Athena_GameState_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnWinnerAnnounced();
	void ExecuteUbergraph_Athena_GameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
