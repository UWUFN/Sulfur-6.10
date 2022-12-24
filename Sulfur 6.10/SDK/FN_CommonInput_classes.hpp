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

// Class CommonInput.CommonInputSubsystem
// 0x0048 (0x0070 - 0x0028)
class UCommonInputSubsystem : public UGameInstanceSubsystem
{
public:
	struct FScriptMulticastDelegate                    OnInputMethodChanged;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET
	ECommonInputType                                   CurrentInputType;                                         // 0x0050(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	ECommonGamepadType                                 GamepadInputType;                                         // 0x0051(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0052(0x0018) MISSED OFFSET
	bool                                               bIsGamepadSimulatedClick;                                 // 0x006A(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x006B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CommonInput.CommonInputSubsystem");
		return ptr;
	}


	void SetGamepadInputType(ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	void InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType);
	ECommonInputType GetDefaultInputType();
	ECommonInputType GetCurrentInputType();
	ECommonGamepadType GetCurrentGamepadType();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
