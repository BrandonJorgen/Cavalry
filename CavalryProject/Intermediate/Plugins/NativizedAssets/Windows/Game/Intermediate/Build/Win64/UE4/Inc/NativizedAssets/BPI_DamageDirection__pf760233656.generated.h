// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef NATIVIZEDASSETS_BPI_DamageDirection__pf760233656_generated_h
#error "BPI_DamageDirection__pf760233656.generated.h already included, missing '#pragma once' in BPI_DamageDirection__pf760233656.h"
#endif
#define NATIVIZEDASSETS_BPI_DamageDirection__pf760233656_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_RPC_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_EVENT_PARMS \
	struct BPI_DamageDirection_C_eventbpf__Damage_Source__pf_Parms \
	{ \
		FVector bpp__Source__pf; \
	}; \
	struct BPI_DamageDirection_C_eventbpf__Player_Was_Hit__pf_Parms \
	{ \
		bool bpp__CurrentlyHit__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_CALLBACK_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_DamageDirection_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_DamageDirection_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_DamageDirection_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_DamageDirection_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_DamageDirection_C(UBPI_DamageDirection_C&&); \
	NO_API UBPI_DamageDirection_C(const UBPI_DamageDirection_C&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_DamageDirection_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_DamageDirection_C(UBPI_DamageDirection_C&&); \
	NO_API UBPI_DamageDirection_C(const UBPI_DamageDirection_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_DamageDirection_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_DamageDirection_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_DamageDirection_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_DamageDirection_C(); \
	friend struct Z_Construct_UClass_UBPI_DamageDirection_C_Statics; \
public: \
	DECLARE_CLASS(UBPI_DamageDirection_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Damage_Display/BPI_DamageDirection"), NO_API) \
	DECLARE_SERIALIZER(UBPI_DamageDirection_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_DamageDirection_C() {} \
public: \
	typedef UBPI_DamageDirection_C UClassType; \
	typedef IBPI_DamageDirection_C ThisClass; \
	static void Execute_bpf__Damage_Source__pf(UObject* O, FVector bpp__Source__pf); \
	static void Execute_bpf__Player_Was_Hit__pf(UObject* O, bool bpp__CurrentlyHit__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IBPI_DamageDirection_C() {} \
public: \
	typedef UBPI_DamageDirection_C UClassType; \
	typedef IBPI_DamageDirection_C ThisClass; \
	static void Execute_bpf__Damage_Source__pf(UObject* O, FVector bpp__Source__pf); \
	static void Execute_bpf__Player_Was_Hit__pf(UObject* O, bool bpp__CurrentlyHit__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_5_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UBPI_DamageDirection_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_DamageDirection__pf760233656_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
