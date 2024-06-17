// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ShieldCard.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShieldCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AShieldCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AShieldCard_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AShieldCard::StaticRegisterNativesAShieldCard()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShieldCard);
	UClass* Z_Construct_UClass_AShieldCard_NoRegister()
	{
		return AShieldCard::StaticClass();
	}
	struct Z_Construct_UClass_AShieldCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShieldRestored_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShieldRestored;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPercentileShield_MetaData[];
#endif
		static void NewProp_IsPercentileShield_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPercentileShield;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShieldCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCard,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCard_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldCard_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ShieldCard.h" },
		{ "ModuleRelativePath", "ShieldCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldCard_Statics::NewProp_ShieldRestored_MetaData[] = {
		{ "Category", "ShieldCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//determines the value of shield added (between 0 and 1 if percentile)\n" },
#endif
		{ "ModuleRelativePath", "ShieldCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "determines the value of shield added (between 0 and 1 if percentile)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AShieldCard_Statics::NewProp_ShieldRestored = { "ShieldRestored", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AShieldCard, ShieldRestored), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCard_Statics::NewProp_ShieldRestored_MetaData), Z_Construct_UClass_AShieldCard_Statics::NewProp_ShieldRestored_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield_MetaData[] = {
		{ "Category", "ShieldCard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//determines if the card restores a percentage of shield\n" },
#endif
		{ "ModuleRelativePath", "ShieldCard.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "determines if the card restores a percentage of shield" },
#endif
	};
#endif
	void Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield_SetBit(void* Obj)
	{
		((AShieldCard*)Obj)->IsPercentileShield = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield = { "IsPercentileShield", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AShieldCard), &Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield_MetaData), Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AShieldCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCard_Statics::NewProp_ShieldRestored,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AShieldCard_Statics::NewProp_IsPercentileShield,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShieldCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShieldCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShieldCard_Statics::ClassParams = {
		&AShieldCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AShieldCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AShieldCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShieldCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AShieldCard()
	{
		if (!Z_Registration_Info_UClass_AShieldCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShieldCard.OuterSingleton, Z_Construct_UClass_AShieldCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShieldCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AShieldCard>()
	{
		return AShieldCard::StaticClass();
	}
	AShieldCard::AShieldCard() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShieldCard);
	AShieldCard::~AShieldCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShieldCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShieldCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShieldCard, AShieldCard::StaticClass, TEXT("AShieldCard"), &Z_Registration_Info_UClass_AShieldCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShieldCard), 3513321076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShieldCard_h_2333727100(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShieldCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShieldCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
