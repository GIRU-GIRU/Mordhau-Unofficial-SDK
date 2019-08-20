#pragma once

#include "CoreMinimal.h"
#include "Perk.generated.h"

UCLASS()
class UPerk : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Name;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Cost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Description;


};