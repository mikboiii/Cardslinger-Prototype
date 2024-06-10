// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/HealingCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealingCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AHealingCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AHealingCard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AHealingCard::StaticRegisterNativesAHealingCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealingCard);
	UClass* Z_Construct_UClass_AHealingCard_NoRegister()
	{
		return AHealingCard::StaticClass();
	}
	struct Z_Construct_UClass_AHealingCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealingRestored_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HealingRestored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPercentileHealing_MetaData[];
#endif
		static void NewProp_IsPercentileHealing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPercentileHealing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealingCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HealingCard.h" },
		{ "ModuleRelativePath", "HealingCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingCard_Statics::NewProp_HealingRestored_MetaData[] = {
		{ "Category", "HealingCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//determines the value healed (between 0 and 1 if percentile)\n" },
#endif
		{ "ModuleRelativePath", "HealingCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "determines the value healed (between 0 and 1 if percentile)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHealingCard_Statics::NewProp_HealingRestored = { "HealingRestored", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHealingCard, HealingRestored), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingCard_Statics::NewProp_HealingRestored_MetaData), Z_Construct_UClass_AHealingCard_Statics::NewProp_HealingRestored_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing_MetaData[] = {
		{ "Category", "HealingCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//determines if the card restores a percentage of health\n" },
#endif
		{ "ModuleRelativePath", "HealingCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "determines if the card restores a percentage of health" },
#endif
	};
#endif
	void Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing_SetBit(void* Obj)
	{
		((AHealingCard*)Obj)->IsPercentileHealing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing = { "IsPercentileHealing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHealingCard), &Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing_MetaData), Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHealingCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingCard_Statics::NewProp_HealingRestored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHealingCard_Statics::NewProp_IsPercentileHealing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealingCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealingCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealingCard_Statics::ClassParams = {
		&AHealingCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHealingCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHealingCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealingCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealingCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHealingCard()
	{
		if (!Z_Registration_Info_UClass_AHealingCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealingCard.OuterSingleton, Z_Construct_UClass_AHealingCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealingCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AHealingCard>()
	{
		return AHealingCard::StaticClass();
	}
	AHealingCard::AHealingCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealingCard);
	AHealingCard::~AHealingCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HealingCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HealingCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealingCard, AHealingCard::StaticClass, TEXT("AHealingCard"), &Z_Registration_Info_UClass_AHealingCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealingCard), 3271365931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HealingCard_h_425864656(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HealingCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_HealingCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
