#pragma once

#include "CoreMinimal.h"
#include "PlayFabCloudScriptModelDecoder.generated.h"

UCLASS()
class UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PlayFabCloudScriptModelDecoder")
	struct FCloudScriptExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);

};