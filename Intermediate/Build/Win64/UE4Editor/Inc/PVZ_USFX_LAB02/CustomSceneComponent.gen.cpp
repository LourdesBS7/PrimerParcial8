// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/CustomSceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSceneComponent() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UCustomSceneComponent_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_UCustomSceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void UCustomSceneComponent::StaticRegisterNativesUCustomSceneComponent()
	{
	}
	UClass* Z_Construct_UClass_UCustomSceneComponent_NoRegister()
	{
		return UCustomSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CustomSceneComponent.h" },
		{ "ModuleRelativePath", "CustomSceneComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomSceneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomSceneComponent_Statics::ClassParams = {
		&UCustomSceneComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomSceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomSceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomSceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomSceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomSceneComponent, 1122629697);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<UCustomSceneComponent>()
	{
		return UCustomSceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomSceneComponent(Z_Construct_UClass_UCustomSceneComponent, &UCustomSceneComponent::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("UCustomSceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomSceneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
