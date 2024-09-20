// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ConcussiveProjectileCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcussiveProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AConcussiveProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AConcussiveProjectileCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AConcussiveProjectileCard::StaticRegisterNativesAConcussiveProjectileCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConcussiveProjectileCard);
	UClass* Z_Construct_UClass_AConcussiveProjectileCard_NoRegister()
	{
		return AConcussiveProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_AConcussiveProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardExplosiveDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardExplosiveDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardExplosionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardExplosionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPushForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardPushForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RagdollTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RagdollTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcussiveProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveProjectileCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ConcussiveProjectileCard.h" },
		{ "ModuleRelativePath", "ConcussiveProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosiveDamage_MetaData[] = {
		{ "Category", "ConcussiveProjectileCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the damage that the card explosion deals\n" },
#endif
		{ "ModuleRelativePath", "ConcussiveProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the damage that the card explosion deals" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosiveDamage = { "CardExplosiveDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConcussiveProjectileCard, CardExplosiveDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosiveDamage_MetaData), Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosiveDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosionRadius_MetaData[] = {
		{ "Category", "ConcussiveProjectileCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the radius of the card explosion\n" },
#endif
		{ "ModuleRelativePath", "ConcussiveProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the radius of the card explosion" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosionRadius = { "CardExplosionRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConcussiveProjectileCard, CardExplosionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosionRadius_MetaData), Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosionRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardPushForce_MetaData[] = {
		{ "Category", "ConcussiveProjectileCard" },
		{ "ModuleRelativePath", "ConcussiveProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardPushForce = { "CardPushForce", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConcussiveProjectileCard, CardPushForce), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardPushForce_MetaData), Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardPushForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_RagdollTime_MetaData[] = {
		{ "Category", "ConcussiveProjectileCard" },
		{ "ModuleRelativePath", "ConcussiveProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_RagdollTime = { "RagdollTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConcussiveProjectileCard, RagdollTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_RagdollTime_MetaData), Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_RagdollTime_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcussiveProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosiveDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardExplosionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_CardPushForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcussiveProjectileCard_Statics::NewProp_RagdollTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcussiveProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcussiveProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConcussiveProjectileCard_Statics::ClassParams = {
		&AConcussiveProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcussiveProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AConcussiveProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AConcussiveProjectileCard()
	{
		if (!Z_Registration_Info_UClass_AConcussiveProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConcussiveProjectileCard.OuterSingleton, Z_Construct_UClass_AConcussiveProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConcussiveProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AConcussiveProjectileCard>()
	{
		return AConcussiveProjectileCard::StaticClass();
	}
	AConcussiveProjectileCard::AConcussiveProjectileCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcussiveProjectileCard);
	AConcussiveProjectileCard::~AConcussiveProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConcussiveProjectileCard, AConcussiveProjectileCard::StaticClass, TEXT("AConcussiveProjectileCard"), &Z_Registration_Info_UClass_AConcussiveProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConcussiveProjectileCard), 1572539588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveProjectileCard_h_397390201(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
