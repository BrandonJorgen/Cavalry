// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
enum class EControllerHand : uint8;
enum class E__E_Hands__pf : uint8;
class UPrimitiveComponent;
struct FHitResult;
class ABP_AmmoBase_C__pf1418999182;
#ifdef NATIVIZEDASSETS_BP_Firearm_Base__pf1418999182_generated_h
#error "BP_Firearm_Base__pf1418999182.generated.h already included, missing '#pragma once' in BP_Firearm_Base__pf1418999182.h"
#endif
#define NATIVIZEDASSETS_BP_Firearm_Base__pf1418999182_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__SliderMovementTimeline__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__SliderMovementTimeline__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__Timeline_0__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__Timeline_0__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf); \
	DECLARE_FUNCTION(execbpf__Drop__pf); \
	DECLARE_FUNCTION(execbpf__Fire__pf); \
	DECLARE_FUNCTION(execbpf__Pickup__pf); \
	DECLARE_FUNCTION(execbpf__ChangexFirexMode__pfTT); \
	DECLARE_FUNCTION(execbpf__ReleasexMagazine__pfT); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf); \
	DECLARE_FUNCTION(execbpf__Shoot__pf); \
	DECLARE_FUNCTION(execbpf__ChangeFiremode__pf); \
	DECLARE_FUNCTION(execbpf__ReleaseMagazine__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_Firearm_Base_Slider_Stopper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__SliderRevertPosition__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BPC_Shotgun_Slider_ForwardPosition_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__Reload__pf); \
	DECLARE_FUNCTION(execbpf__SecondHandRelease__pf); \
	DECLARE_FUNCTION(execbpf__Magnetize__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__ShootRelease__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Firearm_Base__pf_11); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Firearm_Base__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Firearm_Base__pf_1);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__SliderMovementTimeline__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__SliderMovementTimeline__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__Timeline_0__FinishedFunc__pf); \
	DECLARE_FUNCTION(execbpf__Timeline_0__UpdateFunc__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf); \
	DECLARE_FUNCTION(execbpf__Drop__pf); \
	DECLARE_FUNCTION(execbpf__Fire__pf); \
	DECLARE_FUNCTION(execbpf__Pickup__pf); \
	DECLARE_FUNCTION(execbpf__ChangexFirexMode__pfTT); \
	DECLARE_FUNCTION(execbpf__ReleasexMagazine__pfT); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf); \
	DECLARE_FUNCTION(execbpf__Shoot__pf); \
	DECLARE_FUNCTION(execbpf__ChangeFiremode__pf); \
	DECLARE_FUNCTION(execbpf__ReleaseMagazine__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_Firearm_Base_Slider_Stopper_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__SliderRevertPosition__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BPC_Shotgun_Slider_ForwardPosition_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__Reload__pf); \
	DECLARE_FUNCTION(execbpf__SecondHandRelease__pf); \
	DECLARE_FUNCTION(execbpf__Magnetize__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_Firearm_Base_MagnetCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__ShootRelease__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Firearm_Base__pf_11); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Firearm_Base__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_Firearm_Base__pf_1);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_EVENT_PARMS \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__Grab__pf_Parms \
	{ \
		FName bpp__HandSocket__pf; \
		USceneComponent* bpp__AttachToMe__pf; \
		AActor* bpp__Actor__pf; \
	}; \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__Magnetize__pf_Parms \
	{ \
		AActor* bpp__Magnet__pf; \
	}; \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__Pickup__pf_Parms \
	{ \
		USceneComponent* bpp__AttachTo__pf; \
	}; \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__Release__pf_Parms \
	{ \
		EControllerHand bpp__NewParam__pf; \
	}; \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__Shoot__pf_Parms \
	{ \
		E__E_Hands__pf bpp__Hand__pf; \
	}; \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__TakeDamage__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
	}; \
	struct BP_Firearm_Base_C__pf1418999182_eventbpf__TakeDamageActor__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
		AActor* bpp__DamagingActor__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_CALLBACK_WRAPPERS \
	void eventbpf__ChangeFiremode__pf(); \
 \
	void eventbpf__Drop__pf(); \
 \
	void eventbpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
 \
	void eventbpf__Magnetize__pf(AActor* bpp__Magnet__pf); \
 \
	void eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf); \
 \
	void eventbpf__Release__pf(EControllerHand bpp__NewParam__pf); \
 \
	void eventbpf__ReleaseMagazine__pf(); \
 \
	void eventbpf__Shoot__pf(E__E_Hands__pf bpp__Hand__pf); \
 \
	void eventbpf__ShootRelease__pf(); \
 \
	void eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf); \
 \
	void eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Firearm_Base_C__pf1418999182(); \
	friend struct Z_Construct_UClass_ABP_Firearm_Base_C__pf1418999182_Statics; \
public: \
	DECLARE_CLASS(ABP_Firearm_Base_C__pf1418999182, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Weapons/BP_Firearm_Base"), NO_API) \
	DECLARE_SERIALIZER(ABP_Firearm_Base_C__pf1418999182) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_Firearm_Base_C__pf1418999182*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_INCLASS \
private: \
	static void StaticRegisterNativesABP_Firearm_Base_C__pf1418999182(); \
	friend struct Z_Construct_UClass_ABP_Firearm_Base_C__pf1418999182_Statics; \
public: \
	DECLARE_CLASS(ABP_Firearm_Base_C__pf1418999182, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Weapons/BP_Firearm_Base"), NO_API) \
	DECLARE_SERIALIZER(ABP_Firearm_Base_C__pf1418999182) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_Firearm_Base_C__pf1418999182*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Firearm_Base_C__pf1418999182(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Firearm_Base_C__pf1418999182) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Firearm_Base_C__pf1418999182); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Firearm_Base_C__pf1418999182); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Firearm_Base_C__pf1418999182(ABP_Firearm_Base_C__pf1418999182&&); \
	NO_API ABP_Firearm_Base_C__pf1418999182(const ABP_Firearm_Base_C__pf1418999182&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Firearm_Base_C__pf1418999182(ABP_Firearm_Base_C__pf1418999182&&); \
	NO_API ABP_Firearm_Base_C__pf1418999182(const ABP_Firearm_Base_C__pf1418999182&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Firearm_Base_C__pf1418999182); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Firearm_Base_C__pf1418999182); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Firearm_Base_C__pf1418999182)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_34_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h_38_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_Firearm_Base_C__pf1418999182>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Firearm_Base__pf1418999182_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
