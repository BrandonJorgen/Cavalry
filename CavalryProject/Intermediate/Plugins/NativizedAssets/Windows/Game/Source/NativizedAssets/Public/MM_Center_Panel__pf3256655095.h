#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Struc_CharacterData__pf3256655095.h"
#include "Struc_LevelData__pf3256655095.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UButton;
class Usub_Character_Select_C__pf3256655095;
class Usub_LevelSelect_C__pf3256655095;
class Usub_MissionDetails_C__pf3256655095;
class UBP_Cavalry_GameInstance_C__pf3256655095;
class UWidget_LevelSelect_Button_C__pf3256655095;
class UWidget_CharacterSelect_Button_C__pf3256655095;
#include "MM_Center_Panel__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/MM_Center_Panel.MM_Center_Panel_C", OverrideNativeName="MM_Center_Panel_C"))
class UMM_Center_Panel_C__pf3256655095 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OnCharacterSelected__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnCharacterSelected__pf__Widget_CharacterSelect_Button_C__pf__SinglecastDelegate , int32 , bpp__Index__pf);
	UDELEGATE(meta=(OverrideNativeName="OnLevelSelected__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(FOnLevelSelected__pf__Widget_LevelSelect_Button_C__pf__SinglecastDelegate , int32 , bpp__Index__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_QuitGame", Category="MM_Center_Panel", OverrideNativeName="Button_QuitGame"))
	UButton* bpv__Button_QuitGame__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Button_StartSelectedLevel", Category="MM_Center_Panel", OverrideNativeName="Button_StartSelectedLevel"))
	UButton* bpv__Button_StartSelectedLevel__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="sub_Character_Select", Category="MM_Center_Panel", OverrideNativeName="sub_Character_Select"))
	Usub_Character_Select_C__pf3256655095* bpv__sub_Character_Select__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="sub_LevelSelect", Category="MM_Center_Panel", OverrideNativeName="sub_LevelSelect"))
	Usub_LevelSelect_C__pf3256655095* bpv__sub_LevelSelect__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="sub_Mission_Details", Category="MM_Center_Panel", OverrideNativeName="sub_Mission_Details"))
	Usub_MissionDetails_C__pf3256655095* bpv__sub_Mission_Details__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mission Details", Category="Default", MultiLine="true", OverrideNativeName="MissionDetails"))
	Usub_MissionDetails_C__pf3256655095* bpv__MissionDetails__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Level Index", Category="Default", MultiLine="true", OverrideNativeName="SelectedLevelIndex"))
	int32 bpv__SelectedLevelIndex__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Selected Character Index", Category="Default", MultiLine="true", OverrideNativeName="SelectedCharacterIndex"))
	int32 bpv__SelectedCharacterIndex__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="As Sub Character Select", Category="Default", MultiLine="true", OverrideNativeName="As Sub Character Select"))
	Usub_Character_Select_C__pf3256655095* bpv__AsxSubxCharacterxSelect__pfTTT;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FOnCharacterSelected__pf__Widget_CharacterSelect_Button_C__pf__SinglecastDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Index_1"))
	int32 b0l__K2Node_CustomEvent_Index_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Cavalry_Game_Instance"))
	UBP_Cavalry_GameInstance_C__pf3256655095* b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCharacterData_Character_Data"))
	TArray<FStruc_CharacterData__pf3256655095> b0l__CallFunc_GetCharacterData_Character_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Get_Level_Data_Level_Data"))
	TArray<FStruc_LevelData__pf3256655095> b0l__CallFunc_Get_Level_Data_Level_Data__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Cavalry_Game_Instance_1"))
	UBP_Cavalry_GameInstance_C__pf3256655095* b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Get_Level_Data_Level_Data_1"))
	TArray<FStruc_LevelData__pf3256655095> b0l__CallFunc_Get_Level_Data_Level_Data_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FStruc_LevelData__pf3256655095 b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Cavalry_Game_Instance_2"))
	UBP_Cavalry_GameInstance_C__pf3256655095* b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_Game_State_Success_"))
	bool b0l__CallFunc_Set_Game_State_Success___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate_1"))
	FOnLevelSelected__pf__Widget_LevelSelect_Button_C__pf__SinglecastDelegate b0l__K2Node_CreateDelegate_OutputDelegate_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSelectionList_Success"))
	bool b0l__CallFunc_CreateSelectionList_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSelectionList_StartingLevelIndex"))
	int32 b0l__CallFunc_CreateSelectionList_StartingLevelIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetSelectionButtons_Local_SelectionButtons1"))
	TArray<UWidget_LevelSelect_Button_C__pf3256655095*> b0l__CallFunc_GetSelectionButtons_Local_SelectionButtons1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_1"))
	UWidget_LevelSelect_Button_C__pf3256655095* b0l__CallFunc_Array_Get_Item_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateCharSelList_Success"))
	bool b0l__CallFunc_CreateCharSelList_Success__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateCharSelList_StartingCharacterIndex"))
	int32 b0l__CallFunc_CreateCharSelList_StartingCharacterIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCharSelButtons_Local_CharacterButtons"))
	TArray<UWidget_CharacterSelect_Button_C__pf3256655095*> b0l__CallFunc_GetCharSelButtons_Local_CharacterButtons__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_2"))
	UWidget_CharacterSelect_Button_C__pf3256655095* b0l__CallFunc_Array_Get_Item_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Index"))
	int32 b0l__K2Node_CustomEvent_Index__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Cavalry_Game_Instance_3"))
	UBP_Cavalry_GameInstance_C__pf3256655095* b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetCharacterData_Character_Data_1"))
	TArray<FStruc_CharacterData__pf3256655095> b0l__CallFunc_GetCharacterData_Character_Data_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item_3"))
	FStruc_CharacterData__pf3256655095 b0l__CallFunc_Array_Get_Item_3__pf;
	UMM_Center_Panel_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_MM_Center_Panel__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MM_Center_Panel__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MM_Center_Panel__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MM_Center_Panel__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MM_Center_Panel__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewCharacterSelected"))
	virtual void bpf__NewCharacterSelected__pf(int32 bpp__Index__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MM_Center_Panel_Button_StartSelectedLevel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MM_Center_Panel_Button_StartSelectedLevel_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewLevelSelected"))
	virtual void bpf__NewLevelSelected__pf(int32 bpp__Index__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__MM_Center_Panel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__MM_Center_Panel_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSelectedLevelIndex"))
	virtual void bpf__SetSelectedLevelIndex__pf(int32 bpp__SelectedLevelIndex__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetSelectedCharacterIndex"))
	virtual void bpf__SetSelectedCharacterIndex__pf(int32 bpp__SelectedCharacterIndex__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
