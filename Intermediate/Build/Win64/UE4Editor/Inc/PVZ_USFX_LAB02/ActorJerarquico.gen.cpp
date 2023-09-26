// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/ActorJerarquico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorJerarquico() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AActorJerarquico_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AActorJerarquico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AActorJerarquico::StaticRegisterNativesAActorJerarquico()
	{
	}
	UClass* Z_Construct_UClass_AActorJerarquico_NoRegister()
	{
		return AActorJerarquico::StaticClass();
	}
	struct Z_Construct_UClass_AActorJerarquico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildSceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildSceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTwo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTwo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorJerarquico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorJerarquico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ActorJerarquico.h" },
		{ "ModuleRelativePath", "ActorJerarquico.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorJerarquico_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorJerarquico.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorJerarquico_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorJerarquico, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorJerarquico_Statics::NewProp_ChildSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorJerarquico.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorJerarquico_Statics::NewProp_ChildSceneComponent = { "ChildSceneComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorJerarquico, ChildSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_ChildSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_ChildSceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxOne_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorJerarquico.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxOne = { "BoxOne", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorJerarquico, BoxOne), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxTwo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ActorJerarquico.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxTwo = { "BoxTwo", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AActorJerarquico, BoxTwo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxTwo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorJerarquico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorJerarquico_Statics::NewProp_Root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorJerarquico_Statics::NewProp_ChildSceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorJerarquico_Statics::NewProp_BoxTwo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorJerarquico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorJerarquico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AActorJerarquico_Statics::ClassParams = {
		&AActorJerarquico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AActorJerarquico_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorJerarquico_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorJerarquico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorJerarquico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorJerarquico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AActorJerarquico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActorJerarquico, 3507396562);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AActorJerarquico>()
	{
		return AActorJerarquico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActorJerarquico(Z_Construct_UClass_AActorJerarquico, &AActorJerarquico::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AActorJerarquico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorJerarquico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
