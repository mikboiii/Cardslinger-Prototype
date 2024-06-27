// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/SlowTimeCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlowTimeCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASlowTimeCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASlowTimeCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ASlowTimeCard::StaticRegisterNativesASlowTimeCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlowTimeCard);
	UClass* Z_Construct_UClass_ASlowTimeCard_NoRegister()
	{
		return ASlowTimeCard::StaticClass();
	}
	struct Z_Construct_UClass_ASlowTimeCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlowTimeProjectileCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SlowTimeProjectileCardClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlowTimeCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTimeCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SlowTimeCard.h" },
		{ "ModuleRelativePath", "SlowTimeCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTimeCard_Statics::NewProp_SlowTimeProjectileCardClass_MetaData[] = {
		{ "Category", "CardEffect" },
		{ "ModuleRelativePath", "SlowTimeCard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASlowTimeCard_Statics::NewProp_SlowTimeProjectileCardClass = { "SlowTimeProjectileCardClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowTimeCard, SlowTimeProjectileCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeCard_Statics::NewProp_SlowTimeProjectileCardClass_MetaData), Z_Construct_UClass_ASlowTimeCard_Statics::NewProp_SlowTimeProjectileCardClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlowTimeCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowTimeCard_Statics::NewProp_SlowTimeProjectileCardClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlowTimeCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowTimeCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlowTimeCard_Statics::ClassParams = {
		&ASlowTimeCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASlowTimeCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlowTimeCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASlowTimeCard()
	{
		if (!Z_Registration_Info_UClass_ASlowTimeCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlowTimeCard.OuterSingleton, Z_Construct_UClass_ASlowTimeCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASlowTimeCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ASlowTimeCard>()
	{
		return ASlowTimeCard::StaticClass();
	}
	ASlowTimeCard::ASlowTimeCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowTimeCard);
	ASlowTimeCard::~ASlowTimeCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASlowTimeCard, ASlowTimeCard::StaticClass, TEXT("ASlowTimeCard"), &Z_Registration_Info_UClass_ASlowTimeCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlowTimeCard), 3091317406U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeCard_h_1683379853(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
