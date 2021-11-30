#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "E_Horsemen__pf1725717533.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "BPI_TakeDamage__pf691914051.h"
class UArrowComponent;
class USceneComponent;
class UPostProcessComponent;
class UCameraComponent;
class ABP_MotionController_C__pf563933975;
class ABP_PlayerGear_C__pf3324220276;
class ABP_PlayerCharacter_Base_C__pf1490413170;
class ABP_HorsemenHUD_C__pf760233656;
class AActor;
class UPhysicalMaterial;
class UPrimitiveComponent;
#include "BP_PlayerCharacter_Base__pf1490413170.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Characters/BP_PlayerCharacter_Base.BP_PlayerCharacter_Base_C", OverrideNativeName="BP_PlayerCharacter_Base_C"))
class ABP_PlayerCharacter_Base_C__pf1490413170 : public ACharacter, public IBPI_TakeDamage_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GearLoction"))
	UArrowComponent* bpv__GearLoction__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GearLocationBase"))
	USceneComponent* bpv__GearLocationBase__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Night Vision PP"))
	UPostProcessComponent* bpv__NightxVisionxPP__pfTT;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Left Controller", Category="Default", MultiLine="true", OverrideNativeName="Left Controller"))
	ABP_MotionController_C__pf563933975* bpv__LeftxController__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Right Controller", Category="Default", MultiLine="true", OverrideNativeName="Right Controller"))
	ABP_MotionController_C__pf563933975* bpv__RightxController__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Delta Rotation", Category="Default", MultiLine="true", OverrideNativeName="Delta Rotation"))
	FRotator bpv__DeltaxRotation__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Shields", Category="Stats", MultiLine="true", OverrideNativeName="maxShields"))
	int32 bpv__maxShields__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Current Shields", Category="Stats", MultiLine="true", OverrideNativeName="currentShields"))
	int32 bpv__currentShields__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Max Health Hits", Category="Stats", MultiLine="true", OverrideNativeName="maxHealthHits"))
	int32 bpv__maxHealthHits__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Health Hits", Category="Stats", MultiLine="true", OverrideNativeName="healthHits"))
	int32 bpv__healthHits__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Recently Hit", Category="Stats", MultiLine="true", OverrideNativeName="recentlyHit"))
	bool bpv__recentlyHit__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Gear", Category="Default", MultiLine="true", OverrideNativeName="PlayerGear"))
	ABP_PlayerGear_C__pf3324220276* bpv__PlayerGear__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Horseman To Spawn For", Category="Default", MultiLine="true", tooltip="Default Horseman is War", OverrideNativeName="Horseman to Spawn For"))
	E__E_Horsemen__pf bpv__HorsemanxtoxSpawnxFor__pfTTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smooth Rotation", Category="Movement", MultiLine="true", OverrideNativeName="bSmoothRotation"))
	bool bpv__bSmoothRotation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Turn Deadzone", Category="Movement", MultiLine="true", OverrideNativeName="Turn Deadzone"))
	float bpv__TurnxDeadzone__pfT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Smooth Rotation Speed", Category="Movement", MultiLine="true", OverrideNativeName="Smooth Rotation Speed"))
	float bpv__SmoothxRotationxSpeed__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Snap Rotation Degrees", Category="Movement", MultiLine="true", OverrideNativeName="Snap Rotation Degrees"))
	float bpv__SnapxRotationxDegrees__pfTT;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Rotation Angle", Category="Movement", MultiLine="true", OverrideNativeName="Rotation Angle"))
	float bpv__RotationxAngle__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Character", Category="Default", MultiLine="true", OverrideNativeName="Character"))
	ABP_PlayerCharacter_Base_C__pf1490413170* bpv__Character__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Previous Capsule Half- Height", Category="Crouching", MultiLine="true", OverrideNativeName="Previous Capsule Half-Height"))
	float bpv__PreviousxCapsulexHalfxHeight__pfTTG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="HMD Origin", Category="Default", MultiLine="true", OverrideNativeName="HMD_Origin"))
	FVector bpv__HMD_Origin__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Widget Handler", Category="Default", MultiLine="true", OverrideNativeName="WidgetHandler"))
	ABP_HorsemenHUD_C__pf760233656* bpv__WidgetHandler__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount_1"))
	int32 b0l__K2Node_Event_DamageAmount_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchName_CmpSuccess"))
	bool b0l__K2Node_SwitchName_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount"))
	int32 b0l__K2Node_Event_DamageAmount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamagingActor"))
	AActor* b0l__K2Node_Event_DamagingActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingleForObjects_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	ABP_PlayerCharacter_Base_C__pf1490413170(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_PlayerCharacter_Base__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Calibrate HMD Floor Position"))
	virtual void bpf__CalibratexHMDxFloorxPosition__pfTTT();
	UFUNCTION(meta=(Comment="/** Event called every frame, if ticking is enabled */", DisplayName="Tick", ToolTip="Event called every frame, if ticking is enabled", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	virtual void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Night Vision Trigger"))
	virtual void bpf__NightxVisionxTrigger__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Initialize Capsule Height"))
	virtual void bpf__InitializexCapsulexHeight__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamageActor"))
	virtual void bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf);
	UFUNCTION(meta=(Comment="/** Event when play begins for this actor. */", DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	virtual void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Death"))
	virtual void bpf__Death__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ResetHitTimer"))
	virtual void bpf__ResetHitTimer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamage"))
	virtual void bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="MovementControls", OverrideNativeName="Movement"))
	virtual void bpf__Movement__pf(float bpp__Value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="MovementControls", OverrideNativeName="Strafe"))
	virtual void bpf__Strafe__pf(float bpp__value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category="MovementControls", OverrideNativeName="Rotation"))
	virtual void bpf__Rotation__pf(float bpp__value__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="KATMovement"))
	virtual void bpf__KATMovement__pf(float bpp__BodyYawVar__pf);
public:
};
