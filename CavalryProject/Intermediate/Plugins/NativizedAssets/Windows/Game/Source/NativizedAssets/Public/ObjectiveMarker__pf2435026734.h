#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "BPI_DamageDirection__pf760233656.h"
class UImage;
#include "ObjectiveMarker__pf2435026734.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Objective_Display/ObjectiveMarker.ObjectiveMarker_C", OverrideNativeName="ObjectiveMarker_C"))
class UObjectiveMarker_C__pf2435026734 : public UUserWidget, public IBPI_DamageDirection_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Objective", Category="ObjectiveMarker", OverrideNativeName="Objective"))
	UImage* bpv__Objective__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Remaining Shots", Category="Default", MultiLine="true", OverrideNativeName="RemainingShots"))
	int32 bpv__RemainingShots__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Source"))
	FVector b0l__K2Node_Event_Source__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_CurrentlyHit"))
	bool b0l__K2Node_Event_CurrentlyHit__pf;
	UObjectiveMarker_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ObjectiveMarker__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ObjectiveMarker__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Player_Was_Hit"))
	virtual void bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Damage_Source"))
	virtual void bpf__Damage_Source__pf(FVector bpp__Source__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
