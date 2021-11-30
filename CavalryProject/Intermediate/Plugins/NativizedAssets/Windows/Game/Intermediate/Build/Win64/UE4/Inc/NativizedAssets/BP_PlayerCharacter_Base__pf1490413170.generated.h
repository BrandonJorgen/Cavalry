// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_BP_PlayerCharacter_Base__pf1490413170_generated_h
#error "BP_PlayerCharacter_Base__pf1490413170.generated.h already included, missing '#pragma once' in BP_PlayerCharacter_Base__pf1490413170.h"
#endif
#define NATIVIZEDASSETS_BP_PlayerCharacter_Base__pf1490413170_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__KATMovement__pf); \
	DECLARE_FUNCTION(execbpf__Rotation__pf); \
	DECLARE_FUNCTION(execbpf__Strafe__pf); \
	DECLARE_FUNCTION(execbpf__Movement__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__ResetHitTimer__pf); \
	DECLARE_FUNCTION(execbpf__Death__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf); \
	DECLARE_FUNCTION(execbpf__InitializexCapsulexHeight__pfTT); \
	DECLARE_FUNCTION(execbpf__NightxVisionxTrigger__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__CalibratexHMDxFloorxPosition__pfTTT);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__KATMovement__pf); \
	DECLARE_FUNCTION(execbpf__Rotation__pf); \
	DECLARE_FUNCTION(execbpf__Strafe__pf); \
	DECLARE_FUNCTION(execbpf__Movement__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__ResetHitTimer__pf); \
	DECLARE_FUNCTION(execbpf__Death__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf); \
	DECLARE_FUNCTION(execbpf__InitializexCapsulexHeight__pfTT); \
	DECLARE_FUNCTION(execbpf__NightxVisionxTrigger__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__CalibratexHMDxFloorxPosition__pfTTT);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_EVENT_PARMS \
	struct BP_PlayerCharacter_Base_C__pf1490413170_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	}; \
	struct BP_PlayerCharacter_Base_C__pf1490413170_eventbpf__TakeDamage__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
	}; \
	struct BP_PlayerCharacter_Base_C__pf1490413170_eventbpf__TakeDamageActor__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
		AActor* bpp__DamagingActor__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf); \
 \
	void eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_PlayerCharacter_Base_C__pf1490413170(); \
	friend struct Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_Statics; \
public: \
	DECLARE_CLASS(ABP_PlayerCharacter_Base_C__pf1490413170, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Characters/BP_PlayerCharacter_Base"), NO_API) \
	DECLARE_SERIALIZER(ABP_PlayerCharacter_Base_C__pf1490413170) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_PlayerCharacter_Base_C__pf1490413170*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_INCLASS \
private: \
	static void StaticRegisterNativesABP_PlayerCharacter_Base_C__pf1490413170(); \
	friend struct Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_Statics; \
public: \
	DECLARE_CLASS(ABP_PlayerCharacter_Base_C__pf1490413170, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Characters/BP_PlayerCharacter_Base"), NO_API) \
	DECLARE_SERIALIZER(ABP_PlayerCharacter_Base_C__pf1490413170) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_PlayerCharacter_Base_C__pf1490413170*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_PlayerCharacter_Base_C__pf1490413170(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_PlayerCharacter_Base_C__pf1490413170) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PlayerCharacter_Base_C__pf1490413170); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PlayerCharacter_Base_C__pf1490413170); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_PlayerCharacter_Base_C__pf1490413170(ABP_PlayerCharacter_Base_C__pf1490413170&&); \
	NO_API ABP_PlayerCharacter_Base_C__pf1490413170(const ABP_PlayerCharacter_Base_C__pf1490413170&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_PlayerCharacter_Base_C__pf1490413170(ABP_PlayerCharacter_Base_C__pf1490413170&&); \
	NO_API ABP_PlayerCharacter_Base_C__pf1490413170(const ABP_PlayerCharacter_Base_C__pf1490413170&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PlayerCharacter_Base_C__pf1490413170); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PlayerCharacter_Base_C__pf1490413170); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_PlayerCharacter_Base_C__pf1490413170)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_20_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h_24_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_PlayerCharacter_Base_C__pf1490413170>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PlayerCharacter_Base__pf1490413170_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
