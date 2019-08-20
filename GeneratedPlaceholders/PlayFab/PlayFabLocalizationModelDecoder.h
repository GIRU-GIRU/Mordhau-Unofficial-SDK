#pragma once

#include "CoreMinimal.h"
#include "PlayFabLocalizationModelDecoder.generated.h"

UCLASS()
class UPlayFabLocalizationModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabLocalizationModelDecoder")
	struct FLocalizationGetLanguageListResponse STATIC_decodeGetLanguageListResponseResponse(class UPlayFabJsonObject* response);

};