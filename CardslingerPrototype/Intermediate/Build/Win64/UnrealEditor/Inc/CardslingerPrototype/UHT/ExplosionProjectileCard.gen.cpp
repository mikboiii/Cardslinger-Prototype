// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ExplosionProjectileCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosionProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AExplosionProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AExplosionProjectileCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AExplosionProjectileCard::StaticRegisterNativesAExplosionProjectileCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExplosionProjectileCard);
	UClass* Z_Construct_UClass_AExplosionProjectileCard_NoRegister()
	{
		return AExplosionProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_AExplosionProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardExplosiveDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardExplosiveDamage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosionProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionProjectileCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosionProjectileCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ExplosionProjectileCard.h" },
		{ "ModuleRelativePath", "ExplosionProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosionProjectileCard_Statics::NewProp_CardExplosiveDamage_MetaData[] = {
		{ "Category", "ExplosionProjectileCard" },
		{ "ModuleRelativePath", "ExplosionProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AExplosionProjectileCard_Statics::NewProp_CardExplosiveDamage = { "CardExplosiveDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosionProjectileCard, CardExplosiveDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionProjectileCard_Statics::NewProp_CardExplosiveDamage_MetaData), Z_Construct_UClass_AExplosionProjectileCard_Statics::NewProp_CardExplosiveDamage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosionProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosionProjectileCard_Statics::NewProp_CardExplosiveDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosionProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosionProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosionProjectileCard_Statics::ClassParams = {
		&AExplosionProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExplosionProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosionProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AExplosionProjectileCard()
	{
		if (!Z_Registration_Info_UClass_AExplosionProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosionProjectileCard.OuterSingleton, Z_Construct_UClass_AExplosionProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExplosionProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AExplosionProjectileCard>()
	{
		return AExplosionProjectileCard::StaticClass();
	}
	AExplosionProjectileCard::AExplosionProjectileCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosionProjectileCard);
	AExplosionProjectileCard::~AExplosionProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExplosionProjectileCard, AExplosionProjectileCard::StaticClass, TEXT("AExplosionProjectileCard"), &Z_Registration_Info_UClass_AExplosionProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosionProjectileCard), 3896122463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionProjectileCard_h_215919869(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
