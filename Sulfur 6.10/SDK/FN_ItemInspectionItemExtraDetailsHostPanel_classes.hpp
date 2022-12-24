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

// WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C
// 0x0099 (0x0321 - 0x0288)
class UItemInspectionItemExtraDetailsHostPanel_C : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0288(0x0008) (Transient, DuplicateTransient)
	bool                                               Show_OptIn_Headers;                                       // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	struct FFortRarityItemData                         RarityData;                                               // 0x0298(0x0080) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    Border_Material;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AlwaysShowBorder;                                         // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ItemInspectionItemExtraDetailsHostPanel.ItemInspectionItemExtraDetailsHostPanel_C");
		return ptr;
	}


	void Update_Border_Color();
	void Update_Scrollbox_Layout();
	void Update_Header_Size();
	void HandleDifferentItemToDetailSet();
	void ExecuteUbergraph_ItemInspectionItemExtraDetailsHostPanel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
