// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ExplosionTestCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosionTestCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AExplosionTestCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AExplosionTestCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AExplosionTestCard::StaticRegisterNativesAExplosionTestCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AExplosionTestCard);
	UClass* Z_Construct_UClass_AExplosionTestCard_NoRegister()
	{
		return AExplosionTestCard::StaticClass();
	}
	struct Z_Construct_UClass_AExplosionTestCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplosionProjectileCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExplosionProjectileCardClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosionTestCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionTestCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosionTestCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ExplosionTestCard.h" },
		{ "ModuleRelativePath", "ExplosionTestCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosionTestCard_Statics::NewProp_ExplosionProjectileCardClass_MetaData[] = {
		{ "Category", "ExplosionTestCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the explosive projectile card class\n" },
#endif
		{ "ModuleRelativePath", "ExplosionTestCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the explosive projectile card class" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AExplosionTestCard_Statics::NewProp_ExplosionProjectileCardClass = { "ExplosionProjectileCardClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AExplosionTestCard, ExplosionProjectileCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionTestCard_Statics::NewProp_ExplosionProjectileCardClass_MetaData), Z_Construct_UClass_AExplosionTestCard_Statics::NewProp_ExplosionProjectileCardClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AExplosionTestCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AExplosionTestCard_Statics::NewProp_ExplosionProjectileCardClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosionTestCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosionTestCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AExplosionTestCard_Statics::ClassParams = {
		&AExplosionTestCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AExplosionTestCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionTestCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionTestCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AExplosionTestCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionTestCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AExplosionTestCard()
	{
		if (!Z_Registration_Info_UClass_AExplosionTestCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AExplosionTestCard.OuterSingleton, Z_Construct_UClass_AExplosionTestCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AExplosionTestCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AExplosionTestCard>()
	{
		return AExplosionTestCard::StaticClass();
	}
	AExplosionTestCard::AExplosionTestCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosionTestCard);
	AExplosionTestCard::~AExplosionTestCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionTestCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionTestCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AExplosionTestCard, AExplosionTestCard::StaticClass, TEXT("AExplosionTestCard"), &Z_Registration_Info_UClass_AExplosionTestCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AExplosionTestCard), 780452305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionTestCard_h_3181946204(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionTestCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ExplosionTestCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
