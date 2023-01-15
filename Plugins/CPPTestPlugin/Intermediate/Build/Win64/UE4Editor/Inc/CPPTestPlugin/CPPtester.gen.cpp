// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPPTestPlugin/Public/CPPtester.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPPtester() {}
// Cross Module References
	CPPTESTPLUGIN_API UClass* Z_Construct_UClass_ACPPtester_NoRegister();
	CPPTESTPLUGIN_API UClass* Z_Construct_UClass_ACPPtester();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CPPTestPlugin();
// End Cross Module References
	void ACPPtester::StaticRegisterNativesACPPtester()
	{
	}
	UClass* Z_Construct_UClass_ACPPtester_NoRegister()
	{
		return ACPPtester::StaticClass();
	}
	struct Z_Construct_UClass_ACPPtester_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPPtester_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CPPTestPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPPtester_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPPtester.h" },
		{ "ModuleRelativePath", "Public/CPPtester.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPPtester_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPPtester>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPPtester_Statics::ClassParams = {
		&ACPPtester::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPPtester_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPPtester_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPPtester()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPPtester_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPPtester, 1054279585);
	template<> CPPTESTPLUGIN_API UClass* StaticClass<ACPPtester>()
	{
		return ACPPtester::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPPtester(Z_Construct_UClass_ACPPtester, &ACPPtester::StaticClass, TEXT("/Script/CPPTestPlugin"), TEXT("ACPPtester"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPPtester);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
