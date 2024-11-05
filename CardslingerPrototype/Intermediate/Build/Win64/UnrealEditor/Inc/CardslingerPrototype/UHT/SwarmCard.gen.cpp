// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/SwarmCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASwarmCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASwarmCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ASwarmCard::StaticRegisterNativesASwarmCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwarmCard);
	UClass* Z_Construct_UClass_ASwarmCard_NoRegister()
	{
		return ASwarmCard::StaticClass();
	}
	struct Z_Construct_UClass_ASwarmCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmProjectileCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SwarmProjectileCardClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwarmCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SwarmCard.h" },
		{ "ModuleRelativePath", "SwarmCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmCard_Statics::NewProp_SwarmProjectileCardClass_MetaData[] = {
		{ "Category", "SwarmCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the explosive projectile card class\n" },
#endif
		{ "ModuleRelativePath", "SwarmCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the explosive projectile card class" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASwarmCard_Statics::NewProp_SwarmProjectileCardClass = { "SwarmProjectileCardClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmCard, SwarmProjectileCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmCard_Statics::NewProp_SwarmProjectileCardClass_MetaData), Z_Construct_UClass_ASwarmCard_Statics::NewProp_SwarmProjectileCardClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwarmCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmCard_Statics::NewProp_SwarmProjectileCardClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwarmCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwarmCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwarmCard_Statics::ClassParams = {
		&ASwarmCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASwarmCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwarmCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASwarmCard()
	{
		if (!Z_Registration_Info_UClass_ASwarmCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwarmCard.OuterSingleton, Z_Construct_UClass_ASwarmCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASwarmCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ASwarmCard>()
	{
		return ASwarmCard::StaticClass();
	}
	ASwarmCard::ASwarmCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwarmCard);
	ASwarmCard::~ASwarmCard() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASwarmCard, ASwarmCard::StaticClass, TEXT("ASwarmCard"), &Z_Registration_Info_UClass_ASwarmCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwarmCard), 4085350445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmCard_h_2785412604(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
