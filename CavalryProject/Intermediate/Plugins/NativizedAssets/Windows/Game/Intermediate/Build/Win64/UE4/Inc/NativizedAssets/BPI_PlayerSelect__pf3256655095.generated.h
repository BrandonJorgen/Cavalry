// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef NATIVIZEDASSETS_BPI_PlayerSelect__pf3256655095_generated_h
#error "BPI_PlayerSelect__pf3256655095.generated.h already included, missing '#pragma once' in BPI_PlayerSelect__pf3256655095.h"
#endif
#define NATIVIZEDASSETS_BPI_PlayerSelect__pf3256655095_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_RPC_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_EVENT_PARMS \
	struct BPI_PlayerSelect_C_eventbpf__SelectxPlayer__pfT_Parms \
	{ \
		UClass* bpp__PlayerInput__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_CALLBACK_WRAPPERS
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_PlayerSelect_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_PlayerSelect_C) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_PlayerSelect_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_PlayerSelect_C); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_PlayerSelect_C(UBPI_PlayerSelect_C&&); \
	NO_API UBPI_PlayerSelect_C(const UBPI_PlayerSelect_C&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBPI_PlayerSelect_C(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBPI_PlayerSelect_C(UBPI_PlayerSelect_C&&); \
	NO_API UBPI_PlayerSelect_C(const UBPI_PlayerSelect_C&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBPI_PlayerSelect_C); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_PlayerSelect_C); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_PlayerSelect_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_PlayerSelect_C(); \
	friend struct Z_Construct_UClass_UBPI_PlayerSelect_C_Statics; \
public: \
	DECLARE_CLASS(UBPI_PlayerSelect_C, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Game/HUD/Main_Menu/BPI_PlayerSelect"), NO_API) \
	DECLARE_SERIALIZER(UBPI_PlayerSelect_C)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_GENERATED_UINTERFACE_BODY() \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_ENHANCED_CONSTRUCTORS \
public: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_PlayerSelect_C() {} \
public: \
	typedef UBPI_PlayerSelect_C UClassType; \
	typedef IBPI_PlayerSelect_C ThisClass; \
	static void Execute_bpf__SelectxPlayer__pfT(UObject* O, UClass* bpp__PlayerInput__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_INCLASS_IINTERFACE \
protected: \
	virtual ~IBPI_PlayerSelect_C() {} \
public: \
	typedef UBPI_PlayerSelect_C UClassType; \
	typedef IBPI_PlayerSelect_C ThisClass; \
	static void Execute_bpf__SelectxPlayer__pfT(UObject* O, UClass* bpp__PlayerInput__pf); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_6_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h_9_INCLASS_IINTERFACE_NO_PURE_DECLS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class UBPI_PlayerSelect_C>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BPI_PlayerSelect__pf3256655095_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
