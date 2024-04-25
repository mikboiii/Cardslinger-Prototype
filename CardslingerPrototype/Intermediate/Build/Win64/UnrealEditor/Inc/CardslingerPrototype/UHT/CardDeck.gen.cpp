// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/CardDeck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardDeck() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ACardDeck::execShuffleDeck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShuffleDeck();
		P_NATIVE_END;
	}
	void ACardDeck::StaticRegisterNativesACardDeck()
	{
		UClass* Class = ACardDeck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShuffleDeck", &ACardDeck::execShuffleDeck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "ShuffleDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACardDeck_ShuffleDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardDeck);
	UClass* Z_Construct_UClass_ACardDeck_NoRegister()
	{
		return ACardDeck::StaticClass();
	}
	struct Z_Construct_UClass_ACardDeck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileCardClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardDeck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACardDeck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACardDeck_ShuffleDeck, "ShuffleDeck" }, // 2171445598
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CardDeck.h" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass_MetaData[] = {
		{ "Category", "CardDeck" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass = { "ProjectileCardClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, ProjectileCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardDeck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardDeck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardDeck_Statics::ClassParams = {
		&ACardDeck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACardDeck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACardDeck()
	{
		if (!Z_Registration_Info_UClass_ACardDeck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardDeck.OuterSingleton, Z_Construct_UClass_ACardDeck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardDeck.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ACardDeck>()
	{
		return ACardDeck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardDeck);
	ACardDeck::~ACardDeck() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardDeck, ACardDeck::StaticClass, TEXT("ACardDeck"), &Z_Registration_Info_UClass_ACardDeck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardDeck), 1616808636U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_2411421683(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
