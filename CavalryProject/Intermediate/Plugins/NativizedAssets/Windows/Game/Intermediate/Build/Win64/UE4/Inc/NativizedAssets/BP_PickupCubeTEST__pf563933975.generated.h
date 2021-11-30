// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
class AActor;
enum class EControllerHand : uint8;
#ifdef NATIVIZEDASSETS_BP_PickupCubeTEST__pf563933975_generated_h
#error "BP_PickupCubeTEST__pf563933975.generated.h already included, missing '#pragma once' in BP_PickupCubeTEST__pf563933975.h"
#endif
#define NATIVIZEDASSETS_BP_PickupCubeTEST__pf563933975_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__Pickup__pf); \
	DECLARE_FUNCTION(execbpf__Drop__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__Pickup__pf); \
	DECLARE_FUNCTION(execbpf__Drop__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_EVENT_PARMS \
	struct BP_PickupCubeTEST_C__pf563933975_eventbpf__Grab__pf_Parms \
	{ \
		FName bpp__HandSocket__pf; \
		USceneComponent* bpp__AttachToMe__pf; \
		AActor* bpp__Actor__pf; \
	}; \
	struct BP_PickupCubeTEST_C__pf563933975_eventbpf__Pickup__pf_Parms \
	{ \
		USceneComponent* bpp__AttachTo__pf; \
	}; \
	struct BP_PickupCubeTEST_C__pf563933975_eventbpf__Release__pf_Parms \
	{ \
		EControllerHand bpp__NewParam__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_CALLBACK_WRAPPERS \
	void eventbpf__Drop__pf(); \
 \
	void eventbpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
 \
	void eventbpf__Pickup__pf(USceneComponent* bpp__AttachTo__pf); \
 \
	void eventbpf__Release__pf(EControllerHand bpp__NewParam__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_PickupCubeTEST_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_PickupCubeTEST_C__pf563933975, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST"), NO_API) \
	DECLARE_SERIALIZER(ABP_PickupCubeTEST_C__pf563933975) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_PickupCubeTEST_C__pf563933975*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABP_PickupCubeTEST_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_PickupCubeTEST_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_PickupCubeTEST_C__pf563933975, AStaticMeshActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_PickupCubeTEST"), NO_API) \
	DECLARE_SERIALIZER(ABP_PickupCubeTEST_C__pf563933975) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_PickupCubeTEST_C__pf563933975*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_PickupCubeTEST_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_PickupCubeTEST_C__pf563933975) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PickupCubeTEST_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PickupCubeTEST_C__pf563933975); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_PickupCubeTEST_C__pf563933975(ABP_PickupCubeTEST_C__pf563933975&&); \
	NO_API ABP_PickupCubeTEST_C__pf563933975(const ABP_PickupCubeTEST_C__pf563933975&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_PickupCubeTEST_C__pf563933975(ABP_PickupCubeTEST_C__pf563933975&&); \
	NO_API ABP_PickupCubeTEST_C__pf563933975(const ABP_PickupCubeTEST_C__pf563933975&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_PickupCubeTEST_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_PickupCubeTEST_C__pf563933975); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_PickupCubeTEST_C__pf563933975)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_11_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h_15_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_PickupCubeTEST_C__pf563933975>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_PickupCubeTEST__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
