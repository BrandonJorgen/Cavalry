// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/GS_Cavalry__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Cavalry__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UFunction* Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ABP_HostageTest_C__pf4081514875_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_UBPI_GameStateCommunication_C_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "SecurityLockdownStart__DelegateSignature" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "SecurityLockdownStart__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SecurityLockdownStart__DelegateSignature" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__ReceiveBeginPlay__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ReceiveBeginPlay__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__HostageRescued__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__HostageRescued__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__ServerDownloadStopped__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ServerDownloadStopped__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__Phase1CompletionCheck__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__Phase1CompletionCheck__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__SecurityLockdownLifted__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__SecurityLockdownLifted__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__MissileLaunchStopped__pf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__MissileLaunchStopped__pf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGS_Cavalry_C__pf2132744816::execbpf__ExecuteUbergraph_GS_Cavalry__pf_4)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_bpp__EntryPoint__pf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->bpf__ExecuteUbergraph_GS_Cavalry__pf_4(Z_Param_bpp__EntryPoint__pf);
		P_NATIVE_END;
	}
	static FName NAME_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf = FName(TEXT("HostageRescued"));
	void AGS_Cavalry_C__pf2132744816::eventbpf__HostageRescued__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf),NULL);
	}
	static FName NAME_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf = FName(TEXT("MissileLaunchStopped"));
	void AGS_Cavalry_C__pf2132744816::eventbpf__MissileLaunchStopped__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf),NULL);
	}
	static FName NAME_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void AGS_Cavalry_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf = FName(TEXT("SecurityLockdownLifted"));
	void AGS_Cavalry_C__pf2132744816::eventbpf__SecurityLockdownLifted__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf),NULL);
	}
	static FName NAME_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf = FName(TEXT("ServerDownloadStopped"));
	void AGS_Cavalry_C__pf2132744816::eventbpf__ServerDownloadStopped__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf),NULL);
	}
	void AGS_Cavalry_C__pf2132744816::StaticRegisterNativesAGS_Cavalry_C__pf2132744816()
	{
		UClass* Class = AGS_Cavalry_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteUbergraph_GS_Cavalry_4", &AGS_Cavalry_C__pf2132744816::execbpf__ExecuteUbergraph_GS_Cavalry__pf_4 },
			{ "HostageRescued", &AGS_Cavalry_C__pf2132744816::execbpf__HostageRescued__pf },
			{ "MissileLaunchStopped", &AGS_Cavalry_C__pf2132744816::execbpf__MissileLaunchStopped__pf },
			{ "Phase1CompletionCheck", &AGS_Cavalry_C__pf2132744816::execbpf__Phase1CompletionCheck__pf },
			{ "ReceiveBeginPlay", &AGS_Cavalry_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
			{ "SecurityLockdownLifted", &AGS_Cavalry_C__pf2132744816::execbpf__SecurityLockdownLifted__pf },
			{ "ServerDownloadStopped", &AGS_Cavalry_C__pf2132744816::execbpf__ServerDownloadStopped__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics
	{
		struct GS_Cavalry_C__pf2132744816_eventbpf__ExecuteUbergraph_GS_Cavalry__pf_4_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::NewProp_bpp__EntryPoint__pf = { "bpp__EntryPoint__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient, 1, STRUCT_OFFSET(GS_Cavalry_C__pf2132744816_eventbpf__ExecuteUbergraph_GS_Cavalry__pf_4_Parms, bpp__EntryPoint__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::NewProp_bpp__EntryPoint__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "ExecuteUbergraph_GS_Cavalry_4" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "ExecuteUbergraph_GS_Cavalry_4", nullptr, nullptr, sizeof(GS_Cavalry_C__pf2132744816_eventbpf__ExecuteUbergraph_GS_Cavalry__pf_4_Parms), Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ExecuteUbergraph_GS_Cavalry_4" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "HostageRescued" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "HostageRescued", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "HostageRescued" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "MissileLaunchStopped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "MissileLaunchStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "MissileLaunchStopped" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "Phase1CompletionCheck" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "Phase1CompletionCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "Phase1CompletionCheck" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ReceiveBeginPlay" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "SecurityLockdownLifted" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "SecurityLockdownLifted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "SecurityLockdownLifted" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf_Statics::Function_MetaDataParams[] = {
		{ "Category", "" },
		{ "CppFromBpEvent", "" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "ServerDownloadStopped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, nullptr, "ServerDownloadStopped", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x04020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf()
	{
		UObject* Outer = Z_Construct_UClass_AGS_Cavalry_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, "ServerDownloadStopped" ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_NoRegister()
	{
		return AGS_Cavalry_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__HostageArray__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HostageArray__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bpv__HostageArray__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HostageRescueCount__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bpv__HostageRescueCount__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__HostagesRescued__pf_MetaData[];
#endif
		static void NewProp_bpv__HostagesRescued__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__HostagesRescued__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__ServerDonwloadStopped__pf_MetaData[];
#endif
		static void NewProp_bpv__ServerDonwloadStopped__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__ServerDonwloadStopped__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__SecurityLockdownStart__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_bpv__SecurityLockdownStart__pf;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_int_Variable__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_b0l__Temp_int_Variable__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ExecuteUbergraph_GS_Cavalry__pf_4, "ExecuteUbergraph_GS_Cavalry_4" }, // 845363362
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__HostageRescued__pf, "HostageRescued" }, // 2859429793
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__MissileLaunchStopped__pf, "MissileLaunchStopped" }, // 3380845814
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__Phase1CompletionCheck__pf, "Phase1CompletionCheck" }, // 540881601
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 1325654111
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__SecurityLockdownLifted__pf, "SecurityLockdownLifted" }, // 2089407009
		{ &Z_Construct_UFunction_AGS_Cavalry_C__pf2132744816_bpf__ServerDownloadStopped__pf, "ServerDownloadStopped" }, // 2285107073
		{ &Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature, "SecurityLockdownStart__DelegateSignature" }, // 1925720157
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GS_Cavalry__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "GS_Cavalry_C" },
		{ "ReplaceConverted", "/Game/Blueprints/GS_Cavalry.GS_Cavalry_C" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGS_Cavalry_C__pf2132744816, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf_Inner = { "bpv__HostageArray__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hostage Array" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HostageArray" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf = { "HostageArray", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGS_Cavalry_C__pf2132744816, bpv__HostageArray__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageRescueCount__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hostage Rescue Count" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HostageRescueCount" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageRescueCount__pf = { "HostageRescueCount", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGS_Cavalry_C__pf2132744816, bpv__HostageRescueCount__pf), METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageRescueCount__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageRescueCount__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Hostages Rescued" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "HostagesRescued" },
	};
#endif
	void Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf_SetBit(void* Obj)
	{
		((AGS_Cavalry_C__pf2132744816*)Obj)->bpv__HostagesRescued__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf = { "HostagesRescued", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGS_Cavalry_C__pf2132744816), &Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Server Donwload Stopped" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "ServerDonwloadStopped" },
	};
#endif
	void Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf_SetBit(void* Obj)
	{
		((AGS_Cavalry_C__pf2132744816*)Obj)->bpv__ServerDonwloadStopped__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf = { "ServerDonwloadStopped", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGS_Cavalry_C__pf2132744816), &Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__SecurityLockdownStart__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Security Lockdown Start" },
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "SecurityLockdownStart" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__SecurityLockdownStart__pf = { "SecurityLockdownStart", nullptr, (EPropertyFlags)0x0010100010090005, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGS_Cavalry_C__pf2132744816, bpv__SecurityLockdownStart__pf), Z_Construct_UDelegateFunction_AGS_Cavalry_C__pf2132744816_SecurityLockdownStart__pf__GS_Cavalry_C__pf__MulticastDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__SecurityLockdownStart__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__SecurityLockdownStart__pf_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner = { "b0l__CallFunc_GetAllActorsOfClass_OutActors__pf", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ABP_HostageTest_C__pf4081514875_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "CallFunc_GetAllActorsOfClass_OutActors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf = { "CallFunc_GetAllActorsOfClass_OutActors", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGS_Cavalry_C__pf2132744816, b0l__CallFunc_GetAllActorsOfClass_OutActors__pf), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/GS_Cavalry__pf2132744816.h" },
		{ "OverrideNativeName", "Temp_int_Variable" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Variable__pf = { "Temp_int_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGS_Cavalry_C__pf2132744816, b0l__Temp_int_Variable__pf), METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Variable__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageArray__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostageRescueCount__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__HostagesRescued__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__ServerDonwloadStopped__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_bpv__SecurityLockdownStart__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__CallFunc_GetAllActorsOfClass_OutActors__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::NewProp_b0l__Temp_int_Variable__pf,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBPI_GameStateCommunication_C_NoRegister, (int32)VTABLE_OFFSET(AGS_Cavalry_C__pf2132744816, IBPI_GameStateCommunication_C), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGS_Cavalry_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::ClassParams = {
		&AGS_Cavalry_C__pf2132744816::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGS_Cavalry_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/GS_Cavalry"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("GS_Cavalry_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGS_Cavalry_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(AGS_Cavalry_C__pf2132744816, TEXT("GS_Cavalry_C"), 4141788120);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<AGS_Cavalry_C__pf2132744816>()
	{
		return AGS_Cavalry_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGS_Cavalry_C__pf2132744816(Z_Construct_UClass_AGS_Cavalry_C__pf2132744816, &AGS_Cavalry_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/GS_Cavalry"), TEXT("GS_Cavalry_C"), true, TEXT("/Game/Blueprints/GS_Cavalry"), TEXT("/Game/Blueprints/GS_Cavalry.GS_Cavalry_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGS_Cavalry_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
