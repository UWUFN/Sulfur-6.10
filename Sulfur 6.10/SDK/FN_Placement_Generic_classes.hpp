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

// WidgetBlueprintGeneratedClass Placement_Generic.Placement_Generic_C
// 0x0008 (0x03B0 - 0x03A8)
class UPlacement_Generic_C : public UHUDLayoutToolPlacementWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Placement_Generic.Placement_Generic_C");
		return ptr;
	}


	void OnInsideGridStateChange(bool* bInsideGrid);
	void ExecuteUbergraph_Placement_Generic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
