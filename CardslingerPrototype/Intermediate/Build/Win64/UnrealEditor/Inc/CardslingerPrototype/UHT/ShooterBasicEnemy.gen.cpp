// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ShooterBasicEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterBasicEnemy() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseAIClass();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AShooterBasicEnemy();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AShooterBasicEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AShooterBasicEnemy::StaticRegisterNativesAShooterBasicEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterBasicEnemy);
	UClass* Z_Construct_UClass_AShooterBasicEnemy_NoRegister()
	{
		return AShooterBasicEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AShooterBasicEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterBasicEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseAIClass,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBasicEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterBasicEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ShooterBasicEnemy.h" },
		{ "ModuleRelativePath", "ShooterBasicEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterBasicEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterBasicEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterBasicEnemy_Statics::ClassParams = {
		&AShooterBasicEnemy::StaticClass,
		"Game",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterBasicEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterBasicEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShooterBasicEnemy()
	{
		if (!Z_Registration_Info_UClass_AShooterBasicEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterBasicEnemy.OuterSingleton, Z_Construct_UClass_AShooterBasicEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterBasicEnemy.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AShooterBasicEnemy>()
	{
		return AShooterBasicEnemy::StaticClass();
	}
	AShooterBasicEnemy::AShooterBasicEnemy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterBasicEnemy);
	AShooterBasicEnemy::~AShooterBasicEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterBasicEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterBasicEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterBasicEnemy, AShooterBasicEnemy::StaticClass, TEXT("AShooterBasicEnemy"), &Z_Registration_Info_UClass_AShooterBasicEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterBasicEnemy), 3311509743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterBasicEnemy_h_670328169(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterBasicEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterBasicEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
