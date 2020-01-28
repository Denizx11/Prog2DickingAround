// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Prog2DickingAround/Prog2DickingAroundGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProg2DickingAroundGameModeBase() {}
// Cross Module References
	PROG2DICKINGAROUND_API UClass* Z_Construct_UClass_AProg2DickingAroundGameModeBase_NoRegister();
	PROG2DICKINGAROUND_API UClass* Z_Construct_UClass_AProg2DickingAroundGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Prog2DickingAround();
// End Cross Module References
	void AProg2DickingAroundGameModeBase::StaticRegisterNativesAProg2DickingAroundGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProg2DickingAroundGameModeBase_NoRegister()
	{
		return AProg2DickingAroundGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Prog2DickingAround,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Prog2DickingAroundGameModeBase.h" },
		{ "ModuleRelativePath", "Prog2DickingAroundGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProg2DickingAroundGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::ClassParams = {
		&AProg2DickingAroundGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProg2DickingAroundGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProg2DickingAroundGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProg2DickingAroundGameModeBase, 1532195877);
	template<> PROG2DICKINGAROUND_API UClass* StaticClass<AProg2DickingAroundGameModeBase>()
	{
		return AProg2DickingAroundGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProg2DickingAroundGameModeBase(Z_Construct_UClass_AProg2DickingAroundGameModeBase, &AProg2DickingAroundGameModeBase::StaticClass, TEXT("/Script/Prog2DickingAround"), TEXT("AProg2DickingAroundGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProg2DickingAroundGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
