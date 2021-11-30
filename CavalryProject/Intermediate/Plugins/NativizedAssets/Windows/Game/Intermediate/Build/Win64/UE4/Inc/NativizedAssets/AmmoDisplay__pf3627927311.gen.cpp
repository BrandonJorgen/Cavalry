// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/AmmoDisplay__pf3627927311.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoDisplay__pf3627927311() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UAmmoMarker_C__pf3627927311_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__GetPlayerRef__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__GetPlayerRef__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__FacePlayer__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__FacePlayer__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__ShouldxRotxEvent__pfTT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ShouldxRotxEvent__pfTT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__Update_Ammo__pf)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__RemainingShots__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Update_Ammo__pf(Z_Param_bpp__RemainingShots__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__IsBeingHeld__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__IsHeldx__pfzy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__IsBeingHeld__pf(Z_Param_bpp__IsHeldx__pfzy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__ExecuteUbergraph_AmmoDisplay__pf_5)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_AmmoDisplay__pf_5(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__ExecuteUbergraph_AmmoDisplay__pf_4)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_AmmoDisplay__pf_4(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAmmoDisplay_C__pf3627927311::execbpf__ExecuteUbergraph_AmmoDisplay__pf_3)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_AmmoDisplay__pf_3(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AAmmoDisplay_C__pf3627927311::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void AAmmoDisplay_C__pf3627927311::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		AmmoDisplay_C__pf3627927311_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf),&Parms);
	}
	void AAmmoDisplay_C__pf3627927311::StaticRegisterNativesAAmmoDisplay_C__pf3627927311()
	{
		UClass* Class = AAmmoDisplay_C__pf3627927311::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_AmmoDisplay_3", &AAmmoDisplay_C__pf3627927311::execbpf__ExecuteUbergraph_AmmoDisplay__pf_3 },
			{ "ExecuteUbergraph_AmmoDisplay_4", &AAmmoDisplay_C__pf3627927311::execbpf__ExecuteUbergraph_AmmoDisplay__pf_4 },
			{ "ExecuteUbergraph_AmmoDisplay_5", &AAmmoDisplay_C__pf3627927311::execbpf__ExecuteUbergraph_AmmoDisplay__pf_5 },
			{ "FacePlayer", &AAmmoDisplay_C__pf3627927311::execbpf__FacePlayer__pf },
			{ "GetPlayerRef", &AAmmoDisplay_C__pf3627927311::execbpf__GetPlayerRef__pf },
			{ "IsBeingHeld", &AAmmoDisplay_C__pf3627927311::execbpf__IsBeingHeld__pf },
			{ "ReceiveBeginPlay", &AAmmoDisplay_C__pf3627927311::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &AAmmoDisplay_C__pf3627927311::execbpf__ReceiveTick__pf },
			{ "Should Rot Event", &AAmmoDisplay_C__pf3627927311::execbpf__ShouldxRotxEvent__pfTT },
			{ "Update_Ammo", &AAmmoDisplay_C__pf3627927311::execbpf__Update_Ammo__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics
	{
		struct AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_3_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_3_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_AmmoDisplay_3" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "ExecuteUbergraph_AmmoDisplay_3", nullptr, nullptr, sizeof(AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_3_Parms), Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_AmmoDisplay_3" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics
	{
		struct AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_4_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_4_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_AmmoDisplay_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "ExecuteUbergraph_AmmoDisplay_4", nullptr, nullptr, sizeof(AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_4_Parms), Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_AmmoDisplay_4" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics
	{
		struct AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_5_Parms
		{
			int32 bpp__EntryPoint__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__EntryPoint__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_5_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_AmmoDisplay_5" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "ExecuteUbergraph_AmmoDisplay_5", nullptr, nullptr, sizeof(AmmoDisplay_C__pf3627927311_eventbpf__ExecuteUbergraph_AmmoDisplay__pf_5_Parms), Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_AmmoDisplay_5" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "FacePlayer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "FacePlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "FacePlayer" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "GetPlayerRef" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "GetPlayerRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "GetPlayerRef" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics
	{
		struct AmmoDisplay_C__pf3627927311_eventbpf__IsBeingHeld__pf_Parms
		{
			bool bpp__IsHeldx__pfzy;
		};
		static void NewProp_bpp__IsHeldx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__IsHeldx__pfzy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::NewProp_bpp__IsHeldx__pfzy_SetBit(void* Obj)
	{
		((AmmoDisplay_C__pf3627927311_eventbpf__IsBeingHeld__pf_Parms*)Obj)->bpp__IsHeldx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::NewProp_bpp__IsHeldx__pfzy = { "bpp__IsHeldx__pfzy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(AmmoDisplay_C__pf3627927311_eventbpf__IsBeingHeld__pf_Parms), &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::NewProp_bpp__IsHeldx__pfzy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::NewProp_bpp__IsHeldx__pfzy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "IsBeingHeld" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "IsBeingHeld", nullptr, nullptr, sizeof(AmmoDisplay_C__pf3627927311_eventbpf__IsBeingHeld__pf_Parms), Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "IsBeingHeld" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AmmoDisplay_C__pf3627927311_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(AmmoDisplay_C__pf3627927311_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "Should Rot Event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "Should Rot Event", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Should Rot Event" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics
	{
		struct AmmoDisplay_C__pf3627927311_eventbpf__Update_Ammo__pf_Parms
		{
			int32 bpp__RemainingShots__pf;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpp__RemainingShots__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::NewProp_bpp__RemainingShots__pf = { "bpp__RemainingShots__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(AmmoDisplay_C__pf3627927311_eventbpf__Update_Ammo__pf_Parms, bpp__RemainingShots__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::NewProp_bpp__RemainingShots__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "Update_Ammo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, nullptr, "Update_Ammo", nullptr, nullptr, sizeof(AmmoDisplay_C__pf3627927311_eventbpf__Update_Ammo__pf_Parms), Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf()
	{
		UObject* Outer = Z_Construct_UClass_AAmmoDisplay_C__pf3627927311();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Update_Ammo" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_NoRegister()
	{
		return AAmmoDisplay_C__pf3627927311::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Widget__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Widget__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__CharREF__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__CharREF__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ShouldRotx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__ShouldRotx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__ShouldRotx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_0__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__NewVar_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__GameStartx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__GameStartx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__GameStartx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RemainingShots__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__RemainingShots__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_1__pf_MetaData[];
#endif
		static void NewProp_bpv__NewVar_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__NewVar_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__IsHeldx__pfzy_MetaData[];
#endif
		static void NewProp_bpv__IsHeldx__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__IsHeldx__pfzy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Roll__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Pitch__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__CallFunc_BreakRotator_Yaw__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_CustomEvent_IsHeld___pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_3, "ExecuteUbergraph_AmmoDisplay_3" }, // 243976165
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_4, "ExecuteUbergraph_AmmoDisplay_4" }, // 2373592937
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ExecuteUbergraph_AmmoDisplay__pf_5, "ExecuteUbergraph_AmmoDisplay_5" }, // 3455164826
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__FacePlayer__pf, "FacePlayer" }, // 818463261
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__GetPlayerRef__pf, "GetPlayerRef" }, // 3208558447
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__IsBeingHeld__pf, "IsBeingHeld" }, // 3472372434
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3912322447
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ReceiveTick__pf, "ReceiveTick" }, // 288101609
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__ShouldxRotxEvent__pfTT, "Should Rot Event" }, // 297098103
		{ &Z_Construct_UFunction_AAmmoDisplay_C__pf3627927311_bpf__Update_Ammo__pf, "Update_Ammo" }, // 270438953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AmmoDisplay__pf3627927311.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "AmmoDisplay_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/Ammo_Display/AmmoDisplay.AmmoDisplay_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__Widget__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "Widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__Widget__pf = { "Widget", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, bpv__Widget__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__Widget__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__Widget__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__CharREF__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Char REF" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "CharREF" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__CharREF__pf = { "CharREF", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, bpv__CharREF__pf), Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__CharREF__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__CharREF__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Should Rot?" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ShouldRot?" },
	};
#endif
	void Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy_SetBit(void* Obj)
	{
		((AAmmoDisplay_C__pf3627927311*)Obj)->bpv__ShouldRotx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy = { "ShouldRot?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoDisplay_C__pf3627927311), &Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_0__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 0" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_0" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_0__pf = { "NewVar_0", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, bpv__NewVar_0__pf), Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Game Start?" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "GameStart?" },
	};
#endif
	void Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy_SetBit(void* Obj)
	{
		((AAmmoDisplay_C__pf3627927311*)Obj)->bpv__GameStartx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy = { "GameStart?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoDisplay_C__pf3627927311), &Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__RemainingShots__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Remaining Shots" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RemainingShots" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__RemainingShots__pf = { "RemainingShots", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, bpv__RemainingShots__pf), METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__RemainingShots__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__RemainingShots__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 1" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_1" },
	};
#endif
	void Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf_SetBit(void* Obj)
	{
		((AAmmoDisplay_C__pf3627927311*)Obj)->bpv__NewVar_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf = { "NewVar_1", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoDisplay_C__pf3627927311), &Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Held?" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "IsHeld?" },
	};
#endif
	void Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy_SetBit(void* Obj)
	{
		((AAmmoDisplay_C__pf3627927311*)Obj)->bpv__IsHeldx__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy = { "IsHeld?", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoDisplay_C__pf3627927311), &Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Roll" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf = { "CallFunc_BreakRotator_Roll", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__CallFunc_BreakRotator_Roll__pf), METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Pitch" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf = { "CallFunc_BreakRotator_Pitch", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__CallFunc_BreakRotator_Pitch__pf), METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "CallFunc_BreakRotator_Yaw" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf = { "CallFunc_BreakRotator_Yaw", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__CallFunc_BreakRotator_Yaw__pf), METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "CallFunc_K2_SetRelativeLocation_SweepHitResult" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf = { "CallFunc_K2_SetRelativeLocation_SweepHitResult", nullptr, (EPropertyFlags)0x0010008000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_RemainingShots" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf = { "K2Node_CustomEvent_RemainingShots", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__K2Node_CustomEvent_RemainingShots__pf), METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsAmmo_Marker" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf = { "K2Node_DynamicCast_AsAmmo_Marker", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoDisplay_C__pf3627927311, b0l__K2Node_DynamicCast_AsAmmo_Marker__pf), Z_Construct_UClass_UAmmoMarker_C__pf3627927311_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AAmmoDisplay_C__pf3627927311*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoDisplay_C__pf3627927311), &Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmmoDisplay__pf3627927311.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_IsHeld_" },
	};
#endif
	void Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_SetBit(void* Obj)
	{
		((AAmmoDisplay_C__pf3627927311*)Obj)->b0l__K2Node_CustomEvent_IsHeld___pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf = { "K2Node_CustomEvent_IsHeld_", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoDisplay_C__pf3627927311), &Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__Widget__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__CharREF__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__ShouldRotx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__GameStartx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__RemainingShots__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__NewVar_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_bpv__IsHeldx__pfzy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Roll__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Pitch__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_BreakRotator_Yaw__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__CallFunc_K2_SetRelativeLocation_SweepHitResult__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_RemainingShots__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_AsAmmo_Marker__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::NewProp_b0l__K2Node_CustomEvent_IsHeld___pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoDisplay_C__pf3627927311>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::ClassParams = {
		&AAmmoDisplay_C__pf3627927311::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmoDisplay_C__pf3627927311()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/Ammo_Display/AmmoDisplay"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("AmmoDisplay_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmmoDisplay_C__pf3627927311_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AAmmoDisplay_C__pf3627927311, TEXT("AmmoDisplay_C"), 2447939454);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AAmmoDisplay_C__pf3627927311>()
	{
		return AAmmoDisplay_C__pf3627927311::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmmoDisplay_C__pf3627927311(Z_Construct_UClass_AAmmoDisplay_C__pf3627927311, &AAmmoDisplay_C__pf3627927311::StaticClass, TEXT("/Game/HUD/Widgets/Ammo_Display/AmmoDisplay"), TEXT("AmmoDisplay_C"), true, TEXT("/Game/HUD/Widgets/Ammo_Display/AmmoDisplay"), TEXT("/Game/HUD/Widgets/Ammo_Display/AmmoDisplay.AmmoDisplay_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoDisplay_C__pf3627927311);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
