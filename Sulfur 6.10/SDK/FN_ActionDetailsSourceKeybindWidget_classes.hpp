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

// WidgetBlueprintGeneratedClass ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C
// 0x0010 (0x0888 - 0x0878)
class UActionDetailsSourceKeybindWidget_C : public UKeybindWidget_C
{
public:
	TScriptInterface<class UFortGlobalActionDetailsDataSource> ActionSource;                                             // 0x0878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C");
		return ptr;
	}


	void HandleActionSourceValueChange(class UObject* Source);
	void BindActionSourceEvents();
	void UnbindActionSourceEvents();
	void SetActionSource(const TScriptInterface<class UFortGlobalActionDetailsDataSource>& Value);
	void UpdateInputAction();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
