// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/BaseCharacterClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterClass() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacterClass();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCharacterClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ABaseCharacterClass::StaticRegisterNativesABaseCharacterClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacterClass);
	UClass* Z_Construct_UClass_ABaseCharacterClass_NoRegister()
	{
		return ABaseCharacterClass::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacterClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacterClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacterClass.h" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, Health), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "BaseCharacterClass" },
		{ "ModuleRelativePath", "BaseCharacterClass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacterClass, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth_MetaData), Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_Health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacterClass_Statics::NewProp_MaxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacterClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacterClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacterClass_Statics::ClassParams = {
		&ABaseCharacterClass::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacterClass_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacterClass_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseCharacterClass()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacterClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacterClass.OuterSingleton, Z_Construct_UClass_ABaseCharacterClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacterClass.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ABaseCharacterClass>()
	{
		return ABaseCharacterClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacterClass);
	ABaseCharacterClass::~ABaseCharacterClass() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacterClass, ABaseCharacterClass::StaticClass, TEXT("ABaseCharacterClass"), &Z_Registration_Info_UClass_ABaseCharacterClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacterClass), 2891409666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_1583235335(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BaseCharacterClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
