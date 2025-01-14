// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/BTTask_CircleTarget.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_CircleTarget() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_UBTTask_CircleTarget();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_UBTTask_CircleTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void UBTTask_CircleTarget::StaticRegisterNativesUBTTask_CircleTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_CircleTarget);
	UClass* Z_Construct_UClass_UBTTask_CircleTarget_NoRegister()
	{
		return UBTTask_CircleTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_CircleTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SineKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SineKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToSwitchDir_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToSwitchDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_CircleTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CircleTarget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BTTask_CircleTarget.h" },
		{ "ModuleRelativePath", "BTTask_CircleTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TargetKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_CircleTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CircleTarget, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TargetKey_MetaData), Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TargetKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SineKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_CircleTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SineKey = { "SineKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CircleTarget, SineKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SineKey_MetaData), Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SineKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SpeedKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_CircleTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SpeedKey = { "SpeedKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CircleTarget, SpeedKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SpeedKey_MetaData), Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SpeedKey_MetaData) }; // 3137324432
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TimeToSwitchDir_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "BTTask_CircleTarget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TimeToSwitchDir = { "TimeToSwitchDir", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_CircleTarget, TimeToSwitchDir), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TimeToSwitchDir_MetaData), Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TimeToSwitchDir_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_CircleTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TargetKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SineKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_SpeedKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_CircleTarget_Statics::NewProp_TimeToSwitchDir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_CircleTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_CircleTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_CircleTarget_Statics::ClassParams = {
		&UBTTask_CircleTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_CircleTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_CircleTarget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_CircleTarget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_CircleTarget()
	{
		if (!Z_Registration_Info_UClass_UBTTask_CircleTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_CircleTarget.OuterSingleton, Z_Construct_UClass_UBTTask_CircleTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_CircleTarget.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<UBTTask_CircleTarget>()
	{
		return UBTTask_CircleTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_CircleTarget);
	UBTTask_CircleTarget::~UBTTask_CircleTarget() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BTTask_CircleTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BTTask_CircleTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_CircleTarget, UBTTask_CircleTarget::StaticClass, TEXT("UBTTask_CircleTarget"), &Z_Registration_Info_UClass_UBTTask_CircleTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_CircleTarget), 1433482070U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BTTask_CircleTarget_h_2923975349(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BTTask_CircleTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_BTTask_CircleTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
