// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef NATIVIZEDASSETS_BP_MotionController__pf563933975_generated_h
#error "BP_MotionController__pf563933975.generated.h already included, missing '#pragma once' in BP_MotionController__pf563933975.h"
#endif
#define NATIVIZEDASSETS_BP_MotionController__pf563933975_generated_h

#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_SPARSE_DATA
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__GetTeleportDestination__pf); \
	DECLARE_FUNCTION(execbpf__UpdateRoomScaleOutline__pf); \
	DECLARE_FUNCTION(execbpf__SetupRoomScaleOutline__pf); \
	DECLARE_FUNCTION(execbpf__UpdateArcEndpoint__pf); \
	DECLARE_FUNCTION(execbpf__UpdateArcSpline__pf); \
	DECLARE_FUNCTION(execbpf__ClearArc__pf); \
	DECLARE_FUNCTION(execbpf__TraceTeleportDestination__pf); \
	DECLARE_FUNCTION(execbpf__DisableTeleporter__pf); \
	DECLARE_FUNCTION(execbpf__ActivateTeleporter__pf); \
	DECLARE_FUNCTION(execbpf__GrabActor__pf); \
	DECLARE_FUNCTION(execbpf__ReleaseActor__pf); \
	DECLARE_FUNCTION(execbpf__GetActorNearHand__pf); \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__RumbleController__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__GetTeleportDestination__pf); \
	DECLARE_FUNCTION(execbpf__UpdateRoomScaleOutline__pf); \
	DECLARE_FUNCTION(execbpf__SetupRoomScaleOutline__pf); \
	DECLARE_FUNCTION(execbpf__UpdateArcEndpoint__pf); \
	DECLARE_FUNCTION(execbpf__UpdateArcSpline__pf); \
	DECLARE_FUNCTION(execbpf__ClearArc__pf); \
	DECLARE_FUNCTION(execbpf__TraceTeleportDestination__pf); \
	DECLARE_FUNCTION(execbpf__DisableTeleporter__pf); \
	DECLARE_FUNCTION(execbpf__ActivateTeleporter__pf); \
	DECLARE_FUNCTION(execbpf__GrabActor__pf); \
	DECLARE_FUNCTION(execbpf__ReleaseActor__pf); \
	DECLARE_FUNCTION(execbpf__GetActorNearHand__pf); \
	DECLARE_FUNCTION(execbpf__UserConstructionScript__pf); \
	DECLARE_FUNCTION(execbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf); \
	DECLARE_FUNCTION(execbpf__RumbleController__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf); \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf);


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_EVENT_PARMS \
	struct BP_MotionController_C__pf563933975_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \
 \
	void eventbpf__UserConstructionScript__pf(); \



#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABP_MotionController_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_MotionController_C__pf563933975, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), NO_API) \
	DECLARE_SERIALIZER(ABP_MotionController_C__pf563933975)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_INCLASS \
private: \
	static void StaticRegisterNativesABP_MotionController_C__pf563933975(); \
	friend struct Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics; \
public: \
	DECLARE_CLASS(ABP_MotionController_C__pf563933975, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), NO_API) \
	DECLARE_SERIALIZER(ABP_MotionController_C__pf563933975)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABP_MotionController_C__pf563933975(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_MotionController_C__pf563933975) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_MotionController_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_MotionController_C__pf563933975); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_MotionController_C__pf563933975(ABP_MotionController_C__pf563933975&&); \
	NO_API ABP_MotionController_C__pf563933975(const ABP_MotionController_C__pf563933975&); \
public:


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABP_MotionController_C__pf563933975(ABP_MotionController_C__pf563933975&&); \
	NO_API ABP_MotionController_C__pf563933975(const ABP_MotionController_C__pf563933975&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABP_MotionController_C__pf563933975); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABP_MotionController_C__pf563933975); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABP_MotionController_C__pf563933975)


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_PRIVATE_PROPERTY_OFFSET
#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_24_PROLOG \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_EVENT_PARMS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_RPC_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_INCLASS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_PRIVATE_PROPERTY_OFFSET \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_SPARSE_DATA \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_CALLBACK_WRAPPERS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_INCLASS_NO_PURE_DECLS \
	CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h_28_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ABP_MotionController_C__pf563933975>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CavalryProject_Intermediate_Plugins_NativizedAssets_Windows_Game_Source_NativizedAssets_Public_BP_MotionController__pf563933975_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
