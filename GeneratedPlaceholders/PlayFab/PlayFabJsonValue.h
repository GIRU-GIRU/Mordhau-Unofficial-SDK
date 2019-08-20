#pragma once

#include "CoreMinimal.h"
#include "PlayFabJsonValue.generated.h"

UCLASS()
class UPlayFabJsonValue : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
	bool IsNull();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		struct FString GetTypeString();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		TEnumAsByte<EPFJson> GetType();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		class UPlayFabJsonValue* STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		class UPlayFabJsonValue* STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UPlayFabJsonObject* JsonObject);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		class UPlayFabJsonValue* STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		class UPlayFabJsonValue* STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		class UPlayFabJsonValue* STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UPlayFabJsonValue*> inArray);
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		struct FString AsString();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		class UPlayFabJsonObject* AsObject();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		float AsNumber();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		bool AsBool();
	UFUNCTION(BlueprintCallable, Category = "PlayFabJsonValue")
		TArray<class UPlayFabJsonValue*> AsArray();

};