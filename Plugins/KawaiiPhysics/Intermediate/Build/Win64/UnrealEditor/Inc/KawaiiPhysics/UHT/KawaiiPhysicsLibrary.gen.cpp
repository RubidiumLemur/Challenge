// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KawaiiPhysicsLibrary.h"
#include "Animation/AnimNodeReference.h"
#include "AnimNode_KawaiiPhysics.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKawaiiPhysicsLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeReference();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLibrary();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLibrary_NoRegister();
KAWAIIPHYSICS_API UClass* Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister();
KAWAIIPHYSICS_API UEnum* Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsReference();
KAWAIIPHYSICS_API UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsSettings();
UPackage* Z_Construct_UPackage__Script_KawaiiPhysics();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EKawaiiPhysicsAccessExternalForceResult ***********************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult;
static UEnum* EKawaiiPhysicsAccessExternalForceResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("EKawaiiPhysicsAccessExternalForceResult"));
	}
	return Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult.OuterSingleton;
}
template<> KAWAIIPHYSICS_NON_ATTRIBUTED_API UEnum* StaticEnum<EKawaiiPhysicsAccessExternalForceResult>()
{
	return EKawaiiPhysicsAccessExternalForceResult_StaticEnum();
}
struct Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
		{ "NotValid.Name", "EKawaiiPhysicsAccessExternalForceResult::NotValid" },
		{ "Valid.Name", "EKawaiiPhysicsAccessExternalForceResult::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EKawaiiPhysicsAccessExternalForceResult::Valid", (int64)EKawaiiPhysicsAccessExternalForceResult::Valid },
		{ "EKawaiiPhysicsAccessExternalForceResult::NotValid", (int64)EKawaiiPhysicsAccessExternalForceResult::NotValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	nullptr,
	"EKawaiiPhysicsAccessExternalForceResult",
	"EKawaiiPhysicsAccessExternalForceResult",
	Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult()
{
	if (!Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult.InnerSingleton, Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult.InnerSingleton;
}
// ********** End Enum EKawaiiPhysicsAccessExternalForceResult *************************************

// ********** Begin ScriptStruct FKawaiiPhysicsReference *******************************************
struct Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FKawaiiPhysicsReference); }
	static inline consteval int16 GetStructAlignment() { return alignof(FKawaiiPhysicsReference); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FKawaiiPhysicsReference constinit property declarations ***********
// ********** End ScriptStruct FKawaiiPhysicsReference constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKawaiiPhysicsReference>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics
static_assert(std::is_polymorphic<FKawaiiPhysicsReference>() == std::is_polymorphic<FAnimNodeReference>(), "USTRUCT FKawaiiPhysicsReference cannot be polymorphic unless super FAnimNodeReference is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference;
class UScriptStruct* FKawaiiPhysicsReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKawaiiPhysicsReference, (UObject*)Z_Construct_UPackage__Script_KawaiiPhysics(), TEXT("KawaiiPhysicsReference"));
	}
	return Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.OuterSingleton;
	}
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
	Z_Construct_UScriptStruct_FAnimNodeReference,
	&NewStructOps,
	"KawaiiPhysicsReference",
	nullptr,
	0,
	sizeof(FKawaiiPhysicsReference),
	alignof(FKawaiiPhysicsReference),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FKawaiiPhysicsReference()
{
	if (!Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton, Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference.InnerSingleton);
}
// ********** End ScriptStruct FKawaiiPhysicsReference *********************************************

// ********** Begin Class UKawaiiPhysicsLibrary Function AddExternalForce **************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics
{
	struct KawaiiPhysicsLibrary_eventAddExternalForce_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FInstancedStruct ExternalForce;
		UObject* Owner;
		bool bIsOneShot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add ExternalForce */" },
#endif
		{ "CPP_Default_bIsOneShot", "false" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add ExternalForce" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddExternalForce constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static void NewProp_bIsOneShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddExternalForce constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddExternalForce Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForce_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForce_Parms, ExternalForce), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForce_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventAddExternalForce_Parms*)Obj)->bIsOneShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventAddExternalForce_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventAddExternalForce_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventAddExternalForce_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_ExternalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_bIsOneShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::PropPointers) < 2048);
// ********** End Function AddExternalForce Property Definitions ***********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "AddExternalForce", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::KawaiiPhysicsLibrary_eventAddExternalForce_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::KawaiiPhysicsLibrary_eventAddExternalForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execAddExternalForce)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_ExternalForce);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_UBOOL(Z_Param_bIsOneShot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::AddExternalForce(Z_Param_Out_KawaiiPhysics,Z_Param_Out_ExternalForce,Z_Param_Owner,Z_Param_bIsOneShot);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function AddExternalForce ****************************

// ********** Begin Class UKawaiiPhysicsLibrary Function AddExternalForcesToComponent **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics
{
	struct KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms
	{
		USkeletalMeshComponent* MeshComp;
		TArray<FInstancedStruct> ExternalForces;
		UObject* Owner;
		FGameplayTagContainer FilterTags;
		bool bFilterExactMatch;
		bool bIsOneShot;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add ExternalForces to SkeletalMeshComponent */" },
#endif
		{ "CPP_Default_bFilterExactMatch", "false" },
		{ "CPP_Default_bIsOneShot", "false" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add ExternalForces to SkeletalMeshComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddExternalForcesToComponent constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalForces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTags;
	static void NewProp_bFilterExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterExactMatch;
	static void NewProp_bIsOneShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOneShot;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddExternalForcesToComponent constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddExternalForcesToComponent Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ExternalForces_Inner = { "ExternalForces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ExternalForces = { "ExternalForces", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms, ExternalForces), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_FilterTags = { "FilterTags", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms, FilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 549734336
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bFilterExactMatch_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms*)Obj)->bFilterExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bFilterExactMatch = { "bFilterExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bFilterExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bIsOneShot_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms*)Obj)->bIsOneShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bIsOneShot = { "bIsOneShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bIsOneShot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ExternalForces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ExternalForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_FilterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bFilterExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_bIsOneShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::PropPointers) < 2048);
// ********** End Function AddExternalForcesToComponent Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "AddExternalForcesToComponent", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::KawaiiPhysicsLibrary_eventAddExternalForcesToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execAddExternalForcesToComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_TARRAY_REF(FInstancedStruct,Z_Param_Out_ExternalForces);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FilterTags);
	P_GET_UBOOL(Z_Param_bFilterExactMatch);
	P_GET_UBOOL(Z_Param_bIsOneShot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::AddExternalForcesToComponent(Z_Param_MeshComp,Z_Param_Out_ExternalForces,Z_Param_Owner,Z_Param_Out_FilterTags,Z_Param_bFilterExactMatch,Z_Param_bIsOneShot);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function AddExternalForcesToComponent ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function AddExternalForceWithExecResult ************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics
{
	struct KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		FInstancedStruct ExternalForce;
		UObject* Owner;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add ExternalForce With ExecResult */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add ExternalForce With ExecResult" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function AddExternalForceWithExecResult constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function AddExternalForceWithExecResult constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function AddExternalForceWithExecResult Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms, ExternalForce), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 3949785911
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ExternalForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::PropPointers) < 2048);
// ********** End Function AddExternalForceWithExecResult Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "AddExternalForceWithExecResult", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::KawaiiPhysicsLibrary_eventAddExternalForceWithExecResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execAddExternalForceWithExecResult)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_ExternalForce);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::AddExternalForceWithExecResult((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_Out_ExternalForce,Z_Param_Owner);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function AddExternalForceWithExecResult **************

// ********** Begin Class UKawaiiPhysicsLibrary Function ConvertToKawaiiPhysics ********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics
{
	struct KawaiiPhysicsLibrary_eventConvertToKawaiiPhysics_Parms
	{
		FAnimNodeReference Node;
		EAnimNodeReferenceConversionResult Result;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a KawaiiPhysics from an anim node */" },
#endif
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a KawaiiPhysics from an anim node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertToKawaiiPhysics constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertToKawaiiPhysics constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertToKawaiiPhysics Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventConvertToKawaiiPhysics_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 508147072
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventConvertToKawaiiPhysics_Parms, Result), Z_Construct_UEnum_Engine_EAnimNodeReferenceConversionResult, METADATA_PARAMS(0, nullptr) }; // 981738679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventConvertToKawaiiPhysics_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_Result_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::PropPointers) < 2048);
// ********** End Function ConvertToKawaiiPhysics Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "ConvertToKawaiiPhysics", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::KawaiiPhysicsLibrary_eventConvertToKawaiiPhysics_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::KawaiiPhysicsLibrary_eventConvertToKawaiiPhysics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execConvertToKawaiiPhysics)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_ENUM_REF(EAnimNodeReferenceConversionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::ConvertToKawaiiPhysics(Z_Param_Out_Node,(EAnimNodeReferenceConversionResult&)(Z_Param_Out_Result));
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function ConvertToKawaiiPhysics **********************

// ********** Begin Class UKawaiiPhysicsLibrary Function ConvertToKawaiiPhysicsPure ****************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics
{
	struct KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms
	{
		FAnimNodeReference Node;
		FKawaiiPhysicsReference KawaiiPhysics;
		bool Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a KawaiiPhysics from an anim node (pure). */" },
#endif
		{ "DisplayName", "Convert to Kawaii Physics (Pure)" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a KawaiiPhysics from an anim node (pure)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConvertToKawaiiPhysicsPure constinit property declarations ************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConvertToKawaiiPhysicsPure constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConvertToKawaiiPhysicsPure Property Definitions ***********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms, Node), Z_Construct_UScriptStruct_FAnimNodeReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) }; // 508147072
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_Result_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_Result_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::PropPointers) < 2048);
// ********** End Function ConvertToKawaiiPhysicsPure Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "ConvertToKawaiiPhysicsPure", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::KawaiiPhysicsLibrary_eventConvertToKawaiiPhysicsPure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execConvertToKawaiiPhysicsPure)
{
	P_GET_STRUCT_REF(FAnimNodeReference,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_UBOOL_REF(Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	UKawaiiPhysicsLibrary::ConvertToKawaiiPhysicsPure(Z_Param_Out_Node,Z_Param_Out_KawaiiPhysics,Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function ConvertToKawaiiPhysicsPure ******************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetAllowWorldCollision ********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics
{
	struct KawaiiPhysicsLibrary_eventGetAllowWorldCollision_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAllowWorldCollision constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAllowWorldCollision constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAllowWorldCollision Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetAllowWorldCollision_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventGetAllowWorldCollision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventGetAllowWorldCollision_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::PropPointers) < 2048);
// ********** End Function GetAllowWorldCollision Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetAllowWorldCollision", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::KawaiiPhysicsLibrary_eventGetAllowWorldCollision_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::KawaiiPhysicsLibrary_eventGetAllowWorldCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetAllowWorldCollision)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::GetAllowWorldCollision(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetAllowWorldCollision **********************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetAlphaFromComponent *********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics
{
	struct KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms
	{
		USkeletalMeshComponent* MeshComp;
		float OutAlpha;
		FGameplayTagContainer FilterTags;
		bool bFilterExactMatch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get current alpha (input) from the first matched KawaiiPhysics node in the component. */" },
#endif
		{ "CPP_Default_bFilterExactMatch", "false" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get current alpha (input) from the first matched KawaiiPhysics node in the component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetAlphaFromComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAlpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTags;
	static void NewProp_bFilterExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterExactMatch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetAlphaFromComponent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetAlphaFromComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_OutAlpha = { "OutAlpha", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms, OutAlpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_FilterTags = { "FilterTags", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms, FilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 549734336
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_bFilterExactMatch_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms*)Obj)->bFilterExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_bFilterExactMatch = { "bFilterExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_bFilterExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_OutAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_FilterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_bFilterExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::PropPointers) < 2048);
// ********** End Function GetAlphaFromComponent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetAlphaFromComponent", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::KawaiiPhysicsLibrary_eventGetAlphaFromComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetAlphaFromComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAlpha);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FilterTags);
	P_GET_UBOOL(Z_Param_bFilterExactMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::GetAlphaFromComponent(Z_Param_MeshComp,Z_Param_Out_OutAlpha,Z_Param_Out_FilterTags,Z_Param_bFilterExactMatch);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetAlphaFromComponent ***********************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetDummyBoneLength ************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics
{
	struct KawaiiPhysicsLibrary_eventGetDummyBoneLength_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDummyBoneLength constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDummyBoneLength constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDummyBoneLength Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetDummyBoneLength_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetDummyBoneLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::PropPointers) < 2048);
// ********** End Function GetDummyBoneLength Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetDummyBoneLength", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::KawaiiPhysicsLibrary_eventGetDummyBoneLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::KawaiiPhysicsLibrary_eventGetDummyBoneLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetDummyBoneLength)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKawaiiPhysicsLibrary::GetDummyBoneLength(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetDummyBoneLength **************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetEnableWind *****************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics
{
	struct KawaiiPhysicsLibrary_eventGetEnableWind_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetEnableWind constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetEnableWind constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetEnableWind Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetEnableWind_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventGetEnableWind_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventGetEnableWind_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::PropPointers) < 2048);
// ********** End Function GetEnableWind Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetEnableWind", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::KawaiiPhysicsLibrary_eventGetEnableWind_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::KawaiiPhysicsLibrary_eventGetEnableWind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetEnableWind)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::GetEnableWind(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetEnableWind *******************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExcludeBoneNames ***********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExcludeBoneNames_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExcludeBones */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExcludeBones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExcludeBoneNames constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExcludeBoneNames constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExcludeBoneNames Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExcludeBoneNames_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExcludeBoneNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::PropPointers) < 2048);
// ********** End Function GetExcludeBoneNames Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExcludeBoneNames", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::KawaiiPhysicsLibrary_eventGetExcludeBoneNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::KawaiiPhysicsLibrary_eventGetExcludeBoneNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExcludeBoneNames)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExcludeBoneNames(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExcludeBoneNames *************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceBoolProperty **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter bool */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceBoolProperty constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceBoolProperty constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceBoolProperty Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceBoolProperty Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceBoolProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceBoolProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExternalForceBoolProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExternalForceBoolProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceBoolProperty ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceFloatProperty *************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter float */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceFloatProperty constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceFloatProperty constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceFloatProperty Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceFloatProperty Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceFloatProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceFloatProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExternalForceFloatProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExternalForceFloatProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceFloatProperty ***************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceIntProperty ***************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter int */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter int" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceIntProperty constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceIntProperty constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceIntProperty Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceIntProperty Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceIntProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceIntProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExternalForceIntProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExternalForceIntProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceIntProperty *****************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceRotatorProperty ***********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Rotator */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Rotator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceRotatorProperty constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceRotatorProperty constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceRotatorProperty Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceRotatorProperty Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceRotatorProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceRotatorProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExternalForceRotatorProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExternalForceRotatorProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceRotatorProperty *************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceTransformProperty *********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Transform */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceTransformProperty constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceTransformProperty constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceTransformProperty Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceTransformProperty Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceTransformProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceTransformProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExternalForceTransformProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExternalForceTransformProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceTransformProperty ***********

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceVectorProperty ************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Vector */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Vector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceVectorProperty constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceVectorProperty constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceVectorProperty Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceVectorProperty Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceVectorProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceVectorProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetExternalForceVectorProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UKawaiiPhysicsLibrary::GetExternalForceVectorProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceVectorProperty **************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetExternalForceWildcardProperty **********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Wildcard */" },
#endif
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Wildcard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetExternalForceWildcardProperty constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetExternalForceWildcardProperty constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetExternalForceWildcardProperty Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::PropPointers) < 2048);
// ********** End Function GetExternalForceWildcardProperty Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetExternalForceWildcardProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::KawaiiPhysicsLibrary_eventGetExternalForceWildcardProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetExternalForceWildcardProperty ************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetGravity ********************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics
{
	struct KawaiiPhysicsLibrary_eventGetGravity_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGravity constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGravity constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGravity Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetGravity_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::PropPointers) < 2048);
// ********** End Function GetGravity Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetGravity", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::KawaiiPhysicsLibrary_eventGetGravity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::KawaiiPhysicsLibrary_eventGetGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetGravity)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UKawaiiPhysicsLibrary::GetGravity(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetGravity **********************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetLimitsDataAsset ************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics
{
	struct KawaiiPhysicsLibrary_eventGetLimitsDataAsset_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		UKawaiiPhysicsLimitsDataAsset* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LimitsDataAsset */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LimitsDataAsset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetLimitsDataAsset constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetLimitsDataAsset constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetLimitsDataAsset Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetLimitsDataAsset_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetLimitsDataAsset_Parms, ReturnValue), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::PropPointers) < 2048);
// ********** End Function GetLimitsDataAsset Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetLimitsDataAsset", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::KawaiiPhysicsLibrary_eventGetLimitsDataAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::KawaiiPhysicsLibrary_eventGetLimitsDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetLimitsDataAsset)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UKawaiiPhysicsLimitsDataAsset**)Z_Param__Result=UKawaiiPhysicsLibrary::GetLimitsDataAsset(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetLimitsDataAsset **************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetNeedWarmUp *****************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics
{
	struct KawaiiPhysicsLibrary_eventGetNeedWarmUp_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NeedWarmUp */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NeedWarmUp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetNeedWarmUp constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetNeedWarmUp constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetNeedWarmUp Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetNeedWarmUp_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventGetNeedWarmUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventGetNeedWarmUp_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::PropPointers) < 2048);
// ********** End Function GetNeedWarmUp Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetNeedWarmUp", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::KawaiiPhysicsLibrary_eventGetNeedWarmUp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::KawaiiPhysicsLibrary_eventGetNeedWarmUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetNeedWarmUp)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::GetNeedWarmUp(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetNeedWarmUp *******************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetPhysicsSettings ************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics
{
	struct KawaiiPhysicsLibrary_eventGetPhysicsSettings_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FKawaiiPhysicsSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetPhysicsSettings constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetPhysicsSettings constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetPhysicsSettings Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetPhysicsSettings_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetPhysicsSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(0, nullptr) }; // 2075773802
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::PropPointers) < 2048);
// ********** End Function GetPhysicsSettings Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetPhysicsSettings", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::KawaiiPhysicsLibrary_eventGetPhysicsSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::KawaiiPhysicsLibrary_eventGetPhysicsSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetPhysicsSettings)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsSettings*)Z_Param__Result=UKawaiiPhysicsLibrary::GetPhysicsSettings(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetPhysicsSettings **************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetRootBoneName ***************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics
{
	struct KawaiiPhysicsLibrary_eventGetRootBoneName_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get RootBone */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get RootBone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetRootBoneName constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetRootBoneName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetRootBoneName Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetRootBoneName_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetRootBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::PropPointers) < 2048);
// ********** End Function GetRootBoneName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetRootBoneName", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::KawaiiPhysicsLibrary_eventGetRootBoneName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::KawaiiPhysicsLibrary_eventGetRootBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetRootBoneName)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=UKawaiiPhysicsLibrary::GetRootBoneName(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetRootBoneName *****************************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetTeleportDistanceThreshold **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics
{
	struct KawaiiPhysicsLibrary_eventGetTeleportDistanceThreshold_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTeleportDistanceThreshold constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTeleportDistanceThreshold constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTeleportDistanceThreshold Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetTeleportDistanceThreshold_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetTeleportDistanceThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::PropPointers) < 2048);
// ********** End Function GetTeleportDistanceThreshold Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetTeleportDistanceThreshold", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::KawaiiPhysicsLibrary_eventGetTeleportDistanceThreshold_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::KawaiiPhysicsLibrary_eventGetTeleportDistanceThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetTeleportDistanceThreshold)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetTeleportDistanceThreshold ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetTeleportRotationThreshold **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics
{
	struct KawaiiPhysicsLibrary_eventGetTeleportRotationThreshold_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetTeleportRotationThreshold constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTeleportRotationThreshold constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTeleportRotationThreshold Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetTeleportRotationThreshold_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetTeleportRotationThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::PropPointers) < 2048);
// ********** End Function GetTeleportRotationThreshold Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetTeleportRotationThreshold", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::KawaiiPhysicsLibrary_eventGetTeleportRotationThreshold_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::KawaiiPhysicsLibrary_eventGetTeleportRotationThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetTeleportRotationThreshold)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKawaiiPhysicsLibrary::GetTeleportRotationThreshold(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetTeleportRotationThreshold ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function GetWindScale ******************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics
{
	struct KawaiiPhysicsLibrary_eventGetWindScale_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWindScale constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWindScale constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWindScale Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetWindScale_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventGetWindScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::PropPointers) < 2048);
// ********** End Function GetWindScale Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "GetWindScale", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::KawaiiPhysicsLibrary_eventGetWindScale_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::KawaiiPhysicsLibrary_eventGetWindScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execGetWindScale)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UKawaiiPhysicsLibrary::GetWindScale(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function GetWindScale ********************************

// ********** Begin Class UKawaiiPhysicsLibrary Function RemoveExternalForcesFromComponent *********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics
{
	struct KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms
	{
		USkeletalMeshComponent* MeshComp;
		UObject* Owner;
		FGameplayTagContainer FilterTags;
		bool bFilterExactMatch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Remove ExternalForces from SkeletalMeshComponent (by Owner) */" },
#endif
		{ "CPP_Default_bFilterExactMatch", "false" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove ExternalForces from SkeletalMeshComponent (by Owner)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveExternalForcesFromComponent constinit property declarations *****
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTags;
	static void NewProp_bFilterExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterExactMatch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveExternalForcesFromComponent constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveExternalForcesFromComponent Property Definitions ****************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_FilterTags = { "FilterTags", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms, FilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 549734336
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_bFilterExactMatch_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms*)Obj)->bFilterExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_bFilterExactMatch = { "bFilterExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_bFilterExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_FilterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_bFilterExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::PropPointers) < 2048);
// ********** End Function RemoveExternalForcesFromComponent Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "RemoveExternalForcesFromComponent", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::KawaiiPhysicsLibrary_eventRemoveExternalForcesFromComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execRemoveExternalForcesFromComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_OBJECT(UObject,Z_Param_Owner);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FilterTags);
	P_GET_UBOOL(Z_Param_bFilterExactMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::RemoveExternalForcesFromComponent(Z_Param_MeshComp,Z_Param_Owner,Z_Param_Out_FilterTags,Z_Param_bFilterExactMatch);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function RemoveExternalForcesFromComponent ***********

// ********** Begin Class UKawaiiPhysicsLibrary Function ResetDynamics *****************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics
{
	struct KawaiiPhysicsLibrary_eventResetDynamics_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** ResetDynamics */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ResetDynamics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ResetDynamics constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ResetDynamics constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ResetDynamics Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventResetDynamics_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventResetDynamics_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::PropPointers) < 2048);
// ********** End Function ResetDynamics Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "ResetDynamics", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::KawaiiPhysicsLibrary_eventResetDynamics_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::KawaiiPhysicsLibrary_eventResetDynamics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execResetDynamics)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::ResetDynamics(Z_Param_Out_KawaiiPhysics);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function ResetDynamics *******************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetAllowWorldCollision ********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics
{
	struct KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		bool bAllowWorldCollision;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** AllowWorldCollision */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AllowWorldCollision" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAllowWorldCollision constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_bAllowWorldCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowWorldCollision;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAllowWorldCollision constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAllowWorldCollision Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_bAllowWorldCollision_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms*)Obj)->bAllowWorldCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_bAllowWorldCollision = { "bAllowWorldCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_bAllowWorldCollision_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_bAllowWorldCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::PropPointers) < 2048);
// ********** End Function SetAllowWorldCollision Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetAllowWorldCollision", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::KawaiiPhysicsLibrary_eventSetAllowWorldCollision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetAllowWorldCollision)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_UBOOL(Z_Param_bAllowWorldCollision);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetAllowWorldCollision(Z_Param_Out_KawaiiPhysics,Z_Param_bAllowWorldCollision);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetAllowWorldCollision **********************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetAlphaToComponent ***********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics
{
	struct KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms
	{
		USkeletalMeshComponent* MeshComp;
		float Alpha;
		FGameplayTagContainer FilterTags;
		bool bFilterExactMatch;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set alpha (input) to all KawaiiPhysics nodes in the component (and linked/post-process instances).\n\x09 * This is intended for AnimNotifyState usage.\n\x09 */" },
#endif
		{ "CPP_Default_bFilterExactMatch", "false" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set alpha (input) to all KawaiiPhysics nodes in the component (and linked/post-process instances).\nThis is intended for AnimNotifyState usage." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetAlphaToComponent constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterTags;
	static void NewProp_bFilterExactMatch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFilterExactMatch;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetAlphaToComponent constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetAlphaToComponent Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_FilterTags = { "FilterTags", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms, FilterTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(0, nullptr) }; // 549734336
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_bFilterExactMatch_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms*)Obj)->bFilterExactMatch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_bFilterExactMatch = { "bFilterExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_bFilterExactMatch_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_Alpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_FilterTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_bFilterExactMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::PropPointers) < 2048);
// ********** End Function SetAlphaToComponent Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetAlphaToComponent", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::KawaiiPhysicsLibrary_eventSetAlphaToComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetAlphaToComponent)
{
	P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_FilterTags);
	P_GET_UBOOL(Z_Param_bFilterExactMatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UKawaiiPhysicsLibrary::SetAlphaToComponent(Z_Param_MeshComp,Z_Param_Alpha,Z_Param_Out_FilterTags,Z_Param_bFilterExactMatch);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetAlphaToComponent *************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetDummyBoneLength ************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics
{
	struct KawaiiPhysicsLibrary_eventSetDummyBoneLength_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float DummyBoneLength;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// DummyBoneLength\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "DummyBoneLength" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetDummyBoneLength constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DummyBoneLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetDummyBoneLength constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetDummyBoneLength Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetDummyBoneLength_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::NewProp_DummyBoneLength = { "DummyBoneLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetDummyBoneLength_Parms, DummyBoneLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetDummyBoneLength_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::NewProp_DummyBoneLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::PropPointers) < 2048);
// ********** End Function SetDummyBoneLength Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetDummyBoneLength", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::KawaiiPhysicsLibrary_eventSetDummyBoneLength_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::KawaiiPhysicsLibrary_eventSetDummyBoneLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetDummyBoneLength)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DummyBoneLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetDummyBoneLength(Z_Param_Out_KawaiiPhysics,Z_Param_DummyBoneLength);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetDummyBoneLength **************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetEnableWind *****************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics
{
	struct KawaiiPhysicsLibrary_eventSetEnableWind_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		bool bEnableWind;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** EnableWind */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EnableWind" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetEnableWind constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_bEnableWind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetEnableWind constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetEnableWind Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetEnableWind_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_bEnableWind_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventSetEnableWind_Parms*)Obj)->bEnableWind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventSetEnableWind_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetEnableWind_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_bEnableWind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::PropPointers) < 2048);
// ********** End Function SetEnableWind Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetEnableWind", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::KawaiiPhysicsLibrary_eventSetEnableWind_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::KawaiiPhysicsLibrary_eventSetEnableWind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetEnableWind)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_UBOOL(Z_Param_bEnableWind);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetEnableWind(Z_Param_Out_KawaiiPhysics,Z_Param_bEnableWind);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetEnableWind *******************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExcludeBoneNames ***********************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExcludeBoneNames_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		TArray<FName> ExcludeBoneNames;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set ExcludeBones */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set ExcludeBones" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExcludeBoneNames constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludeBoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeBoneNames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExcludeBoneNames constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExcludeBoneNames Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExcludeBoneNames_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_ExcludeBoneNames_Inner = { "ExcludeBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_ExcludeBoneNames = { "ExcludeBoneNames", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExcludeBoneNames_Parms, ExcludeBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExcludeBoneNames_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_ExcludeBoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_ExcludeBoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::PropPointers) < 2048);
// ********** End Function SetExcludeBoneNames Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExcludeBoneNames", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::KawaiiPhysicsLibrary_eventSetExcludeBoneNames_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::KawaiiPhysicsLibrary_eventSetExcludeBoneNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExcludeBoneNames)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_TARRAY_REF(FName,Z_Param_Out_ExcludeBoneNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExcludeBoneNames(Z_Param_Out_KawaiiPhysics,Z_Param_Out_ExcludeBoneNames);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExcludeBoneNames *************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceBoolProperty **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		bool Value;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set ExternalForceParameter bool */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set ExternalForceParameter bool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceBoolProperty constinit property declarations **********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceBoolProperty constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceBoolProperty Property Definitions *********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_Value_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceBoolProperty Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceBoolProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceBoolProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExternalForceBoolProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExternalForceBoolProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceBoolProperty ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceFloatProperty *************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		float Value;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set ExternalForceParameter float */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set ExternalForceParameter float" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceFloatProperty constinit property declarations *********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceFloatProperty constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceFloatProperty Property Definitions ********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceFloatProperty Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceFloatProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceFloatProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExternalForceFloatProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExternalForceFloatProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceFloatProperty ***************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceIntProperty ***************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		int32 Value;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set ExternalForceParameter int */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set ExternalForceParameter int" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceIntProperty constinit property declarations ***********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceIntProperty constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceIntProperty Property Definitions **********************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceIntProperty Property Definitions ************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceIntProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceIntProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExternalForceIntProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExternalForceIntProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceIntProperty *****************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceRotatorProperty ***********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		FRotator Value;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Rotator */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Rotator" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceRotatorProperty constinit property declarations *******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceRotatorProperty constinit property declarations *********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceRotatorProperty Property Definitions ******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceRotatorProperty Property Definitions ********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceRotatorProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceRotatorProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExternalForceRotatorProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_STRUCT(FRotator,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExternalForceRotatorProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceRotatorProperty *************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceTransformProperty *********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		FTransform Value;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Transform */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Transform" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceTransformProperty constinit property declarations *****
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceTransformProperty constinit property declarations *******
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceTransformProperty Property Definitions ****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceTransformProperty Property Definitions ******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceTransformProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceTransformProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExternalForceTransformProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_STRUCT(FTransform,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExternalForceTransformProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceTransformProperty ***********

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceVectorProperty ************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		FVector Value;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get ExternalForceParameter Vector */" },
#endif
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get ExternalForceParameter Vector" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceVectorProperty constinit property declarations ********
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceVectorProperty constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceVectorProperty Property Definitions *******************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceVectorProperty Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceVectorProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceVectorProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetExternalForceVectorProperty)
{
	P_GET_ENUM_REF(EKawaiiPhysicsAccessExternalForceResult,Z_Param_Out_ExecResult);
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FIntProperty,Z_Param_ExternalForceIndex);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetExternalForceVectorProperty((EKawaiiPhysicsAccessExternalForceResult&)(Z_Param_Out_ExecResult),Z_Param_Out_KawaiiPhysics,Z_Param_ExternalForceIndex,Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceVectorProperty **************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetExternalForceWildcardProperty **********
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics
{
	struct KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms
	{
		EKawaiiPhysicsAccessExternalForceResult ExecResult;
		FKawaiiPhysicsReference KawaiiPhysics;
		int32 ExternalForceIndex;
		FName PropertyName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set ExternalForceParameter Wildcard */" },
#endif
		{ "CustomStructureParam", "Value" },
		{ "CustomThunk", "true" },
		{ "ExpandEnumAsExecs", "ExecResult" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set ExternalForceParameter Wildcard" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetExternalForceWildcardProperty constinit property declarations ******
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExternalForceIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetExternalForceWildcardProperty constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetExternalForceWildcardProperty Property Definitions *****************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_ExecResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_ExecResult = { "ExecResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms, ExecResult), Z_Construct_UEnum_KawaiiPhysics_EKawaiiPhysicsAccessExternalForceResult, METADATA_PARAMS(0, nullptr) }; // 3397586654
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_ExternalForceIndex = { "ExternalForceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms, ExternalForceIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_ExecResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_ExecResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_ExternalForceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::PropPointers) < 2048);
// ********** End Function SetExternalForceWildcardProperty Property Definitions *******************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetExternalForceWildcardProperty", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::KawaiiPhysicsLibrary_eventSetExternalForceWildcardProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetExternalForceWildcardProperty ************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetGravity ********************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics
{
	struct KawaiiPhysicsLibrary_eventSetGravity_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FVector Gravity;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gravity */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gravity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGravity constinit property declarations ****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGravity constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGravity Property Definitions ***************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetGravity_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetGravity_Parms, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::PropPointers) < 2048);
// ********** End Function SetGravity Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetGravity", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::KawaiiPhysicsLibrary_eventSetGravity_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::KawaiiPhysicsLibrary_eventSetGravity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetGravity)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_STRUCT(FVector,Z_Param_Gravity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetGravity(Z_Param_Out_KawaiiPhysics,Z_Param_Gravity);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetGravity **********************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetLimitsDataAsset ************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics
{
	struct KawaiiPhysicsLibrary_eventSetLimitsDataAsset_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** LimitsDataAsset */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "LimitsDataAsset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetLimitsDataAsset constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LimitsDataAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetLimitsDataAsset constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetLimitsDataAsset Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetLimitsDataAsset_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::NewProp_LimitsDataAsset = { "LimitsDataAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetLimitsDataAsset_Parms, LimitsDataAsset), Z_Construct_UClass_UKawaiiPhysicsLimitsDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetLimitsDataAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::NewProp_LimitsDataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::PropPointers) < 2048);
// ********** End Function SetLimitsDataAsset Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetLimitsDataAsset", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::KawaiiPhysicsLibrary_eventSetLimitsDataAsset_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::KawaiiPhysicsLibrary_eventSetLimitsDataAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetLimitsDataAsset)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_OBJECT(UKawaiiPhysicsLimitsDataAsset,Z_Param_LimitsDataAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetLimitsDataAsset(Z_Param_Out_KawaiiPhysics,Z_Param_LimitsDataAsset);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetLimitsDataAsset **************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetNeedWarmUp *****************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics
{
	struct KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		bool bNeedWarmUp;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** NeedWarmUp */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "NeedWarmUp" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetNeedWarmUp constinit property declarations *************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static void NewProp_bNeedWarmUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedWarmUp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetNeedWarmUp constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetNeedWarmUp Property Definitions ************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
void Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_bNeedWarmUp_SetBit(void* Obj)
{
	((KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms*)Obj)->bNeedWarmUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_bNeedWarmUp = { "bNeedWarmUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, sizeof(bool), sizeof(KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms), &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_bNeedWarmUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_bNeedWarmUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::PropPointers) < 2048);
// ********** End Function SetNeedWarmUp Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetNeedWarmUp", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::KawaiiPhysicsLibrary_eventSetNeedWarmUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetNeedWarmUp)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_UBOOL(Z_Param_bNeedWarmUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetNeedWarmUp(Z_Param_Out_KawaiiPhysics,Z_Param_bNeedWarmUp);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetNeedWarmUp *******************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetPhysicsSettings ************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics
{
	struct KawaiiPhysicsLibrary_eventSetPhysicsSettings_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FKawaiiPhysicsSettings PhysicsSettings;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PhysicsSettings\n" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PhysicsSettings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetPhysicsSettings constinit property declarations ********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetPhysicsSettings constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetPhysicsSettings Property Definitions *******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetPhysicsSettings_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::NewProp_PhysicsSettings = { "PhysicsSettings", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetPhysicsSettings_Parms, PhysicsSettings), Z_Construct_UScriptStruct_FKawaiiPhysicsSettings, METADATA_PARAMS(0, nullptr) }; // 2075773802
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetPhysicsSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::NewProp_PhysicsSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::PropPointers) < 2048);
// ********** End Function SetPhysicsSettings Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetPhysicsSettings", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::KawaiiPhysicsLibrary_eventSetPhysicsSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::KawaiiPhysicsLibrary_eventSetPhysicsSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetPhysicsSettings)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_STRUCT_REF(FKawaiiPhysicsSettings,Z_Param_Out_PhysicsSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetPhysicsSettings(Z_Param_Out_KawaiiPhysics,Z_Param_Out_PhysicsSettings);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetPhysicsSettings **************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetRootBoneName ***************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics
{
	struct KawaiiPhysicsLibrary_eventSetRootBoneName_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		FName RootBoneName;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set RootBone */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set RootBone" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetRootBoneName constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetRootBoneName constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetRootBoneName Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetRootBoneName_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0002, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetRootBoneName_Parms, RootBoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetRootBoneName_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::NewProp_RootBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::PropPointers) < 2048);
// ********** End Function SetRootBoneName Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetRootBoneName", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::KawaiiPhysicsLibrary_eventSetRootBoneName_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::KawaiiPhysicsLibrary_eventSetRootBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetRootBoneName)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RootBoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetRootBoneName(Z_Param_Out_KawaiiPhysics,Z_Param_Out_RootBoneName);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetRootBoneName *****************************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetTeleportDistanceThreshold **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics
{
	struct KawaiiPhysicsLibrary_eventSetTeleportDistanceThreshold_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float TeleportDistanceThreshold;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TeleportDistanceThreshold */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TeleportDistanceThreshold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeleportDistanceThreshold constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistanceThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeleportDistanceThreshold constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeleportDistanceThreshold Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetTeleportDistanceThreshold_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::NewProp_TeleportDistanceThreshold = { "TeleportDistanceThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetTeleportDistanceThreshold_Parms, TeleportDistanceThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetTeleportDistanceThreshold_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::NewProp_TeleportDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::PropPointers) < 2048);
// ********** End Function SetTeleportDistanceThreshold Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetTeleportDistanceThreshold", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::KawaiiPhysicsLibrary_eventSetTeleportDistanceThreshold_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::KawaiiPhysicsLibrary_eventSetTeleportDistanceThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetTeleportDistanceThreshold)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TeleportDistanceThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold(Z_Param_Out_KawaiiPhysics,Z_Param_TeleportDistanceThreshold);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetTeleportDistanceThreshold ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetTeleportRotationThreshold **************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics
{
	struct KawaiiPhysicsLibrary_eventSetTeleportRotationThreshold_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float TeleportRotationThreshold;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** TeleportRotationThreshold */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TeleportRotationThreshold" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetTeleportRotationThreshold constinit property declarations **********
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportRotationThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTeleportRotationThreshold constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTeleportRotationThreshold Property Definitions *********************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetTeleportRotationThreshold_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::NewProp_TeleportRotationThreshold = { "TeleportRotationThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetTeleportRotationThreshold_Parms, TeleportRotationThreshold), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetTeleportRotationThreshold_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::NewProp_TeleportRotationThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::PropPointers) < 2048);
// ********** End Function SetTeleportRotationThreshold Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetTeleportRotationThreshold", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::KawaiiPhysicsLibrary_eventSetTeleportRotationThreshold_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::KawaiiPhysicsLibrary_eventSetTeleportRotationThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetTeleportRotationThreshold)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TeleportRotationThreshold);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetTeleportRotationThreshold(Z_Param_Out_KawaiiPhysics,Z_Param_TeleportRotationThreshold);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetTeleportRotationThreshold ****************

// ********** Begin Class UKawaiiPhysicsLibrary Function SetWindScale ******************************
struct Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics
{
	struct KawaiiPhysicsLibrary_eventSetWindScale_Parms
	{
		FKawaiiPhysicsReference KawaiiPhysics;
		float WindScale;
		FKawaiiPhysicsReference ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Kawaii Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** WindScale */" },
#endif
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WindScale" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KawaiiPhysics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetWindScale constinit property declarations **************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_KawaiiPhysics;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WindScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetWindScale constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetWindScale Property Definitions *************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::NewProp_KawaiiPhysics = { "KawaiiPhysics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0003, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetWindScale_Parms, KawaiiPhysics), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KawaiiPhysics_MetaData), NewProp_KawaiiPhysics_MetaData) }; // 325999450
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetWindScale_Parms, WindScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0x0000, STRUCT_OFFSET(KawaiiPhysicsLibrary_eventSetWindScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FKawaiiPhysicsReference, METADATA_PARAMS(0, nullptr) }; // 325999450
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::NewProp_KawaiiPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::NewProp_WindScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::PropPointers) < 2048);
// ********** End Function SetWindScale Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UKawaiiPhysicsLibrary, nullptr, "SetWindScale", 	Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::KawaiiPhysicsLibrary_eventSetWindScale_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::KawaiiPhysicsLibrary_eventSetWindScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UKawaiiPhysicsLibrary::execSetWindScale)
{
	P_GET_STRUCT_REF(FKawaiiPhysicsReference,Z_Param_Out_KawaiiPhysics);
	P_GET_PROPERTY(FFloatProperty,Z_Param_WindScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FKawaiiPhysicsReference*)Z_Param__Result=UKawaiiPhysicsLibrary::SetWindScale(Z_Param_Out_KawaiiPhysics,Z_Param_WindScale);
	P_NATIVE_END;
}
// ********** End Class UKawaiiPhysicsLibrary Function SetWindScale ********************************

// ********** Begin Class UKawaiiPhysicsLibrary ****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKawaiiPhysicsLibrary;
UClass* UKawaiiPhysicsLibrary::GetPrivateStaticClass()
{
	using TClass = UKawaiiPhysicsLibrary;
	if (!Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KawaiiPhysicsLibrary"),
			Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton,
			StaticRegisterNativesUKawaiiPhysicsLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UKawaiiPhysicsLibrary_NoRegister()
{
	return UKawaiiPhysicsLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Exposes operations to be performed on a blend space anim node.\n */" },
#endif
		{ "IncludePath", "KawaiiPhysicsLibrary.h" },
		{ "ModuleRelativePath", "Public/KawaiiPhysicsLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Exposes operations to be performed on a blend space anim node." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UKawaiiPhysicsLibrary constinit property declarations ********************
// ********** End Class UKawaiiPhysicsLibrary constinit property declarations **********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("AddExternalForce"), .Pointer = &UKawaiiPhysicsLibrary::execAddExternalForce, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::AddExternalForce,(const FKawaiiPhysicsReference&, FInstancedStruct&, UObject*, bool),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("AddExternalForcesToComponent"), .Pointer = &UKawaiiPhysicsLibrary::execAddExternalForcesToComponent, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::AddExternalForcesToComponent,(USkeletalMeshComponent*, TArray<FInstancedStruct>&, UObject*, FGameplayTagContainer&, bool, bool),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("AddExternalForceWithExecResult"), .Pointer = &UKawaiiPhysicsLibrary::execAddExternalForceWithExecResult, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::AddExternalForceWithExecResult,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, FInstancedStruct&, UObject*),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("ConvertToKawaiiPhysics"), .Pointer = &UKawaiiPhysicsLibrary::execConvertToKawaiiPhysics, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::ConvertToKawaiiPhysics,(const FAnimNodeReference&, EAnimNodeReferenceConversionResult&),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("ConvertToKawaiiPhysicsPure"), .Pointer = &UKawaiiPhysicsLibrary::execConvertToKawaiiPhysicsPure, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::ConvertToKawaiiPhysicsPure,(const FAnimNodeReference&, FKawaiiPhysicsReference&, bool&),ERASE_ARGUMENT_PACK(void)) },
		{ .NameUTF8 = UTF8TEXT("GetAllowWorldCollision"), .Pointer = &UKawaiiPhysicsLibrary::execGetAllowWorldCollision, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetAllowWorldCollision,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("GetAlphaFromComponent"), .Pointer = &UKawaiiPhysicsLibrary::execGetAlphaFromComponent, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetAlphaFromComponent,(USkeletalMeshComponent*, float&, FGameplayTagContainer&, bool),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("GetDummyBoneLength"), .Pointer = &UKawaiiPhysicsLibrary::execGetDummyBoneLength, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetDummyBoneLength,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(float)) },
		{ .NameUTF8 = UTF8TEXT("GetEnableWind"), .Pointer = &UKawaiiPhysicsLibrary::execGetEnableWind, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetEnableWind,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("GetExcludeBoneNames"), .Pointer = &UKawaiiPhysicsLibrary::execGetExcludeBoneNames, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExcludeBoneNames,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(TArray<FName>)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceBoolProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceBoolProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExternalForceBoolProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceFloatProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceFloatProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExternalForceFloatProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName),ERASE_ARGUMENT_PACK(float)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceIntProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceIntProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExternalForceIntProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName),ERASE_ARGUMENT_PACK(int32)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceRotatorProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceRotatorProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExternalForceRotatorProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName),ERASE_ARGUMENT_PACK(FRotator)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceTransformProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceTransformProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExternalForceTransformProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName),ERASE_ARGUMENT_PACK(FTransform)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceVectorProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceVectorProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetExternalForceVectorProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName),ERASE_ARGUMENT_PACK(FVector)) },
		{ .NameUTF8 = UTF8TEXT("GetExternalForceWildcardProperty"), .Pointer = &UKawaiiPhysicsLibrary::execGetExternalForceWildcardProperty, .ASFunctionPointers = ERASE_NO_FUNCTION() },
		{ .NameUTF8 = UTF8TEXT("GetGravity"), .Pointer = &UKawaiiPhysicsLibrary::execGetGravity, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetGravity,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(FVector)) },
		{ .NameUTF8 = UTF8TEXT("GetLimitsDataAsset"), .Pointer = &UKawaiiPhysicsLibrary::execGetLimitsDataAsset, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetLimitsDataAsset,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(UKawaiiPhysicsLimitsDataAsset*)) },
		{ .NameUTF8 = UTF8TEXT("GetNeedWarmUp"), .Pointer = &UKawaiiPhysicsLibrary::execGetNeedWarmUp, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetNeedWarmUp,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("GetPhysicsSettings"), .Pointer = &UKawaiiPhysicsLibrary::execGetPhysicsSettings, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetPhysicsSettings,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(FKawaiiPhysicsSettings)) },
		{ .NameUTF8 = UTF8TEXT("GetRootBoneName"), .Pointer = &UKawaiiPhysicsLibrary::execGetRootBoneName, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetRootBoneName,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(FName)) },
		{ .NameUTF8 = UTF8TEXT("GetTeleportDistanceThreshold"), .Pointer = &UKawaiiPhysicsLibrary::execGetTeleportDistanceThreshold, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetTeleportDistanceThreshold,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(float)) },
		{ .NameUTF8 = UTF8TEXT("GetTeleportRotationThreshold"), .Pointer = &UKawaiiPhysicsLibrary::execGetTeleportRotationThreshold, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetTeleportRotationThreshold,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(float)) },
		{ .NameUTF8 = UTF8TEXT("GetWindScale"), .Pointer = &UKawaiiPhysicsLibrary::execGetWindScale, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::GetWindScale,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(float)) },
		{ .NameUTF8 = UTF8TEXT("RemoveExternalForcesFromComponent"), .Pointer = &UKawaiiPhysicsLibrary::execRemoveExternalForcesFromComponent, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::RemoveExternalForcesFromComponent,(USkeletalMeshComponent*, UObject*, FGameplayTagContainer&, bool),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("ResetDynamics"), .Pointer = &UKawaiiPhysicsLibrary::execResetDynamics, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::ResetDynamics,(const FKawaiiPhysicsReference&),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetAllowWorldCollision"), .Pointer = &UKawaiiPhysicsLibrary::execSetAllowWorldCollision, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetAllowWorldCollision,(const FKawaiiPhysicsReference&, bool),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetAlphaToComponent"), .Pointer = &UKawaiiPhysicsLibrary::execSetAlphaToComponent, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetAlphaToComponent,(USkeletalMeshComponent*, float, FGameplayTagContainer&, bool),ERASE_ARGUMENT_PACK(bool)) },
		{ .NameUTF8 = UTF8TEXT("SetDummyBoneLength"), .Pointer = &UKawaiiPhysicsLibrary::execSetDummyBoneLength, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetDummyBoneLength,(const FKawaiiPhysicsReference&, float),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetEnableWind"), .Pointer = &UKawaiiPhysicsLibrary::execSetEnableWind, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetEnableWind,(const FKawaiiPhysicsReference&, bool),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExcludeBoneNames"), .Pointer = &UKawaiiPhysicsLibrary::execSetExcludeBoneNames, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExcludeBoneNames,(const FKawaiiPhysicsReference&, TArray<FName>&),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceBoolProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceBoolProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExternalForceBoolProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName, bool),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceFloatProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceFloatProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExternalForceFloatProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName, float),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceIntProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceIntProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExternalForceIntProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName, int32),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceRotatorProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceRotatorProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExternalForceRotatorProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName, FRotator),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceTransformProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceTransformProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExternalForceTransformProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName, FTransform),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceVectorProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceVectorProperty, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetExternalForceVectorProperty,(EKawaiiPhysicsAccessExternalForceResult&, const FKawaiiPhysicsReference&, int32, FName, FVector),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetExternalForceWildcardProperty"), .Pointer = &UKawaiiPhysicsLibrary::execSetExternalForceWildcardProperty, .ASFunctionPointers = ERASE_NO_FUNCTION() },
		{ .NameUTF8 = UTF8TEXT("SetGravity"), .Pointer = &UKawaiiPhysicsLibrary::execSetGravity, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetGravity,(const FKawaiiPhysicsReference&, FVector),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetLimitsDataAsset"), .Pointer = &UKawaiiPhysicsLibrary::execSetLimitsDataAsset, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetLimitsDataAsset,(const FKawaiiPhysicsReference&, UKawaiiPhysicsLimitsDataAsset*),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetNeedWarmUp"), .Pointer = &UKawaiiPhysicsLibrary::execSetNeedWarmUp, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetNeedWarmUp,(const FKawaiiPhysicsReference&, bool),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetPhysicsSettings"), .Pointer = &UKawaiiPhysicsLibrary::execSetPhysicsSettings, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetPhysicsSettings,(const FKawaiiPhysicsReference&, FKawaiiPhysicsSettings&),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetRootBoneName"), .Pointer = &UKawaiiPhysicsLibrary::execSetRootBoneName, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetRootBoneName,(const FKawaiiPhysicsReference&, FName&),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetTeleportDistanceThreshold"), .Pointer = &UKawaiiPhysicsLibrary::execSetTeleportDistanceThreshold, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetTeleportDistanceThreshold,(const FKawaiiPhysicsReference&, float),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetTeleportRotationThreshold"), .Pointer = &UKawaiiPhysicsLibrary::execSetTeleportRotationThreshold, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetTeleportRotationThreshold,(const FKawaiiPhysicsReference&, float),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
		{ .NameUTF8 = UTF8TEXT("SetWindScale"), .Pointer = &UKawaiiPhysicsLibrary::execSetWindScale, .ASFunctionPointers = ERASE_FUNCTION_PTR(&UKawaiiPhysicsLibrary::SetWindScale,(const FKawaiiPhysicsReference&, float),ERASE_ARGUMENT_PACK(FKawaiiPhysicsReference)) },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForce, "AddExternalForce" }, // 3052068052
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForcesToComponent, "AddExternalForcesToComponent" }, // 2514252803
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_AddExternalForceWithExecResult, "AddExternalForceWithExecResult" }, // 1218342838
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysics, "ConvertToKawaiiPhysics" }, // 4272813042
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ConvertToKawaiiPhysicsPure, "ConvertToKawaiiPhysicsPure" }, // 605229284
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAllowWorldCollision, "GetAllowWorldCollision" }, // 784627432
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetAlphaFromComponent, "GetAlphaFromComponent" }, // 4235322511
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetDummyBoneLength, "GetDummyBoneLength" }, // 4229655356
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetEnableWind, "GetEnableWind" }, // 2088679093
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExcludeBoneNames, "GetExcludeBoneNames" }, // 594286342
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceBoolProperty, "GetExternalForceBoolProperty" }, // 4250555354
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceFloatProperty, "GetExternalForceFloatProperty" }, // 2927215541
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceIntProperty, "GetExternalForceIntProperty" }, // 3157359949
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceRotatorProperty, "GetExternalForceRotatorProperty" }, // 4111158668
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceTransformProperty, "GetExternalForceTransformProperty" }, // 1487449860
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceVectorProperty, "GetExternalForceVectorProperty" }, // 1970694366
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetExternalForceWildcardProperty, "GetExternalForceWildcardProperty" }, // 3595425890
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetGravity, "GetGravity" }, // 2409614386
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetLimitsDataAsset, "GetLimitsDataAsset" }, // 2088696210
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetNeedWarmUp, "GetNeedWarmUp" }, // 72083609
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetPhysicsSettings, "GetPhysicsSettings" }, // 1712580117
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetRootBoneName, "GetRootBoneName" }, // 1474997021
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportDistanceThreshold, "GetTeleportDistanceThreshold" }, // 3329878150
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetTeleportRotationThreshold, "GetTeleportRotationThreshold" }, // 3481991706
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_GetWindScale, "GetWindScale" }, // 1213175880
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_RemoveExternalForcesFromComponent, "RemoveExternalForcesFromComponent" }, // 3205570744
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_ResetDynamics, "ResetDynamics" }, // 4148361158
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAllowWorldCollision, "SetAllowWorldCollision" }, // 4145808049
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetAlphaToComponent, "SetAlphaToComponent" }, // 923896884
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetDummyBoneLength, "SetDummyBoneLength" }, // 3401828907
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetEnableWind, "SetEnableWind" }, // 2216118571
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExcludeBoneNames, "SetExcludeBoneNames" }, // 3336185286
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceBoolProperty, "SetExternalForceBoolProperty" }, // 1901171802
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceFloatProperty, "SetExternalForceFloatProperty" }, // 181990264
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceIntProperty, "SetExternalForceIntProperty" }, // 1637303043
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceRotatorProperty, "SetExternalForceRotatorProperty" }, // 2538134916
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceTransformProperty, "SetExternalForceTransformProperty" }, // 1045108113
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceVectorProperty, "SetExternalForceVectorProperty" }, // 3921876232
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetExternalForceWildcardProperty, "SetExternalForceWildcardProperty" }, // 3194649756
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetGravity, "SetGravity" }, // 3646535070
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetLimitsDataAsset, "SetLimitsDataAsset" }, // 162196609
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetNeedWarmUp, "SetNeedWarmUp" }, // 1909468554
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetPhysicsSettings, "SetPhysicsSettings" }, // 2036842832
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetRootBoneName, "SetRootBoneName" }, // 1128643305
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportDistanceThreshold, "SetTeleportDistanceThreshold" }, // 1239463896
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetTeleportRotationThreshold, "SetTeleportRotationThreshold" }, // 3006875544
		{ &Z_Construct_UFunction_UKawaiiPhysicsLibrary_SetWindScale, "SetWindScale" }, // 300059549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKawaiiPhysicsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics
UObject* (*const Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_KawaiiPhysics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::ClassParams = {
	&UKawaiiPhysicsLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::Class_MetaDataParams)
};
void UKawaiiPhysicsLibrary::StaticRegisterNativesUKawaiiPhysicsLibrary()
{
	UClass* Class = UKawaiiPhysicsLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UKawaiiPhysicsLibrary()
{
	if (!Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.OuterSingleton, Z_Construct_UClass_UKawaiiPhysicsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKawaiiPhysicsLibrary.OuterSingleton;
}
UKawaiiPhysicsLibrary::UKawaiiPhysicsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKawaiiPhysicsLibrary);
UKawaiiPhysicsLibrary::~UKawaiiPhysicsLibrary() {}
// ********** End Class UKawaiiPhysicsLibrary ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EKawaiiPhysicsAccessExternalForceResult_StaticEnum, TEXT("EKawaiiPhysicsAccessExternalForceResult"), &Z_Registration_Info_UEnum_EKawaiiPhysicsAccessExternalForceResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3397586654U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FKawaiiPhysicsReference::StaticStruct, Z_Construct_UScriptStruct_FKawaiiPhysicsReference_Statics::NewStructOps, TEXT("KawaiiPhysicsReference"),&Z_Registration_Info_UScriptStruct_FKawaiiPhysicsReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKawaiiPhysicsReference), 325999450U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKawaiiPhysicsLibrary, UKawaiiPhysicsLibrary::StaticClass, TEXT("UKawaiiPhysicsLibrary"), &Z_Registration_Info_UClass_UKawaiiPhysicsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKawaiiPhysicsLibrary), 1653393536U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_505862083{
	TEXT("/Script/KawaiiPhysics"),
	Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Michael_Taulli_Desktop_Challenge_Plugins_KawaiiPhysics_Source_KawaiiPhysics_Public_KawaiiPhysicsLibrary_h__Script_KawaiiPhysics_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
