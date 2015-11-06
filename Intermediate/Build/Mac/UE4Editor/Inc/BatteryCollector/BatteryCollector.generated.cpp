// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "BatteryCollector.h"
#include "BatteryCollector.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollector() {}
	void ABatteryCollectorCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(BATTERYCOLLECTOR_PowerChangeEffect),NULL);
	}
	void ABatteryCollectorCharacter::StaticRegisterNativesABatteryCollectorCharacter()
	{
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(),"CollectPickUps",(Native)&ABatteryCollectorCharacter::execCollectPickUps);
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(),"GetCurrentPower",(Native)&ABatteryCollectorCharacter::execGetCurrentPower);
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(),"GetInitialPower",(Native)&ABatteryCollectorCharacter::execGetInitialPower);
		FNativeFunctionRegistrar::RegisterFunction(ABatteryCollectorCharacter::StaticClass(),"UpdatePower",(Native)&ABatteryCollectorCharacter::execUpdatePower);
	}
	IMPLEMENT_CLASS(ABatteryCollectorCharacter, 3073312179);
	void ABatteryCollectorGameMode::StaticRegisterNativesABatteryCollectorGameMode()
	{
	}
	IMPLEMENT_CLASS(ABatteryCollectorGameMode, 3484541940);
	void APickup::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(BATTERYCOLLECTOR_WasCollected),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		FNativeFunctionRegistrar::RegisterFunction(APickup::StaticClass(),"IsActive",(Native)&APickup::execIsActive);
		FNativeFunctionRegistrar::RegisterFunction(APickup::StaticClass(),"SetActive",(Native)&APickup::execSetActive);
		FNativeFunctionRegistrar::RegisterFunction(APickup::StaticClass(),"WasCollected",(Native)&APickup::execWasCollected);
	}
	IMPLEMENT_CLASS(APickup, 1257847302);
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	IMPLEMENT_CLASS(ABatteryPickup, 2448539865);
	void ASpawnVolume::StaticRegisterNativesASpawnVolume()
	{
		FNativeFunctionRegistrar::RegisterFunction(ASpawnVolume::StaticClass(),"GetRandomPointInVolume",(Native)&ASpawnVolume::execGetRandomPointInVolume);
	}
	IMPLEMENT_CLASS(ASpawnVolume, 4003776627);
FName BATTERYCOLLECTOR_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
FName BATTERYCOLLECTOR_WasCollected = FName(TEXT("WasCollected"));
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();

	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorCharacter();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryCollectorGameMode();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_APickup_IsActive();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_APickup_SetActive();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_APickup_WasCollected();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_APickup_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_APickup();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ABatteryPickup();
	BATTERYCOLLECTOR_API class UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
	BATTERYCOLLECTOR_API class UClass* Z_Construct_UClass_ASpawnVolume();
	BATTERYCOLLECTOR_API class UPackage* Z_Construct_UPackage_BatteryCollector();
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps()
	{
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("CollectPickUps"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04080401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickups"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("End of APawn interface"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()
	{
		struct BatteryCollectorCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetCurrentPower"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(BatteryCollectorCharacter_eventGetCurrentPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorCharacter_eventGetCurrentPower_Parms), 0x0000000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Accessor for initial power"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()
	{
		struct BatteryCollectorCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetInitialPower"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(BatteryCollectorCharacter_eventGetInitialPower_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, BatteryCollectorCharacter_eventGetInitialPower_Parms), 0x0000000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect()
	{
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PowerChangeEffect"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08080800, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()
	{
		struct BatteryCollectorCharacter_eventUpdatePower_Parms
		{
			float _powerChange;
		};
		UObject* Outer=Z_Construct_UClass_ABatteryCollectorCharacter();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("UpdatePower"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(BatteryCollectorCharacter_eventUpdatePower_Parms));
			UProperty* NewProp__powerChange = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("_powerChange"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_powerChange, BatteryCollectorCharacter_eventUpdatePower_Parms), 0x0000000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Power"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Accessor for current power"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter_NoRegister()
	{
		return ABatteryCollectorCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage_BatteryCollector();
			OuterClass = ABatteryCollectorCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;

				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect());
				OuterClass->LinkChild(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp__characterPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("_characterPower"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_characterPower, ABatteryCollectorCharacter), 0x0000000000020001);
				UProperty* NewProp__baseSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("_baseSpeed"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_baseSpeed, ABatteryCollectorCharacter), 0x0000080000000005);
				UProperty* NewProp__speedFactor = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("_speedFactor"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_speedFactor, ABatteryCollectorCharacter), 0x0000080000000005);
				UProperty* NewProp__initialPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("_initialPower"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_initialPower, ABatteryCollectorCharacter), 0x0000080000000005);
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, ABatteryCollectorCharacter), 0x0000000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, ABatteryCollectorCharacter), 0x0000000000020015);
				UProperty* NewProp_CollectionSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollectionSphere"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CollectionSphere, ABatteryCollectorCharacter), 0x00000000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, ABatteryCollectorCharacter), 0x00000000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, ABatteryCollectorCharacter), 0x00000000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ABatteryCollectorCharacter_CollectPickUps()); // 2422444734
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ABatteryCollectorCharacter_GetCurrentPower()); // 1502477587
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ABatteryCollectorCharacter_GetInitialPower()); // 928276474
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ABatteryCollectorCharacter_PowerChangeEffect()); // 2499303425
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ABatteryCollectorCharacter_UpdatePower()); // 2598552175
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp__characterPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp__characterPower, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp__baseSpeed, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp__baseSpeed, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp__baseSpeed, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp__speedFactor, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp__speedFactor, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp__speedFactor, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp__speedFactor, TEXT("ToolTip"), TEXT("Initial starting power"));
				MetaData->SetValue(NewProp__initialPower, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp__initialPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp__initialPower, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp__initialPower, TEXT("ToolTip"), TEXT("Called when we press the E key near a pick up"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ToolTip"), TEXT("Collection Sphere"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorCharacter(Z_Construct_UClass_ABatteryCollectorCharacter, TEXT("ABatteryCollectorCharacter"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorCharacter);
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode_NoRegister()
	{
		return ABatteryCollectorGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryCollectorGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_BatteryCollector();
			OuterClass = ABatteryCollectorGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2088028C;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp__decayRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("_decayRate"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_decayRate, ABatteryCollectorGameMode), 0x0000080000010005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp__decayRate, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp__decayRate, TEXT("ModuleRelativePath"), TEXT("BatteryCollectorGameMode.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectorGameMode(Z_Construct_UClass_ABatteryCollectorGameMode, TEXT("ABatteryCollectorGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectorGameMode);
	UFunction* Z_Construct_UFunction_APickup_IsActive()
	{
		struct Pickup_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsActive"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(Pickup_eventIsActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Pickup_eventIsActive_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Pickup_eventIsActive_Parms), 0x0000000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Pickup_eventIsActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Return the mesh for the pickup"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_SetActive()
	{
		struct Pickup_eventSetActive_Parms
		{
			bool newPickupState;
		};
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetActive"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Pickup_eventSetActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(newPickupState, Pickup_eventSetActive_Parms, bool);
			UProperty* NewProp_newPickupState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("newPickupState"), RF_Public|RF_Transient|RF_Native) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(newPickupState, Pickup_eventSetActive_Parms), 0x0000000000000080, CPP_BOOL_PROPERTY_BITMASK(newPickupState, Pickup_eventSetActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Is pickup active"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_WasCollected()
	{
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WasCollected"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Set pick up to active"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_BatteryCollector();
			OuterClass = APickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APickup_IsActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_SetActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_WasCollected());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_PickupMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PickupMesh"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(PickupMesh, APickup), 0x00000000000a001d, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APickup_IsActive()); // 2517952078
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APickup_SetActive()); // 4238410895
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_APickup_WasCollected()); // 55041077
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("Category"), TEXT("Pickup"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PickupMesh, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, TEXT("APickup"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickup();
			Z_Construct_UPackage_BatteryCollector();
			OuterClass = ABatteryPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp__batteryPower = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("_batteryPower"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(_batteryPower, ABatteryPickup), 0x0000080000000005);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryPickup.h"));
				MetaData->SetValue(NewProp__batteryPower, TEXT("BlueprintProtected"), TEXT("true"));
				MetaData->SetValue(NewProp__batteryPower, TEXT("Category"), TEXT("Power"));
				MetaData->SetValue(NewProp__batteryPower, TEXT("ModuleRelativePath"), TEXT("BatteryPickup.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickup(Z_Construct_UClass_ABatteryPickup, TEXT("ABatteryPickup"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
	UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()
	{
		struct SpawnVolume_eventGetRandomPointInVolume_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ASpawnVolume();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRandomPointInVolume"), RF_Public|RF_Transient|RF_Native) UFunction(FObjectInitializer(), NULL, 0x14820401, 65535, sizeof(SpawnVolume_eventGetRandomPointInVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_Native) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SpawnVolume_eventGetRandomPointInVolume_Parms), 0x0000000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Spawning"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns where spawn location is"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
	{
		return ASpawnVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpawnVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_BatteryCollector();
			OuterClass = ASpawnVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_whereToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("whereToSpawn"), RF_Public|RF_Transient|RF_Native) UObjectProperty(CPP_PROPERTY_BASE(whereToSpawn, ASpawnVolume), 0x00000000000a001d, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_spawnDelayRangeHigh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("spawnDelayRangeHigh"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(spawnDelayRangeHigh, ASpawnVolume), 0x0000080000000005);
				UProperty* NewProp_spawnDelayRangeLow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("spawnDelayRangeLow"), RF_Public|RF_Transient|RF_Native) UFloatProperty(CPP_PROPERTY_BASE(spawnDelayRangeLow, ASpawnVolume), 0x0000080000000005);
				UProperty* NewProp_whatToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("whatToSpawn"), RF_Public|RF_Transient|RF_Native) UClassProperty(CPP_PROPERTY_BASE(whatToSpawn, ASpawnVolume), 0x0004080000000001, Z_Construct_UClass_APickup_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMap(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()); // 1820850609
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_whereToSpawn, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_whereToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_whereToSpawn, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_whereToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_spawnDelayRangeHigh, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_spawnDelayRangeHigh, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_spawnDelayRangeHigh, TEXT("ToolTip"), TEXT("Minimum spawn delay"));
				MetaData->SetValue(NewProp_spawnDelayRangeLow, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_spawnDelayRangeLow, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_whatToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_whatToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnVolume(Z_Construct_UClass_ASpawnVolume, TEXT("ASpawnVolume"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
	UPackage* Z_Construct_UPackage_BatteryCollector()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/BatteryCollector")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0xCB4D83B5;
			Guid.B = 0x42E44D8F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS