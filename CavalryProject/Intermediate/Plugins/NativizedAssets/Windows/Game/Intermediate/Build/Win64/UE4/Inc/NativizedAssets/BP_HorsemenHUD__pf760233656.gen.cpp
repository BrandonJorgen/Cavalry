// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/BP_HorsemenHUD__pf760233656.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_HorsemenHUD__pf760233656() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UObjectivePointer_C__pf2435026734_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_DamageDirection_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_ToggleObjective_C_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_MissionText_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__RespawningxTrace__pfT)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Direction__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__RespawningxTrace__pfT(Z_Param_bpp__Direction__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__ReceiveTick__pf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bpp__DeltaSeconds__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__SpawnxDamagexWidget__pfTT)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Direction__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SpawnxDamagexWidget__pfTT(Z_Param_bpp__Direction__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__Damage_Source__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__Source__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Damage_Source__pf(Z_Param_bpp__Source__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__Player_Was_Hit__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__CurrentlyHit__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Player_Was_Hit__pf(Z_Param_bpp__CurrentlyHit__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__ToggleObjetiveBool__pf)
	{
		P_GET_UBOOL(Z_Param_bpp__Objectivex__pfzy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ToggleObjetiveBool__pf(Z_Param_bpp__Objectivex__pfzy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__UpdateMission__pf)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_bpp__ObjectiveDetails__pf__const);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateMission__pf(Z_Param_Out_bpp__ObjectiveDetails__pf__const);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__UpdateObjectiveLoc__pf)
	{
		P_GET_STRUCT(FVector,Z_Param_bpp__NewLocation__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__UpdateObjectiveLoc__pf(Z_Param_bpp__NewLocation__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABP_HorsemenHUD_C__pf760233656::execbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf = FName(TEXT("Damage_Source"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__Damage_Source__pf(FVector bpp__Source__pf)
	{
		BP_HorsemenHUD_C__pf760233656_eventbpf__Damage_Source__pf_Parms Parms;
		Parms.bpp__Source__pf=bpp__Source__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf),&Parms);
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf = FName(TEXT("Player_Was_Hit"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__Player_Was_Hit__pf(bool bpp__CurrentlyHit__pf)
	{
		BP_HorsemenHUD_C__pf760233656_eventbpf__Player_Was_Hit__pf_Parms Parms;
		Parms.bpp__CurrentlyHit__pf=bpp__CurrentlyHit__pf ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf),&Parms);
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		BP_HorsemenHUD_C__pf760233656_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf),&Parms);
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf = FName(TEXT("ToggleObjetiveBool"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__ToggleObjetiveBool__pf(bool bpp__Objectivex__pfzy)
	{
		BP_HorsemenHUD_C__pf760233656_eventbpf__ToggleObjetiveBool__pf_Parms Parms;
		Parms.bpp__Objectivex__pfzy=bpp__Objectivex__pfzy ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf),&Parms);
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf = FName(TEXT("UpdateMission"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__UpdateMission__pf(FText const& bpp__ObjectiveDetails__pf__const)
	{
		BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateMission__pf_Parms Parms;
		Parms.bpp__ObjectiveDetails__pf__const=bpp__ObjectiveDetails__pf__const;
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf),&Parms);
	}
	static FName NAME_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf = FName(TEXT("UpdateObjectiveLoc"));
	void ABP_HorsemenHUD_C__pf760233656::eventbpf__UpdateObjectiveLoc__pf(FVector bpp__NewLocation__pf)
	{
		BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateObjectiveLoc__pf_Parms Parms;
		Parms.bpp__NewLocation__pf=bpp__NewLocation__pf;
		ProcessEvent(FindFunctionChecked(NAME_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf),&Parms);
	}
	void ABP_HorsemenHUD_C__pf760233656::StaticRegisterNativesABP_HorsemenHUD_C__pf760233656()
	{
		UClass* Class = ABP_HorsemenHUD_C__pf760233656::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Damage_Source", &ABP_HorsemenHUD_C__pf760233656::execbpf__Damage_Source__pf },
			{ "ExecuteUbergraph_BP_HorsemenHUD_1", &ABP_HorsemenHUD_C__pf760233656::execbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1 },
			{ "Player_Was_Hit", &ABP_HorsemenHUD_C__pf760233656::execbpf__Player_Was_Hit__pf },
			{ "ReceiveBeginPlay", &ABP_HorsemenHUD_C__pf760233656::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ABP_HorsemenHUD_C__pf760233656::execbpf__ReceiveTick__pf },
			{ "Respawning Trace", &ABP_HorsemenHUD_C__pf760233656::execbpf__RespawningxTrace__pfT },
			{ "Spawn Damage Widget", &ABP_HorsemenHUD_C__pf760233656::execbpf__SpawnxDamagexWidget__pfTT },
			{ "ToggleObjetiveBool", &ABP_HorsemenHUD_C__pf760233656::execbpf__ToggleObjetiveBool__pf },
			{ "UpdateMission", &ABP_HorsemenHUD_C__pf760233656::execbpf__UpdateMission__pf },
			{ "UpdateObjectiveLoc", &ABP_HorsemenHUD_C__pf760233656::execbpf__UpdateObjectiveLoc__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Source__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::NewProp_bpp__Source__pf = { "bpp__Source__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__Damage_Source__pf_Parms, bpp__Source__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::NewProp_bpp__Source__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "Damage_Source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "Damage_Source", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__Damage_Source__pf_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Damage_Source" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics
	{
		struct BP_HorsemenHUD_C__pf760233656_eventbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_BP_HorsemenHUD_1" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "ExecuteUbergraph_BP_HorsemenHUD_1", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_BP_HorsemenHUD_1" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics
	{
		static void NewProp_bpp__CurrentlyHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__CurrentlyHit__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf_SetBit(void* Obj)
	{
		((BP_HorsemenHUD_C__pf760233656_eventbpf__Player_Was_Hit__pf_Parms*)Obj)->bpp__CurrentlyHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf = { "bpp__CurrentlyHit__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__Player_Was_Hit__pf_Parms), &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::NewProp_bpp__CurrentlyHit__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "Player_Was_Hit" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "Player_Was_Hit", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__Player_Was_Hit__pf_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Player_Was_Hit" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveTick" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics
	{
		struct BP_HorsemenHUD_C__pf760233656_eventbpf__RespawningxTrace__pfT_Parms
		{
			FVector bpp__Direction__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Direction__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::NewProp_bpp__Direction__pf = { "bpp__Direction__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__RespawningxTrace__pfT_Parms, bpp__Direction__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::NewProp_bpp__Direction__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "Respawning Trace" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "Respawning Trace", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__RespawningxTrace__pfT_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Respawning Trace" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics
	{
		struct BP_HorsemenHUD_C__pf760233656_eventbpf__SpawnxDamagexWidget__pfTT_Parms
		{
			FVector bpp__Direction__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Direction__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::NewProp_bpp__Direction__pf = { "bpp__Direction__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__SpawnxDamagexWidget__pfTT_Parms, bpp__Direction__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::NewProp_bpp__Direction__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "Spawn Damage Widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "Spawn Damage Widget", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__SpawnxDamagexWidget__pfTT_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Spawn Damage Widget" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics
	{
		static void NewProp_bpp__Objectivex__pfzy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpp__Objectivex__pfzy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy_SetBit(void* Obj)
	{
		((BP_HorsemenHUD_C__pf760233656_eventbpf__ToggleObjetiveBool__pf_Parms*)Obj)->bpp__Objectivex__pfzy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy = { "bpp__Objectivex__pfzy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__ToggleObjetiveBool__pf_Parms), &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::NewProp_bpp__Objectivex__pfzy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "ToggleObjetiveBool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "ToggleObjetiveBool", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__ToggleObjetiveBool__pf_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ToggleObjetiveBool" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpp__ObjectiveDetails__pf__const_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_bpp__ObjectiveDetails__pf__const;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const = { "bpp__ObjectiveDetails__pf__const", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateMission__pf_Parms, bpp__ObjectiveDetails__pf__const), METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::NewProp_bpp__ObjectiveDetails__pf__const,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "UpdateMission" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "UpdateMission", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateMission__pf_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateMission" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__NewLocation__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::NewProp_bpp__NewLocation__pf = { "bpp__NewLocation__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateObjectiveLoc__pf_Parms, bpp__NewLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::NewProp_bpp__NewLocation__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "UpdateObjectiveLoc" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, nullptr, "UpdateObjectiveLoc", nullptr, nullptr, sizeof(BP_HorsemenHUD_C__pf760233656_eventbpf__UpdateObjectiveLoc__pf_Parms), Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf()
	{
		UObject* Outer = Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "UpdateObjectiveLoc" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_NoRegister()
	{
		return ABP_HorsemenHUD_C__pf760233656::StaticClass();
	}
	struct Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MissionText__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MissionText__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__MissionText_Loc__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__MissionText_Loc__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ObjectivePointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__ObjectivePointer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Objective_Loc__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Objective_Loc__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HUD_Overlay__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HUD_Overlay__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__Overlay_Loc__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__Overlay_Loc__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SpawnLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__SpawnLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__NewVar_0__pf_MetaData[];
#endif
		static void NewProp_bpv__NewVar_0__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__NewVar_0__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__OwningxPlayer__pfT_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__OwningxPlayer__pfT;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_NewLocation__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_NewLocation__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Source__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Event_Source__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_CurrentlyHit__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_CurrentlyHit__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Direction__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_CustomEvent_Direction__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_Objective___pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_Event_Objective___pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_Event_Objective___pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_ObjectiveDetails__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_b0l__K2Node_Event_ObjectiveDetails__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_CustomEvent_Direction_1__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_CustomEvent_Direction_1__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Damage_Source__pf, "Damage_Source" }, // 589490551
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ExecuteUbergraph_BP_HorsemenHUD__pf_1, "ExecuteUbergraph_BP_HorsemenHUD_1" }, // 1515385666
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__Player_Was_Hit__pf, "Player_Was_Hit" }, // 3246712233
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1621496722
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ReceiveTick__pf, "ReceiveTick" }, // 2182982866
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__RespawningxTrace__pfT, "Respawning Trace" }, // 3220547015
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__SpawnxDamagexWidget__pfTT, "Spawn Damage Widget" }, // 2586068742
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__ToggleObjetiveBool__pf, "ToggleObjetiveBool" }, // 2485115086
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateMission__pf, "UpdateMission" }, // 2041974804
		{ &Z_Construct_UFunction_ABP_HorsemenHUD_C__pf760233656_bpf__UpdateObjectiveLoc__pf, "UpdateObjectiveLoc" }, // 3867849553
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BP_HorsemenHUD__pf760233656.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "BP_HorsemenHUD_C" },
		{ "ReplaceConverted", "/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD.BP_HorsemenHUD_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "MissionText" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText__pf = { "MissionText", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__MissionText__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText_Loc__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "MissionText_Loc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText_Loc__pf = { "MissionText_Loc", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__MissionText_Loc__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText_Loc__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText_Loc__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__ObjectivePointer__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "ObjectivePointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__ObjectivePointer__pf = { "ObjectivePointer", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__ObjectivePointer__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__ObjectivePointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__ObjectivePointer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Objective_Loc__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "Objective_Loc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Objective_Loc__pf = { "Objective_Loc", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__Objective_Loc__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Objective_Loc__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Objective_Loc__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__HUD_Overlay__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "HUD_Overlay" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__HUD_Overlay__pf = { "HUD_Overlay", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__HUD_Overlay__pf), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__HUD_Overlay__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__HUD_Overlay__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Overlay_Loc__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "Overlay_Loc" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Overlay_Loc__pf = { "Overlay_Loc", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__Overlay_Loc__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Overlay_Loc__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Overlay_Loc__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__SpawnLocation__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "SpawnLocation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__SpawnLocation__pf = { "SpawnLocation", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__SpawnLocation__pf), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__SpawnLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__SpawnLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "New Var 0" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "NewVar_0" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->bpv__NewVar_0__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf = { "NewVar_0", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__OwningxPlayer__pfT_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Owning Player" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "Owning Player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__OwningxPlayer__pfT = { "Owning Player", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, bpv__OwningxPlayer__pfT), Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__OwningxPlayer__pfT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__OwningxPlayer__pfT_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_NewLocation__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_Event_NewLocation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_NewLocation__pf = { "K2Node_Event_NewLocation", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_Event_NewLocation__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_NewLocation__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_NewLocation__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Source__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_Event_Source" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Source__pf = { "K2Node_Event_Source", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_Event_Source__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Source__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Source__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_Event_CurrentlyHit" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_Event_CurrentlyHit__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf = { "K2Node_Event_CurrentlyHit", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBP_Player_Character_Base" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf = { "K2Node_DynamicCast_AsBP_Player_Character_Base", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf), Z_Construct_UClass_ABP_PlayerCharacter_Base_C__pf1490413170_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Direction" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction__pf = { "K2Node_CustomEvent_Direction", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_CustomEvent_Direction__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsObjective_Pointer" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf = { "K2Node_DynamicCast_AsObjective_Pointer", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_DynamicCast_AsObjective_Pointer__pf), Z_Construct_UClass_UObjectivePointer_C__pf2435026734_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_1" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_DynamicCast_bSuccess_1__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf = { "K2Node_DynamicCast_bSuccess_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsObjective_Pointer_1" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf = { "K2Node_DynamicCast_AsObjective_Pointer_1", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf), Z_Construct_UClass_UObjectivePointer_C__pf2435026734_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_2" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_DynamicCast_bSuccess_2__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf = { "K2Node_DynamicCast_bSuccess_2", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsObjective_Pointer_2" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf = { "K2Node_DynamicCast_AsObjective_Pointer_2", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf), Z_Construct_UClass_UObjectivePointer_C__pf2435026734_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_3" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_DynamicCast_bSuccess_3__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf = { "K2Node_DynamicCast_bSuccess_3", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_Event_Objective_" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_Event_Objective___pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf = { "K2Node_Event_Objective_", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_ObjectiveDetails__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_Event_ObjectiveDetails" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_ObjectiveDetails__pf = { "K2Node_Event_ObjectiveDetails", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_Event_ObjectiveDetails__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_ObjectiveDetails__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_ObjectiveDetails__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction_1__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_CustomEvent_Direction_1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction_1__pf = { "K2Node_CustomEvent_Direction_1", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_CustomEvent_Direction_1__pf), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction_1__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction_1__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsWidg_Mission_Text" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf = { "K2Node_DynamicCast_AsWidg_Mission_Text", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf), Z_Construct_UClass_UWidg_MissionText_C__pf1982152804_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_4" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_DynamicCast_bSuccess_4__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf = { "K2Node_DynamicCast_bSuccess_4", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsObjective_Pointer_3" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf = { "K2Node_DynamicCast_AsObjective_Pointer_3", nullptr, (EPropertyFlags)0x0010000000282008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABP_HorsemenHUD_C__pf760233656, b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf), Z_Construct_UClass_UObjectivePointer_C__pf2435026734_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/BP_HorsemenHUD__pf760233656.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess_5" },
	};
#endif
	void Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit(void* Obj)
	{
		((ABP_HorsemenHUD_C__pf760233656*)Obj)->b0l__K2Node_DynamicCast_bSuccess_5__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf = { "K2Node_DynamicCast_bSuccess_5", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABP_HorsemenHUD_C__pf760233656), &Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__MissionText_Loc__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__ObjectivePointer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Objective_Loc__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__HUD_Overlay__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__Overlay_Loc__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__SpawnLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__NewVar_0__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_bpv__OwningxPlayer__pfT,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_NewLocation__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Source__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_CurrentlyHit__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Player_Character_Base__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_2__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_Objective___pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_ObjectiveDetails__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_CustomEvent_Direction_1__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsWidg_Mission_Text__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_4__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_AsObjective_Pointer_3__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess_5__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_DamageDirection_C_NoRegister, (int32)VTABLE_OFFSET(ABP_HorsemenHUD_C__pf760233656, IBPI_DamageDirection_C), false },
			{ Z_Construct_UClass_UBPI_ToggleObjective_C_NoRegister, (int32)VTABLE_OFFSET(ABP_HorsemenHUD_C__pf760233656, IBPI_ToggleObjective_C), false },
			{ Z_Construct_UClass_UBPI_MissionText_C_NoRegister, (int32)VTABLE_OFFSET(ABP_HorsemenHUD_C__pf760233656, IBPI_MissionText_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABP_HorsemenHUD_C__pf760233656>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::ClassParams = {
		&ABP_HorsemenHUD_C__pf760233656::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("BP_HorsemenHUD_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ABP_HorsemenHUD_C__pf760233656, TEXT("BP_HorsemenHUD_C"), 2675885489);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ABP_HorsemenHUD_C__pf760233656>()
	{
		return ABP_HorsemenHUD_C__pf760233656::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABP_HorsemenHUD_C__pf760233656(Z_Construct_UClass_ABP_HorsemenHUD_C__pf760233656, &ABP_HorsemenHUD_C__pf760233656::StaticClass, TEXT("/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD"), TEXT("BP_HorsemenHUD_C"), true, TEXT("/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD"), TEXT("/Game/HUD/Widgets/Damage_Display/BP_HorsemenHUD.BP_HorsemenHUD_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABP_HorsemenHUD_C__pf760233656);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
