// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/CardslingerPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardslingerPlayerController() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerPlayerController();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerPlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void ACardslingerPlayerController::StaticRegisterNativesACardslingerPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardslingerPlayerController);
	UClass* Z_Construct_UClass_ACardslingerPlayerController_NoRegister()
	{
		return ACardslingerPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACardslingerPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestartDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestartDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDScreenClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardslingerPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CardslingerPlayerController.h" },
		{ "ModuleRelativePath", "CardslingerPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "CardslingerPlayerController" },
		{ "ModuleRelativePath", "CardslingerPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardslingerPlayerController, LoseScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_LoseScreenClass_MetaData), Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_LoseScreenClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "CardslingerPlayerController" },
		{ "ModuleRelativePath", "CardslingerPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardslingerPlayerController, WinScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_WinScreenClass_MetaData), Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_WinScreenClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_RestartDelay_MetaData[] = {
		{ "Category", "CardslingerPlayerController" },
		{ "ModuleRelativePath", "CardslingerPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_RestartDelay = { "RestartDelay", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardslingerPlayerController, RestartDelay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_RestartDelay_MetaData), Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_RestartDelay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_HUDScreenClass_MetaData[] = {
		{ "Category", "CardslingerPlayerController" },
		{ "ModuleRelativePath", "CardslingerPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_HUDScreenClass = { "HUDScreenClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardslingerPlayerController, HUDScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_HUDScreenClass_MetaData), Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_HUDScreenClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardslingerPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_LoseScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_WinScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_RestartDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardslingerPlayerController_Statics::NewProp_HUDScreenClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardslingerPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardslingerPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardslingerPlayerController_Statics::ClassParams = {
		&ACardslingerPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACardslingerPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardslingerPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACardslingerPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACardslingerPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardslingerPlayerController.OuterSingleton, Z_Construct_UClass_ACardslingerPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardslingerPlayerController.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ACardslingerPlayerController>()
	{
		return ACardslingerPlayerController::StaticClass();
	}
	ACardslingerPlayerController::ACardslingerPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardslingerPlayerController);
	ACardslingerPlayerController::~ACardslingerPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardslingerPlayerController, ACardslingerPlayerController::StaticClass, TEXT("ACardslingerPlayerController"), &Z_Registration_Info_UClass_ACardslingerPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardslingerPlayerController), 960935928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerPlayerController_h_2426568546(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
