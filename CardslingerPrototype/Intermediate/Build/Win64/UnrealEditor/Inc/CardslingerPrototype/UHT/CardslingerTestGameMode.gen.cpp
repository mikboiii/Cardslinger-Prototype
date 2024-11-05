// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/CardslingerTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardslingerTestGameMode() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerTestGameMode();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardslingerTestGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ACardslingerTestGameMode::execNPCKillAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NPCKillAll();
		P_NATIVE_END;
	}
	void ACardslingerTestGameMode::StaticRegisterNativesACardslingerTestGameMode()
	{
		UClass* Class = ACardslingerTestGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NPCKillAll", &ACardslingerTestGameMode::execNPCKillAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "CardslingerTestGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardslingerTestGameMode, nullptr, "NPCKillAll", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardslingerTestGameMode);
	UClass* Z_Construct_UClass_ACardslingerTestGameMode_NoRegister()
	{
		return ACardslingerTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACardslingerTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardslingerTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerTestGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACardslingerTestGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACardslingerTestGameMode_NPCKillAll, "NPCKillAll" }, // 3583723943
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerTestGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardslingerTestGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CardslingerTestGameMode.h" },
		{ "ModuleRelativePath", "CardslingerTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardslingerTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardslingerTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardslingerTestGameMode_Statics::ClassParams = {
		&ACardslingerTestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardslingerTestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardslingerTestGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACardslingerTestGameMode()
	{
		if (!Z_Registration_Info_UClass_ACardslingerTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardslingerTestGameMode.OuterSingleton, Z_Construct_UClass_ACardslingerTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardslingerTestGameMode.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ACardslingerTestGameMode>()
	{
		return ACardslingerTestGameMode::StaticClass();
	}
	ACardslingerTestGameMode::ACardslingerTestGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardslingerTestGameMode);
	ACardslingerTestGameMode::~ACardslingerTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardslingerTestGameMode, ACardslingerTestGameMode::StaticClass, TEXT("ACardslingerTestGameMode"), &Z_Registration_Info_UClass_ACardslingerTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardslingerTestGameMode), 1371415189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerTestGameMode_h_1792737237(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardslingerTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
