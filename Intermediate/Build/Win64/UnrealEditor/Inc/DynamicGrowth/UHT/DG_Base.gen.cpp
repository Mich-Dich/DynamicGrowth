// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicGrowth/Public/DG_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDG_Base() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DYNAMICGROWTH_API UClass* Z_Construct_UClass_ADG_Base();
	DYNAMICGROWTH_API UClass* Z_Construct_UClass_ADG_Base_NoRegister();
	DYNAMICGROWTH_API UEnum* Z_Construct_UEnum_DynamicGrowth_EDebugType();
	DYNAMICGROWTH_API UEnum* Z_Construct_UEnum_DynamicGrowth_EGrowTarget();
	DYNAMICGROWTH_API UEnum* Z_Construct_UEnum_DynamicGrowth_ETraceType();
	DYNAMICGROWTH_API UScriptStruct* Z_Construct_UScriptStruct_FTimeMeasurement();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DynamicGrowth();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrowTarget;
	static UEnum* EGrowTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGrowTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGrowTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DynamicGrowth_EGrowTarget, (UObject*)Z_Construct_UPackage__Script_DynamicGrowth(), TEXT("EGrowTarget"));
		}
		return Z_Registration_Info_UEnum_EGrowTarget.OuterSingleton;
	}
	template<> DYNAMICGROWTH_API UEnum* StaticEnum<EGrowTarget>()
	{
		return EGrowTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::Enumerators[] = {
		{ "GrowDirection", (int64)GrowDirection },
		{ "GrowToTargetLocation", (int64)GrowToTargetLocation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n - - - - - ENUMS\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/" },
		{ "GrowDirection.DisplayName", "Grow in Direction" },
		{ "GrowDirection.Name", "GrowDirection" },
		{ "GrowToTargetLocation.DisplayName", "Grow to Target Location" },
		{ "GrowToTargetLocation.Name", "GrowToTargetLocation" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "- - - - - ENUMS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DynamicGrowth,
		nullptr,
		"EGrowTarget",
		"EGrowTarget",
		Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DynamicGrowth_EGrowTarget()
	{
		if (!Z_Registration_Info_UEnum_EGrowTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrowTarget.InnerSingleton, Z_Construct_UEnum_DynamicGrowth_EGrowTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGrowTarget.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETraceType;
	static UEnum* ETraceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETraceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETraceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DynamicGrowth_ETraceType, (UObject*)Z_Construct_UPackage__Script_DynamicGrowth(), TEXT("ETraceType"));
		}
		return Z_Registration_Info_UEnum_ETraceType.OuterSingleton;
	}
	template<> DYNAMICGROWTH_API UEnum* StaticEnum<ETraceType>()
	{
		return ETraceType_StaticEnum();
	}
	struct Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::Enumerators[] = {
		{ "UseLineTrace", (int64)UseLineTrace },
		{ "UseSphereTrace", (int64)UseSphereTrace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "UseLineTrace.DisplayName", "Use Line-Trace" },
		{ "UseLineTrace.Name", "UseLineTrace" },
		{ "UseSphereTrace.DisplayName", "Use Sphere-Trace" },
		{ "UseSphereTrace.Name", "UseSphereTrace" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DynamicGrowth,
		nullptr,
		"ETraceType",
		"ETraceType",
		Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DynamicGrowth_ETraceType()
	{
		if (!Z_Registration_Info_UEnum_ETraceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETraceType.InnerSingleton, Z_Construct_UEnum_DynamicGrowth_ETraceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETraceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDebugType;
	static UEnum* EDebugType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDebugType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDebugType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DynamicGrowth_EDebugType, (UObject*)Z_Construct_UPackage__Script_DynamicGrowth(), TEXT("EDebugType"));
		}
		return Z_Registration_Info_UEnum_EDebugType.OuterSingleton;
	}
	template<> DYNAMICGROWTH_API UEnum* StaticEnum<EDebugType>()
	{
		return EDebugType_StaticEnum();
	}
	struct Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::Enumerators[] = {
		{ "DebugNone", (int64)DebugNone },
		{ "DebugOnlyMainInfo", (int64)DebugOnlyMainInfo },
		{ "DebugAllInfo", (int64)DebugAllInfo },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::Enum_MetaDataParams[] = {
		{ "DebugAllInfo.DsiplayName", "Show All Info" },
		{ "DebugAllInfo.Name", "DebugAllInfo" },
		{ "DebugNone.DisplayName", "None" },
		{ "DebugNone.Name", "DebugNone" },
		{ "DebugOnlyMainInfo.DisplayName", "Show only Main Info" },
		{ "DebugOnlyMainInfo.Name", "DebugOnlyMainInfo" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DynamicGrowth,
		nullptr,
		"EDebugType",
		"EDebugType",
		Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DynamicGrowth_EDebugType()
	{
		if (!Z_Registration_Info_UEnum_EDebugType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDebugType.InnerSingleton, Z_Construct_UEnum_DynamicGrowth_EDebugType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDebugType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimeMeasurement;
class UScriptStruct* FTimeMeasurement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimeMeasurement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimeMeasurement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeMeasurement, (UObject*)Z_Construct_UPackage__Script_DynamicGrowth(), TEXT("TimeMeasurement"));
	}
	return Z_Registration_Info_UScriptStruct_TimeMeasurement.OuterSingleton;
}
template<> DYNAMICGROWTH_API UScriptStruct* StaticStruct<FTimeMeasurement>()
{
	return FTimeMeasurement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimeMeasurement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainPreoccesName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MainPreoccesName;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_StepsTime_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepsTime_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepsTime;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StepsNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepsNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StepsNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeMeasurement_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n - - - - - STRUCTS\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "- - - - - STRUCTS" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeMeasurement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeMeasurement, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_MainPreoccesName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_MainPreoccesName = { "MainPreoccesName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeMeasurement, MainPreoccesName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_MainPreoccesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_MainPreoccesName_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime_Inner = { "StepsTime", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime = { "StepsTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeMeasurement, StepsTime), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames_Inner = { "StepsNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames = { "StepsNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeMeasurement, StepsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeMeasurement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_MainPreoccesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewProp_StepsNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeMeasurement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicGrowth,
		nullptr,
		&NewStructOps,
		"TimeMeasurement",
		sizeof(FTimeMeasurement),
		alignof(FTimeMeasurement),
		Z_Construct_UScriptStruct_FTimeMeasurement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeMeasurement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeMeasurement()
	{
		if (!Z_Registration_Info_UScriptStruct_TimeMeasurement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimeMeasurement.InnerSingleton, Z_Construct_UScriptStruct_FTimeMeasurement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimeMeasurement.InnerSingleton;
	}
	DEFINE_FUNCTION(ADG_Base::execCreateTrunkSplineInstant)
	{
		P_GET_STRUCT(FVector,Z_Param_StartLoc);
		P_GET_UBOOL(Z_Param_OverrideInitalDirection);
		P_GET_STRUCT(FVector,Z_Param_InitalGrowDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateTrunkSplineInstant(Z_Param_StartLoc,Z_Param_OverrideInitalDirection,Z_Param_InitalGrowDirection);
		P_NATIVE_END;
	}
	void ADG_Base::StaticRegisterNativesADG_Base()
	{
		UClass* Class = ADG_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTrunkSplineInstant", &ADG_Base::execCreateTrunkSplineInstant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics
	{
		struct DG_Base_eventCreateTrunkSplineInstant_Parms
		{
			FVector StartLoc;
			bool OverrideInitalDirection;
			FVector InitalGrowDirection;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLoc;
		static void NewProp_OverrideInitalDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideInitalDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitalGrowDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_StartLoc = { "StartLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DG_Base_eventCreateTrunkSplineInstant_Parms, StartLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_OverrideInitalDirection_SetBit(void* Obj)
	{
		((DG_Base_eventCreateTrunkSplineInstant_Parms*)Obj)->OverrideInitalDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_OverrideInitalDirection = { "OverrideInitalDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DG_Base_eventCreateTrunkSplineInstant_Parms), &Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_OverrideInitalDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_InitalGrowDirection = { "InitalGrowDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DG_Base_eventCreateTrunkSplineInstant_Parms, InitalGrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_StartLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_OverrideInitalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::NewProp_InitalGrowDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ceate|Trunk|Instant" },
		{ "CPP_Default_InitalGrowDirection", "0.000000,0.000000,1.000000" },
		{ "CPP_Default_OverrideInitalDirection", "false" },
		{ "DisplayName", "Create Trunk Spline (Instant)" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADG_Base, nullptr, "CreateTrunkSplineInstant", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::DG_Base_eventCreateTrunkSplineInstant_Parms), Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADG_Base);
	UClass* Z_Construct_UClass_ADG_Base_NoRegister()
	{
		return ADG_Base::StaticClass();
	}
	struct Z_Construct_UClass_ADG_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowProgress_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfTrunks_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfTrunks;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrunkSplines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrunkSplines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrunkSplines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowTarget_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GrowTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrowDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GrowTargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GrowTargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetGrowPercision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGrowPercision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TracesType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TracesType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitalTrunkRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitalTrunkRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceOfPreviousSegment_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceOfPreviousSegment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InfluenceOfRandomVector_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InfluenceOfRandomVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MergeDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaualSeed_MetaData[];
#endif
		static void NewProp_MaualSeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MaualSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DebugType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentMultiplierAfterCollision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentMultiplierAfterCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBounces_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBounces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleOfTrunksNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CircleOfTrunksNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleOfTrunksRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CircleOfTrunksRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateCollision_MetaData[];
#endif
		static void NewProp_CreateCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateWalkableCollision_MetaData[];
#endif
		static void NewProp_CreateWalkableCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateWalkableCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrunkMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TrunkMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Leaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Leaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Leaves;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Twigs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Twigs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Twigs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbbortingNotice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AbbortingNotice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADG_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicGrowth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADG_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADG_Base_CreateTrunkSplineInstant, "CreateTrunkSplineInstant" }, // 3132118590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n - - - - - CLASS\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/" },
		{ "IncludePath", "DG_Base.h" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "- - - - - CLASS" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowProgress_MetaData[] = {
		{ "Category", "Generation Settings|General" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Percentage of trunk growth\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Percentage of trunk growth" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowProgress = { "GrowProgress", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, GrowProgress), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowProgress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_NumOfTrunks_MetaData[] = {
		{ "Category", "Generation Settings|Unsorted" },
		{ "Comment", "// Number of trunks that should grow \n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Number of trunks that should grow" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_NumOfTrunks = { "NumOfTrunks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, NumOfTrunks), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_NumOfTrunks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_NumOfTrunks_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines_Inner = { "TrunkSplines", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines_MetaData[] = {
		{ "Category", "Grow Settings|Unsorted" },
		{ "Comment", "//SlineComponents for trunks (Trunks grow the full length from RootBae to TargetLocation)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "SlineComponents for trunks (Trunks grow the full length from RootBae to TargetLocation)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines = { "TrunkSplines", nullptr, (EPropertyFlags)0x0010048000030009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, TrunkSplines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTarget_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation" },
		{ "Comment", "//Whether collision should be created for this section.\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Whether collision should be created for this section." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTarget = { "GrowTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, GrowTarget), Z_Construct_UEnum_DynamicGrowth_EGrowTarget, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTarget_MetaData)) }; // 2740722576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowDirection_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Grow in Direction" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowDirection = { "GrowDirection", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, GrowDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowSize_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Grow in Direction" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowSize = { "GrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, GrowSize), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTargetLocation_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Grow to Target Location" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTargetLocation = { "GrowTargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, GrowTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_TargetGrowPercision_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Grow to Target Location" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_TargetGrowPercision = { "TargetGrowPercision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, TargetGrowPercision), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_TargetGrowPercision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_TargetGrowPercision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_TracesType_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "//Whether collision should be created for this section.\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Whether collision should be created for this section." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_TracesType = { "TracesType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, TracesType), Z_Construct_UEnum_DynamicGrowth_ETraceType, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_TracesType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_TracesType_MetaData)) }; // 541772918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_InitalTrunkRadius_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "// Inital Radius of Trunk\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Inital Radius of Trunk" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_InitalTrunkRadius = { "InitalTrunkRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, InitalTrunkRadius), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_InitalTrunkRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_InitalTrunkRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentSize_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "// Percentage of trunk growth\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Percentage of trunk growth" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentSize = { "SegmentSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, SegmentSize), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfPreviousSegment_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfPreviousSegment = { "InfluenceOfPreviousSegment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, InfluenceOfPreviousSegment), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfPreviousSegment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfPreviousSegment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfRandomVector_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfRandomVector = { "InfluenceOfRandomVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, InfluenceOfRandomVector), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfRandomVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfRandomVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_MergeDistance_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "/*Merges \"newly added point\" with \"previous point\" if the distance between them is smaller than [MergeDistance]\n\x09Tipp: nice looking results for ([TrunkRadius] * 3)\n\x09*/" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Merges \"newly added point\" with \"previous point\" if the distance between them is smaller than [MergeDistance]\n       Tipp: nice looking results for ([TrunkRadius] * 3)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_MergeDistance = { "MergeDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, MergeDistance), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_MergeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_MergeDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "// Aprocemate Location for Trunks to grow to\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Aprocemate Location for Trunks to grow to" },
	};
#endif
	void Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed_SetBit(void* Obj)
	{
		((ADG_Base*)Obj)->MaualSeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed = { "MaualSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADG_Base), &Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "// Seed used for Randoms if [Maual Seed] is true\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Seed used for Randoms if [Maual Seed] is true" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, RandomSeed), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_RandomSeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_DebugType_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline" },
		{ "Comment", "/*\x09Wheater to draw Debug lines\n\x09""Black:      Points for Spline\n\x09Green:       Grow Target\n\x09White:       Lerped Vector between [Grow Target] and [Previous Segment Normal]\n\x09""Blue:         Random Vector\n\x09Purple:     Merge Vector, IF [current point] and [prev-point] to close*/" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Wheater to draw Debug lines\nBlack:      Points for Spline\nGreen:       Grow Target\nWhite:       Lerped Vector between [Grow Target] and [Previous Segment Normal]\nBlue:         Random Vector\nPurple:     Merge Vector, IF [current point] and [prev-point] to close" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_DebugType = { "DebugType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, DebugType), Z_Construct_UEnum_DynamicGrowth_EDebugType, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_DebugType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_DebugType_MetaData)) }; // 3199786174
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentMultiplierAfterCollision_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline|Collision" },
		{ "Comment", "// Multiples the rest-Length of a segment that hit an obsticle\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Multiples the rest-Length of a segment that hit an obsticle" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentMultiplierAfterCollision = { "SegmentMultiplierAfterCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, SegmentMultiplierAfterCollision), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentMultiplierAfterCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentMultiplierAfterCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_MaxBounces_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Spline|Collision" },
		{ "Comment", "// Max Iterations for \"Collide and Slide\" algorithm\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Max Iterations for \"Collide and Slide\" algorithm" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_MaxBounces = { "MaxBounces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, MaxBounces), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_MaxBounces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_MaxBounces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksNum_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Circle of Trunks" },
		{ "Comment", "// Max Iterations for \"Collide and Slide\" algorithm\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Max Iterations for \"Collide and Slide\" algorithm" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksNum = { "CircleOfTrunksNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, CircleOfTrunksNum), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksRadius_MetaData[] = {
		{ "Category", "Generation Settings|Trunk Generation|Circle of Trunks" },
		{ "Comment", "// Max Iterations for \"Collide and Slide\" algorithm\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Max Iterations for \"Collide and Slide\" algorithm" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksRadius = { "CircleOfTrunksRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, CircleOfTrunksRadius), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision_MetaData[] = {
		{ "Category", "Generation Settings|Collision" },
		{ "Comment", "//Whether collision should be created\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Whether collision should be created" },
	};
#endif
	void Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision_SetBit(void* Obj)
	{
		((ADG_Base*)Obj)->CreateCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision = { "CreateCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADG_Base), &Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision_MetaData[] = {
		{ "Category", "Generation Settings|Collision" },
		{ "Comment", "//Whether simple collision should be created for character to walk apon\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Whether simple collision should be created for character to walk apon" },
	};
#endif
	void Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision_SetBit(void* Obj)
	{
		((ADG_Base*)Obj)->CreateWalkableCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision = { "CreateWalkableCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADG_Base), &Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkMaterial_MetaData[] = {
		{ "Category", "" },
		{ "Comment", "// - - - -\x09\x09Materials\x09\x09\x09- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n// Material for Trunks\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "- - - -                Materials                       - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\nMaterial for Trunks" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkMaterial = { "TrunkMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, TrunkMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_RootMaterial_MetaData[] = {
		{ "Category", "Generation Settings|Materials" },
		{ "Comment", "// Material for Roots\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Material for Roots" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_RootMaterial = { "RootMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, RootMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_RootMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_RootMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves_Inner = { "Leaves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves_MetaData[] = {
		{ "Category", "Generation Settings|StaticMeshes" },
		{ "Comment", "// - - - -\x09\x09StaticMeshes\x09\x09- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n// Static Meshes for Leaves\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "- - - -                StaticMeshes            - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\nStatic Meshes for Leaves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves = { "Leaves", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, Leaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs_Inner = { "Twigs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs_MetaData[] = {
		{ "Category", "Generation Settings|StaticMeshes" },
		{ "Comment", "// Static Meshes for Twigs\n" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
		{ "ToolTip", "Static Meshes for Twigs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs = { "Twigs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, Twigs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_World_MetaData[] = {
		{ "Category", "Generation Settings|Advanced" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010040000030001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_FunctionName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, FunctionName), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADG_Base_Statics::NewProp_AbbortingNotice_MetaData[] = {
		{ "Category", "Generation Settings|Advanced" },
		{ "ModuleRelativePath", "Public/DG_Base.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADG_Base_Statics::NewProp_AbbortingNotice = { "AbbortingNotice", nullptr, (EPropertyFlags)0x0010040000030001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADG_Base, AbbortingNotice), METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::NewProp_AbbortingNotice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::NewProp_AbbortingNotice_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADG_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_NumOfTrunks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkSplines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_GrowTargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_TargetGrowPercision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_TracesType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_InitalTrunkRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfPreviousSegment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_InfluenceOfRandomVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_MergeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_MaualSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_RandomSeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_DebugType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_SegmentMultiplierAfterCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_MaxBounces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_CircleOfTrunksRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_CreateWalkableCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_TrunkMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_RootMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_Leaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_Twigs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADG_Base_Statics::NewProp_AbbortingNotice,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADG_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADG_Base>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADG_Base_Statics::ClassParams = {
		&ADG_Base::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADG_Base_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADG_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADG_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADG_Base()
	{
		if (!Z_Registration_Info_UClass_ADG_Base.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADG_Base.OuterSingleton, Z_Construct_UClass_ADG_Base_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADG_Base.OuterSingleton;
	}
	template<> DYNAMICGROWTH_API UClass* StaticClass<ADG_Base>()
	{
		return ADG_Base::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADG_Base);
	ADG_Base::~ADG_Base() {}
	struct Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::EnumInfo[] = {
		{ EGrowTarget_StaticEnum, TEXT("EGrowTarget"), &Z_Registration_Info_UEnum_EGrowTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2740722576U) },
		{ ETraceType_StaticEnum, TEXT("ETraceType"), &Z_Registration_Info_UEnum_ETraceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 541772918U) },
		{ EDebugType_StaticEnum, TEXT("EDebugType"), &Z_Registration_Info_UEnum_EDebugType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3199786174U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::ScriptStructInfo[] = {
		{ FTimeMeasurement::StaticStruct, Z_Construct_UScriptStruct_FTimeMeasurement_Statics::NewStructOps, TEXT("TimeMeasurement"), &Z_Registration_Info_UScriptStruct_TimeMeasurement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeMeasurement), 3357320367U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADG_Base, ADG_Base::StaticClass, TEXT("ADG_Base"), &Z_Registration_Info_UClass_ADG_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADG_Base), 1415700553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_2945443955(TEXT("/Script/DynamicGrowth"),
		Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_MeshGeneration_Plugins_DynamicGrowth_Source_DynamicGrowth_Public_DG_Base_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
