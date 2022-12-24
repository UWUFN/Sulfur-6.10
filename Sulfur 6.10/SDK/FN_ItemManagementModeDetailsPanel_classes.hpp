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

// WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C
// 0x0008 (0x0258 - 0x0250)
class UItemManagementModeDetailsPanel_C : public UFortItemManagementModeDetailsPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemManagementModeDetailsPanel.ItemManagementModeDetailsPanel_C");
		return ptr;
	}


	void SetScrollFocusOnMulchDetailsPanel();
	void HandleDifferentItemManagementModeSetBP();
	void ExecuteUbergraph_ItemManagementModeDetailsPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
