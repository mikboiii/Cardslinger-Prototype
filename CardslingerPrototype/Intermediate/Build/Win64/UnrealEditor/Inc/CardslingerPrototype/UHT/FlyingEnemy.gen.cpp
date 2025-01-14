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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tempBody_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tempBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlyingSpeedMod_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FlyingSpeedMod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_tempBody_MetaData[] = {
		{ "Category", "FlyingEnemy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FlyingEnemy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_tempBody = { "tempBody", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingEnemy, tempBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_tempBody_MetaData), Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_tempBody_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_FlyingSpeedMod_MetaData[] = {
		{ "Category", "FlyingEnemy" },
		{ "ModuleRelativePath", "FlyingEnemy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_FlyingSpeedMod = { "FlyingSpeedMod", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlyingEnemy, FlyingSpeedMod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_FlyingSpeedMod_MetaData), Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_FlyingSpeedMod_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlyingEnemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_tempBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlyingEnemy_Statics::NewProp_FlyingSpeedMod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlyingEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlyingEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlyingEnemy_Statics::ClassParams = {
		&AFlyingEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFlyingEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlyingEnemy_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlyingEnemy_Statics::PropPointers) < 2048);
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlyingEnemy);
	AFlyingEnemy::~AFlyingEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFlyingEnemy, AFlyingEnemy::StaticClass, TEXT("AFlyingEnemy"), &Z_Registration_Info_UClass_AFlyingEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlyingEnemy), 1202299423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_512398693(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_FlyingEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
