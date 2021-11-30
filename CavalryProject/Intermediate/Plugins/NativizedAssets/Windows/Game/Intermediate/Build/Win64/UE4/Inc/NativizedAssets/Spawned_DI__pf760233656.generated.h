// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class AActor;
struct FGeometry;
#ifdef NATIVIZEDASSETS_Spawned_DI__pf760233656_generated_h
#error "Spawned_DI__pf760233656.generated.h already included, missing '#pragma once' in Spawned_DI__pf760233656.h"
#endif
#define NATIVIZEDASSETS_Spawned_DI__pf760233656_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_22_DELEGATE \
struct Spawned_DI_C__pf760233656_eventUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate_Parms \
{ \
	FVector bpp__WidgetxDirection__pfT; \
}; \
static inline void FUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate_DelegateWrapper(const FScriptDelegate& UpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate, FVector bpp__WidgetxDirection__pfT) \
{ \
	Spawned_DI_C__pf760233656_eventUpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate_Parms Parms; \
	Parms.bpp__WidgetxDirection__pfT=bpp__WidgetxDirection__pfT; \
	UpdatexWidgetxDirection__pfTT__DamageIndicator_Actor_C__pf__SinglecastDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__UpdatexDirection__pfT); \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__TakeDamage__pf); \
	DECLARE_FUNCTION(execbpf__TakeDamageActor__pf); \
	DECLARE_FUNCTION(execbpf__Player_Was_Hit__pf); \
	DECLARE_FUNCTION(execbpf__Tick__pf); \
	DECLARE_FUNCTION(execbpf__Construct__pf); \
	DECLARE_FUNCTION(execbpf__UpdatexDirection__pfT); \
	DECLARE_FUNCTION(execbpf__Damage_Source__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_EVENT_PARMS \
	struct Spawned_DI_C__pf760233656_eventbpf__Damage_Source__pf_Parms \
	{ \
		FVector bpp__Source__pf; \
	}; \
	struct Spawned_DI_C__pf760233656_eventbpf__Player_Was_Hit__pf_Parms \
	{ \
		bool bpp__CurrentlyHit__pf; \
	}; \
	struct Spawned_DI_C__pf760233656_eventbpf__TakeDamage__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
	}; \
	struct Spawned_DI_C__pf760233656_eventbpf__TakeDamageActor__pf_Parms \
	{ \
		int32 bpp__DamageAmount__pf; \
		AActor* bpp__DamagingActor__pf; \
	}; \
	struct Spawned_DI_C__pf760233656_eventbpf__Tick__pf_Parms \
	{ \
		FGeometry bpp__MyGeometry__pf; \
		float bpp__InDeltaTime__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_CALLBACK_WRAPPERS \
	void eventbpf__Construct__pf(); \
 \
	void eventbpf__Damage_Source__pf(FVector bpp__Source__pf); \
 \
	void eventbpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf); \
 \
	void eventbpf__TakeDamage__pf(int32 bpp__DamageAmount__pf); \
 \
	void eventbpf__TakeDamageActor__pf(int32 bpp__DamageAmount__pf, AActor* bpp__DamagingActor__pf); \
 \
	void eventbpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpawned_DI_C__pf760233656(); \
	friend struct Z_Construct_UClass_USpawned_DI_C__pf760233656_Statics; \
public: \
	DECLARE_CLASS(USpawned_DI_C__pf760233656, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Damage_Display/Spawned_DI"), NO_API) \
	DECLARE_SERIALIZER(USpawned_DI_C__pf760233656) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USpawned_DI_C__pf760233656*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSpawned_DI_C__pf760233656(); \
	friend struct Z_Construct_UClass_USpawned_DI_C__pf760233656_Statics; \
public: \
	DECLARE_CLASS(USpawned_DI_C__pf760233656, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/HUD/Widgets/Damage_Display/Spawned_DI"), NO_API) \
	DECLARE_SERIALIZER(USpawned_DI_C__pf760233656) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USpawned_DI_C__pf760233656*>(this); }


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpawned_DI_C__pf760233656(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpawned_DI_C__pf760233656) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawned_DI_C__pf760233656); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawned_DI_C__pf760233656); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawned_DI_C__pf760233656(USpawned_DI_C__pf760233656&&); \
	NO_API USpawned_DI_C__pf760233656(const USpawned_DI_C__pf760233656&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpawned_DI_C__pf760233656(USpawned_DI_C__pf760233656&&); \
	NO_API USpawned_DI_C__pf760233656(const USpawned_DI_C__pf760233656&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpawned_DI_C__pf760233656); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpawned_DI_C__pf760233656); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpawned_DI_C__pf760233656)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_16_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h_20_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class USpawned_DI_C__pf760233656>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_Spawned_DI__pf760233656_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
