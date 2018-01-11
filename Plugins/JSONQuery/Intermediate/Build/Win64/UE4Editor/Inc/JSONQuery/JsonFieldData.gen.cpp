// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/JSONQueryPrivatePCH.h"
#include "Classes/JsonFieldData.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonFieldData() {}
// Cross Module References
	JSONQUERY_API UFunction* Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_JSONQuery();
	JSONQUERY_API UEnum* Z_Construct_UEnum_JSONQuery_EJSONResult();
	JSONQUERY_API UClass* Z_Construct_UClass_UJsonFieldData_NoRegister();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_Create();
	JSONQUERY_API UClass* Z_Construct_UClass_UJsonFieldData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_FromFile();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_FromString();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetBool();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetBoolArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloat();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloatArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetInt();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetIntArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetIsNull();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetObject();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectKeys();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetRequest();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetString();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_GetStringArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_HasField();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequest();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolean();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloat();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloatArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetInt();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetIntArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetNull();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetNullArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetObject();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetObjectArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetString();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_SetStringArray();
	JSONQUERY_API UFunction* Z_Construct_UFunction_UJsonFieldData_ToString();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature()
	{
		struct _Script_JSONQuery_eventOnGetResult_Parms
		{
			bool bSuccess;
			UJsonFieldData* JSON;
			EJSONResult Status;
		};
		UObject* Outer = Z_Construct_UPackage__Script_JSONQuery();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnGetResult__DelegateSignature"), RF_Public|RF_Transient|RF_MarkAsNative) UDelegateFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00130000, 65535, sizeof(_Script_JSONQuery_eventOnGetResult_Parms));
			UProperty* NewProp_Status = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Status"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(Status, _Script_JSONQuery_eventOnGetResult_Parms), 0x0010000000000082, Z_Construct_UEnum_JSONQuery_EJSONResult());
			UProperty* NewProp_Status_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_Status, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_JSON = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("JSON"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(JSON, _Script_JSONQuery_eventOnGetResult_Parms), 0x0010000000000080, Z_Construct_UClass_UJsonFieldData_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuccess, _Script_JSONQuery_eventOnGetResult_Parms);
			UProperty* NewProp_bSuccess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuccess, _Script_JSONQuery_eventOnGetResult_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(bSuccess, _Script_JSONQuery_eventOnGetResult_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Generate a delegate for the OnGetResult event"));
			MetaData->SetValue(NewProp_Status, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_bSuccess, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
static UEnum* EJSONResult_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_JSONQuery_EJSONResult, Z_Construct_UPackage__Script_JSONQuery(), TEXT("EJSONResult"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJSONResult(EJSONResult_StaticEnum, TEXT("/Script/JSONQuery"), TEXT("EJSONResult"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_JSONQuery_EJSONResult()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_JSONQuery();
		extern uint32 Get_Z_Construct_UEnum_JSONQuery_EJSONResult_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJSONResult"), 0, Get_Z_Construct_UEnum_JSONQuery_EJSONResult_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EJSONResult"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EJSONResult::Success"), 0);
			EnumNames.Emplace(TEXT("EJSONResult::HttpFailed"), 1);
			EnumNames.Emplace(TEXT("EJSONResult::JSONParsingFailed"), 2);
			EnumNames.Emplace(TEXT("EJSONResult::EJSONResult_MAX"), 3);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EJSONResult");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("The possible status of a JSON POST/GET call."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_JSONQuery_EJSONResult_CRC() { return 189260385U; }
	void UJsonFieldData::StaticRegisterNativesUJsonFieldData()
	{
		UClass* Class = UJsonFieldData::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Create", (Native)&UJsonFieldData::execCreate },
			{ "FromFile", (Native)&UJsonFieldData::execFromFile },
			{ "FromString", (Native)&UJsonFieldData::execFromString },
			{ "GetBool", (Native)&UJsonFieldData::execGetBool },
			{ "GetBoolArray", (Native)&UJsonFieldData::execGetBoolArray },
			{ "GetFloat", (Native)&UJsonFieldData::execGetFloat },
			{ "GetFloatArray", (Native)&UJsonFieldData::execGetFloatArray },
			{ "GetInt", (Native)&UJsonFieldData::execGetInt },
			{ "GetIntArray", (Native)&UJsonFieldData::execGetIntArray },
			{ "GetIsNull", (Native)&UJsonFieldData::execGetIsNull },
			{ "GetObject", (Native)&UJsonFieldData::execGetObject },
			{ "GetObjectArray", (Native)&UJsonFieldData::execGetObjectArray },
			{ "GetObjectKeys", (Native)&UJsonFieldData::execGetObjectKeys },
			{ "GetRequest", (Native)&UJsonFieldData::execGetRequest },
			{ "GetString", (Native)&UJsonFieldData::execGetString },
			{ "GetStringArray", (Native)&UJsonFieldData::execGetStringArray },
			{ "HasField", (Native)&UJsonFieldData::execHasField },
			{ "PostRequest", (Native)&UJsonFieldData::execPostRequest },
			{ "PostRequestWithFile", (Native)&UJsonFieldData::execPostRequestWithFile },
			{ "SetBoolArray", (Native)&UJsonFieldData::execSetBoolArray },
			{ "SetBoolean", (Native)&UJsonFieldData::execSetBoolean },
			{ "SetFloat", (Native)&UJsonFieldData::execSetFloat },
			{ "SetFloatArray", (Native)&UJsonFieldData::execSetFloatArray },
			{ "SetInt", (Native)&UJsonFieldData::execSetInt },
			{ "SetIntArray", (Native)&UJsonFieldData::execSetIntArray },
			{ "SetNull", (Native)&UJsonFieldData::execSetNull },
			{ "SetNullArray", (Native)&UJsonFieldData::execSetNullArray },
			{ "SetObject", (Native)&UJsonFieldData::execSetObject },
			{ "SetObjectArray", (Native)&UJsonFieldData::execSetObjectArray },
			{ "SetString", (Native)&UJsonFieldData::execSetString },
			{ "SetStringArray", (Native)&UJsonFieldData::execSetStringArray },
			{ "ToString", (Native)&UJsonFieldData::execToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_Create()
	{
		struct JsonFieldData_eventCreate_Parms
		{
			UObject* WorldContextObject;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Create"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(JsonFieldData_eventCreate_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventCreate_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, JsonFieldData_eventCreate_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Create JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Create a new instance of the UJsonFieldData class, for use in Blueprint graphs.\n\n@param        WorldContextObject              The current context\n\n@return       A pointer to the newly created post data"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_FromFile()
	{
		struct JsonFieldData_eventFromFile_Parms
		{
			FString FilePath;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FromFile"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventFromFile_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, JsonFieldData_eventFromFile_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, JsonFieldData_eventFromFile_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, JsonFieldData_eventFromFile_Parms), sizeof(bool), true);
			UProperty* NewProp_FilePath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FilePath, JsonFieldData_eventFromFile_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("From File"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Creates new data from the\n\n@param        FilePath        Text Json File in game content folder\n\n@return       JsonFieldData Object"));
			MetaData->SetValue(NewProp_FilePath, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_FromString()
	{
		struct JsonFieldData_eventFromString_Parms
		{
			FString dataString;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FromString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventFromString_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, JsonFieldData_eventFromString_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, JsonFieldData_eventFromString_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, JsonFieldData_eventFromString_Parms), sizeof(bool), true);
			UProperty* NewProp_dataString = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("dataString"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(dataString, JsonFieldData_eventFromString_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("From String"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets the fields from the supplied JSON string\n\n@param        dataString The JSON string"));
			MetaData->SetValue(NewProp_dataString, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetBool()
	{
		struct JsonFieldData_eventGetBool_Parms
		{
			FString key;
			bool success;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBool"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(JsonFieldData_eventGetBool_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, JsonFieldData_eventGetBool_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, JsonFieldData_eventGetBool_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, JsonFieldData_eventGetBool_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetBool_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetBool_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetBool_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetBool_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Boolean Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Tries to get a boolean from the field data by key, returns the boolean when successful\n\n@param        key                     Key\n@param        success         Was the boolean field found?\n\n@return       The requested boolean, always false when failed"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetBoolArray()
	{
		struct JsonFieldData_eventGetBoolArray_Parms
		{
			FString key;
			bool success;
			TArray<bool> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBoolArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14420401, 65535, sizeof(JsonFieldData_eventGetBoolArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetBoolArray_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetBoolArray_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetBoolArray_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetBoolArray_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetBoolArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Boolean Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a boolean array from the post data with the given key\n\n@param        key                                             Key\n@param        success         Was the field found?\n\n@return       The requested array of booleans"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloat()
	{
		struct JsonFieldData_eventGetFloat_Parms
		{
			FString key;
			bool success;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(JsonFieldData_eventGetFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetFloat_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetFloat_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetFloat_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetFloat_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetFloat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Float Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Tries to get a float from the field data by key, returns the float when successful\n\n@param        key                     Key\n@param        success         Was the float field found?\n\n@return       The requested float, always 0.0 when failed"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetFloatArray()
	{
		struct JsonFieldData_eventGetFloatArray_Parms
		{
			FString key;
			bool success;
			TArray<float> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetFloatArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14420401, 65535, sizeof(JsonFieldData_eventGetFloatArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetFloatArray_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetFloatArray_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetFloatArray_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetFloatArray_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetFloatArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Float Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a float array from the post data with the given key\n\n@param        key                                             Key\n@param        success         Was the field found?\n\n@return       The requested array of floats"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetInt()
	{
		struct JsonFieldData_eventGetInt_Parms
		{
			FString key;
			bool success;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(JsonFieldData_eventGetInt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetInt_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetInt_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetInt_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetInt_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetInt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Integer Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Tries to get an integer from the field data by key, returns the integer when successful\n\n@param        key                     Key\n@param        success         Was the integer field found?\n\n@return       The requested integer, always 0 when failed"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetIntArray()
	{
		struct JsonFieldData_eventGetIntArray_Parms
		{
			FString key;
			bool success;
			TArray<int32> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIntArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14420401, 65535, sizeof(JsonFieldData_eventGetIntArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetIntArray_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetIntArray_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetIntArray_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetIntArray_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetIntArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Integer Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets an integer array from the post data with the given key\n\n@param        key                                             Key\n@param        success         Was the field found?\n\n@return       The requested array of integers"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetIsNull()
	{
		struct JsonFieldData_eventGetIsNull_Parms
		{
			FString key;
			bool fieldExists;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetIsNull"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(JsonFieldData_eventGetIsNull_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, JsonFieldData_eventGetIsNull_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, JsonFieldData_eventGetIsNull_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, JsonFieldData_eventGetIsNull_Parms), sizeof(bool), true);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(fieldExists, JsonFieldData_eventGetIsNull_Parms);
			UProperty* NewProp_fieldExists = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("fieldExists"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(fieldExists, JsonFieldData_eventGetIsNull_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(fieldExists, JsonFieldData_eventGetIsNull_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetIsNull_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Field Is Null"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Checks if a field is null\n\n@param        key                     Key\n@param        fieldExists             Was the field found?\n\n@return       If the field is null. False if it's not or it was not found."));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObject()
	{
		struct JsonFieldData_eventGetObject_Parms
		{
			FString key;
			bool success;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetObject"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14420401, 65535, sizeof(JsonFieldData_eventGetObject_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetObject_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetObject_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetObject_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetObject_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetObject_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Object Field"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the post data object from the post data with the given key\n\n@param        WorldContextObject              Array of strings\n@param        key                                             Key\n@param        success         Was the object field found?\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectArray()
	{
		struct JsonFieldData_eventGetObjectArray_Parms
		{
			UObject* WorldContextObject;
			FString key;
			bool success;
			TArray<UJsonFieldData*> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetObjectArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14420401, 65535, sizeof(JsonFieldData_eventGetObjectArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetObjectArray_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UJsonFieldData_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetObjectArray_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetObjectArray_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetObjectArray_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetObjectArray_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, JsonFieldData_eventGetObjectArray_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Object Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets an object array from the post data with the given key\n\n@param        key                                             Key\n@param        success         Was the field found?\n\n@return       The requested post data objects"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetObjectKeys()
	{
		struct JsonFieldData_eventGetObjectKeys_Parms
		{
			UObject* WorldContextObject;
			TArray<FString> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetObjectKeys"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(JsonFieldData_eventGetObjectKeys_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetObjectKeys_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, JsonFieldData_eventGetObjectKeys_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Object Keys"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets the keys from the supplied object\n\n@param        key                                             Key\n\n@return       Array of keys"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetRequest()
	{
		struct JsonFieldData_eventGetRequest_Parms
		{
			UObject* WorldContextObject;
			FString url;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(JsonFieldData_eventGetRequest_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetRequest_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(url, JsonFieldData_eventGetRequest_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, JsonFieldData_eventGetRequest_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get JSON Request"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Grabs a page from the internet\n\n@param        WorldContextObject              The current context\n@param        url                                             The URL to request\n\n@return       The newly created post data that will be filled with the url response."));
			MetaData->SetValue(NewProp_url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetString()
	{
		struct JsonFieldData_eventGetString_Parms
		{
			FString key;
			bool success;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x54420401, 65535, sizeof(JsonFieldData_eventGetString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetString_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetString_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetString_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetString_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetString_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get String Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Tries to get a string from the field data by key, returns the string when successful\n\n@param        key                     Key\n@param        success         Was the string field found?\n\n@return       The requested string, empty if failed"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_GetStringArray()
	{
		struct JsonFieldData_eventGetStringArray_Parms
		{
			FString key;
			bool success;
			TArray<FString> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetStringArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14420401, 65535, sizeof(JsonFieldData_eventGetStringArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventGetStringArray_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(success, JsonFieldData_eventGetStringArray_Parms);
			UProperty* NewProp_success = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("success"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(success, JsonFieldData_eventGetStringArray_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(success, JsonFieldData_eventGetStringArray_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventGetStringArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get String Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Gets a string array from the post data with the given key\n\n@param        key                                             Key\n@param        success         Was the field found?\n\n@return       The requested array of strings"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_HasField()
	{
		struct JsonFieldData_eventHasField_Parms
		{
			FString key;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("HasField"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(JsonFieldData_eventHasField_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, JsonFieldData_eventHasField_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, JsonFieldData_eventHasField_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, JsonFieldData_eventHasField_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventHasField_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Check Field Exists"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Checks if a field exists in the JSON object\n\n@param        key     The field name to check\n\n@return       True if the field exists"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequest()
	{
		struct JsonFieldData_eventPostRequest_Parms
		{
			UObject* WorldContextObject;
			FString url;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventPostRequest_Parms));
			UProperty* NewProp_url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(url, JsonFieldData_eventPostRequest_Parms), 0x0010000000000080);
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, JsonFieldData_eventPostRequest_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Post JSON Request"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts the current request data to the internet\n\n@param        WorldContextObject              The current context\n@param        url                                             The URL to post to"));
			MetaData->SetValue(NewProp_url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile()
	{
		struct JsonFieldData_eventPostRequestWithFile_Parms
		{
			FString FilePath;
			FString Url;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PostRequestWithFile"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventPostRequestWithFile_Parms));
			UProperty* NewProp_Url = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Url"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(Url, JsonFieldData_eventPostRequestWithFile_Parms), 0x0010000000000080);
			UProperty* NewProp_FilePath = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("FilePath"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(FilePath, JsonFieldData_eventPostRequestWithFile_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Post JSON Request and File"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Posts the current request data to the internet, together with a file\n\n@param        FilePath                The absolute path for a file\n@param        Url                             The URL to post to"));
			MetaData->SetValue(NewProp_Url, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolArray()
	{
		struct JsonFieldData_eventSetBoolArray_Parms
		{
			FString key;
			TArray<bool> data;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBoolArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetBoolArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetBoolArray_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(data, JsonFieldData_eventSetBoolArray_Parms), 0x0010000000000082);
			UProperty* NewProp_data_Inner = new(EC_InternalUseOnlyConstructor, NewProp_data, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, 0, sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetBoolArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Boolean Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied boolean array to the post data, under the given key\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetBoolean()
	{
		struct JsonFieldData_eventSetBoolean_Parms
		{
			FString key;
			bool value;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBoolean"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetBoolean_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetBoolean_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(value, JsonFieldData_eventSetBoolean_Parms);
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(value, JsonFieldData_eventSetBoolean_Parms), 0x0010000000000082, CPP_BOOL_PROPERTY_BITMASK(value, JsonFieldData_eventSetBoolean_Parms), sizeof(bool), true);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetBoolean_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Boolean Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied bool to the post data, under the given key\n\n@param        key                                             Key\n@param        value                                   Object value\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_value, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloat()
	{
		struct JsonFieldData_eventSetFloat_Parms
		{
			FString key;
			float value;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetFloat_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, JsonFieldData_eventSetFloat_Parms), 0x0010000000000082);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetFloat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Float Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied float to the post data, under the given key\n\n@param        key                                             Key\n@param        value                                   Object value\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_value, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetFloatArray()
	{
		struct JsonFieldData_eventSetFloatArray_Parms
		{
			FString key;
			TArray<float> data;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetFloatArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetFloatArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetFloatArray_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(data, JsonFieldData_eventSetFloatArray_Parms), 0x0010000000000082);
			UProperty* NewProp_data_Inner = new(EC_InternalUseOnlyConstructor, NewProp_data, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetFloatArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Float Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied float array to the post data, under the given key\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetInt()
	{
		struct JsonFieldData_eventSetInt_Parms
		{
			FString key;
			int32 value;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetInt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetInt_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(value, JsonFieldData_eventSetInt_Parms), 0x0010000000000082);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetInt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Integer Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied integer to the post data, under the given key\n\n@param        key                                             Key\n@param        value                                   Object value\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_value, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetIntArray()
	{
		struct JsonFieldData_eventSetIntArray_Parms
		{
			FString key;
			TArray<int32> data;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetIntArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetIntArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetIntArray_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(data, JsonFieldData_eventSetIntArray_Parms), 0x0010000000000082);
			UProperty* NewProp_data_Inner = new(EC_InternalUseOnlyConstructor, NewProp_data, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetIntArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Integer Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied integer array to the post data, under the given key\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetNull()
	{
		struct JsonFieldData_eventSetNull_Parms
		{
			FString key;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetNull"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetNull_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetNull_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetNull_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Null Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds a null value to the post data, under the given key\n\n@param        key                                             Key\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetNullArray()
	{
		struct JsonFieldData_eventSetNullArray_Parms
		{
			FString key;
			int32 length;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetNullArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(JsonFieldData_eventSetNullArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetNullArray_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_length = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("length"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(length, JsonFieldData_eventSetNullArray_Parms), 0x0010000008000182);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetNullArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Null Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds null array to the post data, under the given key, with the given number of nulls\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_length, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetObject()
	{
		struct JsonFieldData_eventSetObject_Parms
		{
			FString key;
			const UJsonFieldData* objectData;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetObject"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetObject_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetObject_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_objectData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("objectData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(objectData, JsonFieldData_eventSetObject_Parms), 0x0010000000000082, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetObject_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Object Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied object to the post data, under the given key\n\n@param        key                                             Key\n@param        objectData                              Object data\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_objectData, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetObjectArray()
	{
		struct JsonFieldData_eventSetObjectArray_Parms
		{
			FString key;
			TArray<UJsonFieldData*> arrayData;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetObjectArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetObjectArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetObjectArray_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_arrayData = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("arrayData"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(arrayData, JsonFieldData_eventSetObjectArray_Parms), 0x0010000000000082);
			UProperty* NewProp_arrayData_Inner = new(EC_InternalUseOnlyConstructor, NewProp_arrayData, TEXT("arrayData"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetObjectArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add Object Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied object array to the post data, under the given key\n\n@param        key                                             Key\n@param        objectData                              Array of object data\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_arrayData, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetString()
	{
		struct JsonFieldData_eventSetString_Parms
		{
			FString key;
			FString value;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetString_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(value, JsonFieldData_eventSetString_Parms), 0x0010000000000080);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetString_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add String Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied string to the post data, under the given key\n\n@param        key                                             Key\n@param        value                                   Object value\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_value, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_SetStringArray()
	{
		struct JsonFieldData_eventSetStringArray_Parms
		{
			FString key;
			TArray<FString> data;
			UJsonFieldData* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetStringArray"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(JsonFieldData_eventSetStringArray_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventSetStringArray_Parms), 0x0010000000000580, Z_Construct_UClass_UJsonFieldData_NoRegister());
			UProperty* NewProp_data = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(data, JsonFieldData_eventSetStringArray_Parms), 0x0010000000000082);
			UProperty* NewProp_data_Inner = new(EC_InternalUseOnlyConstructor, NewProp_data, TEXT("data"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_key = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("key"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(key, JsonFieldData_eventSetStringArray_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Add String Array Field"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Adds the supplied string array to the post data, under the given key\n\n@param        key                                             Key\n@param        data                                    Array\n\n@return       The object itself"));
			MetaData->SetValue(NewProp_data, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_key, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UJsonFieldData_ToString()
	{
		struct JsonFieldData_eventToString_Parms
		{
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UJsonFieldData();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ToString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(JsonFieldData_eventToString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, JsonFieldData_eventToString_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("JSON"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("->"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("JSON To String"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("cast text convert serialize"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the JSON object as a string."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UJsonFieldData_NoRegister()
	{
		return UJsonFieldData::StaticClass();
	}
	UClass* Z_Construct_UClass_UJsonFieldData()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_JSONQuery();
			OuterClass = UJsonFieldData::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_Create());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_FromFile());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_FromString());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetBool());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetBoolArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetFloatArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetInt());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetIntArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetIsNull());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetObjectArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetRequest());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetString());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_GetStringArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_HasField());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_PostRequest());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetBoolArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetBoolean());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetFloatArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetInt());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetIntArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetNull());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetNullArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetObject());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetObjectArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetString());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_SetStringArray());
				OuterClass->LinkChild(Z_Construct_UFunction_UJsonFieldData_ToString());

				UProperty* NewProp_OnGetResult = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OnGetResult"), RF_Public|RF_Transient|RF_MarkAsNative) UMulticastDelegateProperty(CPP_PROPERTY_BASE(OnGetResult, UJsonFieldData), 0x0010000010080000, Z_Construct_UDelegateFunction_JSONQuery_OnGetResult__DelegateSignature());
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_Create(), "Create"); // 1075583855
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_FromFile(), "FromFile"); // 2391126028
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_FromString(), "FromString"); // 3594260065
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetBool(), "GetBool"); // 1984284549
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetBoolArray(), "GetBoolArray"); // 496873788
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetFloat(), "GetFloat"); // 2929602591
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetFloatArray(), "GetFloatArray"); // 1612551596
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetInt(), "GetInt"); // 1967357319
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetIntArray(), "GetIntArray"); // 3789550834
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetIsNull(), "GetIsNull"); // 3756198831
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetObject(), "GetObject"); // 3390239405
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetObjectArray(), "GetObjectArray"); // 3485994687
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetObjectKeys(), "GetObjectKeys"); // 54961283
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetRequest(), "GetRequest"); // 2783509074
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetString(), "GetString"); // 1014479478
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_GetStringArray(), "GetStringArray"); // 655244314
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_HasField(), "HasField"); // 366205117
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_PostRequest(), "PostRequest"); // 1975280761
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_PostRequestWithFile(), "PostRequestWithFile"); // 976860613
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetBoolArray(), "SetBoolArray"); // 1270163562
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetBoolean(), "SetBoolean"); // 1555802199
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetFloat(), "SetFloat"); // 202852203
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetFloatArray(), "SetFloatArray"); // 878796083
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetInt(), "SetInt"); // 1262799954
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetIntArray(), "SetIntArray"); // 3330449121
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetNull(), "SetNull"); // 619722314
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetNullArray(), "SetNullArray"); // 814558334
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetObject(), "SetObject"); // 4182309603
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetObjectArray(), "SetObjectArray"); // 2631911556
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetString(), "SetString"); // 1504359650
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_SetStringArray(), "SetStringArray"); // 3662673052
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UJsonFieldData_ToString(), "ToString"); // 764020560
				static TCppClassTypeInfo<TCppClassTypeTraits<UJsonFieldData> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("Category"), TEXT("JSON"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("JsonFieldData.h"));
				MetaData->SetValue(OuterClass, TEXT("IsBlueprintBase"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
				MetaData->SetValue(NewProp_OnGetResult, TEXT("Category"), TEXT("JSON"));
				MetaData->SetValue(NewProp_OnGetResult, TEXT("ModuleRelativePath"), TEXT("Classes/JsonFieldData.h"));
				MetaData->SetValue(NewProp_OnGetResult, TEXT("ToolTip"), TEXT("Event which triggers after the request returned something. Check bSuccess to know if it worked.\nCheck Status to know what happened on error."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJsonFieldData, 1615619512);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJsonFieldData(Z_Construct_UClass_UJsonFieldData, &UJsonFieldData::StaticClass, TEXT("/Script/JSONQuery"), TEXT("UJsonFieldData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonFieldData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
