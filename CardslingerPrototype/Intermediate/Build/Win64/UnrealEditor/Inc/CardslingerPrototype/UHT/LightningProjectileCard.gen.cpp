// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/LightningProjectileCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightningProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ALightningProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ALightningProjectileCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ALightningProjectileCard::StaticRegisterNativesALightningProjectileCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightningProjectileCard);
	UClass* Z_Construct_UClass_ALightningProjectileCard_NoRegister()
	{
		return ALightningProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_ALightningProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardLightningDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardLightningDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDamageReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardDamageReduction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardChainDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardChainDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardLightningChains_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CardLightningChains;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEnemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitEnemies;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightningProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningProjectileCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LightningProjectileCard.h" },
		{ "ModuleRelativePath", "LightningProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningDamage_MetaData[] = {
		{ "Category", "LightningProjectileCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the damage that the lighting deals\n" },
#endif
		{ "ModuleRelativePath", "LightningProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the damage that the lighting deals" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningDamage = { "CardLightningDamage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningProjectileCard, CardLightningDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningDamage_MetaData), Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardDamageReduction_MetaData[] = {
		{ "Category", "LightningProjectileCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the reduction of chain damage between targets\n" },
#endif
		{ "ModuleRelativePath", "LightningProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the reduction of chain damage between targets" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardDamageReduction = { "CardDamageReduction", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningProjectileCard, CardDamageReduction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardDamageReduction_MetaData), Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardDamageReduction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardChainDistance_MetaData[] = {
		{ "Category", "LightningProjectileCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//the distance the lightning can chain to\n" },
#endif
		{ "ModuleRelativePath", "LightningProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the distance the lightning can chain to" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardChainDistance = { "CardChainDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningProjectileCard, CardChainDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardChainDistance_MetaData), Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardChainDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningChains_MetaData[] = {
		{ "Category", "LightningProjectileCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// amount of times the lightning can chain between enemies\n" },
#endif
		{ "ModuleRelativePath", "LightningProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "amount of times the lightning can chain between enemies" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningChains = { "CardLightningChains", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningProjectileCard, CardLightningChains), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningChains_MetaData), Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningChains_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies_Inner = { "HitEnemies", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// hit list of enemies hit by lightning\n" },
#endif
		{ "ModuleRelativePath", "LightningProjectileCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hit list of enemies hit by lightning" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies = { "HitEnemies", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALightningProjectileCard, HitEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies_MetaData), Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALightningProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardDamageReduction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardChainDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_CardLightningChains,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALightningProjectileCard_Statics::NewProp_HitEnemies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightningProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightningProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightningProjectileCard_Statics::ClassParams = {
		&ALightningProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALightningProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightningProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALightningProjectileCard()
	{
		if (!Z_Registration_Info_UClass_ALightningProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightningProjectileCard.OuterSingleton, Z_Construct_UClass_ALightningProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightningProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ALightningProjectileCard>()
	{
		return ALightningProjectileCard::StaticClass();
	}
	ALightningProjectileCard::ALightningProjectileCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightningProjectileCard);
	ALightningProjectileCard::~ALightningProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightningProjectileCard, ALightningProjectileCard::StaticClass, TEXT("ALightningProjectileCard"), &Z_Registration_Info_UClass_ALightningProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightningProjectileCard), 4006825994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningProjectileCard_h_3028330719(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
