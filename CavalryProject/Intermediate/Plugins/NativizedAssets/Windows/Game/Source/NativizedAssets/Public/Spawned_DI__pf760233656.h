#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "BPI_DamageDirection__pf760233656.h"
#include "BPI_TakeDamage__pf691914051.h"
class UWidgetAnimation;
class UImage;
class UPaperFlipbook;
class AActor;
class ADamageIndicator_Actor_C__pf760233656;
#include "Spawned_DI__pf760233656.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/HUD/Widgets/Damage_Display/Spawned_DI.Spawned_DI_C", OverrideNativeName="Spawned_DI_C"))
class USpawned_DI_C__pf760233656 : public UUserWidget, public IBPI_DamageDirection_C, public IBPI_TakeDamage_C
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="Update Widget Direction__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate , FVector , bpp__WidgetxDirection__pfT);
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FADE_OUT", Category="Animations", OverrideNativeName="FADE_OUT"))
	UWidgetAnimation* bpv__FADE_OUT__pf;
	UPROPERTY(BlueprintReadOnly, Transient, meta=(DisplayName="FADE_IN", Category="Animations", OverrideNativeName="FADE_IN"))
	UWidgetAnimation* bpv__FADE_IN__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="TempDamageImage", Category="Spawned_DI", OverrideNativeName="TempDamageImage"))
	UImage* bpv__TempDamageImage__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Damage Direction", Category="Default", MultiLine="true", OverrideNativeName="DamageDirection"))
	FVector bpv__DamageDirection__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage Anim", Category="Default", MultiLine="true", OverrideNativeName="DamageAnim"))
	UPaperFlipbook* bpv__DamageAnim__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Frame Counter", Category="Default", MultiLine="true", OverrideNativeName="FrameCounter"))
	int32 bpv__FrameCounter__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Delay", Category="Default", MultiLine="true", OverrideNativeName="Delay"))
	int32 bpv__Delay__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Is Playing", Category="Default", MultiLine="true", OverrideNativeName="IsPlaying"))
	bool bpv__IsPlaying__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Destroy?", Category="Default", MultiLine="true", OverrideNativeName="Destroy?"))
	bool bpv__Destroyx__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount_1"))
	int32 b0l__K2Node_Event_DamageAmount_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount"))
	int32 b0l__K2Node_Event_DamageAmount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamagingActor"))
	AActor* b0l__K2Node_Event_DamagingActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_CurrentlyHit"))
	bool b0l__K2Node_Event_CurrentlyHit__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X"))
	float b0l__CallFunc_BreakVector2D_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y"))
	float b0l__CallFunc_BreakVector2D_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<ADamageIndicator_Actor_C__pf760233656*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ADamageIndicator_Actor_C__pf760233656* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_X_1"))
	float b0l__CallFunc_BreakVector2D_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector2D_Y_1"))
	float b0l__CallFunc_BreakVector2D_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_WidgetTransform_1"))
	FWidgetTransform b0l__K2Node_MakeStruct_WidgetTransform_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Widget_Direction"))
	FVector b0l__K2Node_CustomEvent_Widget_Direction__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Source"))
	FVector b0l__K2Node_Event_Source__pf;
	USpawned_DI_C__pf760233656(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_Spawned_DI__pf_6(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Damage_Source"))
	virtual void bpf__Damage_Source__pf(FVector bpp__Source__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Update Direction"))
	virtual void bpf__UpdatexDirection__pfT(FVector bpp__WidgetxDirection__pfT);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Called after the underlying slate widget is constructed.  Depending on how the slate object is used\t * this event may be called multiple times due to adding and removing from the hierarchy.\t * If you need a true called-once-when-created event, use OnInitialized.\t */", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.If you need a true called-once-when-created event, use OnInitialized.", CppFromBpEvent, OverrideNativeName="Construct"))
	virtual void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Comment="/**\t * Ticks this widget.  Override in derived classes, but always call the parent implementation.\t *\t * @param  MyGeometry The space allotted for this widget\t * @param  InDeltaTime  Real time passed since last tick\t */", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	virtual void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Player_Was_Hit"))
	virtual void bpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamageActor"))
	virtual void bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamage"))
	virtual void bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
