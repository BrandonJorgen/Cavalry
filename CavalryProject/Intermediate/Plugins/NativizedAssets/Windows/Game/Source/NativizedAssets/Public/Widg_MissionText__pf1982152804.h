#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTextBlock;
#include "Widg_MissionText__pf1982152804.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Widg_MissionText.Widg_MissionText_C", OverrideNativeName="Widg_MissionText_C"))
class UWidg_MissionText_C__pf1982152804 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_MissionBrief", Category="Widg_MissionText", OverrideNativeName="TextBlock_MissionBrief"))
	UTextBlock* bpv__TextBlock_MissionBrief__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TextBlock_MissionTitle", Category="Widg_MissionText", OverrideNativeName="TextBlock_MissionTitle"))
	UTextBlock* bpv__TextBlock_MissionTitle__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Title", Category="Default", MultiLine="true", OverrideNativeName="Title"))
	FText bpv__Title__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Mission Details", Category="Default", MultiLine="true", OverrideNativeName="MissionDetails"))
	FText bpv__MissionDetails__pf;
	UWidg_MissionText_C__pf1982152804(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_TextBlock_MissionTitle_Text_0"))
	virtual FText  bpf__Get_TextBlock_MissionTitle_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_TextBlock_MissionBrief_Text_0"))
	virtual FText  bpf__Get_TextBlock_MissionBrief_Text_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
