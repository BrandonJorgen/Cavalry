// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EControllerHand : uint8;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
class USceneComponent;
#ifdef NATIVIZEDASSETS_BP_GrabAmmoTrigger__pf3324220276_generated_h
#error "BP_GrabAmmoTrigger__pf3324220276.generated.h already included, missing '#pragma once' in BP_GrabAmmoTrigger__pf3324220276.h"
#endif
#define NATIVIZEDASSETS_BP_GrabAmmoTrigger__pf3324220276_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Release__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_GrabAmmoTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_GrabAmmoTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Release__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_GrabAmmoTrigger_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_GrabAmmoTrigger_Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_EVENT_PARMS \
	struct BP_GrabAmmoTrigger_C__pf3324220276_eventbpf__Grab__pf_Parms \
	{ \
		FName bpp__HandSocket__pf; \
		USceneComponent* bpp__AttachToMe__pf; \
		AActor* bpp__Actor__pf; \
	}; \
	struct BP_GrabAmmoTrigger_C__pf3324220276_eventbpf__Release__pf_Parms \
	{ \
		EControllerHand bpp__NewParam__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_CALLBACK_WRAPPERS \
	void eventbpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__Release__pf(EControllerHand bpp__NewParam__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_GrabAmmoTrigger_C__pf3324220276(); \
	friend struct Z_Construct_UClass_ABP_GrabAmmoTrigger_C__pf3324220276_Statics; \
public: \
	DECLARE_CLASS(ABP_GrabAmmoTrigger_C__pf3324220276, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Characters/Gear/BP_GrabAmmoTrigger"), NO_API) \
	DECLARE_SERIALIZER(ABP_GrabAmmoTrigger_C__pf3324220276) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_GrabAmmoTrigger_C__pf3324220276*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABP_GrabAmmoTrigger_C__pf3324220276(); \
	friend struct Z_Construct_UClass_ABP_GrabAmmoTrigger_C__pf3324220276_Statics; \
public: \
	DECLARE_CLASS(ABP_GrabAmmoTrigger_C__pf3324220276, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Characters/Gear/BP_GrabAmmoTrigger"), NO_API) \
	DECLARE_SERIALIZER(ABP_GrabAmmoTrigger_C__pf3324220276) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_GrabAmmoTrigger_C__pf3324220276*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_GrabAmmoTrigger_C__pf3324220276(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_GrabAmmoTrigger_C__pf3324220276) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_GrabAmmoTrigger_C__pf3324220276); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_GrabAmmoTrigger_C__pf3324220276); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_GrabAmmoTrigger_C__pf3324220276(ABP_GrabAmmoTrigger_C__pf3324220276&&); \
	NO_API ABP_GrabAmmoTrigger_C__pf3324220276(const ABP_GrabAmmoTrigger_C__pf3324220276&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_GrabAmmoTrigger_C__pf3324220276(ABP_GrabAmmoTrigger_C__pf3324220276&&); \
	NO_API ABP_GrabAmmoTrigger_C__pf3324220276(const ABP_GrabAmmoTrigger_C__pf3324220276&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_GrabAmmoTrigger_C__pf3324220276); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_GrabAmmoTrigger_C__pf3324220276); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_GrabAmmoTrigger_C__pf3324220276)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_15_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_GrabAmmoTrigger_C__pf3324220276>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_GrabAmmoTrigger__pf3324220276_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
