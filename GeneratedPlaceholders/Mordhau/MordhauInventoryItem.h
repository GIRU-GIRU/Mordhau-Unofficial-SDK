#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.generated.h"

UCLASS()
class UMordhauInventoryItem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* ItemIcon;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ItemDefID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText ItemName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EItemRarity ItemRarity;


};