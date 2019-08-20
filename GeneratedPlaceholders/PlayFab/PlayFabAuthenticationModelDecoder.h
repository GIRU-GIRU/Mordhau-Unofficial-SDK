#pragma once

#include "CoreMinimal.h"
#include "PlayFabAuthenticationModelDecoder.generated.h"

UCLASS()
class UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabAuthenticationModelDecoder")
	struct FAuthenticationGetEntityTokenResponse STATIC_decodeGetEntityTokenResponseResponse(class UPlayFabJsonObject* response);

};