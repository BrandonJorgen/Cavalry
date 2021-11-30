// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_PlayerGear__pf3324220276.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_PlayerGear__pf3324220276() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABPC_Pistol_C__pf1418999182_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Firearm_Base_C__pf1418999182_NoRegister();
	NATIVIZEDASSETS_API UEnum* Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_GrabAmmoTrigger_C__pf3324220276_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_Tool_Base_C__pf3911806087_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GearCommunication_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_PlayerGear_C__pf3324220276::execbpf__CheckForTeleport__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__CheckForTeleport__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_PlayerGear_C__pf3324220276::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf = FName(TEXT("CheckForTeleport"));
	void ABP_PlayerGear_C__pf3324220276::eventbpf__CheckForTeleport__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf),NULL);
	}
	static FName NAME_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_PlayerGear_C__pf3324220276::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf),NULL);
	}
	void ABP_PlayerGear_C__pf3324220276::StaticRegisterNativesABP_PlayerGear_C__pf3324220276()
	{
		UClass* Class = ABP_PlayerGear_C__pf3324220276::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckForTeleport", &ABP_PlayerGear_C__pf3324220276::execbpf__CheckForTeleport__pf },
			{ "ReceiveBeginPlay", &ABP_PlayerGear_C__pf3324220276::execbpf__ReceiveBeginPlay__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "CheckForTeleport" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276, nullptr, "CheckForTeleport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "CheckForTeleport" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_NoRegister()
	{
		return ABP_PlayerGear_C__pf3324220276::StaticClass();
	}
	struct Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx8__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx8__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx7__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx7__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx6__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx6__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx5__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx5__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx4__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx4__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx3__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx3__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx2__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx2__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Magnetx1__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Magnetx1__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SM_FP_Gear_Whitebox__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SM_FP_Gear_Whitebox__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Pistol__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Pistol__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MainWeapon__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MainWeapon__pf;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bpv__HorsemanToSpawnFor__pf_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HorsemanToSpawnFor__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bpv__HorsemanToSpawnFor__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__AmmoTrigger__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__AmmoTrigger__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Tool__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Tool__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__CheckForTeleport__pf, "CheckForTeleport" }, // 3252457799
		{ &Z_Construct_UFunction_ABP_PlayerGear_C__pf3324220276_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3686531955
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_PlayerGear__pf3324220276.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_PlayerGear_C" },
		{ "ReplaceConverted", "/Game/Blueprints/Characters/Gear/BP_PlayerGear.BP_PlayerGear_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx8__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx8__pfT = { "Magnet 8", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx8__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx8__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx8__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx7__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 7" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx7__pfT = { "Magnet 7", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx7__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx7__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx7__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx6__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 6" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx6__pfT = { "Magnet 6", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx6__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx6__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx6__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx5__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 5" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx5__pfT = { "Magnet 5", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx5__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx5__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx5__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx4__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 4" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx4__pfT = { "Magnet 4", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx4__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx4__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx4__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx3__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx3__pfT = { "Magnet 3", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx3__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx3__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx3__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx2__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx2__pfT = { "Magnet 2", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx2__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx2__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx2__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx1__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "Magnet 1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx1__pfT = { "Magnet 1", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Magnetx1__pfT), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx1__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx1__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__SM_FP_Gear_Whitebox__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "SM_FP_Gear_Whitebox" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__SM_FP_Gear_Whitebox__pf = { "SM_FP_Gear_Whitebox", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__SM_FP_Gear_Whitebox__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__SM_FP_Gear_Whitebox__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__SM_FP_Gear_Whitebox__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Pistol__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Pistol" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Pistol" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Pistol__pf = { "Pistol", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Pistol__pf), Z_Construct_UClass_ABPC_Pistol_C__pf1418999182_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Pistol__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Pistol__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__MainWeapon__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Main Weapon" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "MainWeapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__MainWeapon__pf = { "MainWeapon", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__MainWeapon__pf), Z_Construct_UClass_ABP_Firearm_Base_C__pf1418999182_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__MainWeapon__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__MainWeapon__pf_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Horseman to Spawn For" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HorsemanToSpawnFor" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf = { "HorsemanToSpawnFor", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__HorsemanToSpawnFor__pf), Z_Construct_UEnum_NativizedAssets_E__E_Horsemen__pf, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__AmmoTrigger__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Ammo Trigger" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "AmmoTrigger" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__AmmoTrigger__pf = { "AmmoTrigger", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__AmmoTrigger__pf), Z_Construct_UClass_ABP_GrabAmmoTrigger_C__pf3324220276_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__AmmoTrigger__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__AmmoTrigger__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Tool__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Tool" },
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Tool" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Tool__pf = { "Tool", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_PlayerGear_C__pf3324220276, bpv__Tool__pf), Z_Construct_UClass_ABP_Tool_Base_C__pf3911806087_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Tool__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Tool__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_PlayerGear__pf3324220276.h" },
		{ "OverrideNativeName", "K2Node_SwitchEnum_CmpSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit(void* Obj)
	{
		((ABP_PlayerGear_C__pf3324220276*)Obj)->b0l__K2Node_SwitchEnum_CmpSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf = { "K2Node_SwitchEnum_CmpSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_PlayerGear_C__pf3324220276), &Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx8__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx7__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx6__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx5__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx4__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx3__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx2__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Magnetx1__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__SM_FP_Gear_Whitebox__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Pistol__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__MainWeapon__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__HorsemanToSpawnFor__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__AmmoTrigger__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_bpv__Tool__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::NewProp_b0l__K2Node_SwitchEnum_CmpSuccess__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_GearCommunication_C_NoRegister, (int32)VTABLE_OFFSET(ABP_PlayerGear_C__pf3324220276, IBPI_GearCommunication_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_PlayerGear_C__pf3324220276>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::ClassParams = {
		&ABP_PlayerGear_C__pf3324220276::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/Characters/Gear/BP_PlayerGear"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_PlayerGear_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_PlayerGear_C__pf3324220276, TEXT("BP_PlayerGear_C"), 3282215308);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_PlayerGear_C__pf3324220276>()
	{
		return ABP_PlayerGear_C__pf3324220276::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_PlayerGear_C__pf3324220276(Z_Construct_UClass_ABP_PlayerGear_C__pf3324220276, &ABP_PlayerGear_C__pf3324220276::StaticClass, TEXT("/Game/Blueprints/Characters/Gear/BP_PlayerGear"), TEXT("BP_PlayerGear_C"), true, TEXT("/Game/Blueprints/Characters/Gear/BP_PlayerGear"), TEXT("/Game/Blueprints/Characters/Gear/BP_PlayerGear.BP_PlayerGear_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_PlayerGear_C__pf3324220276);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
