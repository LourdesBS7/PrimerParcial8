// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZ_USFX_LAB02_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define PVZ_USFX_LAB02_Zombie_generated_h

#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_SPARSE_DATA
#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBeginFunction);


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBeginFunction);


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public:


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AZombie)


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_PRIVATE_PROPERTY_OFFSET
#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_9_PROLOG
#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_SPARSE_DATA \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_RPC_WRAPPERS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_INCLASS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_SPARSE_DATA \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB02_API UClass* StaticClass<class AZombie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
