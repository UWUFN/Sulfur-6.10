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

// WidgetBlueprintGeneratedClass Button_Crouch.Button_Crouch_C
// 0x0008 (0x03E8 - 0x03E0)
class UButton_Crouch_C : public UCommonBacchusButton_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Crouch.Button_Crouch_C");
		return ptr;
	}


	void ShouldHide(const struct FFortHUDState& Current_Hud_State, bool* ShouldHide);
	struct FEventReply OnTouchStarted(struct FGeometry* MyGeometry, struct FPointerEvent* InTouchEvent);
	void OnHUDStateUpdate(struct FFortHUDState* NewState);
	void ExecuteUbergraph_Button_Crouch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
