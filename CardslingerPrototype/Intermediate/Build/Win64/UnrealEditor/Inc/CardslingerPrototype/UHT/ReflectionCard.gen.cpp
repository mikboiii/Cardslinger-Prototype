// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ReflectionCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AReflectionCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AReflectionCard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AReflectionCard::StaticRegisterNativesAReflectionCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReflectionCard);
	UClass* Z_Construct_UClass_AReflectionCard_NoRegister()
	{
		return AReflectionCard::StaticClass();
	}
	struct Z_Construct_UClass_AReflectionCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionShieldDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReflectionShieldDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReflectionCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectionCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ReflectionCard.h" },
		{ "ModuleRelativePath", "ReflectionCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectionCard_Statics::NewProp_ReflectionShieldDuration_MetaData[] = {
		{ "Category", "ReflectionCard" },
		{ "ModuleRelativePath", "ReflectionCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReflectionCard_Statics::NewProp_ReflectionShieldDuration = { "ReflectionShieldDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AReflectionCard, ReflectionShieldDuration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCard_Statics::NewProp_ReflectionShieldDuration_MetaData), Z_Construct_UClass_AReflectionCard_Statics::NewProp_ReflectionShieldDuration_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReflectionCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReflectionCard_Statics::NewProp_ReflectionShieldDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReflectionCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReflectionCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReflectionCard_Statics::ClassParams = {
		&AReflectionCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReflectionCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AReflectionCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AReflectionCard()
	{
		if (!Z_Registration_Info_UClass_AReflectionCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReflectionCard.OuterSingleton, Z_Construct_UClass_AReflectionCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReflectionCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AReflectionCard>()
	{
		return AReflectionCard::StaticClass();
	}
	AReflectionCard::AReflectionCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReflectionCard);
	AReflectionCard::~AReflectionCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ReflectionCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ReflectionCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReflectionCard, AReflectionCard::StaticClass, TEXT("AReflectionCard"), &Z_Registration_Info_UClass_AReflectionCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReflectionCard), 1652638132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ReflectionCard_h_4077242795(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ReflectionCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ReflectionCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
