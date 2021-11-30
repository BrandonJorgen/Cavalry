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
#ifdef NATIVIZEDASSETS_BPI_GrabbableObj__pf691914051_generated_h
#error "BPI_GrabbableObj__pf691914051.generated.h already included, missing '#pragma once' in BPI_GrabbableObj__pf691914051.h"
#endif
#define NATIVIZEDASSETS_BPI_GrabbableObj__pf691914051_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_RPC_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_EVENT_PARMS \
	struct BPI_GrabbableObj_C_eventbpf__Grab__pf_Parms \
	{ \
		FName bpp__HandSocket__pf; \
		USceneComponent* bpp__AttachToMe__pf; \
		AActor* bpp__Actor__pf; \
	}; \
	struct BPI_GrabbableObj_C_eventbpf__Release__pf_Parms \
	{ \
		EControllerHand bpp__NewParam__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_CALLBACK_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_GrabbableObj_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_GrabbableObj_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_GrabbableObj_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_GrabbableObj_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_GrabbableObj_C(UBPI_GrabbableObj_C&&); \
	NO_API UBPI_GrabbableObj_C(const UBPI_GrabbableObj_C&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_GrabbableObj_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_GrabbableObj_C(UBPI_GrabbableObj_C&&); \
	NO_API UBPI_GrabbableObj_C(const UBPI_GrabbableObj_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_GrabbableObj_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_GrabbableObj_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_GrabbableObj_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_GrabbableObj_C(); \
	friend struct Z_Construct_UClass_UBPI_GrabbableObj_C_Statics; \
public: \
	DECLARE_CLASS(UBPI_GrabbableObj_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/Blueprints/Interfaces/BPI_GrabbableObj"), NO_API) \
	DECLARE_SERIALIZER(UBPI_GrabbableObj_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_GrabbableObj_C() {} \
public: \
	typedef UBPI_GrabbableObj_C UClassType; \
	typedef IBPI_GrabbableObj_C ThisClass; \
	static void Execute_bpf__Grab__pf(UObject* O, FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
	static void Execute_bpf__Release__pf(UObject* O, EControllerHand bpp__NewParam__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IBPI_GrabbableObj_C() {} \
public: \
	typedef UBPI_GrabbableObj_C UClassType; \
	typedef IBPI_GrabbableObj_C ThisClass; \
	static void Execute_bpf__Grab__pf(UObject* O, FName bpp__HandSocket__pf, USceneComponent* bpp__AttachToMe__pf, AActor* bpp__Actor__pf); \
	static void Execute_bpf__Release__pf(UObject* O, EControllerHand bpp__NewParam__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_7_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UBPI_GrabbableObj_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_GrabbableObj__pf691914051_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
