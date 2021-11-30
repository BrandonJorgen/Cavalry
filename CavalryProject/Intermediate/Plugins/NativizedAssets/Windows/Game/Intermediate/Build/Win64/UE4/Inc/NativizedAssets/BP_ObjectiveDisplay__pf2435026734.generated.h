// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NATIVIZEDASSETS_BP_ObjectiveDisplay__pf2435026734_generated_h
#error "BP_ObjectiveDisplay__pf2435026734.generated.h already included, missing '#pragma once' in BP_ObjectiveDisplay__pf2435026734.h"
#endif
#define NATIVIZEDASSETS_BP_ObjectiveDisplay__pf2435026734_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetCharRef__pf); \
	DECLARE_FUNCTION(execbpf__FacePlayer__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__UpdateMission__pf); \
	DECLARE_FUNCTION(execbpf__ShouldxRotxEvent__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ToggleObjetiveBool__pf); \
	DECLARE_FUNCTION(execbpf__UpdateObjectiveLoc__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_6); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_4); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_2);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetCharRef__pf); \
	DECLARE_FUNCTION(execbpf__FacePlayer__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__UpdateMission__pf); \
	DECLARE_FUNCTION(execbpf__ShouldxRotxEvent__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__ToggleObjetiveBool__pf); \
	DECLARE_FUNCTION(execbpf__UpdateObjectiveLoc__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_6); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_4); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_ObjectiveDisplay__pf_2);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_EVENT_PARMS \
	struct BP_ObjectiveDisplay_C__pf2435026734_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	}; \
	struct BP_ObjectiveDisplay_C__pf2435026734_eventbpf__ToggleObjetiveBool__pf_Parms \
	{ \
		bool bpp__Objectivex__pfzy; \
	}; \
	struct BP_ObjectiveDisplay_C__pf2435026734_eventbpf__UpdateMission__pf_Parms \
	{ \
		FText bpp__ObjectiveDetails__pf__const; \
	}; \
	struct BP_ObjectiveDisplay_C__pf2435026734_eventbpf__UpdateObjectiveLoc__pf_Parms \
	{ \
		FVector bpp__NewLocation__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy); \
 \
	void eventbpf__UpdateMission__pf(FText const& bpp__ObjectiveDetails__pf__const); \
 \
	void eventbpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_ObjectiveDisplay_C__pf2435026734(); \
	friend struct Z_Construct_UClass_ABP_ObjectiveDisplay_C__pf2435026734_Statics; \
public: \
	DECLARE_CLASS(ABP_ObjectiveDisplay_C__pf2435026734, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Objective_Display/BP_ObjectiveDisplay"), NO_API) \
	DECLARE_SERIALIZER(ABP_ObjectiveDisplay_C__pf2435026734) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_ObjectiveDisplay_C__pf2435026734*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_INCLASS \
private: \
	static void StaticRegisterNativesABP_ObjectiveDisplay_C__pf2435026734(); \
	friend struct Z_Construct_UClass_ABP_ObjectiveDisplay_C__pf2435026734_Statics; \
public: \
	DECLARE_CLASS(ABP_ObjectiveDisplay_C__pf2435026734, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Objective_Display/BP_ObjectiveDisplay"), NO_API) \
	DECLARE_SERIALIZER(ABP_ObjectiveDisplay_C__pf2435026734) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_ObjectiveDisplay_C__pf2435026734*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_ObjectiveDisplay_C__pf2435026734(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_ObjectiveDisplay_C__pf2435026734) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_ObjectiveDisplay_C__pf2435026734); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_ObjectiveDisplay_C__pf2435026734); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_ObjectiveDisplay_C__pf2435026734(ABP_ObjectiveDisplay_C__pf2435026734&&); \
	NO_API ABP_ObjectiveDisplay_C__pf2435026734(const ABP_ObjectiveDisplay_C__pf2435026734&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_ObjectiveDisplay_C__pf2435026734(ABP_ObjectiveDisplay_C__pf2435026734&&); \
	NO_API ABP_ObjectiveDisplay_C__pf2435026734(const ABP_ObjectiveDisplay_C__pf2435026734&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_ObjectiveDisplay_C__pf2435026734); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_ObjectiveDisplay_C__pf2435026734); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_ObjectiveDisplay_C__pf2435026734)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_13_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h_17_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_ObjectiveDisplay_C__pf2435026734>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_ObjectiveDisplay__pf2435026734_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
