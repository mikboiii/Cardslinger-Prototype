// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/CardslingerLevelLoadingTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardslingerLevelLoadingTest() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerLevelLoadingTest();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerLevelLoadingTest_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerTestGameMode();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ACardslingerLevelLoadingTest::StaticRegisterNativesACardslingerLevelLoadingTest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardslingerLevelLoadingTest);
	UClass* Z_Construct_UClass_ACardslingerLevelLoadingTest_NoRegister()
	{
		return ACardslingerLevelLoadingTest::StaticClass();
	}
	struct Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACardslingerTestGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CardslingerLevelLoadingTest.h" },
		{ "ModuleRelativePath", "CardslingerLevelLoadingTest.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardslingerLevelLoadingTest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::ClassParams = {
		&ACardslingerLevelLoadingTest::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACardslingerLevelLoadingTest()
	{
		if (!Z_Registration_Info_UClass_ACardslingerLevelLoadingTest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardslingerLevelLoadingTest.OuterSingleton, Z_Construct_UClass_ACardslingerLevelLoadingTest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardslingerLevelLoadingTest.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ACardslingerLevelLoadingTest>()
	{
		return ACardslingerLevelLoadingTest::StaticClass();
	}
	ACardslingerLevelLoadingTest::ACardslingerLevelLoadingTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardslingerLevelLoadingTest);
	ACardslingerLevelLoadingTest::~ACardslingerLevelLoadingTest() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerLevelLoadingTest_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerLevelLoadingTest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardslingerLevelLoadingTest, ACardslingerLevelLoadingTest::StaticClass, TEXT("ACardslingerLevelLoadingTest"), &Z_Registration_Info_UClass_ACardslingerLevelLoadingTest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardslingerLevelLoadingTest), 3592845751U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerLevelLoadingTest_h_3089531558(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerLevelLoadingTest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerLevelLoadingTest_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
