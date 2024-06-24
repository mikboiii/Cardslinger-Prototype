// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/BaseCharacterClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterClass() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacterClass();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacterClass_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ABaseCharacterClass::execGetMaxClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetShield)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetShield();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetEnergy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetEnergyPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEnergyPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetHealthPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetHealthPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execIncrementClip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementClip();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execIsDead)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDead();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execIsHandEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsHandEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacterClass::execGetDeck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACardDeck**)Z_Param__Result=P_THIS->GetDeck();
		P_NATIVE_END;
	}
	void ABaseCharacterClass::StaticRegisterNativesABaseCharacterClass()
	{
		UClass* Class = ABaseCharacterClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetClip", &ABaseCharacterClass::execGetClip },
			{ "GetDeck", &ABaseCharacterClass::execGetDeck },
			{ "GetEnergy", &ABaseCharacterClass::execGetEnergy },
			{ "GetEnergyPercent", &ABaseCharacterClass::execGetEnergyPercent },
			{ "GetHealth", &ABaseCharacterClass::execGetHealth },
			{ "GetHealthPercent", &ABaseCharacterClass::execGetHealthPercent },
			{ "GetMaxClip", &ABaseCharacterClass::execGetMaxClip },
			{ "GetShield", &ABaseCharacterClass::execGetShield },
			{ "IncrementClip", &ABaseCharacterClass::execIncrementClip },
			{ "IsDead", &ABaseCharacterClass::execIsDead },
			{ "IsHandEmpty", &ABaseCharacterClass::execIsHandEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics
	{
		struct BaseCharacterClass_eventGetClip_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetClip_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetClip", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::BaseCharacterClass_eventGetClip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::BaseCharacterClass_eventGetClip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics
	{
		struct BaseCharacterClass_eventGetDeck_Parms
		{
			ACardDeck* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetDeck_Parms, ReturnValue), Z_Construct_UClass_ACardDeck_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetDeck", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::BaseCharacterClass_eventGetDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::BaseCharacterClass_eventGetDeck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics
	{
		struct BaseCharacterClass_eventGetEnergy_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetEnergy_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetEnergy", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::BaseCharacterClass_eventGetEnergy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::BaseCharacterClass_eventGetEnergy_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetEnergy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetEnergy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics
	{
		struct BaseCharacterClass_eventGetEnergyPercent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetEnergyPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetEnergyPercent", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::BaseCharacterClass_eventGetEnergyPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::BaseCharacterClass_eventGetEnergyPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics
	{
		struct BaseCharacterClass_eventGetHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetHealth", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::BaseCharacterClass_eventGetHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::BaseCharacterClass_eventGetHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics
	{
		struct BaseCharacterClass_eventGetHealthPercent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetHealthPercent", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::BaseCharacterClass_eventGetHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::BaseCharacterClass_eventGetHealthPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics
	{
		struct BaseCharacterClass_eventGetMaxClip_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetMaxClip_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetMaxClip", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::BaseCharacterClass_eventGetMaxClip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::BaseCharacterClass_eventGetMaxClip_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics
	{
		struct BaseCharacterClass_eventGetShield_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacterClass_eventGetShield_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "GetShield", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::BaseCharacterClass_eventGetShield_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::BaseCharacterClass_eventGetShield_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_GetShield()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_GetShield_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_IncrementClip_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_IncrementClip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_IncrementClip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "IncrementClip", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IncrementClip_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_IncrementClip_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_IncrementClip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_IncrementClip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics
	{
		struct BaseCharacterClass_eventIsDead_Parms
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
	void Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacterClass_eventIsDead_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseCharacterClass_eventIsDead_Parms), &Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "IsDead", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::BaseCharacterClass_eventIsDead_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::BaseCharacterClass_eventIsDead_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_IsDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_IsDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics
	{
		struct BaseCharacterClass_eventIsHandEmpty_Parms
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
	void Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacterClass_eventIsHandEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseCharacterClass_eventIsHandEmpty_Parms), &Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacterClass, nullptr, "IsHandEmpty", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::BaseCharacterClass_eventIsHandEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::BaseCharacterClass_eventIsHandEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacterClass);
	UClass* Z_Construct_UClass_ABaseCharacterClass_NoRegister()
	{
		return ABaseCharacterClass::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacterClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealthPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfHealthSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfHealthSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmountOfEnergySegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AmountOfEnergySegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyPerSegment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyPerSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShield_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardsPerShot_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CardsPerShot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClip_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentClip_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentClip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaggerDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StaggerDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStaggeredFiring_MetaData[];
#endif
		static void NewProp_bIsStaggeredFiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStaggeredFiring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnergy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyRegenRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyRegenRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEnergy_MetaData[];
#endif
		static void NewProp_InfiniteEnergy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InfiniteEnergy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHUD_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHUD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardBackClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardBackClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardCooldownDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardCooldownDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDeckClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardDeckClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDeck_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDeck;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardHand_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardHand_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CardHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardToTest_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardToTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicCardProjectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BasicCardProjectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanReload_MetaData[];
#endif
		static void NewProp_CanReload_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanReload;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDeckLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDeckLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacterClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacterClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetClip, "GetClip" }, // 2087343851
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetDeck, "GetDeck" }, // 1009825967
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetEnergy, "GetEnergy" }, // 778582654
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetEnergyPercent, "GetEnergyPercent" }, // 4177284839
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetHealth, "GetHealth" }, // 627299627
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetHealthPercent, "GetHealthPercent" }, // 3232173269
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetMaxClip, "GetMaxClip" }, // 3188914798
		{ &Z_Construct_UFunction_ABaseCharacterClass_GetShield, "GetShield" }, // 3317352692
		{ &Z_Construct_UFunction_ABaseCharacterClass_IncrementClip, "IncrementClip" }, // 1991184494
		{ &Z_Construct_UFunction_ABaseCharacterClass_IsDead, "IsDead" }, // 838193405
		{ &Z_Construct_UFunction_ABaseCharacterClass_IsHandEmpty, "IsHandEmpty" }, // 2204687508
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacterClass.h" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_HealthPerSegment_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_HealthPerSegment = { "HealthPerSegment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, HealthPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_HealthPerSegment_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_HealthPerSegment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfHealthSegments_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfHealthSegments = { "AmountOfHealthSegments", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, AmountOfHealthSegments), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfHealthSegments_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfHealthSegments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfEnergySegments_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfEnergySegments = { "AmountOfEnergySegments", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, AmountOfEnergySegments), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfEnergySegments_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfEnergySegments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyPerSegment_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyPerSegment = { "EnergyPerSegment", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, EnergyPerSegment), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyPerSegment_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyPerSegment_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InputMapping_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InputMapping_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InputMapping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MoveAction_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MoveAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_LookAction_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_LookAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_JumpAction_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_JumpAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ShootAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ShootAction = { "ShootAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, ShootAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ShootAction_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ShootAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardAction = { "CardAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardAction_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadAction_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadAction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentShield_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentShield = { "CurrentShield", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CurrentShield), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentShield_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentShield_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxRange_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardsPerShot_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditCondition", "bIsStaggeredFiring" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardsPerShot = { "CardsPerShot", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardsPerShot), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardsPerShot_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardsPerShot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxClip_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxClip = { "MaxClip", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, MaxClip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxClip_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxClip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentClip_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentClip = { "CurrentClip", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CurrentClip), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentClip_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentClip_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadDelay = { "ReloadDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, ReloadDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadDelay_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_FireDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_FireDelay = { "FireDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, FireDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_FireDelay_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_FireDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_StaggerDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditCondition", "bIsStaggeredFiring" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_StaggerDelay = { "StaggerDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, StaggerDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_StaggerDelay_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_StaggerDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring_SetBit(void* Obj)
	{
		((ABaseCharacterClass*)Obj)->bIsStaggeredFiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring = { "bIsStaggeredFiring", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacterClass), &Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxEnergy_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxEnergy = { "MaxEnergy", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, MaxEnergy), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxEnergy_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxEnergy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyMinimum_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyMinimum = { "EnergyMinimum", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, EnergyMinimum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyMinimum_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyMinimum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyRegenRate_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyRegenRate = { "EnergyRegenRate", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, EnergyRegenRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyRegenRate_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyRegenRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy_SetBit(void* Obj)
	{
		((ABaseCharacterClass*)Obj)->InfiniteEnergy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy = { "InfiniteEnergy", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacterClass), &Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_PlayerHUD_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_PlayerHUD = { "PlayerHUD", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, PlayerHUD), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_PlayerHUD_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_PlayerHUD_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardBackClass_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardBackClass = { "CardBackClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardBackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardBackClass_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardBackClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardCooldownDelay_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardCooldownDelay = { "CardCooldownDelay", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardCooldownDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardCooldownDelay_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardCooldownDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckClass_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckClass = { "CardDeckClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardDeckClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACardDeck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckClass_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeck_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeck = { "CardDeck", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardDeck), Z_Construct_UClass_ACardDeck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeck_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeck_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand_Inner = { "CardHand", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand = { "CardHand", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardHand), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardTemplate_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardTemplate = { "CardTemplate", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardTemplate_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardToTest_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardToTest = { "CardToTest", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardToTest), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardToTest_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardToTest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_BasicCardProjectile_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_BasicCardProjectile = { "BasicCardProjectile", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, BasicCardProjectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_BasicCardProjectile_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_BasicCardProjectile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload_SetBit(void* Obj)
	{
		((ABaseCharacterClass*)Obj)->CanReload = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload = { "CanReload", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacterClass), &Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckLocation_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckLocation = { "CardDeckLocation", nullptr, (EPropertyFlags)0x0042000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CardDeckLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckLocation_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x0042000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CameraComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_SpringArm2_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_SpringArm2 = { "SpringArm2", nullptr, (EPropertyFlags)0x0042000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, SpringArm2), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_SpringArm2_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_SpringArm2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_HealthPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfHealthSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_AmountOfEnergySegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyPerSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InputMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ShootAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentShield,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardsPerShot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CurrentClip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_ReloadDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_FireDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_StaggerDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_bIsStaggeredFiring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_EnergyRegenRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_InfiniteEnergy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_PlayerHUD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardBackClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardCooldownDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardToTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_BasicCardProjectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CanReload,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CardDeckLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_SpringArm2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacterClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacterClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacterClass_Statics::ClassParams = {
		&ABaseCharacterClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacterClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseCharacterClass()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacterClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacterClass.OuterSingleton, Z_Construct_UClass_ABaseCharacterClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacterClass.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ABaseCharacterClass>()
	{
		return ABaseCharacterClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacterClass);
	ABaseCharacterClass::~ABaseCharacterClass() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacterClass, ABaseCharacterClass::StaticClass, TEXT("ABaseCharacterClass"), &Z_Registration_Info_UClass_ABaseCharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacterClass), 2498960615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_3006328429(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
