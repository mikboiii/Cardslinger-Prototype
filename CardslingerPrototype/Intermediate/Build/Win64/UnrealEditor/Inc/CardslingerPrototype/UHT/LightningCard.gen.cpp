// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/LightningCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightningCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ALightningCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ALightningCard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ALightningCard::StaticRegisterNativesALightningCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALightningCard);
	UClass* Z_Construct_UClass_ALightningCard_NoRegister()
	{
		return ALightningCard::StaticClass();
	}
	struct Z_Construct_UClass_ALightningCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightningCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightningCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LightningCard.h" },
		{ "ModuleRelativePath", "LightningCard.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightningCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightningCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALightningCard_Statics::ClassParams = {
		&ALightningCard::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALightningCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ALightningCard_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ALightningCard()
	{
		if (!Z_Registration_Info_UClass_ALightningCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALightningCard.OuterSingleton, Z_Construct_UClass_ALightningCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALightningCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ALightningCard>()
	{
		return ALightningCard::StaticClass();
	}
	ALightningCard::ALightningCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightningCard);
	ALightningCard::~ALightningCard() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALightningCard, ALightningCard::StaticClass, TEXT("ALightningCard"), &Z_Registration_Info_UClass_ALightningCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALightningCard), 4281846192U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningCard_h_1903404219(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_LightningCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
