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

// WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C
// 0x007E (0x029E - 0x0220)
class UAthenaCustomizationSlotButtonWrapper_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0220(0x0008) (Transient, DuplicateTransient)
	class UAthenaCustomizationSlotButton_C*            SlotButton;                                               // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FText                                       BannerDisplayName;                                        // 0x0230(0x0018) (Edit, BlueprintVisible)
	EAthenaCustomizationCategory                       CustomizationType;                                        // 0x0248(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0249(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSlotClicked;                                            // 0x0250(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSlotHovered;                                            // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FText                                       CategoryDescription;                                      // 0x0270(0x0018) (Edit, BlueprintVisible)
	struct FScriptMulticastDelegate                    OnSlotUnhovered;                                          // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                SubslotIndex;                                             // 0x0298(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortBangType                                      BangType;                                                 // 0x029C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EFortItemCardSize                                  SlottedItemCardSize;                                      // 0x029D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper(int EntryPoint);
	void OnSlotUnhovered__DelegateSignature();
	void OnSlotHovered__DelegateSignature(EAthenaCustomizationCategory CustomizationType, const struct FText& BannerLabel, const struct FText& CustomizationDescription, int SubslotIndex);
	void OnSlotClicked__DelegateSignature(EAthenaCustomizationCategory CustomizationType, class UCommonButton* Button, const struct FText& BannerLabel, int Subslot_Index);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
