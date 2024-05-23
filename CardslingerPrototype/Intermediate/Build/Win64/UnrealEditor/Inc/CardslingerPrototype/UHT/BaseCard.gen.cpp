// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/BaseCard.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FProgressBarStyle();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ABaseCard::StaticRegisterNativesABaseCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCard);
	UClass* Z_Construct_UClass_ABaseCard_NoRegister()
	{
		return ABaseCard::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CardName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CardDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CardStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseCard.h" },
		{ "ModuleRelativePath", "BaseCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCard_Statics::NewProp_CardName_MetaData[] = {
		{ "Category", "BaseCard" },
		{ "ModuleRelativePath", "BaseCard.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseCard_Statics::NewProp_CardName = { "CardName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCard, CardName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::NewProp_CardName_MetaData), Z_Construct_UClass_ABaseCard_Statics::NewProp_CardName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCard_Statics::NewProp_CardDescription_MetaData[] = {
		{ "Category", "BaseCard" },
		{ "ModuleRelativePath", "BaseCard.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABaseCard_Statics::NewProp_CardDescription = { "CardDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCard, CardDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::NewProp_CardDescription_MetaData), Z_Construct_UClass_ABaseCard_Statics::NewProp_CardDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCard_Statics::NewProp_CardStyle_MetaData[] = {
		{ "Category", "BaseCard" },
		{ "ModuleRelativePath", "BaseCard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseCard_Statics::NewProp_CardStyle = { "CardStyle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCard, CardStyle), Z_Construct_UScriptStruct_FProgressBarStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::NewProp_CardStyle_MetaData), Z_Construct_UClass_ABaseCard_Statics::NewProp_CardStyle_MetaData) }; // 2988023842
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCard_Statics::NewProp_CardName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCard_Statics::NewProp_CardDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCard_Statics::NewProp_CardStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCard_Statics::ClassParams = {
		&ABaseCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseCard()
	{
		if (!Z_Registration_Info_UClass_ABaseCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCard.OuterSingleton, Z_Construct_UClass_ABaseCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ABaseCard>()
	{
		return ABaseCard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCard);
	ABaseCard::~ABaseCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCard, ABaseCard::StaticClass, TEXT("ABaseCard"), &Z_Registration_Info_UClass_ABaseCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCard), 1424331280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCard_h_228016261(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
