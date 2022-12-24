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

// WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C
// 0x0008 (0x0290 - 0x0288)
class UQuestUpdatesLog_C : public UFortQuestUpdatesLog
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass QuestUpdatesLog.QuestUpdatesLog_C");
		return ptr;
	}


	void CreateAnnouncementUpdate(class UFortQuestObjectiveInfo** QuestItemToCheck);
	void ExecuteUbergraph_QuestUpdatesLog(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
