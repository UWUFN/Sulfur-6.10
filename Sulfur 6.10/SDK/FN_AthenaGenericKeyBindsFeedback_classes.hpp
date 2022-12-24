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

// WidgetBlueprintGeneratedClass AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C
// 0x0028 (0x0280 - 0x0258)
class UAthenaGenericKeyBindsFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)
	int                                                MaxLinesNeeded;                                           // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0264(0x0004) MISSED OFFSET
	TArray<class UAthenaHUDFeedbackLine_C*>            FeedbackLines;                                            // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               InGhostMode;                                              // 0x0278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0279(0x0003) MISSED OFFSET
	int                                                FreeIndex;                                                // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaGenericKeyBindsFeedback.AthenaGenericKeyBindsFeedback_C");
		return ptr;
	}


	void RefreshGhostModeKeys();
	void GetKeybindInputType(ECommonInputType* InputType);
	void Construct();
	void HideFeedback();
	void ShowFeedback();
	void OnKeybindsChanged_Bind();
	void HandleOnGhostModeChanged(bool bEnteredGhostMode);
	void HandleOnEnterExitVehicle();
	void ExecuteUbergraph_AthenaGenericKeyBindsFeedback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
