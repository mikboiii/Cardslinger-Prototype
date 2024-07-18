// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/HoverCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoverCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AHoverCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AHoverCard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AHoverCard::StaticRegisterNativesAHoverCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHoverCard);
	UClass* Z_Construct_UClass_AHoverCard_NoRegister()
	{
		return AHoverCard::StaticClass();
	}
	struct Z_Construct_UClass_AHoverCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlyTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlySpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHoverCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HoverCard.h" },
		{ "ModuleRelativePath", "HoverCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverCard_Statics::NewProp_FlyTime_MetaData[] = {
		{ "Category", "HoverCard" },
		{ "ModuleRelativePath", "HoverCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverCard_Statics::NewProp_FlyTime = { "FlyTime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverCard, FlyTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCard_Statics::NewProp_FlyTime_MetaData), Z_Construct_UClass_AHoverCard_Statics::NewProp_FlyTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHoverCard_Statics::NewProp_FlySpeed_MetaData[] = {
		{ "Category", "HoverCard" },
		{ "ModuleRelativePath", "HoverCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHoverCard_Statics::NewProp_FlySpeed = { "FlySpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHoverCard, FlySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCard_Statics::NewProp_FlySpeed_MetaData), Z_Construct_UClass_AHoverCard_Statics::NewProp_FlySpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHoverCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverCard_Statics::NewProp_FlyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHoverCard_Statics::NewProp_FlySpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHoverCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHoverCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHoverCard_Statics::ClassParams = {
		&AHoverCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHoverCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AHoverCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHoverCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHoverCard()
	{
		if (!Z_Registration_Info_UClass_AHoverCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHoverCard.OuterSingleton, Z_Construct_UClass_AHoverCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHoverCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AHoverCard>()
	{
		return AHoverCard::StaticClass();
	}
	AHoverCard::AHoverCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHoverCard);
	AHoverCard::~AHoverCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HoverCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HoverCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHoverCard, AHoverCard::StaticClass, TEXT("AHoverCard"), &Z_Registration_Info_UClass_AHoverCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHoverCard), 2824649609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HoverCard_h_958770005(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HoverCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HoverCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
