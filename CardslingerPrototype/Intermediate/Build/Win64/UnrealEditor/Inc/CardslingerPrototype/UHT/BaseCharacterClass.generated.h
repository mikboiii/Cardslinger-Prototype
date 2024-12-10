// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseCharacterClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACardDeck;
class UPlayerHUDWidget;
#ifdef CARDSLINGERPROTOTYPE_BaseCharacterClass_generated_h
#error "BaseCharacterClass.generated.h already included, missing '#pragma once' in BaseCharacterClass.h"
#endif
#define CARDSLINGERPROTOTYPE_BaseCharacterClass_generated_h

#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_SPARSE_DATA
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerHUD); \
	DECLARE_FUNCTION(execGetReflectionMode); \
	DECLARE_FUNCTION(execGetDashRecharge); \
	DECLARE_FUNCTION(execGetCardCharge); \
	DECLARE_FUNCTION(execGetChargedCards); \
	DECLARE_FUNCTION(execGetMaxClip); \
	DECLARE_FUNCTION(execGetClip); \
	DECLARE_FUNCTION(execGetShield); \
	DECLARE_FUNCTION(execGetEnergy); \
	DECLARE_FUNCTION(execGetHealth); \
	DECLARE_FUNCTION(execGetEnergyPercent); \
	DECLARE_FUNCTION(execGetHealthPercent); \
	DECLARE_FUNCTION(execIncrementClip); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsHandEmpty); \
	DECLARE_FUNCTION(execGetDeck); \
	DECLARE_FUNCTION(execUpdateDash); \
	DECLARE_FUNCTION(execDashEndFunction); \
	DECLARE_FUNCTION(execDash);


#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_ACCESSORS
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacterClass(); \
	friend struct Z_Construct_UClass_ABaseCharacterClass_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacterClass, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CardslingerPrototype"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacterClass)


#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacterClass(ABaseCharacterClass&&); \
	NO_API ABaseCharacterClass(const ABaseCharacterClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacterClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacterClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacterClass) \
	NO_API virtual ~ABaseCharacterClass();


#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_15_PROLOG
#define FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_SPARSE_DATA \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_ACCESSORS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<class ABaseCharacterClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
