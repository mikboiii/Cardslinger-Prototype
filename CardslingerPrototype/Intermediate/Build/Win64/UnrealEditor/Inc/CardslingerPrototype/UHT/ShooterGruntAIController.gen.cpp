// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ShooterGruntAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterGruntAIController() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseAIController();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AShooterGruntAIController();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AShooterGruntAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void AShooterGruntAIController::StaticRegisterNativesAShooterGruntAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShooterGruntAIController);
	UClass* Z_Construct_UClass_AShooterGruntAIController_NoRegister()
	{
		return AShooterGruntAIController::StaticClass();
	}
	struct Z_Construct_UClass_AShooterGruntAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterGruntAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGruntAIController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterGruntAIController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ShooterGruntAIController.h" },
		{ "ModuleRelativePath", "ShooterGruntAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterGruntAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterGruntAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShooterGruntAIController_Statics::ClassParams = {
		&AShooterGruntAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShooterGruntAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AShooterGruntAIController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AShooterGruntAIController()
	{
		if (!Z_Registration_Info_UClass_AShooterGruntAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShooterGruntAIController.OuterSingleton, Z_Construct_UClass_AShooterGruntAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShooterGruntAIController.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AShooterGruntAIController>()
	{
		return AShooterGruntAIController::StaticClass();
	}
	AShooterGruntAIController::AShooterGruntAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterGruntAIController);
	AShooterGruntAIController::~AShooterGruntAIController() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterGruntAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterGruntAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShooterGruntAIController, AShooterGruntAIController::StaticClass, TEXT("AShooterGruntAIController"), &Z_Registration_Info_UClass_AShooterGruntAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShooterGruntAIController), 807289289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterGruntAIController_h_3766884328(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterGruntAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ShooterGruntAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
