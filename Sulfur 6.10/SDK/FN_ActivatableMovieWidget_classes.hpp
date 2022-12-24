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

// WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C
// 0x0008 (0x0368 - 0x0360)
class UActivatableMovieWidget_C : public UFortActivatableVideoPanel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_ActivatableMovieWidget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
