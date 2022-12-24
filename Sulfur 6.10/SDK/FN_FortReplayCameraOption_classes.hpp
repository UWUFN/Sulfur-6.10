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

// WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C
// 0x0009 (0x0C19 - 0x0C10)
class UFortReplayCameraOption_C : public UIconTextButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C10(0x0008) (Transient, DuplicateTransient)
	ESpectatorCameraType                               CameraType;                                               // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FortReplayCameraOption.FortReplayCameraOption_C");
		return ptr;
	}


	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_FortReplayCameraOption(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
