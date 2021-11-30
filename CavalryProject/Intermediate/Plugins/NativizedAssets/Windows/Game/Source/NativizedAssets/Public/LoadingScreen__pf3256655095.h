#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UThrobber;
#include "LoadingScreen__pf3256655095.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Main_Menu/LoadingScreen.LoadingScreen_C", OverrideNativeName="LoadingScreen_C"))
class ULoadingScreen_C__pf3256655095 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Image_88", Category="LoadingScreen", OverrideNativeName="Image_88"))
	UImage* bpv__Image_88__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Throbber_0", Category="LoadingScreen", OverrideNativeName="Throbber_0"))
	UThrobber* bpv__Throbber_0__pf;
	ULoadingScreen_C__pf3256655095(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
