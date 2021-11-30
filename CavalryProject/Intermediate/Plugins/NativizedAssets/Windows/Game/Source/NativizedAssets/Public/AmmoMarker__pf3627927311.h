#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
class UTextBlock;
#include "AmmoMarker__pf3627927311.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Ammo_Display/AmmoMarker.AmmoMarker_C", OverrideNativeName="AmmoMarker_C"))
class UAmmoMarker_C__pf3627927311 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Ammo", Category="AmmoMarker", OverrideNativeName="Ammo"))
	UImage* bpv__Ammo__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_0", Category="AmmoMarker", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Remaining Shots", Category="Default", MultiLine="true", OverrideNativeName="RemainingShots"))
	int32 bpv__RemainingShots__pf;
	UAmmoMarker_C__pf3627927311(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
