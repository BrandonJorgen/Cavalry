// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FGeometry;
#ifdef NATIVIZEDASSETS_ObjectivePointer__pf2435026734_generated_h
#error "ObjectivePointer__pf2435026734.generated.h already included, missing '#pragma once' in ObjectivePointer__pf2435026734.h"
#endif
#define NATIVIZEDASSETS_ObjectivePointer__pf2435026734_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_20_DELEGATE \
struct ObjectivePointer_C__pf2435026734_eventUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate_Parms \
{ \
	FVector bpp__Objective_Loc__pf; \
}; \
static inline void FUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate_DelegateWrapper(const FScriptDelegate& UpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate, FVector bpp__Objective_Loc__pf) \
{ \
	ObjectivePointer_C__pf2435026734_eventUpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate_Parms Parms; \
	Parms.bpp__Objective_Loc__pf=bpp__Objective_Loc__pf; \
	UpdatexObjectivexLoc__pfTT__BP_ObjectiveDisplay_Spawner_C__pf__SinglecastDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf); \
	DECLARE_FUNCTION(execbpf__ToggleObjetiveBool__pf); \
	DECLARE_FUNCTION(execbpf__SetxObjectivexDirection__pfTT); \
	DECLARE_FUNCTION(execbpf__UpdateLocation__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_ObjectivePointer__pf_1);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf); \
	DECLARE_FUNCTION(execbpf__ToggleObjetiveBool__pf); \
	DECLARE_FUNCTION(execbpf__SetxObjectivexDirection__pfTT); \
	DECLARE_FUNCTION(execbpf__UpdateLocation__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_ObjectivePointer__pf_1);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_EVENT_PARMS \
	struct ObjectivePointer_C__pf2435026734_eventbpf__Damage_Source__pf_Parms \
	{ \
		FVector bpp__Source__pf; \
	}; \
	struct ObjectivePointer_C__pf2435026734_eventbpf__Player_Was_Hit__pf_Parms \
	{ \
		bool bpp__CurrentlyHit__pf; \
	}; \
	struct ObjectivePointer_C__pf2435026734_eventbpf__Tick__pf_Parms \
	{ \
		FGeometry bpp__MyGeometry__pf; \
		float bpp__InDeltaTime__pf; \
	}; \
	struct ObjectivePointer_C__pf2435026734_eventbpf__ToggleObjetiveBool__pf_Parms \
	{ \
		bool bpp__Objectivex__pfzy; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \
 \
	void eventbpf__Damage_Source__pf(FVector bpp__Source__pf); \
 \
	void eventbpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf); \
 \
	void eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf); \
 \
	void eventbpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectivePointer_C__pf2435026734(); \
	friend struct Z_Construct_UClass_UObjectivePointer_C__pf2435026734_Statics; \
public: \
	DECLARE_CLASS(UObjectivePointer_C__pf2435026734, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Objective_Display/ObjectivePointer"), NO_API) \
	DECLARE_SERIALIZER(UObjectivePointer_C__pf2435026734) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UObjectivePointer_C__pf2435026734*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUObjectivePointer_C__pf2435026734(); \
	friend struct Z_Construct_UClass_UObjectivePointer_C__pf2435026734_Statics; \
public: \
	DECLARE_CLASS(UObjectivePointer_C__pf2435026734, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Objective_Display/ObjectivePointer"), NO_API) \
	DECLARE_SERIALIZER(UObjectivePointer_C__pf2435026734) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UObjectivePointer_C__pf2435026734*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectivePointer_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectivePointer_C__pf2435026734) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectivePointer_C__pf2435026734); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectivePointer_C__pf2435026734); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectivePointer_C__pf2435026734(UObjectivePointer_C__pf2435026734&&); \
	NO_API UObjectivePointer_C__pf2435026734(const UObjectivePointer_C__pf2435026734&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectivePointer_C__pf2435026734(UObjectivePointer_C__pf2435026734&&); \
	NO_API UObjectivePointer_C__pf2435026734(const UObjectivePointer_C__pf2435026734&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectivePointer_C__pf2435026734); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectivePointer_C__pf2435026734); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectivePointer_C__pf2435026734)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_14_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h_18_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UObjectivePointer_C__pf2435026734>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_ObjectivePointer__pf2435026734_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
