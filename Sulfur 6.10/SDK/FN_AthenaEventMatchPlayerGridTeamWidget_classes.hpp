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

// WidgetBlueprintGeneratedClass AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C
// 0x0010 (0x0290 - 0x0280)
class UAthenaEventMatchPlayerGridTeamWidget_C : public UAthenaEventMatchTeamWidgetBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (Transient, DuplicateTransient)
	class UUniformGridPanel*                           PlayerGrid;                                               // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaEventMatchPlayerGridTeamWidget.AthenaEventMatchPlayerGridTeamWidget_C");
		return ptr;
	}


	void OnGridSizeChanged(int InGridSize);
	void AddToGrid(class UUserWidget* PlayerWidget);
	void OnPlayerWidgetAdded();
	void ExecuteUbergraph_AthenaEventMatchPlayerGridTeamWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
