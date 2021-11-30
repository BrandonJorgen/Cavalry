#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "BPI_ToggleObjective__pf2435026734.h"
#include "BPI_MissionText__pf1982152804.h"
class UWidgetComponent;
class USceneComponent;
class ABP_PlayerCharacter_Base_C__pf1490413170;
class UUserWidget;
#include "BP_ObjectiveDisplay__pf2435026734.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Objective_Display/BP_ObjectiveDisplay.BP_ObjectiveDisplay_C", OverrideNativeName="BP_ObjectiveDisplay_C"))
class ABP_ObjectiveDisplay_C__pf2435026734 : public AActor, public IBPI_ToggleObjective_C, public IBPI_MissionText_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ObjectiveMarker"))
	UWidgetComponent* bpv__ObjectiveMarker__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Ref", Category="Default", MultiLine="true", OverrideNativeName="Char Ref"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__CharxRef__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Should Rot?", Category="Default", MultiLine="true", OverrideNativeName="ShouldRot?"))
	bool bpv__ShouldRotx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Objective Widget", Category="Default", MultiLine="true", OverrideNativeName="Objective_Widget"))
	UUserWidget* bpv__Objective_Widget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Start?", Category="Default", MultiLine="true", OverrideNativeName="GameStart?"))
	bool bpv__GameStartx__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ObjectiveDetails"))
	FText b0l__K2Node_Event_ObjectiveDetails__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Objective_"))
	bool b0l__K2Node_Event_Objective___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewLocation"))
	FVector b0l__K2Node_Event_NewLocation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetActorLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetActorLocation_SweepHitResult__pf;
	ABP_ObjectiveDisplay_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_ObjectiveDisplay_2"))
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_ObjectiveDisplay_4"))
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_ObjectiveDisplay_6"))
	void bpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateObjectiveLoc"))
	virtual void bpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ToggleObjetiveBool"))
	virtual void bpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Should Rot Event"))
	virtual void bpf__ShouldxRotxEvent__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="UpdateMission"))
	virtual void bpf__UpdateMission__pf(const FText& bpp__ObjectiveDetails__pf__const);
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="FacePlayer"))
	virtual void bpf__FacePlayer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="GetCharRef"))
	virtual void bpf__GetCharRef__pf();
public:
};
