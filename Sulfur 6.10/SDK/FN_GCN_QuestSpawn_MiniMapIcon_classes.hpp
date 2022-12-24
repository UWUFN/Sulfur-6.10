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

// BlueprintGeneratedClass GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C
// 0x0010 (0x0430 - 0x0420)
class AGCN_QuestSpawn_MiniMapIcon_C : public AFortGameplayCueNotify_Looping
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	class UFortMiniMapComponent*                       MiniMapCrosshair;                                         // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GCN_QuestSpawn_MiniMapIcon.GCN_QuestSpawn_MiniMapIcon_C");
		return ptr;
	}


	bool OnRemove(class AActor** MyTarget, struct FGameplayCueParameters* Parameters);
	void HideMiniBossGCN();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GCN_QuestSpawn_MiniMapIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
