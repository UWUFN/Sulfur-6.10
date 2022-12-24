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

// WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C
// 0x0040 (0x0298 - 0x0258)
class UAthenaVehicleFeedback_C : public UAthenaHUDSituationalFeedback_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0258(0x0008) (Transient, DuplicateTransient)
	TArray<struct FText>                               SeatActionLabels;                                         // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SeatActionNames;                                          // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxLinesNeeded;                                           // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0284(0x0004) MISSED OFFSET
	TArray<class UAthenaHUDFeedbackLine_C*>            FeedbackLines;                                            // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaVehicleFeedback.AthenaVehicleFeedback_C");
		return ptr;
	}


	void GetKeybindInputType(ECommonInputType* InputType);
	void Construct();
	void HideFeedback();
	void ShowFeedback();
	void OnKeybindsChanged_Bind();
	void OnExitVehicle_Bind();
	void OnEnterVehicleDriver_Bind();
	void OnEnterVehiclePassenger_Bind();
	void ExecuteUbergraph_AthenaVehicleFeedback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
