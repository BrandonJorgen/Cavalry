#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
class UObject;
#include "sub_MissionDetails__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/sub_MissionDetails.sub_MissionDetails_C", OverrideNativeName="sub_MissionDetails_C"))
class Usub_MissionDetails_C__pf3256655095 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_LevelPortrait", Category="sub_MissionDetails", OverrideNativeName="Image_LevelPortrait"))
	UImage* bpv__Image_LevelPortrait__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_Description", Category="sub_MissionDetails", OverrideNativeName="TextBlock_Description"))
	UTextBlock* bpv__TextBlock_Description__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_LevelName", Category="sub_MissionDetails", OverrideNativeName="TextBlock_LevelName"))
	UTextBlock* bpv__TextBlock_LevelName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_LevelName"))
	FText b0l__K2Node_CustomEvent_LevelName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_LevelDescription"))
	FText b0l__K2Node_CustomEvent_LevelDescription__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_LevelPortrait"))
	UObject* b0l__K2Node_CustomEvent_LevelPortrait__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_SlateBrush"))
	FSlateBrush b0l__K2Node_MakeStruct_SlateBrush__pf;
	Usub_MissionDetails_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_sub_MissionDetails__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewLevelSelected"))
	virtual void bpf__NewLevelSelected__pf(const FText& bpp__LevelName__pf__const, const FText& bpp__LevelDescription__pf__const, UObject* bpp__LevelPortrait__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
