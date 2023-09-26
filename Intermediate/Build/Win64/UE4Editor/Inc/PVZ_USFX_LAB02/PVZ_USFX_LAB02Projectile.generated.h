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
#ifdef PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_generated_h
#error "PVZ_USFX_LAB02Projectile.generated.h already included, missing '#pragma once' in PVZ_USFX_LAB02Projectile.h"
#endif
#define PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_generated_h

#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_SPARSE_DATA
#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPVZ_USFX_LAB02Projectile(); \
	friend struct Z_Construct_UClass_APVZ_USFX_LAB02Projectile_Statics; \
public: \
	DECLARE_CLASS(APVZ_USFX_LAB02Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(APVZ_USFX_LAB02Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPVZ_USFX_LAB02Projectile(); \
	friend struct Z_Construct_UClass_APVZ_USFX_LAB02Projectile_Statics; \
public: \
	DECLARE_CLASS(APVZ_USFX_LAB02Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PVZ_USFX_LAB02"), NO_API) \
	DECLARE_SERIALIZER(APVZ_USFX_LAB02Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APVZ_USFX_LAB02Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APVZ_USFX_LAB02Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_USFX_LAB02Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_USFX_LAB02Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_USFX_LAB02Projectile(APVZ_USFX_LAB02Projectile&&); \
	NO_API APVZ_USFX_LAB02Projectile(const APVZ_USFX_LAB02Projectile&); \
public:


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APVZ_USFX_LAB02Projectile(APVZ_USFX_LAB02Projectile&&); \
	NO_API APVZ_USFX_LAB02Projectile(const APVZ_USFX_LAB02Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APVZ_USFX_LAB02Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APVZ_USFX_LAB02Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APVZ_USFX_LAB02Projectile)


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APVZ_USFX_LAB02Projectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APVZ_USFX_LAB02Projectile, ProjectileMovement); }


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_12_PROLOG
#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_SPARSE_DATA \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_RPC_WRAPPERS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_INCLASS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_SPARSE_DATA \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_INCLASS_NO_PURE_DECLS \
	PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZ_USFX_LAB02_API UClass* StaticClass<class APVZ_USFX_LAB02Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PVZ_USFX_LAB02_master_Source_PVZ_USFX_LAB02_PVZ_USFX_LAB02Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
