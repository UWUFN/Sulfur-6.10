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

// WidgetBlueprintGeneratedClass AthenaFPS.AthenaFPS_C
// 0x0008 (0x0258 - 0x0250)
class UAthenaFPS_C : public UAthenaFPSBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AthenaFPS.AthenaFPS_C");
		return ptr;
	}


	void ShowFPSChanged(bool bShowFPS);
	void Construct();
	void ExecuteUbergraph_AthenaFPS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
