// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef ARCANOID_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define ARCANOID_Ball_generated_h

#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_SPARSE_DATA
#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBall);


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBall);


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public:


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall)


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Ball() { return STRUCT_OFFSET(ABall, SM_Ball); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ABall, ProjectileMovement); }


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_9_PROLOG
#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_SPARSE_DATA \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_RPC_WRAPPERS \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_INCLASS \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SIS457LAB04_master_Source_Arcanoid_Ball_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_PRIVATE_PROPERTY_OFFSET \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_SPARSE_DATA \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_INCLASS_NO_PURE_DECLS \
	SIS457LAB04_master_Source_Arcanoid_Ball_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SIS457LAB04_master_Source_Arcanoid_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
