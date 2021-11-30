// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/ObjectiveMarker__pf2435026734.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectiveMarker__pf2435026734() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UObjectiveMarker_C__pf2435026734();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_DamageDirection_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UObjectiveMarker_C__pf2435026734::execbpf__Damage_Source__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Source__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Damage_Source__pf(Z_Param_bpp__Source__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectiveMarker_C__pf2435026734::execbpf__Player_Was_Hit__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__CurrentlyHit__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Player_Was_Hit__pf(Z_Param_bpp__CurrentlyHit__pf);
		P_NATIVE_END;
	}
	static FName NAME_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf = FName(TEXT("Damage_Source"));
	void UObjectiveMarker_C__pf2435026734::eventbpf__Damage_Source__pf(FVector bpp__Source__pf)
	{
		ObjectiveMarker_C__pf2435026734_eventbpf__Damage_Source__pf_Parms Parms;
		Parms.bpp__Source__pf=bpp__Source__pf;
		ProcessEvent(FindFunctionChecked(NAME_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf),&Parms);
	}
	static FName NAME_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf = FName(TEXT("Player_Was_Hit"));
	void UObjectiveMarker_C__pf2435026734::eventbpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf)
	{
		ObjectiveMarker_C__pf2435026734_eventbpf__Player_Was_Hit__pf_Parms Parms;
		Parms.bpp__CurrentlyHit__pf=bpp__CurrentlyHit__pf ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf),&Parms);
	}
	void UObjectiveMarker_C__pf2435026734::StaticRegisterNativesUObjectiveMarker_C__pf2435026734()
	{
		UClass* Class = UObjectiveMarker_C__pf2435026734::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Damage_Source", &UObjectiveMarker_C__pf2435026734::execbpf__Damage_Source__pf },
			{ "Player_Was_Hit", &UObjectiveMarker_C__pf2435026734::execbpf__Player_Was_Hit__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Source__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::NewProp_bpp__Source__pf = { "bpp__Source__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ObjectiveMarker_C__pf2435026734_eventbpf__Damage_Source__pf_Parms, bpp__Source__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::NewProp_bpp__Source__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "OverrideNativeName", "Damage_Source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveMarker_C__pf2435026734, nullptr, "Damage_Source", nullptr, nullptr, sizeof(ObjectiveMarker_C__pf2435026734_eventbpf__Damage_Source__pf_Parms), Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf()
	{
		UObject* Outer = Z_Construct_UClass_UObjectiveMarker_C__pf2435026734();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Damage_Source" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics
	{
		static void NewProp_bpp__CurrentlyHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__CurrentlyHit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf_SetBit(void* Obj)
	{
		((ObjectiveMarker_C__pf2435026734_eventbpf__Player_Was_Hit__pf_Parms*)Obj)->bpp__CurrentlyHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf = { "bpp__CurrentlyHit__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ObjectiveMarker_C__pf2435026734_eventbpf__Player_Was_Hit__pf_Parms), &Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "OverrideNativeName", "Player_Was_Hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectiveMarker_C__pf2435026734, nullptr, "Player_Was_Hit", nullptr, nullptr, sizeof(ObjectiveMarker_C__pf2435026734_eventbpf__Player_Was_Hit__pf_Parms), Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf()
	{
		UObject* Outer = Z_Construct_UClass_UObjectiveMarker_C__pf2435026734();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Player_Was_Hit" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_NoRegister()
	{
		return UObjectiveMarker_C__pf2435026734::StaticClass();
	}
	struct Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Objective__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Objective__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__RemainingShots__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__RemainingShots__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Source__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_Source__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_CurrentlyHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_CurrentlyHit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Damage_Source__pf, "Damage_Source" }, // 2406181312
		{ &Z_Construct_UFunction_UObjectiveMarker_C__pf2435026734_bpf__Player_Was_Hit__pf, "Player_Was_Hit" }, // 211752903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ObjectiveMarker__pf2435026734.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "ObjectiveMarker_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/Objective_Display/ObjectiveMarker.ObjectiveMarker_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__Objective__pf_MetaData[] = {
		{ "Category", "ObjectiveMarker" },
		{ "DisplayName", "Objective" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "OverrideNativeName", "Objective" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__Objective__pf = { "Objective", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveMarker_C__pf2435026734, bpv__Objective__pf), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__Objective__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__Objective__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__RemainingShots__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Remaining Shots" },
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "RemainingShots" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__RemainingShots__pf = { "RemainingShots", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveMarker_C__pf2435026734, bpv__RemainingShots__pf), METADATA_PARAMS(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__RemainingShots__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__RemainingShots__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_Source__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "OverrideNativeName", "K2Node_Event_Source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_Source__pf = { "K2Node_Event_Source", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectiveMarker_C__pf2435026734, b0l__K2Node_Event_Source__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_Source__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_Source__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectiveMarker__pf2435026734.h" },
		{ "OverrideNativeName", "K2Node_Event_CurrentlyHit" },
	};
#endif
	void Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_SetBit(void* Obj)
	{
		((UObjectiveMarker_C__pf2435026734*)Obj)->b0l__K2Node_Event_CurrentlyHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf = { "K2Node_Event_CurrentlyHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjectiveMarker_C__pf2435026734), &Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__Objective__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_bpv__RemainingShots__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_Source__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_DamageDirection_C_NoRegister, (int32)VTABLE_OFFSET(UObjectiveMarker_C__pf2435026734, IBPI_DamageDirection_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectiveMarker_C__pf2435026734>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::ClassParams = {
		&UObjectiveMarker_C__pf2435026734::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectiveMarker_C__pf2435026734()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/Objective_Display/ObjectiveMarker"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("ObjectiveMarker_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectiveMarker_C__pf2435026734_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(UObjectiveMarker_C__pf2435026734, TEXT("ObjectiveMarker_C"), 4130428222);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<UObjectiveMarker_C__pf2435026734>()
	{
		return UObjectiveMarker_C__pf2435026734::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectiveMarker_C__pf2435026734(Z_Construct_UClass_UObjectiveMarker_C__pf2435026734, &UObjectiveMarker_C__pf2435026734::StaticClass, TEXT("/Game/HUD/Widgets/Objective_Display/ObjectiveMarker"), TEXT("ObjectiveMarker_C"), true, TEXT("/Game/HUD/Widgets/Objective_Display/ObjectiveMarker"), TEXT("/Game/HUD/Widgets/Objective_Display/ObjectiveMarker.ObjectiveMarker_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectiveMarker_C__pf2435026734);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
