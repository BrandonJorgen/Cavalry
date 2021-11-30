// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NATIVIZEDASSETS_BPI_TakeDamage__pf691914051_generated_h
#error "BPI_TakeDamage__pf691914051.generated.h already included, missing '#pragma once' in BPI_TakeDamage__pf691914051.h"
#endif
#define NATIVIZEDASSETS_BPI_TakeDamage__pf691914051_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_RPC_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_EVENT_PARMS \
	struct BPI_TakeDamage_C_eventbpf__TakeDamage__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
	}; \
	struct BPI_TakeDamage_C_eventbpf__TakeDamageActor__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
		AActor* bpp__DamagingActor__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_CALLBACK_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_TakeDamage_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_TakeDamage_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_TakeDamage_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_TakeDamage_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_TakeDamage_C(UBPI_TakeDamage_C&&); \
	NO_API UBPI_TakeDamage_C(const UBPI_TakeDamage_C&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_TakeDamage_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_TakeDamage_C(UBPI_TakeDamage_C&&); \
	NO_API UBPI_TakeDamage_C(const UBPI_TakeDamage_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_TakeDamage_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_TakeDamage_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_TakeDamage_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_TakeDamage_C(); \
	friend struct Z_Construct_UClass_UBPI_TakeDamage_C_Statics; \
public: \
	DECLARE_CLASS(UBPI_TakeDamage_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/Blueprints/Interfaces/BPI_TakeDamage"), NO_API) \
	DECLARE_SERIALIZER(UBPI_TakeDamage_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_TakeDamage_C() {} \
public: \
	typedef UBPI_TakeDamage_C UClassType; \
	typedef IBPI_TakeDamage_C ThisClass; \
	static void Execute_bpf__TakeDamage__pf(UObject* O, int32 bpp__DamageAmount__pf); \
	static void Execute_bpf__TakeDamageActor__pf(UObject* O, int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IBPI_TakeDamage_C() {} \
public: \
	typedef UBPI_TakeDamage_C UClassType; \
	typedef IBPI_TakeDamage_C ThisClass; \
	static void Execute_bpf__TakeDamage__pf(UObject* O, int32 bpp__DamageAmount__pf); \
	static void Execute_bpf__TakeDamageActor__pf(UObject* O, int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_5_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UBPI_TakeDamage_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_TakeDamage__pf691914051_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
