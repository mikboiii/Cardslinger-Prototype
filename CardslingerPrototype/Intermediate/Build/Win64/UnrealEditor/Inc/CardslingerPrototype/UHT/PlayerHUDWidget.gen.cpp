// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/PlayerHUDWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerHUDWidget() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerHUDWidget();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	void UPlayerHUDWidget::StaticRegisterNativesUPlayerHUDWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerHUDWidget);
	UClass* Z_Construct_UClass_UPlayerHUDWidget_NoRegister()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerHUDWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PlayerHUDWidget.h" },
		{ "ModuleRelativePath", "PlayerHUDWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CardPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerHUDWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CardPanel = { "CardPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerHUDWidget, CardPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CardPanel_MetaData), Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CardPanel_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerHUDWidget_Statics::NewProp_CardPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerHUDWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerHUDWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams = {
		&UPlayerHUDWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerHUDWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerHUDWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerHUDWidget()
	{
		if (!Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton, Z_Construct_UClass_UPlayerHUDWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerHUDWidget.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<UPlayerHUDWidget>()
	{
		return UPlayerHUDWidget::StaticClass();
	}
	UPlayerHUDWidget::UPlayerHUDWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerHUDWidget);
	UPlayerHUDWidget::~UPlayerHUDWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_PlayerHUDWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_PlayerHUDWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerHUDWidget, UPlayerHUDWidget::StaticClass, TEXT("UPlayerHUDWidget"), &Z_Registration_Info_UClass_UPlayerHUDWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerHUDWidget), 1276174699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_PlayerHUDWidget_h_3591660472(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_PlayerHUDWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_PlayerHUDWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
