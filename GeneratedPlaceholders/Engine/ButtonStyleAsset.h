#pragma once

#include "CoreMinimal.h"
#include "ButtonStyleAsset.generated.h"

UCLASS()
class UButtonStyleAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FButtonStyle ButtonStyle;


};