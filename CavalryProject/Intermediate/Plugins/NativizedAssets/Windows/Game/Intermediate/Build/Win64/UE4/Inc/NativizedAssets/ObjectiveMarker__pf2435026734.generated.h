// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NATIVIZEDASSETS_ObjectiveMarker__pf2435026734_generated_h
#error "ObjectiveMarker__pf2435026734.generated.h already included, missing '#pragma once' in ObjectiveMarker__pf2435026734.h"
#endif
#define NATIVIZEDASSETS_ObjectiveMarker__pf2435026734_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_EVENT_PARMS \
	struct ObjectiveMarker_C__pf2435026734_eventbpf__Damage_Source__pf_Parms \
	{ \
		FVector bpp__Source__pf; \
	}; \
	struct ObjectiveMarker_C__pf2435026734_eventbpf__Player_Was_Hit__pf_Parms \
	{ \
		bool bpp__CurrentlyHit__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_CALLBACK_WRAPPERS \
	void eventbpf__Damage_Source__pf(FVector bpp__Source__pf); \
 \
	void eventbpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectiveMarker_C__pf2435026734(); \
	friend struct Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics; \
public: \
	DECLARE_CLASS(UObjectiveMarker_C__pf2435026734, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Objective_Display/ObjectiveMarker"), NO_API) \
	DECLARE_SERIALIZER(UObjectiveMarker_C__pf2435026734) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UObjectiveMarker_C__pf2435026734*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUObjectiveMarker_C__pf2435026734(); \
	friend struct Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics; \
public: \
	DECLARE_CLASS(UObjectiveMarker_C__pf2435026734, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Objective_Display/ObjectiveMarker"), NO_API) \
	DECLARE_SERIALIZER(UObjectiveMarker_C__pf2435026734) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UObjectiveMarker_C__pf2435026734*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectiveMarker_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectiveMarker_C__pf2435026734) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectiveMarker_C__pf2435026734); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectiveMarker_C__pf2435026734); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectiveMarker_C__pf2435026734(UObjectiveMarker_C__pf2435026734&&); \
	NO_API UObjectiveMarker_C__pf2435026734(const UObjectiveMarker_C__pf2435026734&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectiveMarker_C__pf2435026734(UObjectiveMarker_C__pf2435026734&&); \
	NO_API UObjectiveMarker_C__pf2435026734(const UObjectiveMarker_C__pf2435026734&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectiveMarker_C__pf2435026734); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectiveMarker_C__pf2435026734); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectiveMarker_C__pf2435026734)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_9_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h_13_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UObjectiveMarker_C__pf2435026734>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectiveMarker__pf2435026734_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
