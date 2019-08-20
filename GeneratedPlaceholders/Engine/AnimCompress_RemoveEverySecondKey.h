#pragma once

#include "CoreMinimal.h"
#include "AnimCompress_RemoveEverySecondKey.generated.h"

UCLASS()
class UAnimCompress_RemoveEverySecondKey : public UAnimCompress
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinKeys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStartAtSecondKey : 1;


};