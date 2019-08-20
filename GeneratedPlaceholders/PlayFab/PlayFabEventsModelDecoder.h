#pragma once

#include "CoreMinimal.h"
#include "PlayFabEventsModelDecoder.generated.h"

UCLASS()
class UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabEventsModelDecoder")
	struct FEventsWriteEventsResponse STATIC_decodeWriteEventsResponseResponse(class UPlayFabJsonObject* response);

};