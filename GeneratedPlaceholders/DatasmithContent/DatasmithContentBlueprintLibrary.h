#pragma once

#include "CoreMinimal.h"
#include "DatasmithContentBlueprintLibrary.generated.h"

UCLASS()
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "DatasmithContentBlueprintLibrary")
	struct FString STATIC_GetDatasmithUserDataValueForKey(class UObject* Object, const struct FName& Key);
	UFUNCTION(BlueprintCallable, Category = "DatasmithContentBlueprintLibrary")
		void STATIC_GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, const struct FString& StringToMatch, TArray<struct FName>* OutKeys, TArray<struct FString>* OutValues);
	UFUNCTION(BlueprintCallable, Category = "DatasmithContentBlueprintLibrary")
		class UDatasmithAssetUserData* STATIC_GetDatasmithUserData(class UObject* Object);

};