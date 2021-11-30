#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "E_FireMode__pf1725717533.h"
#include "E_LoadType__pf1725717533.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "ENUM_ObjectType__pf3911806087.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "E_Hands__pf1725717533.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "BPI_TakeDamage__pf691914051.h"
#include "BPI_Shootable__pf691914051.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "PickupActorInterface__pf563933975.h"
#include "BPI_GrabbableObj__pf691914051.h"
#include "BPI_WeaponControls__pf691914051.h"
#include "BPI_Magnetic__pf691914051.h"
class UArrowComponent;
class UBoxComponent;
class UNiagaraComponent;
class UGrabbableObjectSocket_C__pf2132744816;
class UStaticMeshComponent;
class UTimelineComponent;
class ABP_AmmoBase_C__pf1418999182;
class USceneComponent;
class ABP_MotionController_C__pf563933975;
class ABP_PlayerGear_C__pf3324220276;
class ABP_MagneticPlacement_C__pf3911806087;
class AActor;
class UPrimitiveComponent;
class UPhysicalMaterial;
#include "BP_Firearm_Base__pf1418999182.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/Weapons/BP_Firearm_Base.BP_Firearm_Base_C", OverrideNativeName="BP_Firearm_Base_C"))
class ABP_Firearm_Base_C__pf1418999182 : public AActor, public IBPI_TakeDamage_C, public IPickupActorInterface_C, public IBPI_GrabbableObj_C, public IBPI_WeaponControls_C, public IBPI_Magnetic_C
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FireLocation"))
	UArrowComponent* bpv__FireLocation__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MagnetCollision"))
	UBoxComponent* bpv__MagnetCollision__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Niagara"))
	UNiagaraComponent* bpv__Niagara__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider_ForwardPosition"))
	UBoxComponent* bpv__Slider_ForwardPosition__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ShellEjectionPoint"))
	UArrowComponent* bpv__ShellEjectionPoint__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="SecondHand_Collider"))
	UBoxComponent* bpv__SecondHand_Collider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="GrabbableObjectSocket"))
	UGrabbableObjectSocket_C__pf2132744816* bpv__GrabbableObjectSocket__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider_Collider"))
	UBoxComponent* bpv__Slider_Collider__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider_SM"))
	UStaticMeshComponent* bpv__Slider_SM__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Firearm_SM"))
	UStaticMeshComponent* bpv__Firearm_SM__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AmmoPortTrigger"))
	UBoxComponent* bpv__AmmoPortTrigger__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Slider_Stopper"))
	UBoxComponent* bpv__Slider_Stopper__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_7E26919544842D5F87A9D98504B37796"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_7E26919544842D5F87A9D98504B37796__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_Firearm_Base", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(meta=(OverrideNativeName="SliderMovementTimeline__Direction_B8326A684FCD6305B503B8A84BCC6A99"))
	TEnumAsByte<ETimelineDirection::Type> bpv__SliderMovementTimeline__Direction_B8326A684FCD6305B503B8A84BCC6A99__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="BP_Firearm_Base", OverrideNativeName="SliderMovementTimeline"))
	UTimelineComponent* bpv__SliderMovementTimeline__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="First Hand Grabbed", Category="Base", MultiLine="true", OverrideNativeName="FirstHandGrabbed"))
	bool bpv__FirstHandGrabbed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Fire", Category="Firing", MultiLine="true", OverrideNativeName="canFire"))
	bool bpv__canFire__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Second Hand Grabbed", Category="Base", MultiLine="true", OverrideNativeName="SecondHandGrabbed"))
	bool bpv__SecondHandGrabbed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dominant Hand", Category="Base", MultiLine="true", OverrideNativeName="dominantHand"))
	EControllerHand bpv__dominantHand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Fire Mode", Category="Fire Mode", MultiLine="true", OverrideNativeName="currentFireMode"))
	E__E_FireMode__pf bpv__currentFireMode__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Can Automatic", Category="Fire Mode", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="canAutomatic"))
	bool bpv__canAutomatic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Ammo", Category="Ammo", MultiLine="true", ClampMin="0", ClampMax="999", OverrideNativeName="currentAmmo"))
	int32 bpv__currentAmmo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Firing", Category="Firing", MultiLine="true", OverrideNativeName="isFiring"))
	bool bpv__isFiring__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Load Type", Category="Ammo", MultiLine="true", OverrideNativeName="loadType"))
	E__E_LoadType__pf bpv__loadType__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Loaded", Category="Ammo", MultiLine="true", OverrideNativeName="isLoaded"))
	bool bpv__isLoaded__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Firerate", Category="Base", MultiLine="true", OverrideNativeName="firerate"))
	float bpv__firerate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spent Shells", Category="Ammo", MultiLine="true", OverrideNativeName="spentShells"))
	int32 bpv__spentShells__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Magazine Obj", Category="Ammo", MultiLine="true", OverrideNativeName="magazineObj"))
	ABP_AmmoBase_C__pf1418999182* bpv__magazineObj__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Damage Amount", Category="Base", MultiLine="true", OverrideNativeName="damageAmount"))
	int32 bpv__damageAmount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="First Hand", Category="Base", MultiLine="true", OverrideNativeName="First Hand"))
	USceneComponent* bpv__FirstxHand__pfT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Second Hand Motion Controller", Category="Base", MultiLine="true", OverrideNativeName="Second Hand Motion Controller"))
	ABP_MotionController_C__pf563933975* bpv__SecondxHandxMotionxController__pfTTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Second Hand Mesh", Category="Base", MultiLine="true", OverrideNativeName="Second Hand Mesh"))
	USceneComponent* bpv__SecondxHandxMesh__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X Last Position", Category="Slider", MultiLine="true", OverrideNativeName="X_Last_Position"))
	FVector bpv__X_Last_Position__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="X Delta", Category="Slider", MultiLine="true", OverrideNativeName="X_Delta"))
	float bpv__X_Delta__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="Owning Gear", Category="Mount", MultiLine="true", ExposeOnSpawn="true", OverrideNativeName="OwningGear"))
	ABP_PlayerGear_C__pf3324220276* bpv__OwningGear__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider XMax", Category="Slider", MultiLine="true", OverrideNativeName="SliderXMax"))
	float bpv__SliderXMax__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Slider XMin", Category="Slider", MultiLine="true", OverrideNativeName="SliderXMin"))
	float bpv__SliderXMin__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cocked Back", Category="Slider", MultiLine="true", OverrideNativeName="CockedBack"))
	bool bpv__CockedBack__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="On Magnet Mount", Category="Mount", MultiLine="true", OverrideNativeName="OnMagnetMount"))
	bool bpv__OnMagnetMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Magnet Mount", Category="Mount", MultiLine="true", OverrideNativeName="MagnetMount"))
	ABP_MagneticPlacement_C__pf3911806087* bpv__MagnetMount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Overlapping Magnets", Category="Mount", MultiLine="true", OverrideNativeName="OverlappingMagnets"))
	TArray<ABP_MagneticPlacement_C__pf3911806087*> bpv__OverlappingMagnets__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Closest Mount", Category="Mount", MultiLine="true", OverrideNativeName="ClosestMount"))
	ABP_MagneticPlacement_C__pf3911806087* bpv__ClosestMount__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Weapon Object Type", Category="Mount", MultiLine="true", OverrideNativeName="WeaponObjectType"))
	E__ENUM_ObjectType__pf bpv__WeaponObjectType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_1"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<TEnumAsByte<EObjectTypeQuery> > b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_2"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_3"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_HandSocket"))
	FName b0l__K2Node_Event_HandSocket__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachToMe"))
	USceneComponent* b0l__K2Node_Event_AttachToMe__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Actor"))
	AActor* b0l__K2Node_Event_Actor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Motion_Controller_1"))
	ABP_MotionController_C__pf563933975* b0l__K2Node_DynamicCast_AsBP_Motion_Controller_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_1"))
	bool b0l__K2Node_DynamicCast_bSuccess_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewParam"))
	EControllerHand b0l__K2Node_Event_NewParam__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Hand"))
	E__E_Hands__pf b0l__K2Node_Event_Hand__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X"))
	float b0l__CallFunc_BreakVector_X__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y"))
	float b0l__CallFunc_BreakVector_Y__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z"))
	float b0l__CallFunc_BreakVector_Z__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_1"))
	float b0l__CallFunc_BreakVector_X_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_1"))
	float b0l__CallFunc_BreakVector_Y_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_1"))
	float b0l__CallFunc_BreakVector_Z_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_2"))
	float b0l__CallFunc_BreakVector_X_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_2"))
	float b0l__CallFunc_BreakVector_Y_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_2"))
	float b0l__CallFunc_BreakVector_Z_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_4"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_3"))
	float b0l__CallFunc_BreakVector_X_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_3"))
	float b0l__CallFunc_BreakVector_Y_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_3"))
	float b0l__CallFunc_BreakVector_Z_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_4"))
	float b0l__CallFunc_BreakVector_X_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_4"))
	float b0l__CallFunc_BreakVector_Y_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_4"))
	float b0l__CallFunc_BreakVector_Z_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_X_5"))
	float b0l__CallFunc_BreakVector_X_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Y_5"))
	float b0l__CallFunc_BreakVector_Y_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakVector_Z_5"))
	float b0l__CallFunc_BreakVector_Z_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_3"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_3"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_3"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_2"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_2"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b0l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b0l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b0l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep_1"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult_1"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_BP_AmmoBase"))
	ABP_AmmoBase_C__pf1418999182* b0l__K2Node_CustomEvent_BP_AmmoBase__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Magazine_Base"))
	int32 b0l__K2Node_CustomEvent_Magazine_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_AttachTo"))
	USceneComponent* b0l__K2Node_Event_AttachTo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount"))
	int32 b0l__K2Node_Event_DamageAmount__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamagingActor"))
	AActor* b0l__K2Node_Event_DamagingActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult_1"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageAmount_1"))
	int32 b0l__K2Node_Event_DamageAmount_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeRotation_SweepHitResult_2"))
	FHitResult b0l__CallFunc_K2_SetRelativeRotation_SweepHitResult_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable_1"))
	int32 b0l__Temp_int_Variable_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetWorldRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetWorldRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Magnet"))
	AActor* b0l__K2Node_Event_Magnet__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EMoveComponentAction::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor_1"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp_1"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex_1"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Magnetic_Placement"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_2"))
	bool b0l__K2Node_DynamicCast_bSuccess_2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBP_Magnetic_Placement_1"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__K2Node_DynamicCast_AsBP_Magnetic_Placement_1__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_3"))
	bool b0l__K2Node_DynamicCast_bSuccess_3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	ABP_MagneticPlacement_C__pf3911806087* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_AddRelativeLocation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_AddRelativeLocation_SweepHitResult__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Take_Damage"))
	TScriptInterface<IBPI_TakeDamage_C> b0l__K2Node_DynamicCast_AsBPI_Take_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_4"))
	bool b0l__K2Node_DynamicCast_bSuccess_4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsBPI_Shootable"))
	TScriptInterface<IBPI_Shootable_C> b0l__K2Node_DynamicCast_AsBPI_Shootable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess_5"))
	bool b0l__K2Node_DynamicCast_bSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess_5"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess_5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	ABP_Firearm_Base_C__pf1418999182(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Firearm_Base_1"))
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Firearm_Base_5"))
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_10(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BP_Firearm_Base_11"))
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_19(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_22(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_BP_Firearm_Base__pf_24(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ShootRelease"))
	virtual void bpf__ShootRelease__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Magnetize"))
	virtual void bpf__Magnetize__pf(AActor* bpp__Magnet__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SecondHandRelease"))
	virtual void bpf__SecondHandRelease__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Reload"))
	virtual void bpf__Reload__pf(ABP_AmmoBase_C__pf1418999182* bpp__BP_AmmoBase__pf, int32 bpp__MagazinexBase__pfT);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BPC_Shotgun_Slider_ForwardPosition_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BPC_Shotgun_Slider_ForwardPosition_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SliderRevertPosition"))
	virtual void bpf__SliderRevertPosition__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BP_Firearm_Base_Slider_Stopper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BP_Firearm_Base_Slider_Stopper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ReleaseMagazine"))
	virtual void bpf__ReleaseMagazine__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="ChangeFiremode"))
	virtual void bpf__ChangeFiremode__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Shoot"))
	virtual void bpf__Shoot__pf(E__E_Hands__pf bpp__Hand__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Release"))
	virtual void bpf__Release__pf(EControllerHand bpp__NewParam__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Grab"))
	virtual void bpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Release Magazine"))
	virtual void bpf__ReleasexMagazine__pfT();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Change Fire Mode"))
	virtual void bpf__ChangexFirexMode__pfTT();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Pickup"))
	virtual void bpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Fire"))
	virtual void bpf__Fire__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="Drop"))
	virtual void bpf__Drop__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamageActor"))
	virtual void bpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, CppFromBpEvent, OverrideNativeName="TakeDamage"))
	virtual void bpf__TakeDamage__pf(int32 bpp__DamageAmount__pf);
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="SliderMovementTimeline__UpdateFunc"))
	virtual void bpf__SliderMovementTimeline__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="SliderMovementTimeline__FinishedFunc"))
	virtual void bpf__SliderMovementTimeline__FinishedFunc__pf();
public:
};
