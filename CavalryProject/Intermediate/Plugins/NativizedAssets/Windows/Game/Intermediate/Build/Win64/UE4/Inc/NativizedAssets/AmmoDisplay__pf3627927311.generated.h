// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NATIVIZEDASSETS_AmmoDisplay__pf3627927311_generated_h
#error "AmmoDisplay__pf3627927311.generated.h already included, missing '#pragma once' in AmmoDisplay__pf3627927311.h"
#endif
#define NATIVIZEDASSETS_AmmoDisplay__pf3627927311_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetPlayerRef__pf); \
	DECLARE_FUNCTION(execbpf__FacePlayer__pf); \
	DECLARE_FUNCTION(execbpf__ShouldxRotxEvent__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__Update_Ammo__pf); \
	DECLARE_FUNCTION(execbpf__IsBeingHeld__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_AmmoDisplay__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_AmmoDisplay__pf_4); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_AmmoDisplay__pf_3);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetPlayerRef__pf); \
	DECLARE_FUNCTION(execbpf__FacePlayer__pf); \
	DECLARE_FUNCTION(execbpf__ShouldxRotxEvent__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__Update_Ammo__pf); \
	DECLARE_FUNCTION(execbpf__IsBeingHeld__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_AmmoDisplay__pf_5); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_AmmoDisplay__pf_4); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_AmmoDisplay__pf_3);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_EVENT_PARMS \
	struct AmmoDisplay_C__pf3627927311_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoDisplay_C__pf3627927311(); \
	friend struct Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics; \
public: \
	DECLARE_CLASS(AAmmoDisplay_C__pf3627927311, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Ammo_Display/AmmoDisplay"), NO_API) \
	DECLARE_SERIALIZER(AAmmoDisplay_C__pf3627927311)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAAmmoDisplay_C__pf3627927311(); \
	friend struct Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics; \
public: \
	DECLARE_CLASS(AAmmoDisplay_C__pf3627927311, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Ammo_Display/AmmoDisplay"), NO_API) \
	DECLARE_SERIALIZER(AAmmoDisplay_C__pf3627927311)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoDisplay_C__pf3627927311(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoDisplay_C__pf3627927311) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoDisplay_C__pf3627927311); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoDisplay_C__pf3627927311); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoDisplay_C__pf3627927311(AAmmoDisplay_C__pf3627927311&&); \
	NO_API AAmmoDisplay_C__pf3627927311(const AAmmoDisplay_C__pf3627927311&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoDisplay_C__pf3627927311(AAmmoDisplay_C__pf3627927311&&); \
	NO_API AAmmoDisplay_C__pf3627927311(const AAmmoDisplay_C__pf3627927311&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoDisplay_C__pf3627927311); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoDisplay_C__pf3627927311); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoDisplay_C__pf3627927311)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_10_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h_14_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class AAmmoDisplay_C__pf3627927311>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_AmmoDisplay__pf3627927311_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
