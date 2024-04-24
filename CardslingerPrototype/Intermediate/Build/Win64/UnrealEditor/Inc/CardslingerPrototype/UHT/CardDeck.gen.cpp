// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/CardDeck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardDeck() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ACardDeck::StaticRegisterNativesACardDeck()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardDeck);
	UClass* Z_Construct_UClass_ACardDeck_NoRegister()
	{
		return ACardDeck::StaticClass();
	}
	struct Z_Construct_UClass_ACardDeck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardDeck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CardDeck.h" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardDeck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardDeck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardDeck_Statics::ClassParams = {
		&ACardDeck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACardDeck()
	{
		if (!Z_Registration_Info_UClass_ACardDeck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardDeck.OuterSingleton, Z_Construct_UClass_ACardDeck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardDeck.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ACardDeck>()
	{
		return ACardDeck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardDeck);
	ACardDeck::~ACardDeck() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardDeck, ACardDeck::StaticClass, TEXT("ACardDeck"), &Z_Registration_Info_UClass_ACardDeck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardDeck), 2564447058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_3758102470(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
