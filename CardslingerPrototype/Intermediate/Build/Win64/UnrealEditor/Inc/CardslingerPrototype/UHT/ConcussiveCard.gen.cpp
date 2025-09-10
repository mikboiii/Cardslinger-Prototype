// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ConcussiveCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcussiveCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AConcussiveCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AConcussiveCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AConcussiveCard::StaticRegisterNativesAConcussiveCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConcussiveCard);
	UClass* Z_Construct_UClass_AConcussiveCard_NoRegister()
	{
		return AConcussiveCard::StaticClass();
	}
	struct Z_Construct_UClass_AConcussiveCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConcussiveProjectileCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConcussiveProjectileCardClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcussiveCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ConcussiveCard.h" },
		{ "ModuleRelativePath", "ConcussiveCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcussiveCard_Statics::NewProp_ConcussiveProjectileCardClass_MetaData[] = {
		{ "Category", "ConcussiveCard" },
		{ "ModuleRelativePath", "ConcussiveCard.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AConcussiveCard_Statics::NewProp_ConcussiveProjectileCardClass = { "ConcussiveProjectileCardClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AConcussiveCard, ConcussiveProjectileCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveCard_Statics::NewProp_ConcussiveProjectileCardClass_MetaData), Z_Construct_UClass_AConcussiveCard_Statics::NewProp_ConcussiveProjectileCardClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcussiveCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcussiveCard_Statics::NewProp_ConcussiveProjectileCardClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcussiveCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcussiveCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConcussiveCard_Statics::ClassParams = {
		&AConcussiveCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcussiveCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AConcussiveCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConcussiveCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AConcussiveCard()
	{
		if (!Z_Registration_Info_UClass_AConcussiveCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConcussiveCard.OuterSingleton, Z_Construct_UClass_AConcussiveCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConcussiveCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AConcussiveCard>()
	{
		return AConcussiveCard::StaticClass();
	}
	AConcussiveCard::AConcussiveCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcussiveCard);
	AConcussiveCard::~AConcussiveCard() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConcussiveCard, AConcussiveCard::StaticClass, TEXT("AConcussiveCard"), &Z_Registration_Info_UClass_AConcussiveCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConcussiveCard), 2226886323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveCard_h_1484544188(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ConcussiveCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
