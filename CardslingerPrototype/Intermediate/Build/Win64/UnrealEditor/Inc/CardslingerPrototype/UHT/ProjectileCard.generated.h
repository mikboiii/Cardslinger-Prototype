// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectileCard.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
class USceneComponent;
struct FHitResult;
#ifdef CARDSLINGERPROTOTYPE_ProjectileCard_generated_h
#error "ProjectileCard.generated.h already included, missing '#pragma once' in ProjectileCard.h"
#endif
#define CARDSLINGERPROTOTYPE_ProjectileCard_generated_h

#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_SPARSE_DATA
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateMidPoint); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execSetHomingTarget);


#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_ACCESSORS
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileCard(); \
	friend struct Z_Construct_UClass_AProjectileCard_Statics; \
public: \
	DECLARE_CLASS(AProjectileCard, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CardslingerPrototype"), NO_API) \
	DECLARE_SERIALIZER(AProjectileCard)


#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileCard(AProjectileCard&&); \
	NO_API AProjectileCard(const AProjectileCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileCard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileCard) \
	NO_API virtual ~AProjectileCard();


#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_15_PROLOG
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_SPARSE_DATA \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_ACCESSORS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<class AProjectileCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
