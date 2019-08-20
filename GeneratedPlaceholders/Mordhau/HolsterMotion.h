#pragma once

#include "CoreMinimal.h"
#include "HolsterMotion.generated.h"

UCLASS()
class UHolsterMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Mode;


};