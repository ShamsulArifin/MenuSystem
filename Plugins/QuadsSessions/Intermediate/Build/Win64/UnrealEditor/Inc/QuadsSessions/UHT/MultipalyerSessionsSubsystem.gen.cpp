// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuadsSessions/Public/MultipalyerSessionsSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultipalyerSessionsSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	QUADSSESSIONS_API UClass* Z_Construct_UClass_UMultipalyerSessionsSubsystem();
	QUADSSESSIONS_API UClass* Z_Construct_UClass_UMultipalyerSessionsSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QuadsSessions();
// End Cross Module References
	void UMultipalyerSessionsSubsystem::StaticRegisterNativesUMultipalyerSessionsSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultipalyerSessionsSubsystem);
	UClass* Z_Construct_UClass_UMultipalyerSessionsSubsystem_NoRegister()
	{
		return UMultipalyerSessionsSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_QuadsSessions,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MultipalyerSessionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultipalyerSessionsSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultipalyerSessionsSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::ClassParams = {
		&UMultipalyerSessionsSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UMultipalyerSessionsSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMultipalyerSessionsSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultipalyerSessionsSubsystem.OuterSingleton, Z_Construct_UClass_UMultipalyerSessionsSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultipalyerSessionsSubsystem.OuterSingleton;
	}
	template<> QUADSSESSIONS_API UClass* StaticClass<UMultipalyerSessionsSubsystem>()
	{
		return UMultipalyerSessionsSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultipalyerSessionsSubsystem);
	UMultipalyerSessionsSubsystem::~UMultipalyerSessionsSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Projects_MenuSystem_Plugins_QuadsSessions_Source_QuadsSessions_Public_MultipalyerSessionsSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_MenuSystem_Plugins_QuadsSessions_Source_QuadsSessions_Public_MultipalyerSessionsSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMultipalyerSessionsSubsystem, UMultipalyerSessionsSubsystem::StaticClass, TEXT("UMultipalyerSessionsSubsystem"), &Z_Registration_Info_UClass_UMultipalyerSessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultipalyerSessionsSubsystem), 1732742831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_MenuSystem_Plugins_QuadsSessions_Source_QuadsSessions_Public_MultipalyerSessionsSubsystem_h_1419759188(TEXT("/Script/QuadsSessions"),
		Z_CompiledInDeferFile_FID_Projects_MenuSystem_Plugins_QuadsSessions_Source_QuadsSessions_Public_MultipalyerSessionsSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_MenuSystem_Plugins_QuadsSessions_Source_QuadsSessions_Public_MultipalyerSessionsSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
