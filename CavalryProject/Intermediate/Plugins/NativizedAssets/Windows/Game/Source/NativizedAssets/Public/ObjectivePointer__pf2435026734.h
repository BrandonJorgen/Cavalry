#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "BPI_DamageDirection__pf760233656.h"
#include "BPI_ToggleObjective__pf2435026734.h"
class UWidgetAnimation;
class UImage;
class UPaperFlipbook;
class ABP_ObjectiveDisplay_Spawner_C__pf2435026734;
#include "ObjectivePointer__pf2435026734.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Objective_Display/ObjectivePointer.ObjectivePointer_C", OverrideNativeName="ObjectivePointer_C"))
class UObjectivePointer_C__pf2435026734 : public UUserWidget, public IBPI_DamageDirection_C, public IBPI_ToggleObjective_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Update Objective Loc__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate , FVector , bpp__Objective_Loc__pf);
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="OFF", Category="Animations", OverrideNativeName="OFF"))
	UWidgetAnimation* bpv__OFF__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="ON", Category="Animations", OverrideNativeName="ON"))
	UWidgetAnimation* bpv__ON__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FADE_OUT", Category="Animations", OverrideNativeName="FADE_OUT"))
	UWidgetAnimation* bpv__FADE_OUT__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FADE_IN", Category="Animations", OverrideNativeName="FADE_IN"))
	UWidgetAnimation* bpv__FADE_IN__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ObjectiveArrow", Category="ObjectivePointer", OverrideNativeName="ObjectiveArrow"))
	UImage* bpv__ObjectiveArrow__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Objective", Category="Default", MultiLine="true", OverrideNativeName="Objective"))
	FVector bpv__Objective__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage Anim", Category="Default", MultiLine="true", OverrideNativeName="DamageAnim"))
	UPaperFlipbook* bpv__DamageAnim__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Frame Counter", Category="Default", MultiLine="true", OverrideNativeName="FrameCounter"))
	int32 bpv__FrameCounter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Delay", Category="Default", MultiLine="true", OverrideNativeName="Delay"))
	int32 bpv__Delay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Fade on?", Category="Default", MultiLine="true", OverrideNativeName="IsFadeOn?"))
	bool bpv__IsFadeOnx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Animate?", Category="Default", MultiLine="true", OverrideNativeName="CanAnimate?"))
	bool bpv__CanAnimatex__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Objective"))
	FVector b0l__K2Node_CustomEvent_Objective__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll_1"))
	float b0l__CallFunc_BreakRotator_Roll_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch_1"))
	float b0l__CallFunc_BreakRotator_Pitch_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw_1"))
	float b0l__CallFunc_BreakRotator_Yaw_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Source"))
	FVector b0l__K2Node_Event_Source__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_CurrentlyHit"))
	bool b0l__K2Node_Event_CurrentlyHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Objective_"))
	bool b0l__K2Node_Event_Objective___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ABP_ObjectiveDisplay_Spawner_C__pf2435026734*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Objective_Loc"))
	FVector b0l__K2Node_CustomEvent_Objective_Loc__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_ObjectiveDisplay_Spawner_C__pf2435026734* b0l__CallFunc_Array_Get_Item__pf;
	UObjectivePointer_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_ObjectivePointer_1"))
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ObjectivePointer__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UpdateLocation"))
	virtual void bpf__UpdateLocation__pf(FVector bpp__Objective__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Set Objective Direction"))
	virtual void bpf__SetxObjectivexDirection__pfTT(FVector bpp__Objective_Loc__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ToggleObjetiveBool"))
	virtual void bpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Player_Was_Hit"))
	virtual void bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Damage_Source"))
	virtual void bpf__Damage_Source__pf(FVector bpp__Source__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
