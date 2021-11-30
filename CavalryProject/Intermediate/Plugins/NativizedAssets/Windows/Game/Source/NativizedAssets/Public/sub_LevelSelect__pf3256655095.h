#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Struc_LevelData__pf3256655095.h"
#include "Struc_CharacterData__pf3256655095.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UScrollBox;
class UWidget_LevelSelect_Button_C__pf3256655095;
class UClass;
class UWidget_CharacterSelect_Button_C__pf3256655095;
#include "sub_LevelSelect__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/sub_LevelSelect.sub_LevelSelect_C", OverrideNativeName="sub_LevelSelect_C"))
class Usub_LevelSelect_C__pf3256655095 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_CharacterOverlay", Category="sub_LevelSelect", OverrideNativeName="Image_CharacterOverlay"))
	UImage* bpv__Image_CharacterOverlay__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_MissionOverlay", Category="sub_LevelSelect", OverrideNativeName="Image_MissionOverlay"))
	UImage* bpv__Image_MissionOverlay__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_CharacterOptions", Category="sub_LevelSelect", OverrideNativeName="ScrollBox_CharacterOptions"))
	UScrollBox* bpv__ScrollBox_CharacterOptions__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ScrollBox_MissionOptions", Category="sub_LevelSelect", OverrideNativeName="ScrollBox_MissionOptions"))
	UScrollBox* bpv__ScrollBox_MissionOptions__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level Sel Button Class", Category="Default", MultiLine="true", OverrideNativeName="LevelSelButton_Class"))
	UClass* bpv__LevelSelButton_Class__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character Sel Button Class", Category="Default", MultiLine="true", OverrideNativeName="CharacterSelButton_Class"))
	UClass* bpv__CharacterSelButton_Class__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable_1"))
	int32 b0l__Temp_int_Array_Index_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Selected_Level_Index"))
	int32 b0l__K2Node_CustomEvent_Selected_Level_Index__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSelectionButtons_Local_SelectionButtons1"))
	TArray<UWidget_LevelSelect_Button_C__pf3256655095*> b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable_1"))
	int32 b0l__Temp_int_Loop_Counter_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UWidget_LevelSelect_Button_C__pf3256655095* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSelectionIndex_SlectionIndex"))
	int32 b0l__CallFunc_GetSelectionIndex_SlectionIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Selected_Character_Index"))
	int32 b0l__K2Node_CustomEvent_Selected_Character_Index__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCharSelButtons_Local_CharacterButtons"))
	TArray<UWidget_CharacterSelect_Button_C__pf3256655095*> b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UWidget_CharacterSelect_Button_C__pf3256655095* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSelectionIndex_SlectionIndex_1"))
	int32 b0l__CallFunc_GetSelectionIndex_SlectionIndex_1__pf;
	Usub_LevelSelect_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_sub_LevelSelect__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_sub_LevelSelect__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewCharacterSelected"))
	virtual void bpf__NewCharacterSelected__pf(const int32 bpp__SelectedxCharacterxIndex__pfTT__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewLevelSelected"))
	virtual void bpf__NewLevelSelected__pf(const int32 bpp__SelectedxLevelxIndex__pfTT__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateSelectionList"))
	virtual void bpf__CreateSelectionList__pf(/*out*/ TArray<FStruc_LevelData__pf3256655095>& bpp__LevelxData__pfT, /*out*/ bool& bpp__Success__pf, /*out*/ int32& bpp__StartingLevelIndex__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetSelectionButtons"))
	virtual void bpf__GetSelectionButtons__pf(/*out*/ TArray<UWidget_LevelSelect_Button_C__pf3256655095*>& bpp__Local_SelectionButtons1__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetCharSelButtons"))
	virtual void bpf__GetCharSelButtons__pf(/*out*/ TArray<UWidget_CharacterSelect_Button_C__pf3256655095*>& bpp__Local_CharacterButtons__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="CreateCharSelList"))
	virtual void bpf__CreateCharSelList__pf(/*out*/ TArray<FStruc_CharacterData__pf3256655095>& bpp__CharacterxData__pfT, /*out*/ bool& bpp__Success__pf, /*out*/ int32& bpp__StartingCharacterIndex__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
