#pragma once

#include "CoreMinimal.h"
#include "DropTimecodeToStringConversion.generated.h"

UCLASS()
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "DropTimecodeToStringConversion")
	struct FString STATIC_Conv_DropTimecodeToString(const struct FDropTimecode& InTimecode);

};