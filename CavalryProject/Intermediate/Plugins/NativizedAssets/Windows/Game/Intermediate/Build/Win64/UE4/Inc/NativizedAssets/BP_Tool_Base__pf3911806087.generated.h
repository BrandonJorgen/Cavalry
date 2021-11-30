// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
class USceneComponent;
enum class EControllerHand : uint8;
#ifdef NATIVIZEDASSETS_BP_Tool_Base__pf3911806087_generated_h
#error "BP_Tool_Base__pf3911806087.generated.h already included, missing '#pragma once' in BP_Tool_Base__pf3911806087.h"
#endif
#define NATIVIZEDASSETS_BP_Tool_Base__pf3911806087_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__ActivateTool__pf); \
	DECLARE_FUNCTION(execbpf__Magnetize__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Activate__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__ActivateTool__pf); \
	DECLARE_FUNCTION(execbpf__Magnetize__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Activate__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_EVENT_PARMS \
	struct BP_Tool_Base_C__pf3911806087_eventbpf__ActivateTool__pf_Parms \
	{ \
		bool bpp__Active__pf; \
	}; \
	struct BP_Tool_Base_C__pf3911806087_eventbpf__Grab__pf_Parms \
	{ \
		FName bpp__HandSocket__pf; \
		USceneComponent* bpp__AttachToMe__pf; \
		AActor* bpp__Actor__pf; \
	}; \
	struct BP_Tool_Base_C__pf3911806087_eventbpf__Release__pf_Parms \
	{ \
		EControllerHand bpp__NewParam__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_CALLBACK_WRAPPERS \
	void eventbpf__ActivateTool__pf(bool bpp__Active__pf); \
 \
	void eventbpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
 \
	void eventbpf__Release__pf(EControllerHand bpp__NewParam__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Tool_Base_C__pf3911806087(); \
	friend struct Z_Construct_UClass_ABP_Tool_Base_C__pf3911806087_Statics; \
public: \
	DECLARE_CLASS(ABP_Tool_Base_C__pf3911806087, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Tools/BP_Tool_Base"), NO_API) \
	DECLARE_SERIALIZER(ABP_Tool_Base_C__pf3911806087) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_Tool_Base_C__pf3911806087*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_INCLASS \
private: \
	static void StaticRegisterNativesABP_Tool_Base_C__pf3911806087(); \
	friend struct Z_Construct_UClass_ABP_Tool_Base_C__pf3911806087_Statics; \
public: \
	DECLARE_CLASS(ABP_Tool_Base_C__pf3911806087, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Tools/BP_Tool_Base"), NO_API) \
	DECLARE_SERIALIZER(ABP_Tool_Base_C__pf3911806087) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_Tool_Base_C__pf3911806087*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Tool_Base_C__pf3911806087(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Tool_Base_C__pf3911806087) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Tool_Base_C__pf3911806087); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Tool_Base_C__pf3911806087); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Tool_Base_C__pf3911806087(ABP_Tool_Base_C__pf3911806087&&); \
	NO_API ABP_Tool_Base_C__pf3911806087(const ABP_Tool_Base_C__pf3911806087&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Tool_Base_C__pf3911806087(ABP_Tool_Base_C__pf3911806087&&); \
	NO_API ABP_Tool_Base_C__pf3911806087(const ABP_Tool_Base_C__pf3911806087&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Tool_Base_C__pf3911806087); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Tool_Base_C__pf3911806087); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Tool_Base_C__pf3911806087)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_17_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h_21_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_Tool_Base_C__pf3911806087>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Tool_Base__pf3911806087_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
