// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ZombieSenal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieSenal() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieSenal_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombieSenal();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AZombie();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AZombieSenal::StaticRegisterNativesAZombieSenal()
	{
	}
	UClass* Z_Construct_UClass_AZombieSenal_NoRegister()
	{
		return AZombieSenal::StaticClass();
	}
	struct Z_Construct_UClass_AZombieSenal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieSenal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieSenal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ZombieSenal.h" },
		{ "ModuleRelativePath", "ZombieSenal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieSenal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieSenal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieSenal_Statics::ClassParams = {
		&AZombieSenal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZombieSenal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieSenal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieSenal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieSenal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieSenal, 1320340751);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AZombieSenal>()
	{
		return AZombieSenal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieSenal(Z_Construct_UClass_AZombieSenal, &AZombieSenal::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AZombieSenal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieSenal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
