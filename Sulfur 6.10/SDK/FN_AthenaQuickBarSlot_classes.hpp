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

// WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C
// 0x0008 (0x0390 - 0x0388)
class UAthenaQuickBarSlot_C : public UAthenaQuickbarSlotBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaQuickBarSlot.AthenaQuickBarSlot_C");
		return ptr;
	}


	void UpdateJetpackFuelGaugeVisiblity();
	void ShowJetpackFuelGauge();
	void HideJetpackFuelGauge();
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void OnRefreshItem();
	void Construct();
	void Handle_OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int> ChangedSlots);
	void ExecuteUbergraph_AthenaQuickBarSlot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
