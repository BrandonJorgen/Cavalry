#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "BPI_PlayerSelect__pf3256655095.h"
class UButton;
class ADefaultPawn;
class UClass;
class UBP_Cavalry_GameInstance_C__pf3256655095;
#include "Start_Mission_Breif__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/Start_Mission_Breif.Start_Mission_Breif_C", OverrideNativeName="Start_Mission_Breif_C"))
class UStart_Mission_Breif_C__pf3256655095 : public UUserWidget, public IBPI_PlayerSelect_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Start Game", Category="Start_Mission_Breif", OverrideNativeName="StartGame"))
	UButton* bpv__StartGame__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_PlayerInput"))
	UClass* b0l__K2Node_Event_PlayerInput__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Cavalry_Game_Instance"))
	UBP_Cavalry_GameInstance_C__pf3256655095* b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Set_Game_State_Success_"))
	bool b0l__CallFunc_Set_Game_State_Success___pf;
	UStart_Mission_Breif_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Start_Mission_Breif__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Start_Mission_Breif__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Start_Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Select Player"))
	virtual void bpf__SelectxPlayer__pfT(UClass* bpp__PlayerInput__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
