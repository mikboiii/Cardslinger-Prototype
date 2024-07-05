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
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ACardDeck::execRemoveCardAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCardAtIndex(Z_Param_Index,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execRemoveCard)
	{
		P_GET_OBJECT(UClass,Z_Param_CardToRemove);
		P_GET_UBOOL(Z_Param_bIsPermanent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCard(Z_Param_CardToRemove,Z_Param_bIsPermanent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execAddCard)
	{
		P_GET_OBJECT(UClass,Z_Param_CardToAdd);
		P_GET_UBOOL(Z_Param_bAddToDiscard);
		P_GET_UBOOL(Z_Param_bIsTemporaryCard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCard(Z_Param_CardToAdd,Z_Param_bAddToDiscard,Z_Param_bIsTemporaryCard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execLoadDeck)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<TSubclassOf<ABaseCard> >*)Z_Param__Result=P_THIS->LoadDeck(Z_Param_SavePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execManualSaveDeck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManualSaveDeck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACardDeck::execSaveDeck)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveDeck(Z_Param_SavePath);
		P_NATIVE_END;
	}
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
			{ "AddCard", &ACardDeck::execAddCard },
			{ "DrawCardNum", &ACardDeck::execDrawCardNum },
			{ "IsDeckEmpty", &ACardDeck::execIsDeckEmpty },
			{ "LoadDeck", &ACardDeck::execLoadDeck },
			{ "ManualSaveDeck", &ACardDeck::execManualSaveDeck },
			{ "RemoveCard", &ACardDeck::execRemoveCard },
			{ "RemoveCardAtIndex", &ACardDeck::execRemoveCardAtIndex },
			{ "SaveDeck", &ACardDeck::execSaveDeck },
			{ "ShuffleDeck", &ACardDeck::execShuffleDeck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACardDeck_AddCard_Statics
	{
		struct CardDeck_eventAddCard_Parms
		{
			TSubclassOf<ABaseCard>  CardToAdd;
			bool bAddToDiscard;
			bool bIsTemporaryCard;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardToAdd;
		static void NewProp_bAddToDiscard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToDiscard;
		static void NewProp_bIsTemporaryCard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemporaryCard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_CardToAdd = { "CardToAdd", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventAddCard_Parms, CardToAdd), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bAddToDiscard_SetBit(void* Obj)
	{
		((CardDeck_eventAddCard_Parms*)Obj)->bAddToDiscard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bAddToDiscard = { "bAddToDiscard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CardDeck_eventAddCard_Parms), &Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bAddToDiscard_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bIsTemporaryCard_SetBit(void* Obj)
	{
		((CardDeck_eventAddCard_Parms*)Obj)->bIsTemporaryCard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bIsTemporaryCard = { "bIsTemporaryCard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CardDeck_eventAddCard_Parms), &Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bIsTemporaryCard_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_AddCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_CardToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bAddToDiscard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_AddCard_Statics::NewProp_bIsTemporaryCard,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_AddCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_AddCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "AddCard", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_AddCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_AddCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_AddCard_Statics::CardDeck_eventAddCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_AddCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_AddCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_AddCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_AddCard_Statics::CardDeck_eventAddCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_AddCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_AddCard_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_ACardDeck_LoadDeck_Statics
	{
		struct CardDeck_eventLoadDeck_Parms
		{
			FString SavePath;
			TArray<TSubclassOf<ABaseCard> > ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventLoadDeck_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_SavePath_MetaData), Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_SavePath_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventLoadDeck_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_SavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "LoadDeck", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::CardDeck_eventLoadDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::CardDeck_eventLoadDeck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_LoadDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_LoadDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACardDeck_ManualSaveDeck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_ManualSaveDeck_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Deck Settings" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_ManualSaveDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "ManualSaveDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_ManualSaveDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_ManualSaveDeck_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ACardDeck_ManualSaveDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_ManualSaveDeck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACardDeck_RemoveCard_Statics
	{
		struct CardDeck_eventRemoveCard_Parms
		{
			TSubclassOf<ABaseCard>  CardToRemove;
			bool bIsPermanent;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardToRemove;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::NewProp_CardToRemove = { "CardToRemove", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventRemoveCard_Parms, CardToRemove), Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((CardDeck_eventRemoveCard_Parms*)Obj)->bIsPermanent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CardDeck_eventRemoveCard_Parms), &Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::NewProp_CardToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "RemoveCard", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::CardDeck_eventRemoveCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::CardDeck_eventRemoveCard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_RemoveCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_RemoveCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics
	{
		struct CardDeck_eventRemoveCardAtIndex_Parms
		{
			int32 Index;
			bool bIsPermanent;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_bIsPermanent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPermanent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventRemoveCardAtIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::NewProp_bIsPermanent_SetBit(void* Obj)
	{
		((CardDeck_eventRemoveCardAtIndex_Parms*)Obj)->bIsPermanent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::NewProp_bIsPermanent = { "bIsPermanent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CardDeck_eventRemoveCardAtIndex_Parms), &Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::NewProp_bIsPermanent_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::NewProp_bIsPermanent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "RemoveCardAtIndex", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::CardDeck_eventRemoveCardAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::CardDeck_eventRemoveCardAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACardDeck_SaveDeck_Statics
	{
		struct CardDeck_eventSaveDeck_Parms
		{
			FString SavePath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardDeck_eventSaveDeck_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::NewProp_SavePath_MetaData), Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::NewProp_SavePath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::NewProp_SavePath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardDeck, nullptr, "SaveDeck", nullptr, nullptr, Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::CardDeck_eventSaveDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::CardDeck_eventSaveDeck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ACardDeck_SaveDeck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardDeck_SaveDeck_Statics::FuncParams);
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
		static const UECodeGen_Private::FClassPropertyParams NewProp_FullDeck_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullDeck_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FullDeck;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSkeletalMeshTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardSkeletalMeshTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadDelayPerCard_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadDelayPerCard;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardAnimationBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CardAnimationBlueprint;
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
		{ &Z_Construct_UFunction_ACardDeck_AddCard, "AddCard" }, // 1706490072
		{ &Z_Construct_UFunction_ACardDeck_DrawCardNum, "DrawCardNum" }, // 3267924769
		{ &Z_Construct_UFunction_ACardDeck_IsDeckEmpty, "IsDeckEmpty" }, // 4039522181
		{ &Z_Construct_UFunction_ACardDeck_LoadDeck, "LoadDeck" }, // 942631614
		{ &Z_Construct_UFunction_ACardDeck_ManualSaveDeck, "ManualSaveDeck" }, // 3374956247
		{ &Z_Construct_UFunction_ACardDeck_RemoveCard, "RemoveCard" }, // 3629350694
		{ &Z_Construct_UFunction_ACardDeck_RemoveCardAtIndex, "RemoveCardAtIndex" }, // 184564122
		{ &Z_Construct_UFunction_ACardDeck_SaveDeck, "SaveDeck" }, // 77588520
		{ &Z_Construct_UFunction_ACardDeck_ShuffleDeck, "ShuffleDeck" }, // 2171445598
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CardDeck.h" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck_Inner = { "FullDeck", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ABaseCard_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck_MetaData[] = {
		{ "Category", "Deck Settings" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck = { "FullDeck", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, FullDeck), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMeshTemplate_MetaData[] = {
		{ "Category", "Card Types" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMeshTemplate = { "CardSkeletalMeshTemplate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, CardSkeletalMeshTemplate), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMeshTemplate_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMeshTemplate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_ReloadDelayPerCard_MetaData[] = {
		{ "Category", "CardDeck" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_ReloadDelayPerCard = { "ReloadDelayPerCard", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, ReloadDelayPerCard), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_ReloadDelayPerCard_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_ReloadDelayPerCard_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_CardAnimationBlueprint_MetaData[] = {
		{ "Category", "Card Types" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_CardAnimationBlueprint = { "CardAnimationBlueprint", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, CardAnimationBlueprint), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_CardAnimationBlueprint_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_CardAnimationBlueprint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh_MetaData[] = {
		{ "Category", "CardDeck" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardDeck.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh = { "CardSkeletalMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardDeck, CardSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh_MetaData), Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardDeck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_FullDeck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DrawPile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_DiscardPile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_ProjectileCardClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_CardSkeletalMeshTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_ReloadDelayPerCard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardDeck_Statics::NewProp_CardAnimationBlueprint,
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
		{ Z_Construct_UClass_ACardDeck, ACardDeck::StaticClass, TEXT("ACardDeck"), &Z_Registration_Info_UClass_ACardDeck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardDeck), 836562737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_3541592726(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_CardDeck_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
