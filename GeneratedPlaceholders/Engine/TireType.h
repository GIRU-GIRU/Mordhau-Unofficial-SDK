#pragma once

#include "CoreMinimal.h"
#include "TireType.generated.h"

UCLASS()
class UTireType : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrictionScale;


};