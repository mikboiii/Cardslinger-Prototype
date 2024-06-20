// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/CardDeck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardDeck() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ABaseCard_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_ACardDeck_NoRegister();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ACardDeck::execDrawCardNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DrawCardNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execIsDeckEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDeckEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execShuffleDeck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShuffleDeck();
		P_NATIVE_END;
	}
	void ACardDeck::StaticRegisterNativesACardDeck()
	{
		UClass* Class = ACardDeck::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawCardNum", &ACardDeck::execDrawCardNum },
			{ "IsDeckEmpty", &ACardDeck::execIsDeckEmpty },
			{ "ShuffleDeck", &ACardDeck::execShuffleDeck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics
	{
		struct CardDeck_eventDrawCardNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventDrawCardNum_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "DrawCardNum", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::CardDeck_eventDrawCardNum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::CardDeck_eventDrawCardNum_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_DrawCardNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_DrawCardNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics
	{
		struct CardDeck_eventIsDeckEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CardDeck_eventIsDeckEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CardDeck_eventIsDeckEmpty_Parms), &Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "IsDeckEmpty", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::CardDeck_eventIsDeckEmpty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::CardDeck_eventIsDeckEmpty_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_IsDeckEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_IsDeckEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "ShuffleDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACardDeck_ShuffleDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_ShuffleDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardDeck);
	UClass* Z_Construct_UClass_ACardDeck_NoRegister()
	{
		return ACardDeck::StaticClass();
	}
	struct Z_Construct_UClass_ACardDeck_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DrawPile_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawPile_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DrawPile;
		static const UECodeGen_Private::FClassPropertyParams NewProp_DiscardPile_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscardPile_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DiscardPile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileCardClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileCardClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACardDeck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ACardDeck_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACardDeck_DrawCardNum, "DrawCardNum" }, // 3267924769
		{ &Z_Construct_UFunction_ACardDeck_IsDeckEmpty, "IsDeckEmpty" }, // 4039522181
		{ &Z_Construct_UFunction_ACardDeck_ShuffleDeck, "ShuffleDeck" }, // 2171445598
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CardDeck.h" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile_Inner = { "DrawPile", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile_MetaData[] = {
		{ "Category", "CardDeck" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile = { "DrawPile", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, DrawPile), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile_Inner = { "DiscardPile", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile_MetaData[] = {
		{ "Category", "CardDeck" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile = { "DiscardPile", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, DiscardPile), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass_MetaData[] = {
		{ "Category", "Card Types" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass = { "ProjectileCardClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, ProjectileCardClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh_MetaData[] = {
		{ "Category", "CardDeck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh = { "CardSkeletalMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, CardSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACardDeck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardDeck>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardDeck_Statics::ClassParams = {
		&ACardDeck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACardDeck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACardDeck()
	{
		if (!Z_Registration_Info_UClass_ACardDeck.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardDeck.OuterSingleton, Z_Construct_UClass_ACardDeck_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACardDeck.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<ACardDeck>()
	{
		return ACardDeck::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACardDeck);
	ACardDeck::~ACardDeck() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACardDeck, ACardDeck::StaticClass, TEXT("ACardDeck"), &Z_Registration_Info_UClass_ACardDeck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardDeck), 3853916523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_1096337880(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
