// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPS_11/FPS_11HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPS_11HUD() {}
// Cross Module References
	FPS_11_API UClass* Z_Construct_UClass_AFPS_11HUD_NoRegister();
	FPS_11_API UClass* Z_Construct_UClass_AFPS_11HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_FPS_11();
// End Cross Module References
	void AFPS_11HUD::StaticRegisterNativesAFPS_11HUD()
	{
	}
	UClass* Z_Construct_UClass_AFPS_11HUD_NoRegister()
	{
		return AFPS_11HUD::StaticClass();
	}
	struct Z_Construct_UClass_AFPS_11HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPS_11HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_FPS_11,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPS_11HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FPS_11HUD.h" },
		{ "ModuleRelativePath", "FPS_11HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPS_11HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPS_11HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPS_11HUD_Statics::ClassParams = {
		&AFPS_11HUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPS_11HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPS_11HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPS_11HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPS_11HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_11HUD, 2543116709);
	template<> FPS_11_API UClass* StaticClass<AFPS_11HUD>()
	{
		return AFPS_11HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_11HUD(Z_Construct_UClass_AFPS_11HUD, &AFPS_11HUD::StaticClass, TEXT("/Script/FPS_11"), TEXT("AFPS_11HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_11HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
