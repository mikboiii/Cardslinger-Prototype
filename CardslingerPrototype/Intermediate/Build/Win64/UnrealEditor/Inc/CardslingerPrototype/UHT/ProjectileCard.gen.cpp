// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ProjectileCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AProjectileCard::StaticRegisterNativesAProjectileCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileCard);
	UClass* Z_Construct_UClass_AProjectileCard_NoRegister()
	{
		return AProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardLifetime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileCard.h" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime = { "CardLifetime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileCard_Statics::ClassParams = {
		&AProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProjectileCard()
	{
		if (!Z_Registration_Info_UClass_AProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileCard.OuterSingleton, Z_Construct_UClass_AProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AProjectileCard>()
	{
		return AProjectileCard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileCard);
	AProjectileCard::~AProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileCard, AProjectileCard::StaticClass, TEXT("AProjectileCard"), &Z_Registration_Info_UClass_AProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileCard), 29022579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_3132888184(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
