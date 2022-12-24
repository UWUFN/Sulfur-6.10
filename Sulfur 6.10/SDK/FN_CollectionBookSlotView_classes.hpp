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

// WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C
// 0x0008 (0x02D0 - 0x02C8)
class UCollectionBookSlotView_C : public UFortCollectionBookSlotView
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CollectionBookSlotView.CollectionBookSlotView_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_CollectionBookSlotView(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
