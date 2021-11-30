// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_MotionController__pf563933975.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_MotionController__pf563933975() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UABP_Hand_C__pf423755669_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Firearm_Base_C__pf1418999182_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__GetTeleportDestination__pf)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__Location__pf);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_bpp__Rotation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetTeleportDestination__pf(Z_Param_Out_bpp__Location__pf,Z_Param_Out_bpp__Rotation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__UpdateRoomScaleOutline__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateRoomScaleOutline__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__SetupRoomScaleOutline__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SetupRoomScaleOutline__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__UpdateArcEndpoint__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__NewLocation__pf);
		P_GET_UBOOL(Z_Param_bpp__ValidLocationFound__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateArcEndpoint__pf(Z_Param_bpp__NewLocation__pf,Z_Param_bpp__ValidLocationFound__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__UpdateArcSpline__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__FoundValidLocation__pf);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_bpp__SplinePoints__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateArcSpline__pf(Z_Param_bpp__FoundValidLocation__pf,Z_Param_Out_bpp__SplinePoints__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__ClearArc__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ClearArc__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__TraceTeleportDestination__pf)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bpp__Success__pf);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_bpp__TracePoints__pf);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__NavMeshLocation__pf);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_bpp__TraceLocation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__TraceTeleportDestination__pf(Z_Param_Out_bpp__Success__pf,Z_Param_Out_bpp__TracePoints__pf,Z_Param_Out_bpp__NavMeshLocation__pf,Z_Param_Out_bpp__TraceLocation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__DisableTeleporter__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__DisableTeleporter__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__ActivateTeleporter__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ActivateTeleporter__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__GrabActor__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GrabActor__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__ReleaseActor__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReleaseActor__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__GetActorNearHand__pf)
	{
		P_GET_OBJECT_REF(AActor,Z_Param_Out_bpp__NearestMesh__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetActorNearHand__pf(Z_Param_Out_bpp__NearestMesh__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__UserConstructionScript__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UserConstructionScript__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OverlappedComponent__pf);
		P_GET_OBJECT(AActor,Z_Param_bpp__OtherActor__pf);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_bpp__OtherComp__pf);
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__OtherBodyIndex__pf);
		P_GET_UBOOL(Z_Param_bpp__bFromSweep__pf);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_bpp__SweepResult__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(Z_Param_bpp__OverlappedComponent__pf,Z_Param_bpp__OtherActor__pf,Z_Param_bpp__OtherComp__pf,Z_Param_bpp__OtherBodyIndex__pf,Z_Param_bpp__bFromSweep__pf,Z_Param_Out_bpp__SweepResult__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__RumbleController__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__Intensity__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RumbleController__pf(Z_Param_bpp__Intensity__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_MotionController_C__pf563933975::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_MotionController_C__pf563933975::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_MotionController_C__pf563933975::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_MotionController_C__pf563933975_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf = FName(TEXT("UserConstructionScript"));
	void ABP_MotionController_C__pf563933975::eventbpf__UserConstructionScript__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf),NULL);
	}
	void ABP_MotionController_C__pf563933975::StaticRegisterNativesABP_MotionController_C__pf563933975()
	{
		UClass* Class = ABP_MotionController_C__pf563933975::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTeleporter", &ABP_MotionController_C__pf563933975::execbpf__ActivateTeleporter__pf },
			{ "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", &ABP_MotionController_C__pf563933975::execbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf },
			{ "ClearArc", &ABP_MotionController_C__pf563933975::execbpf__ClearArc__pf },
			{ "DisableTeleporter", &ABP_MotionController_C__pf563933975::execbpf__DisableTeleporter__pf },
			{ "GetActorNearHand", &ABP_MotionController_C__pf563933975::execbpf__GetActorNearHand__pf },
			{ "GetTeleportDestination", &ABP_MotionController_C__pf563933975::execbpf__GetTeleportDestination__pf },
			{ "GrabActor", &ABP_MotionController_C__pf563933975::execbpf__GrabActor__pf },
			{ "ReceiveBeginPlay", &ABP_MotionController_C__pf563933975::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_MotionController_C__pf563933975::execbpf__ReceiveTick__pf },
			{ "ReleaseActor", &ABP_MotionController_C__pf563933975::execbpf__ReleaseActor__pf },
			{ "RumbleController", &ABP_MotionController_C__pf563933975::execbpf__RumbleController__pf },
			{ "SetupRoomScaleOutline", &ABP_MotionController_C__pf563933975::execbpf__SetupRoomScaleOutline__pf },
			{ "TraceTeleportDestination", &ABP_MotionController_C__pf563933975::execbpf__TraceTeleportDestination__pf },
			{ "UpdateArcEndpoint", &ABP_MotionController_C__pf563933975::execbpf__UpdateArcEndpoint__pf },
			{ "UpdateArcSpline", &ABP_MotionController_C__pf563933975::execbpf__UpdateArcSpline__pf },
			{ "UpdateRoomScaleOutline", &ABP_MotionController_C__pf563933975::execbpf__UpdateRoomScaleOutline__pf },
			{ "UserConstructionScript", &ABP_MotionController_C__pf563933975::execbpf__UserConstructionScript__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ActivateTeleporter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "ActivateTeleporter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ActivateTeleporter" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms
		{
			UPrimitiveComponent* bpp__OverlappedComponent__pf;
			AActor* bpp__OtherActor__pf;
			UPrimitiveComponent* bpp__OtherComp__pf;
			int32 bpp__OtherBodyIndex__pf;
			bool bpp__bFromSweep__pf;
			FHitResult bpp__SweepResult__pf__const;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OverlappedComponent__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__OtherComp__pf;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__OtherBodyIndex__pf;
		static void NewProp_bpp__bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__SweepResult__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SweepResult__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf = { "bpp__OverlappedComponent__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf = { "bpp__OtherActor__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf = { "bpp__OtherComp__pf", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf = { "bpp__OtherBodyIndex__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__OtherBodyIndex__pf), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit(void* Obj)
	{
		((BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms*)Obj)->bpp__bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf = { "bpp__bFromSweep__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const = { "bpp__SweepResult__pf__const", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms, bpp__SweepResult__pf__const), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::NewProp_bpp__SweepResult__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ClearArc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "ClearArc", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ClearArc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "DisableTeleporter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "DisableTeleporter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "DisableTeleporter" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__GetActorNearHand__pf_Parms
		{
			AActor* bpp__NearestMesh__pf;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpp__NearestMesh__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::NewProp_bpp__NearestMesh__pf = { "bpp__NearestMesh__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__GetActorNearHand__pf_Parms, bpp__NearestMesh__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::NewProp_bpp__NearestMesh__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "GetActorNearHand" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "GetActorNearHand", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__GetActorNearHand__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetActorNearHand" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms
		{
			FVector bpp__Location__pf;
			FRotator bpp__Rotation__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Location__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Rotation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__Location__pf = { "bpp__Location__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms, bpp__Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__Rotation__pf = { "bpp__Rotation__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms, bpp__Rotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::NewProp_bpp__Rotation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "GetTeleportDestination" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "GetTeleportDestination", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__GetTeleportDestination__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x14C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetTeleportDestination" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "GrabActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "GrabActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GrabActor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grabbing" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ReleaseActor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "ReleaseActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReleaseActor" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__RumbleController__pf_Parms
		{
			float bpp__Intensity__pf;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__Intensity__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::NewProp_bpp__Intensity__pf = { "bpp__Intensity__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__RumbleController__pf_Parms, bpp__Intensity__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::NewProp_bpp__Intensity__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "RumbleController" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "RumbleController", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__RumbleController__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "RumbleController" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room-scale" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "SetupRoomScaleOutline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "SetupRoomScaleOutline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SetupRoomScaleOutline" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms
		{
			bool bpp__Success__pf;
			TArray<FVector> bpp__TracePoints__pf;
			FVector bpp__NavMeshLocation__pf;
			FVector bpp__TraceLocation__pf;
		};
		static void NewProp_bpp__Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Success__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__TracePoints__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__TracePoints__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NavMeshLocation__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__TraceLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__Success__pf_SetBit(void* Obj)
	{
		((BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms*)Obj)->bpp__Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__Success__pf = { "bpp__Success__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms), &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__Success__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__TracePoints__pf_Inner = { "bpp__TracePoints__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__TracePoints__pf = { "bpp__TracePoints__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms, bpp__TracePoints__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__NavMeshLocation__pf = { "bpp__NavMeshLocation__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms, bpp__NavMeshLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__TraceLocation__pf = { "bpp__TraceLocation__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms, bpp__TraceLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__TracePoints__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__TracePoints__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__NavMeshLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::NewProp_bpp__TraceLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "TraceTeleportDestination" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "TraceTeleportDestination", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__TraceTeleportDestination__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "TraceTeleportDestination" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__UpdateArcEndpoint__pf_Parms
		{
			FVector bpp__NewLocation__pf;
			bool bpp__ValidLocationFound__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NewLocation__pf;
		static void NewProp_bpp__ValidLocationFound__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__ValidLocationFound__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::NewProp_bpp__NewLocation__pf = { "bpp__NewLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__UpdateArcEndpoint__pf_Parms, bpp__NewLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::NewProp_bpp__ValidLocationFound__pf_SetBit(void* Obj)
	{
		((BP_MotionController_C__pf563933975_eventbpf__UpdateArcEndpoint__pf_Parms*)Obj)->bpp__ValidLocationFound__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::NewProp_bpp__ValidLocationFound__pf = { "bpp__ValidLocationFound__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_MotionController_C__pf563933975_eventbpf__UpdateArcEndpoint__pf_Parms), &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::NewProp_bpp__ValidLocationFound__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::NewProp_bpp__NewLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::NewProp_bpp__ValidLocationFound__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "UpdateArcEndpoint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "UpdateArcEndpoint", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__UpdateArcEndpoint__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateArcEndpoint" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics
	{
		struct BP_MotionController_C__pf563933975_eventbpf__UpdateArcSpline__pf_Parms
		{
			bool bpp__FoundValidLocation__pf;
			TArray<FVector> bpp__SplinePoints__pf;
		};
		static void NewProp_bpp__FoundValidLocation__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__FoundValidLocation__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__SplinePoints__pf_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpp__SplinePoints__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__FoundValidLocation__pf_SetBit(void* Obj)
	{
		((BP_MotionController_C__pf563933975_eventbpf__UpdateArcSpline__pf_Parms*)Obj)->bpp__FoundValidLocation__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__FoundValidLocation__pf = { "bpp__FoundValidLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_MotionController_C__pf563933975_eventbpf__UpdateArcSpline__pf_Parms), &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__FoundValidLocation__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__SplinePoints__pf_Inner = { "bpp__SplinePoints__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__SplinePoints__pf = { "bpp__SplinePoints__pf", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_MotionController_C__pf563933975_eventbpf__UpdateArcSpline__pf_Parms, bpp__SplinePoints__pf), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__FoundValidLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__SplinePoints__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::NewProp_bpp__SplinePoints__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Teleportation" },
		{ "Comment", "/*out*/" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "UpdateArcSpline" },
		{ "ToolTip", "out" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "UpdateArcSpline", nullptr, nullptr, sizeof(BP_MotionController_C__pf563933975_eventbpf__UpdateArcSpline__pf_Parms), Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateArcSpline" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "Room-scale" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "UpdateRoomScaleOutline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "UpdateRoomScaleOutline", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateRoomScaleOutline" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "" },
		{ "Comment", "/**t * Construction script, the place to spawn components and do other setup.t * @note Name used in CreateBlueprint functiont */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Construction Script" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "UserConstructionScript" },
		{ "ToolTip", "Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_MotionController_C__pf563933975, nullptr, "UserConstructionScript", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_MotionController_C__pf563933975();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UserConstructionScript" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975_NoRegister()
	{
		return ABP_MotionController_C__pf563933975::StaticClass();
	}
	struct Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__WidgetInteraction__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__WidgetInteraction__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RoomScaleMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__RoomScaleMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Arrow__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Arrow__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GrabSphere__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__GrabSphere__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ArcSpline__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ArcSpline__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ArcDirection__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ArcDirection__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HandMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HandMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Ring__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Ring__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SteamVRChaperone__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SteamVRChaperone__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportCylinder__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__TeleportCylinder__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ArcEndPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ArcEndPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MotionController__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MotionController__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Scene__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Scene__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__Hand__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Hand__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__Hand__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AttachedActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AttachedActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsTeleporterActive__pf_MetaData[];
#endif
		static void NewProp_bpv__IsTeleporterActive__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsTeleporterActive__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SplineMeshes__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SplineMeshes__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__SplineMeshes__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bLastFrameValidDestination__pf_MetaData[];
#endif
		static void NewProp_bpv__bLastFrameValidDestination__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bLastFrameValidDestination__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsRoomScale__pf_MetaData[];
#endif
		static void NewProp_bpv__IsRoomScale__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsRoomScale__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportDestination__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportDestination__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsValidTeleportDestination__pf_MetaData[];
#endif
		static void NewProp_bpv__IsValidTeleportDestination__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsValidTeleportDestination__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__GripState__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GripState__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__GripState__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__bWantsToGrip__pf_MetaData[];
#endif
		static void NewProp_bpv__bWantsToGrip__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__bWantsToGrip__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__TeleportRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__TeleportLaunchVelocity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__TeleportLaunchVelocity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__InitialControllerRotation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__InitialControllerRotation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__K2Node_MakeArray_Array__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__Temp_object_Variable__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_object_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__Temp_object_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Intensity__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_CustomEvent_Intensity__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[];
#endif
		static void NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Time__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Distance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Location__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_Normal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ActivateTeleporter__pf, "ActivateTeleporter" }, // 2658774022
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf, "BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature" }, // 1844563376
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ClearArc__pf, "ClearArc" }, // 457192662
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__DisableTeleporter__pf, "DisableTeleporter" }, // 3116746373
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetActorNearHand__pf, "GetActorNearHand" }, // 447352365
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GetTeleportDestination__pf, "GetTeleportDestination" }, // 2264489779
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__GrabActor__pf, "GrabActor" }, // 1153958465
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 2005380931
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReceiveTick__pf, "ReceiveTick" }, // 404002851
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__ReleaseActor__pf, "ReleaseActor" }, // 3572924628
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__RumbleController__pf, "RumbleController" }, // 1344032354
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__SetupRoomScaleOutline__pf, "SetupRoomScaleOutline" }, // 3565103595
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__TraceTeleportDestination__pf, "TraceTeleportDestination" }, // 1788784187
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcEndpoint__pf, "UpdateArcEndpoint" }, // 4289617359
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateArcSpline__pf, "UpdateArcSpline" }, // 102861542
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UpdateRoomScaleOutline__pf, "UpdateRoomScaleOutline" }, // 624122533
		{ &Z_Construct_UFunction_ABP_MotionController_C__pf563933975_bpf__UserConstructionScript__pf, "UserConstructionScript" }, // 43017108
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_MotionController__pf563933975.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_MotionController_C" },
		{ "ReplaceConverted", "/Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__WidgetInteraction__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "WidgetInteraction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__WidgetInteraction__pf = { "WidgetInteraction", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__WidgetInteraction__pf), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__WidgetInteraction__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__WidgetInteraction__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__RoomScaleMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "RoomScaleMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__RoomScaleMesh__pf = { "RoomScaleMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__RoomScaleMesh__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__RoomScaleMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__RoomScaleMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Arrow__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "Arrow" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Arrow__pf = { "Arrow", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__Arrow__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Arrow__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Arrow__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GrabSphere__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "GrabSphere" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GrabSphere__pf = { "GrabSphere", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__GrabSphere__pf), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GrabSphere__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GrabSphere__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcSpline__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ArcSpline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcSpline__pf = { "ArcSpline", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__ArcSpline__pf), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcSpline__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcSpline__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcDirection__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ArcDirection" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcDirection__pf = { "ArcDirection", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__ArcDirection__pf), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcDirection__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcDirection__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__HandMesh__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "HandMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__HandMesh__pf = { "HandMesh", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__HandMesh__pf), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__HandMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__HandMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Ring__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "Ring" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Ring__pf = { "Ring", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__Ring__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Ring__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Ring__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SteamVRChaperone__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "SteamVRChaperone" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SteamVRChaperone__pf = { "SteamVRChaperone", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__SteamVRChaperone__pf), Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SteamVRChaperone__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SteamVRChaperone__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportCylinder__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "TeleportCylinder" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportCylinder__pf = { "TeleportCylinder", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__TeleportCylinder__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportCylinder__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportCylinder__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcEndPoint__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "ArcEndPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcEndPoint__pf = { "ArcEndPoint", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__ArcEndPoint__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcEndPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcEndPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__MotionController__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "MotionController" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__MotionController__pf = { "MotionController", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__MotionController__pf), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__MotionController__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__MotionController__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Scene__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "Scene" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Scene__pf = { "Scene", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__Scene__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Scene__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Scene__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hand" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "Hand" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf = { "Hand", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__Hand__pf), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__AttachedActor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Attached Actor" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "AttachedActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__AttachedActor__pf = { "AttachedActor", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__AttachedActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__AttachedActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__AttachedActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Teleporter Active" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "IsTeleporterActive" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->bpv__IsTeleporterActive__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf = { "IsTeleporterActive", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf_Inner = { "bpv__SplineMeshes__pf", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Spline Meshes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "SplineMeshes" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf = { "SplineMeshes", nullptr, (EPropertyFlags)0x001000800001000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__SplineMeshes__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Last Frame Valid Destination" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "bLastFrameValidDestination" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->bpv__bLastFrameValidDestination__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf = { "bLastFrameValidDestination", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Room Scale" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "IsRoomScale" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->bpv__IsRoomScale__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf = { "IsRoomScale", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportDestination__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Destination" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "TeleportDestination" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportDestination__pf = { "TeleportDestination", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__TeleportDestination__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportDestination__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportDestination__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Valid Teleport Destination" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "IsValidTeleportDestination" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->bpv__IsValidTeleportDestination__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf = { "IsValidTeleportDestination", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Grip State" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "GripState" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf = { "GripState", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__GripState__pf), Z_Construct_UEnum_NativizedAssets_E__Hand_Positions_Enum__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Wants to Grip" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "bWantsToGrip" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->bpv__bWantsToGrip__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf = { "bWantsToGrip", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportRotation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Rotation" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "TeleportRotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportRotation__pf = { "TeleportRotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__TeleportRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportLaunchVelocity__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Teleport Launch Velocity" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "TeleportLaunchVelocity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportLaunchVelocity__pf = { "TeleportLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__TeleportLaunchVelocity__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportLaunchVelocity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportLaunchVelocity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__InitialControllerRotation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Initial Controller Rotation" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "InitialControllerRotation" },
		{ "tooltip", "Rotation of Motion Controller at the start of the Teleport press." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__InitialControllerRotation__pf = { "InitialControllerRotation", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, bpv__InitialControllerRotation__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__InitialControllerRotation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__InitialControllerRotation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_TraceTeleportDestination_Success" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__CallFunc_TraceTeleportDestination_Success__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf = { "CallFunc_TraceTeleportDestination_Success", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_Inner = { "b0l__CallFunc_TraceTeleportDestination_TracePoints__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_TraceTeleportDestination_TracePoints" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf = { "CallFunc_TraceTeleportDestination_TracePoints", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_TraceTeleportDestination_TracePoints__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_TraceTeleportDestination_NavMeshLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf = { "CallFunc_TraceTeleportDestination_NavMeshLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_TraceTeleportDestination_TraceLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf = { "CallFunc_TraceTeleportDestination_TraceLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OverlappedComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = { "K2Node_ComponentBoundEvent_OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf = { "K2Node_ComponentBoundEvent_OtherActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_ComponentBoundEvent_OtherActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherComp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf = { "K2Node_ComponentBoundEvent_OtherComp", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_ComponentBoundEvent_OtherComp__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_OtherBodyIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = { "K2Node_ComponentBoundEvent_OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_bFromSweep" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = { "K2Node_ComponentBoundEvent_bFromSweep", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_ComponentBoundEvent_SweepResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf = { "K2Node_ComponentBoundEvent_SweepResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_ComponentBoundEvent_SweepResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsStatic_Mesh_Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf = { "K2Node_DynamicCast_AsStatic_Mesh_Component", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner = { "b0l__K2Node_MakeArray_Array__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_MakeArray_Array" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf = { "K2Node_MakeArray_Array", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_MakeArray_Array__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsABP_Hand" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf = { "K2Node_DynamicCast_AsABP_Hand", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_DynamicCast_AsABP_Hand__pf), Z_Construct_UClass_UABP_Hand_C__pf423755669_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { "K2Node_SwitchEnum_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf = { "K2Node_SwitchEnum_CmpSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_Inner = { "b0l__Temp_object_Variable__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "Temp_object_Variable" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf = { "Temp_object_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__Temp_object_Variable__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_LineTraceSingleForObjects_OutHit" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf = { "CallFunc_LineTraceSingleForObjects_OutHit", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_Intensity__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Intensity" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_Intensity__pf = { "K2Node_CustomEvent_Intensity", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_CustomEvent_Intensity__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_Intensity__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_Intensity__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bBlockingHit" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bBlockingHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf = { "CallFunc_BreakHitResult_bBlockingHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_bInitialOverlap" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf = { "CallFunc_BreakHitResult_bInitialOverlap", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Time" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf = { "CallFunc_BreakHitResult_Time", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_Time__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Distance" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf = { "CallFunc_BreakHitResult_Distance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_Distance__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf = { "CallFunc_BreakHitResult_Location", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_Location__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactPoint" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf = { "CallFunc_BreakHitResult_ImpactPoint", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactPoint__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_Normal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf = { "CallFunc_BreakHitResult_Normal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_Normal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_ImpactNormal" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf = { "CallFunc_BreakHitResult_ImpactNormal", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_ImpactNormal__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_PhysMat" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf = { "CallFunc_BreakHitResult_PhysMat", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_PhysMat__pf), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitActor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf = { "CallFunc_BreakHitResult_HitActor", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_HitActor__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitComponent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf = { "CallFunc_BreakHitResult_HitComponent", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_HitComponent__pf), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitBoneName" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf = { "CallFunc_BreakHitResult_HitBoneName", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_HitBoneName__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_HitItem" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf = { "CallFunc_BreakHitResult_HitItem", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_HitItem__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_FaceIndex" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf = { "CallFunc_BreakHitResult_FaceIndex", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_FaceIndex__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceStart" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf = { "CallFunc_BreakHitResult_TraceStart", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceStart__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_BreakHitResult_TraceEnd" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf = { "CallFunc_BreakHitResult_TraceEnd", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_BreakHitResult_TraceEnd__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_GetActorNearHand_NearestMesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf = { "CallFunc_GetActorNearHand_NearestMesh", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_GetActorNearHand_NearestMesh__pf), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetWorldLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf = { "CallFunc_K2_SetWorldLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBP_Firearm_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf = { "K2Node_DynamicCast_AsBP_Firearm_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_MotionController_C__pf563933975, b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf), Z_Construct_UClass_ABP_Firearm_Base_C__pf1418999182_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_MotionController__pf563933975.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((ABP_MotionController_C__pf563933975*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_MotionController_C__pf563933975), &Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__WidgetInteraction__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__RoomScaleMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Arrow__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GrabSphere__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcSpline__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcDirection__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__HandMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Ring__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SteamVRChaperone__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportCylinder__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__ArcEndPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__MotionController__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Scene__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__Hand__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__AttachedActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsTeleporterActive__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__SplineMeshes__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bLastFrameValidDestination__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsRoomScale__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportDestination__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__IsValidTeleportDestination__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__GripState__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__bWantsToGrip__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__TeleportLaunchVelocity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_bpv__InitialControllerRotation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_Success__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TracePoints__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_NavMeshLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_TraceTeleportDestination_TraceLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherComp__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_bFromSweep__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_ComponentBoundEvent_SweepResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsStatic_Mesh_Component__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_MakeArray_Array__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsABP_Hand__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__Temp_object_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_LineTraceSingleForObjects_OutHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_CustomEvent_Intensity__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bBlockingHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_bInitialOverlap__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Time__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Distance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Location__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactPoint__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_Normal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_ImpactNormal__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_PhysMat__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitActor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitComponent__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitBoneName__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_HitItem__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_FaceIndex__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_BreakHitResult_TraceEnd__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_GetActorNearHand_NearestMesh__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__CallFunc_K2_SetWorldLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Firearm_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_MotionController_C__pf563933975>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::ClassParams = {
		&ABP_MotionController_C__pf563933975::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_MotionController_C__pf563933975()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_MotionController_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_MotionController_C__pf563933975_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_MotionController_C__pf563933975, TEXT("BP_MotionController_C"), 486284199);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_MotionController_C__pf563933975>()
	{
		return ABP_MotionController_C__pf563933975::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_MotionController_C__pf563933975(Z_Construct_UClass_ABP_MotionController_C__pf563933975, &ABP_MotionController_C__pf563933975::StaticClass, TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), TEXT("BP_MotionController_C"), true, TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController"), TEXT("/Game/VirtualRealityBP/Blueprints/BP_MotionController.BP_MotionController_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_MotionController_C__pf563933975);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
