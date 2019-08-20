#pragma once

#include "CoreMinimal.h"
#include "BookMark2D.generated.h"

UCLASS()
class UBookMark2D : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Zoom2D;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntPoint Location;


};