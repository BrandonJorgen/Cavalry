#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "BP_Firearm_Base__pf1418999182.h"
class UTimelineComponent;
class USceneComponent;
class AActor;
class ABP_MotionController_C__pf563933975;
#include "BPC_Pistol__pf1418999182.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Weapons/BPC_Pistol.BPC_Pistol_C", OverrideNativeName="BPC_Pistol_C"))
class ABPC_Pistol_C__pf1418999182 : public ABP_Firearm_Base_C__pf1418999182
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="Timeline_2__Direction_25CBF2834D7F92A4A126DE9144E4D287"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_2__Direction_25CBF2834D7F92A4A126DE9144E4D287__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BPC_Pistol", OverrideNativeName="Timeline_2"))
	UTimelineComponent* bpv__Timeline_2__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_1__Direction_E472C5D24B4C5E6EF10997B3927EFF17"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_1__Direction_E472C5D24B4C5E6EF10997B3927EFF17__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BPC_Pistol", OverrideNativeName="Timeline_1"))
	UTimelineComponent* bpv__Timeline_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult_1"))
	FHitResult b1l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b1l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b1l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b1l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b1l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b1l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b1l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_2"))
	float b1l__CallFunc_BreakVector_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_2"))
	float b1l__CallFunc_BreakVector_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_2"))
	float b1l__CallFunc_BreakVector_Z_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_3"))
	float b1l__CallFunc_BreakVector_X_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_3"))
	float b1l__CallFunc_BreakVector_Y_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_3"))
	float b1l__CallFunc_BreakVector_Z_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_4"))
	float b1l__CallFunc_BreakVector_X_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_4"))
	float b1l__CallFunc_BreakVector_Y_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_4"))
	float b1l__CallFunc_BreakVector_Z_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_5"))
	float b1l__CallFunc_BreakVector_X_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_5"))
	float b1l__CallFunc_BreakVector_Y_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_5"))
	float b1l__CallFunc_BreakVector_Z_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HandSocket"))
	FName b1l__K2Node_Event_HandSocket__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachToMe"))
	USceneComponent* b1l__K2Node_Event_AttachToMe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Actor"))
	AActor* b1l__K2Node_Event_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	ABP_MotionController_C__pf563933975* b1l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b1l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller_1"))
	ABP_MotionController_C__pf563933975* b1l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b1l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddRelativeLocation_SweepHitResult"))
	FHitResult b1l__CallFunc_K2_AddRelativeLocation_SweepHitResult__pf;
	ABPC_Pistol_C__pf1418999182(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BPC_Pistol__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPC_Pistol__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPC_Pistol__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPC_Pistol__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BPC_Pistol__pf_4(int32 bpp__EntryPoint__pf);
	virtual void bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf) override;
	UFUNCTION(meta=(OverrideNativeName="Timeline_2__UpdateFunc"))
	virtual void bpf__Timeline_2__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_2__FinishedFunc"))
	virtual void bpf__Timeline_2__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__UpdateFunc"))
	virtual void bpf__Timeline_1__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_1__FinishedFunc"))
	virtual void bpf__Timeline_1__FinishedFunc__pf();
public:
};
