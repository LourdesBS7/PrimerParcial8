// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ZombieCubo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieCubo() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieCubo_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieCubo();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AZombieCubo::StaticRegisterNativesAZombieCubo()
	{
	}
	UClass* Z_Construct_UClass_AZombieCubo_NoRegister()
	{
		return AZombieCubo::StaticClass();
	}
	struct Z_Construct_UClass_AZombieCubo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieCubo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieCubo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieCubo.h" },
		{ "ModuleRelativePath", "ZombieCubo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieCubo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieCubo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieCubo_Statics::ClassParams = {
		&AZombieCubo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieCubo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieCubo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieCubo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieCubo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieCubo, 3083074599);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AZombieCubo>()
	{
		return AZombieCubo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieCubo(Z_Construct_UClass_AZombieCubo, &AZombieCubo::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AZombieCubo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieCubo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
