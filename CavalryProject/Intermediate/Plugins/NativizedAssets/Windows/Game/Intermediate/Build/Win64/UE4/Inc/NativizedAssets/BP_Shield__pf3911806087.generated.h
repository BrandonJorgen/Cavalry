// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_BP_Shield__pf3911806087_generated_h
#error "BP_Shield__pf3911806087.generated.h already included, missing '#pragma once' in BP_Shield__pf3911806087.h"
#endif
#define NATIVIZEDASSETS_BP_Shield__pf3911806087_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__CheckHealth__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__CheckHealth__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_EVENT_PARMS \
	struct BP_Shield_C__pf3911806087_eventbpf__TakeDamage__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
	}; \
	struct BP_Shield_C__pf3911806087_eventbpf__TakeDamageActor__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
		AActor* bpp__DamagingActor__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_CALLBACK_WRAPPERS \
	void eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf); \
 \
	void eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_Shield_C__pf3911806087(); \
	friend struct Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics; \
public: \
	DECLARE_CLASS(ABP_Shield_C__pf3911806087, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Tools/BP_Shield"), NO_API) \
	DECLARE_SERIALIZER(ABP_Shield_C__pf3911806087) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_Shield_C__pf3911806087*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABP_Shield_C__pf3911806087(); \
	friend struct Z_Construct_UClass_ABP_Shield_C__pf3911806087_Statics; \
public: \
	DECLARE_CLASS(ABP_Shield_C__pf3911806087, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Tools/BP_Shield"), NO_API) \
	DECLARE_SERIALIZER(ABP_Shield_C__pf3911806087) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_Shield_C__pf3911806087*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_Shield_C__pf3911806087(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Shield_C__pf3911806087) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Shield_C__pf3911806087); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Shield_C__pf3911806087); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Shield_C__pf3911806087(ABP_Shield_C__pf3911806087&&); \
	NO_API ABP_Shield_C__pf3911806087(const ABP_Shield_C__pf3911806087&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_Shield_C__pf3911806087(ABP_Shield_C__pf3911806087&&); \
	NO_API ABP_Shield_C__pf3911806087(const ABP_Shield_C__pf3911806087&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_Shield_C__pf3911806087); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_Shield_C__pf3911806087); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_Shield_C__pf3911806087)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_8_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_Shield_C__pf3911806087>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_Shield__pf3911806087_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
