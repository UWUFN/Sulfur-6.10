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

// WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C
// 0x0009 (0x03D1 - 0x03C8)
class UCollectionBookPrimaryPanel_C : public UFortCollectionBookPrimaryPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C8(0x0008) (Transient, DuplicateTransient)
	bool                                               CanShowCollectionBookHelp;                                // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C");
		return ptr;
	}


	void OnSummonInfoPanelExecuted(bool* bPassThrough);
	void HandleDisplayInfoBox();
	void ExecuteUbergraph_CollectionBookPrimaryPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
