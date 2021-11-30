// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NATIVIZEDASSETS_BP_HorsemenHUD__pf760233656_generated_h
#error "BP_HorsemenHUD__pf760233656.generated.h already included, missing '#pragma once' in BP_HorsemenHUD__pf760233656.h"
#endif
#define NATIVIZEDASSETS_BP_HorsemenHUD__pf760233656_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__RespawningxTrace__pfT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__SpawnxDamagexWidget__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf); \
	DECLARE_FUNCTION(execbpf__ToggleObjetiveBool__pf); \
	DECLARE_FUNCTION(execbpf__UpdateMission__pf); \
	DECLARE_FUNCTION(execbpf__UpdateObjectiveLoc__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__RespawningxTrace__pfT); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__SpawnxDamagexWidget__pfTT); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf); \
	DECLARE_FUNCTION(execbpf__ToggleObjetiveBool__pf); \
	DECLARE_FUNCTION(execbpf__UpdateMission__pf); \
	DECLARE_FUNCTION(execbpf__UpdateObjectiveLoc__pf); \
	DECLARE_FUNCTION(execbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_EVENT_PARMS \
	struct BP_HorsemenHUD_C__pf760233656_eventbpf__Damage_Source__pf_Parms \
	{ \
		FVector bpp__Source__pf; \
	}; \
	struct BP_HorsemenHUD_C__pf760233656_eventbpf__Player_Was_Hit__pf_Parms \
	{ \
		bool bpp__CurrentlyHit__pf; \
	}; \
	struct BP_HorsemenHUD_C__pf760233656_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	}; \
	struct BP_HorsemenHUD_C__pf760233656_eventbpf__ToggleObjetiveBool__pf_Parms \
	{ \
		bool bpp__Objectivex__pfzy; \
	}; \
	struct BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateMission__pf_Parms \
	{ \
		FText bpp__ObjectiveDetails__pf__const; \
	}; \
	struct BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateObjectiveLoc__pf_Parms \
	{ \
		FVector bpp__NewLocation__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_CALLBACK_WRAPPERS \
	void eventbpf__Damage_Source__pf(FVector bpp__Source__pf); \
 \
	void eventbpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy); \
 \
	void eventbpf__UpdateMission__pf(FText const& bpp__ObjectiveDetails__pf__const); \
 \
	void eventbpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_HorsemenHUD_C__pf760233656(); \
	friend struct Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics; \
public: \
	DECLARE_CLASS(ABP_HorsemenHUD_C__pf760233656, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD"), NO_API) \
	DECLARE_SERIALIZER(ABP_HorsemenHUD_C__pf760233656) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_HorsemenHUD_C__pf760233656*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABP_HorsemenHUD_C__pf760233656(); \
	friend struct Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics; \
public: \
	DECLARE_CLASS(ABP_HorsemenHUD_C__pf760233656, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD"), NO_API) \
	DECLARE_SERIALIZER(ABP_HorsemenHUD_C__pf760233656) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_HorsemenHUD_C__pf760233656*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_HorsemenHUD_C__pf760233656(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_HorsemenHUD_C__pf760233656) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_HorsemenHUD_C__pf760233656); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_HorsemenHUD_C__pf760233656); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_HorsemenHUD_C__pf760233656(ABP_HorsemenHUD_C__pf760233656&&); \
	NO_API ABP_HorsemenHUD_C__pf760233656(const ABP_HorsemenHUD_C__pf760233656&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_HorsemenHUD_C__pf760233656(ABP_HorsemenHUD_C__pf760233656&&); \
	NO_API ABP_HorsemenHUD_C__pf760233656(const ABP_HorsemenHUD_C__pf760233656&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_HorsemenHUD_C__pf760233656); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_HorsemenHUD_C__pf760233656); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_HorsemenHUD_C__pf760233656)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_15_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h_19_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_HorsemenHUD_C__pf760233656>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_HorsemenHUD__pf760233656_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
