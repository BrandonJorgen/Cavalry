// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GM_Cavalry__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_Cavalry__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGM_Cavalry_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_PlayerSelect_C_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGM_Cavalry_C__pf2132744816::execbpf__SelectxPlayer__pfT)
	{
		P_GET_OBJECT(UClass,Z_Param_bpp__PlayerInput__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SelectxPlayer__pfT(Z_Param_bpp__PlayerInput__pf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGM_Cavalry_C__pf2132744816::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	static FName NAME_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AGM_Cavalry_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT = FName(TEXT("Select Player"));
	void AGM_Cavalry_C__pf2132744816::eventbpf__SelectxPlayer__pfT(UClass* bpp__PlayerInput__pf)
	{
		GM_Cavalry_C__pf2132744816_eventbpf__SelectxPlayer__pfT_Parms Parms;
		Parms.bpp__PlayerInput__pf=bpp__PlayerInput__pf;
		ProcessEvent(FindFunctionChecked(NAME_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT),&Parms);
	}
	void AGM_Cavalry_C__pf2132744816::StaticRegisterNativesAGM_Cavalry_C__pf2132744816()
	{
		UClass* Class = AGM_Cavalry_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReceiveBeginPlay", &AGM_Cavalry_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
			{ "Select Player", &AGM_Cavalry_C__pf2132744816::execbpf__SelectxPlayer__pfT },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_Cavalry_C__pf2132744816, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGM_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bpp__PlayerInput__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::NewProp_bpp__PlayerInput__pf = { "bpp__PlayerInput__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GM_Cavalry_C__pf2132744816_eventbpf__SelectxPlayer__pfT_Parms, bpp__PlayerInput__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::NewProp_bpp__PlayerInput__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "Select Player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGM_Cavalry_C__pf2132744816, nullptr, "Select Player", nullptr, nullptr, sizeof(GM_Cavalry_C__pf2132744816_eventbpf__SelectxPlayer__pfT_Parms), Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT()
	{
		UObject* Outer = Z_Construct_UClass_AGM_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Select Player" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_NoRegister()
	{
		return AGM_Cavalry_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_b0l__K2Node_Event_PlayerInput__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[];
#endif
		static void NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__K2Node_DynamicCast_bSuccess__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_Array_Get_Item__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 908480385
		{ &Z_Construct_UFunction_AGM_Cavalry_C__pf2132744816_bpf__SelectxPlayer__pfT, "Select Player" }, // 3802225703
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GM_Cavalry__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "GM_Cavalry_C" },
		{ "ReplaceConverted", "/Game/Blueprints/GM_Cavalry.GM_Cavalry_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Cavalry_C__pf2132744816, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_Event_PlayerInput" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf = { "K2Node_Event_PlayerInput", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Cavalry_C__pf2132744816, b0l__K2Node_Event_PlayerInput__pf), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_AsBP_Cavalry_Game_Instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf = { "K2Node_DynamicCast_AsBP_Cavalry_Game_Instance", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Cavalry_C__pf2132744816, b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf), Z_Construct_UClass_UBP_Cavalry_GameInstance_C__pf3256655095_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_DynamicCast_bSuccess" },
	};
#endif
	void Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit(void* Obj)
	{
		((AGM_Cavalry_C__pf2132744816*)Obj)->b0l__K2Node_DynamicCast_bSuccess__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf = { "K2Node_DynamicCast_bSuccess", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGM_Cavalry_C__pf2132744816), &Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Cavalry_C__pf2132744816, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_Array_Get_Item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf = { "CallFunc_Array_Get_Item", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Cavalry_C__pf2132744816, b0l__CallFunc_Array_Get_Item__pf), Z_Construct_UClass_APlayerStart_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GM_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_GetTransform_ReturnValue" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf = { "CallFunc_GetTransform_ReturnValue", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGM_Cavalry_C__pf2132744816, b0l__CallFunc_GetTransform_ReturnValue__pf), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_PlayerInput__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_AsBP_Cavalry_Game_Instance__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__K2Node_DynamicCast_bSuccess__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_Array_Get_Item__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetTransform_ReturnValue__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_PlayerSelect_C_NoRegister, (int32)VTABLE_OFFSET(AGM_Cavalry_C__pf2132744816, IBPI_PlayerSelect_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_Cavalry_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::ClassParams = {
		&AGM_Cavalry_C__pf2132744816::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_Cavalry_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/GM_Cavalry"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GM_Cavalry_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_Cavalry_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AGM_Cavalry_C__pf2132744816, TEXT("GM_Cavalry_C"), 3990407521);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AGM_Cavalry_C__pf2132744816>()
	{
		return AGM_Cavalry_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_Cavalry_C__pf2132744816(Z_Construct_UClass_AGM_Cavalry_C__pf2132744816, &AGM_Cavalry_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/GM_Cavalry"), TEXT("GM_Cavalry_C"), true, TEXT("/Game/Blueprints/GM_Cavalry"), TEXT("/Game/Blueprints/GM_Cavalry.GM_Cavalry_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_Cavalry_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
