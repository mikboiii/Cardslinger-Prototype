// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/FlyingEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlyingEnemy() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseAIClass();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AFlyingEnemy();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AFlyingEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AFlyingEnemy::StaticRegisterNativesAFlyingEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlyingEnemy);
	UClass* Z_Construct_UClass_AFlyingEnemy_NoRegister()
	{
		return AFlyingEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFlyingEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlyingEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseAIClass,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FlyingEnemy.h" },
		{ "ModuleRelativePath", "FlyingEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyingEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyingEnemy_Statics::ClassParams = {
		&AFlyingEnemy::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlyingEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFlyingEnemy()
	{
		if (!Z_Registration_Info_UClass_AFlyingEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlyingEnemy.OuterSingleton, Z_Construct_UClass_AFlyingEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFlyingEnemy.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AFlyingEnemy>()
	{
		return AFlyingEnemy::StaticClass();
	}
	AFlyingEnemy::AFlyingEnemy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingEnemy);
	AFlyingEnemy::~AFlyingEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlyingEnemy, AFlyingEnemy::StaticClass, TEXT("AFlyingEnemy"), &Z_Registration_Info_UClass_AFlyingEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyingEnemy), 1786289666U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_1943832640(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
