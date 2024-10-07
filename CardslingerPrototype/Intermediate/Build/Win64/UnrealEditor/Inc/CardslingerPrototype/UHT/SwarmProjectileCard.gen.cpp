// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/SwarmProjectileCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASwarmProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ASwarmProjectileCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ASwarmProjectileCard::StaticRegisterNativesASwarmProjectileCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASwarmProjectileCard);
	UClass* Z_Construct_UClass_ASwarmProjectileCard_NoRegister()
	{
		return ASwarmProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_ASwarmProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmPopulation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SwarmPopulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SwarmCardClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnFX_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnFX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwarmDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SwarmDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalOffsetBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalOffsetBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalOffsetBound_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalOffsetBound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwarmProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SwarmProjectileCard.h" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmPopulation_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmPopulation = { "SwarmPopulation", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, SwarmPopulation), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmPopulation_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmPopulation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SearchRadius_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SearchRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmCardClass_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmCardClass = { "SwarmCardClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, SwarmCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmCardClass_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmCardClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SpawnFX_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SpawnFX = { "SpawnFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, SpawnFX), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SpawnFX_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SpawnFX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmDelay_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmDelay = { "SwarmDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, SwarmDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmDelay_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_HorizontalOffsetBound_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_HorizontalOffsetBound = { "HorizontalOffsetBound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, HorizontalOffsetBound), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_HorizontalOffsetBound_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_HorizontalOffsetBound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_VerticalOffsetBound_MetaData[] = {
		{ "Category", "SwarmProjectileCard" },
		{ "ModuleRelativePath", "SwarmProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_VerticalOffsetBound = { "VerticalOffsetBound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASwarmProjectileCard, VerticalOffsetBound), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_VerticalOffsetBound_MetaData), Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_VerticalOffsetBound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwarmProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmPopulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SearchRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmCardClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SpawnFX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_SwarmDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_HorizontalOffsetBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwarmProjectileCard_Statics::NewProp_VerticalOffsetBound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwarmProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwarmProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASwarmProjectileCard_Statics::ClassParams = {
		&ASwarmProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASwarmProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ASwarmProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASwarmProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASwarmProjectileCard()
	{
		if (!Z_Registration_Info_UClass_ASwarmProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASwarmProjectileCard.OuterSingleton, Z_Construct_UClass_ASwarmProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASwarmProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ASwarmProjectileCard>()
	{
		return ASwarmProjectileCard::StaticClass();
	}
	ASwarmProjectileCard::ASwarmProjectileCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwarmProjectileCard);
	ASwarmProjectileCard::~ASwarmProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASwarmProjectileCard, ASwarmProjectileCard::StaticClass, TEXT("ASwarmProjectileCard"), &Z_Registration_Info_UClass_ASwarmProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASwarmProjectileCard), 2908335185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmProjectileCard_h_1925938689(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_SwarmProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
