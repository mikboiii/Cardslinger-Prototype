// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/SlowTimeProjectileCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlowTimeProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASlowTimeProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASlowTimeProjectileCard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ASlowTimeProjectileCard::StaticRegisterNativesASlowTimeProjectileCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlowTimeProjectileCard);
	UClass* Z_Construct_UClass_ASlowTimeProjectileCard_NoRegister()
	{
		return ASlowTimeProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_ASlowTimeProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSlowTimeRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardSlowTimeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSlowDilationValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardSlowDilationValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSlowDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardSlowDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASlowTimeProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTimeProjectileCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SlowTimeProjectileCard.h" },
		{ "ModuleRelativePath", "SlowTimeProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowTimeRadius_MetaData[] = {
		{ "Category", "SlowTimeProjectileCard" },
		{ "ModuleRelativePath", "SlowTimeProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowTimeRadius = { "CardSlowTimeRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowTimeProjectileCard, CardSlowTimeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowTimeRadius_MetaData), Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowTimeRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDilationValue_MetaData[] = {
		{ "Category", "SlowTimeProjectileCard" },
		{ "ModuleRelativePath", "SlowTimeProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDilationValue = { "CardSlowDilationValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowTimeProjectileCard, CardSlowDilationValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDilationValue_MetaData), Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDilationValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDuration_MetaData[] = {
		{ "Category", "SlowTimeProjectileCard" },
		{ "ModuleRelativePath", "SlowTimeProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDuration = { "CardSlowDuration", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlowTimeProjectileCard, CardSlowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDuration_MetaData), Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlowTimeProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowTimeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDilationValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlowTimeProjectileCard_Statics::NewProp_CardSlowDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASlowTimeProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlowTimeProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlowTimeProjectileCard_Statics::ClassParams = {
		&ASlowTimeProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASlowTimeProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlowTimeProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlowTimeProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASlowTimeProjectileCard()
	{
		if (!Z_Registration_Info_UClass_ASlowTimeProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlowTimeProjectileCard.OuterSingleton, Z_Construct_UClass_ASlowTimeProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASlowTimeProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ASlowTimeProjectileCard>()
	{
		return ASlowTimeProjectileCard::StaticClass();
	}
	ASlowTimeProjectileCard::ASlowTimeProjectileCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASlowTimeProjectileCard);
	ASlowTimeProjectileCard::~ASlowTimeProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASlowTimeProjectileCard, ASlowTimeProjectileCard::StaticClass, TEXT("ASlowTimeProjectileCard"), &Z_Registration_Info_UClass_ASlowTimeProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlowTimeProjectileCard), 2790319068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeProjectileCard_h_4045899798(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SlowTimeProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
