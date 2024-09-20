// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/BaseAIClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAIClass() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseAIClass();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseAIClass_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AEnemyProjectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ABaseAIClass::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseAIClass::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	void ABaseAIClass::StaticRegisterNativesABaseAIClass()
	{
		UClass* Class = ABaseAIClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHealthPercent", &ABaseAIClass::execGetHealthPercent },
			{ "IsDead", &ABaseAIClass::execIsDead },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics
	{
		struct BaseAIClass_eventGetHealthPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseAIClass_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAIClass, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::BaseAIClass_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::BaseAIClass_eventGetHealthPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseAIClass_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseAIClass_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseAIClass_IsDead_Statics
	{
		struct BaseAIClass_eventIsDead_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseAIClass_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseAIClass_eventIsDead_Parms), &Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseAIClass, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::BaseAIClass_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::BaseAIClass_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseAIClass_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseAIClass_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseAIClass);
	UClass* Z_Construct_UClass_ABaseAIClass_NoRegister()
	{
		return ABaseAIClass::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAIClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPredictiveAiming_MetaData[];
#endif
		static void NewProp_bIsPredictiveAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPredictiveAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfShots_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimePerShot_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimePerShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bullet_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Bullet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccuracyModifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccuracyModifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveBullets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveBullets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveBullets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlash_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollSpeedCheckTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollSpeedCheckTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollSpeedMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollSpeedMaximum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAIClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseAIClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseAIClass_GetHealthPercent, "GetHealthPercent" }, // 2069347086
		{ &Z_Construct_UFunction_ABaseAIClass_IsDead, "IsDead" }, // 2734964966
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseAIClass.h" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "BaseAIClass" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Health_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxRange_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	void Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming_SetBit(void* Obj)
	{
		((ABaseAIClass*)Obj)->bIsPredictiveAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming = { "bIsPredictiveAiming", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseAIClass), &Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_FireCooldown_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_FireCooldown = { "FireCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, FireCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_FireCooldown_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_FireCooldown_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_NumberOfShots_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_NumberOfShots = { "NumberOfShots", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, NumberOfShots), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_NumberOfShots_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_NumberOfShots_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_TimePerShot_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_TimePerShot = { "TimePerShot", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, TimePerShot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_TimePerShot_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_TimePerShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_BulletSpeed_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, BulletSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_BulletSpeed_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_BulletSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Bullet_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Bullet = { "Bullet", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, Bullet), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyProjectile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Bullet_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Bullet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_AccuracyModifier_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_AccuracyModifier = { "AccuracyModifier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, AccuracyModifier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_AccuracyModifier_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_AccuracyModifier_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets_Inner = { "ActiveBullets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemyProjectile_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets = { "ActiveBullets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, ActiveBullets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MuzzleFlash_MetaData[] = {
		{ "Category", "BaseAIClass" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MuzzleFlash = { "MuzzleFlash", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, MuzzleFlash), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MuzzleFlash_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MuzzleFlash_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedCheckTimer_MetaData[] = {
		{ "Category", "Ragdoll Settings" },
		{ "ModuleRelativePath", "BaseAIClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedCheckTimer = { "RagdollSpeedCheckTimer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, RagdollSpeedCheckTimer), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedCheckTimer_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedCheckTimer_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedMaximum_MetaData[] = {
		{ "Category", "Ragdoll Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//determines the speed above which an enemy cannot stand up after being ragdolled\n" },
#endif
		{ "ModuleRelativePath", "BaseAIClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "determines the speed above which an enemy cannot stand up after being ragdolled" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedMaximum = { "RagdollSpeedMaximum", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseAIClass, RagdollSpeedMaximum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedMaximum_MetaData), Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedMaximum_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAIClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_bIsPredictiveAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_FireCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_NumberOfShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_TimePerShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_BulletSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_Bullet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_AccuracyModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_ActiveBullets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_MuzzleFlash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedCheckTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAIClass_Statics::NewProp_RagdollSpeedMaximum,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAIClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAIClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseAIClass_Statics::ClassParams = {
		&ABaseAIClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseAIClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseAIClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseAIClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseAIClass()
	{
		if (!Z_Registration_Info_UClass_ABaseAIClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseAIClass.OuterSingleton, Z_Construct_UClass_ABaseAIClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseAIClass.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ABaseAIClass>()
	{
		return ABaseAIClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAIClass);
	ABaseAIClass::~ABaseAIClass() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseAIClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseAIClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseAIClass, ABaseAIClass::StaticClass, TEXT("ABaseAIClass"), &Z_Registration_Info_UClass_ABaseAIClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseAIClass), 230453256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseAIClass_h_88769762(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseAIClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseAIClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
