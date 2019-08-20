#pragma once

#include "CoreMinimal.h"
#include "KismetMaterialLibrary.generated.h"

UCLASS()
class UKismetMaterialLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetMaterialLibrary")
	void STATIC_SetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, const struct FLinearColor& ParameterValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMaterialLibrary")
		void STATIC_SetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName, float ParameterValue);
	UFUNCTION(BlueprintCallable, Category = "KismetMaterialLibrary")
		struct FLinearColor STATIC_GetVectorParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "KismetMaterialLibrary")
		float STATIC_GetScalarParameterValue(class UObject* WorldContextObject, class UMaterialParameterCollection* Collection, const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "KismetMaterialLibrary")
		class UMaterialInstanceDynamic* STATIC_CreateDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInterface* Parent, const struct FName& OptionalName);

};