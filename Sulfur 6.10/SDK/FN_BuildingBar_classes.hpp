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

// WidgetBlueprintGeneratedClass BuildingBar.BuildingBar_C
// 0x00D0 (0x02F0 - 0x0220)
class UBuildingBar_C : public UCommonUserWidget
{
public:
	class UCommonHealthBar_C*                          CommonHealthBar;                                          // 0x0220(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UFortMultiSizeItemCard*                      TrapItemCard;                                             // 0x0228(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TrapNameTextBlock;                                        // 0x0230(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                            TrapUsesText;                                             // 0x0238(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                TrapVerticalBox;                                          // 0x0240(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FTimerHandle                                HP_FadeTimer;                                             // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              HP_FadeUpdateRate;                                        // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFortBuildingInteraction                           DisplayMode;                                              // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	int                                                Max_Durability_Value;                                     // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Current_Durability_Value;                                 // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Default_Baseplate_Color;                                  // 0x0260(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Alternate_Baseplate_Color;                                // 0x0270(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Default_HP_Color_A;                                       // 0x0280(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Default_HP_Color_B;                                       // 0x0290(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Default_HP_Color_C;                                       // 0x02A0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Alternate_HP_Color_A;                                     // 0x02B0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Alternate_HP_Color_B;                                     // 0x02C0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                Alternate_HP_Color_C;                                     // 0x02D0(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Show_Trap_Durability_Text;                                // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02E1(0x0007) MISSED OFFSET
	class UFortItem*                                   TemporaryTrapInstance;                                    // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BuildingBar.BuildingBar_C");
		return ptr;
	}


	void UpdateBuildingTrap(class ABuildingTrap* BuildingTrap);
	void Set_Display_Mode(EFortBuildingInteraction InDisplayMode);
	void Update_Durability_Text();
	void Update_Current_Durability_Value(float CurrentDurability);
	void Update_Max_Durability_Value(float Max);
	void Update_Current_HP_Value(float Current);
	void Update_Max_HP_Value(float Max);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
