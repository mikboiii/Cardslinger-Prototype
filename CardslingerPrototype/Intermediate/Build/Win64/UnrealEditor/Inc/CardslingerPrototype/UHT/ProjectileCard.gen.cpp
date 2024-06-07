// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CardslingerPrototype/ProjectileCard.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileCard() {}
// Cross Module References
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard();
	CARDSLINGERPROTOTYPE_API UClass* Z_Construct_UClass_AProjectileCard_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CardslingerPrototype();
// End Cross Module References
	DEFINE_FUNCTION(AProjectileCard::execCalculateCurveControlPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateCurveControlPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectileCard::execCalculateMidPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalculateMidPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectileCard::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AProjectileCard::execSetHomingTarget)
	{
		P_GET_STRUCT(FVector,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHomingTarget(Z_Param_Target);
		P_NATIVE_END;
	}
	void AProjectileCard::StaticRegisterNativesAProjectileCard()
	{
		UClass* Class = AProjectileCard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateCurveControlPoint", &AProjectileCard::execCalculateCurveControlPoint },
			{ "CalculateMidPoint", &AProjectileCard::execCalculateMidPoint },
			{ "OnHit", &AProjectileCard::execOnHit },
			{ "SetHomingTarget", &AProjectileCard::execSetHomingTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileCard, nullptr, "CalculateCurveControlPoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileCard_CalculateMidPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_CalculateMidPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileCard_CalculateMidPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileCard, nullptr, "CalculateMidPoint", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_CalculateMidPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileCard_CalculateMidPoint_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AProjectileCard_CalculateMidPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileCard_CalculateMidPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileCard_OnHit_Statics
	{
		struct ProjectileCard_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileCard_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_HitComponent_MetaData), Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_HitComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileCard_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileCard_eventOnHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherComponent_MetaData), Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileCard_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileCard_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_Hit_MetaData), Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_Hit_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileCard_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_OtherComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileCard_OnHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileCard_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileCard, nullptr, "OnHit", nullptr, nullptr, Z_Construct_UFunction_AProjectileCard_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::ProjectileCard_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileCard_OnHit_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AProjectileCard_OnHit_Statics::ProjectileCard_eventOnHit_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AProjectileCard_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileCard_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics
	{
		struct ProjectileCard_eventSetHomingTarget_Parms
		{
			FVector Target;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectileCard_eventSetHomingTarget_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectileCard, nullptr, "SetHomingTarget", nullptr, nullptr, Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::ProjectileCard_eventSetHomingTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::ProjectileCard_eventSetHomingTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AProjectileCard_SetHomingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProjectileCard_SetHomingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectileCard);
	UClass* Z_Construct_UClass_AProjectileCard_NoRegister()
	{
		return AProjectileCard::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileCard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardLifetime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardLifetime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParticleScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardTrail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTrail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardImpact_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardImpact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CardSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CardDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CardDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MidPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MidPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvedPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurvedPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCurveRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCurveRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurveRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurveRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinCurvePointDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinCurvePointDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurvePointDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCurvePointDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileCard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CardslingerPrototype,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AProjectileCard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AProjectileCard_CalculateCurveControlPoint, "CalculateCurveControlPoint" }, // 2280886562
		{ &Z_Construct_UFunction_AProjectileCard_CalculateMidPoint, "CalculateMidPoint" }, // 2990521993
		{ &Z_Construct_UFunction_AProjectileCard_OnHit, "OnHit" }, // 119443953
		{ &Z_Construct_UFunction_AProjectileCard_SetHomingTarget, "SetHomingTarget" }, // 4222389383
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileCard.h" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime = { "CardLifetime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardLifetime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_ParticleScale_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_ParticleScale = { "ParticleScale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, ParticleScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_ParticleScale_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_ParticleScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardCollision_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardCollision = { "CardCollision", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardCollision_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardCollision_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardTrail_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardTrail = { "CardTrail", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardTrail), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardTrail_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardTrail_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardImpact_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardImpact = { "CardImpact", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardImpact), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardImpact_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardImpact_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSpeed_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSpeed = { "CardSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSpeed_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSkeletalMesh_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSkeletalMesh = { "CardSkeletalMesh", nullptr, (EPropertyFlags)0x0022080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSkeletalMesh_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSkeletalMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardVelocity_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardVelocity = { "CardVelocity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardVelocity_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardDamage_MetaData[] = {
		{ "Category", "ProjectileCard" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardDamage = { "CardDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CardDamage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardDamage_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardDamage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_TargetLocation_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_TargetLocation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MidPoint_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MidPoint = { "MidPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MidPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MidPoint_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MidPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_CurvedPoint_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_CurvedPoint = { "CurvedPoint", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, CurvedPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_CurvedPoint_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_CurvedPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurveRadius_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurveRadius = { "MinCurveRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MinCurveRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurveRadius_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurveRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurveRadius_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurveRadius = { "MaxCurveRadius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MaxCurveRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurveRadius_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurveRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurvePointDistance_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurvePointDistance = { "MinCurvePointDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MinCurvePointDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurvePointDistance_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurvePointDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurvePointDistance_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurvePointDistance = { "MaxCurvePointDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MaxCurvePointDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurvePointDistance_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurvePointDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinAngle_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinAngle = { "MinAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MinAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinAngle_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxAngle_MetaData[] = {
		{ "Category", "Projectile Flight" },
		{ "ModuleRelativePath", "ProjectileCard.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxAngle = { "MaxAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectileCard, MaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxAngle_MetaData), Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxAngle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardLifetime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_ParticleScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardTrail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardImpact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CardDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MidPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_CurvedPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurveRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurveRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinCurvePointDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxCurvePointDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MinAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileCard_Statics::NewProp_MaxAngle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileCard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileCard>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectileCard_Statics::ClassParams = {
		&AProjectileCard::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AProjectileCard_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectileCard_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileCard_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AProjectileCard()
	{
		if (!Z_Registration_Info_UClass_AProjectileCard.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectileCard.OuterSingleton, Z_Construct_UClass_AProjectileCard_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectileCard.OuterSingleton;
	}
	template<> CARDSLINGERPROTOTYPE_API UClass* StaticClass<AProjectileCard>()
	{
		return AProjectileCard::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileCard);
	AProjectileCard::~AProjectileCard() {}
	struct Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectileCard, AProjectileCard::StaticClass, TEXT("AProjectileCard"), &Z_Registration_Info_UClass_AProjectileCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectileCard), 1848944215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_2403932426(TEXT("/Script/CardslingerPrototype"),
		Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Mikolaj_Documents_Unreal_Projects_Cardslinger_Prototype_CardslingerPrototype_Source_CardslingerPrototype_ProjectileCard_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
