#pragma once

#include "CoreMinimal.h"
#include "PlayFabJsonObject.generated.h"

UCLASS()
class UPlayFabJsonObject : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
	void SetStringField(const struct FString& FieldName, const struct FString& StringValue);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetObjectField(const struct FString& FieldName, class UPlayFabJsonObject* JsonObject);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetObjectArrayField(const struct FString& FieldName, TArray<class UPlayFabJsonObject*> ObjectArray);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetNumberField(const struct FString& FieldName, float Number);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetFieldNull(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetField(const struct FString& FieldName, class UPlayFabJsonValue* JsonValue);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetBoolField(const struct FString& FieldName, bool InValue);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void SetArrayField(const struct FString& FieldName, TArray<class UPlayFabJsonValue*> inArray);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void Reset();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void RemoveField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		void MergeJsonObject(class UPlayFabJsonObject* InJsonObject, bool Overwrite);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		bool HasField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		struct FString GetStringField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		TArray<struct FString> GetStringArrayField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		class UPlayFabJsonObject* GetObjectField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		TArray<class UPlayFabJsonObject*> GetObjectArrayField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		float GetNumberField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		TArray<float> GetNumberArrayField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		TArray<struct FString> GetFieldNames();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		class UPlayFabJsonValue* GetField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		bool GetBoolField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		TArray<bool> GetBoolArrayField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		TArray<class UPlayFabJsonValue*> GetArrayField(const struct FString& FieldName);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		struct FString EncodeJson();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		bool DecodeJson(const struct FString& JsonString);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonObject")
		class UPlayFabJsonObject* STATIC_ConstructJsonObject(class UObject* WorldContextObject);

};