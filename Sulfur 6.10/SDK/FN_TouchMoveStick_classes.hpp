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

// WidgetBlueprintGeneratedClass TouchMoveStick.TouchMoveStick_C
// 0x002C (0x03B4 - 0x0388)
class UTouchMoveStick_C : public UFortTouchMoveStick
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UImage*                                      Image_Move_Thumb;                                         // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UImage*                                      Image_Move_Thumb_BG;                                      // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              ThumbstickMoveScale;                                      // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlphaInterpSpeed;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetOpacity;                                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TouchedOpacity;                                           // 0x03AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UntouchedOpacity;                                         // 0x03B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TouchMoveStick.TouchMoveStick_C");
		return ptr;
	}


	void PreConstruct(bool* IsDesignTime);
	void Construct();
	void Tick(struct FGeometry* MyGeometry, float* InDeltaTime);
	void SetStickPosition(struct FVector2D* NewPosition);
	void SetMovementLockStatus(bool* MovementIsLocked);
	void HandleTouchStarted();
	void HandleTouchEnded();
	void ExecuteUbergraph_TouchMoveStick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
