#pragma once

#include "CoreMinimal.h"
#include "GameplayTaskResource.generated.h"

UCLASS()
class UGameplayTaskResource : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ManualResourceID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int8_t AutoResourceID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bManuallySetID : 1;


};