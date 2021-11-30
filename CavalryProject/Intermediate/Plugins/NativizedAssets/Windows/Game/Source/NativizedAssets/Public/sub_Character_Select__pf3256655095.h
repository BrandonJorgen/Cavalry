#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UObject;
#include "sub_Character_Select__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/sub_Character_Select.sub_Character_Select_C", OverrideNativeName="sub_Character_Select_C"))
class Usub_Character_Select_C__pf3256655095 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_CharacterPortrait", Category="sub_Character_Select", OverrideNativeName="Image_CharacterPortrait"))
	UImage* bpv__Image_CharacterPortrait__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_CharacterAbilities", Category="sub_Character_Select", OverrideNativeName="TextBlock_CharacterAbilities"))
	UTextBlock* bpv__TextBlock_CharacterAbilities__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_CharacterName", Category="sub_Character_Select", OverrideNativeName="TextBlock_CharacterName"))
	UTextBlock* bpv__TextBlock_CharacterName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InText"))
	FText b0l__K2Node_CustomEvent_InText__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_InText2"))
	FText b0l__K2Node_CustomEvent_InText2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_In_Brush_Image"))
	UObject* b0l__K2Node_CustomEvent_In_Brush_Image__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush__pf;
	Usub_Character_Select_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_sub_Character_Select__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewCharacterSelected"))
	virtual void bpf__NewCharacterSelected__pf(const FText& bpp__InText__pf__const, const FText& bpp__InText2__pf__const, UObject* bpp__InxBrushxImage__pfTT);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
