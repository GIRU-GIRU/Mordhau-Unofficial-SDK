#pragma once

#include "CoreMinimal.h"
#include "BookMark.generated.h"

UCLASS()
class UBookMark : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Location;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Rotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> HiddenLevels;


};