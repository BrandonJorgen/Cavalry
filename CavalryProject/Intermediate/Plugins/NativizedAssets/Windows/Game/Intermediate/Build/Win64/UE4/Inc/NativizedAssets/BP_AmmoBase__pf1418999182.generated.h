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
class UPrimitiveComponent;
struct FHitResult;
#ifdef NATIVIZEDASSETS_BP_AmmoBase__pf1418999182_generated_h
#error "BP_AmmoBase__pf1418999182.generated.h already included, missing '#pragma once' in BP_AmmoBase__pf1418999182.h"
#endif
#define NATIVIZEDASSETS_BP_AmmoBase__pf1418999182_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf); \
	DECLARE_FUNCTION(execbpf__SnapEvent__pf); \
	DECLARE_FUNCTION(execbpf__Magnetize__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__OnAmmoChange__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__Grab__pf); \
	DECLARE_FUNCTION(execbpf__Release__pf); \
	DECLARE_FUNCTION(execbpf__SnapEvent__pf); \
	DECLARE_FUNCTION(execbpf__Magnetize__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__BP_AmmoBase_MagnetCollision_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf); \
	DECLARE_FUNCTION(execbpf__OnAmmoChange__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_EVENT_PARMS \
	struct BP_AmmoBase_C__pf1418999182_eventbpf__Grab__pf_Parms \
	{ \
		FName bpp__HandSocket__pf; \
		USceneComponent* bpp__AttachToMe__pf; \
		AActor* bpp__Actor__pf; \
	}; \
	struct BP_AmmoBase_C__pf1418999182_eventbpf__Magnetize__pf_Parms \
	{ \
		AActor* bpp__Magnet__pf; \
	}; \
	struct BP_AmmoBase_C__pf1418999182_eventbpf__Release__pf_Parms \
	{ \
		EControllerHand bpp__NewParam__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_CALLBACK_WRAPPERS \
	void eventbpf__Grab__pf(FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
 \
	void eventbpf__Magnetize__pf(AActor* bpp__Magnet__pf); \
 \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__Release__pf(EControllerHand bpp__NewParam__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_AmmoBase_C__pf1418999182(); \
	friend struct Z_Construct_UClass_ABP_AmmoBase_C__pf1418999182_Statics; \
public: \
	DECLARE_CLASS(ABP_AmmoBase_C__pf1418999182, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Weapons/BP_AmmoBase"), NO_API) \
	DECLARE_SERIALIZER(ABP_AmmoBase_C__pf1418999182) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_AmmoBase_C__pf1418999182*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_INCLASS \
private: \
	static void StaticRegisterNativesABP_AmmoBase_C__pf1418999182(); \
	friend struct Z_Construct_UClass_ABP_AmmoBase_C__pf1418999182_Statics; \
public: \
	DECLARE_CLASS(ABP_AmmoBase_C__pf1418999182, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/Blueprints/Weapons/BP_AmmoBase"), NO_API) \
	DECLARE_SERIALIZER(ABP_AmmoBase_C__pf1418999182) \
	virtual UObject* _getUObject() const override { return const_cast<ABP_AmmoBase_C__pf1418999182*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_AmmoBase_C__pf1418999182(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_AmmoBase_C__pf1418999182) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_AmmoBase_C__pf1418999182); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_AmmoBase_C__pf1418999182); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_AmmoBase_C__pf1418999182(ABP_AmmoBase_C__pf1418999182&&); \
	NO_API ABP_AmmoBase_C__pf1418999182(const ABP_AmmoBase_C__pf1418999182&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_AmmoBase_C__pf1418999182(ABP_AmmoBase_C__pf1418999182&&); \
	NO_API ABP_AmmoBase_C__pf1418999182(const ABP_AmmoBase_C__pf1418999182&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_AmmoBase_C__pf1418999182); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_AmmoBase_C__pf1418999182); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_AmmoBase_C__pf1418999182)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_21_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_AmmoBase_C__pf1418999182>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_AmmoBase__pf1418999182_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
