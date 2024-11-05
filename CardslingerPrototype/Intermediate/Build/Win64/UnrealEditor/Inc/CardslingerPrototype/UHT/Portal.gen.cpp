// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/Portal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortal() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_APortal();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_APortal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void APortal::StaticRegisterNativesAPortal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortal);
	UClass* Z_Construct_UClass_APortal_NoRegister()
	{
		return APortal::StaticClass();
	}
	struct Z_Construct_UClass_APortal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortalPlane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PortalPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Portal.h" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortal_Statics::NewProp_PortalPlane_MetaData[] = {
		{ "Category", "Portal" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portal.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortal_Statics::NewProp_PortalPlane = { "PortalPlane", nullptr, (EPropertyFlags)0x002208000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortal, PortalPlane), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::NewProp_PortalPlane_MetaData), Z_Construct_UClass_APortal_Statics::NewProp_PortalPlane_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortal_Statics::NewProp_PortalPlane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APortal_Statics::ClassParams = {
		&APortal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APortal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::Class_MetaDataParams), Z_Construct_UClass_APortal_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortal_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APortal()
	{
		if (!Z_Registration_Info_UClass_APortal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortal.OuterSingleton, Z_Construct_UClass_APortal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APortal.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<APortal>()
	{
		return APortal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortal);
	APortal::~APortal() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_Portal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_Portal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APortal, APortal::StaticClass, TEXT("APortal"), &Z_Registration_Info_UClass_APortal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortal), 651265316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_Portal_h_3541781505(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_Portal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_Portal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
