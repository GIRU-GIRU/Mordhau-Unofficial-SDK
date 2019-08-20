#pragma once

#include "CoreMinimal.h"
#include "MediaSource.generated.h"

UCLASS()
class UMediaSource : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MediaSource")
	bool Validate();
	UFUNCTION(BlueprintCallable, Category = "MediaSource")
		struct FString GetUrl();

};