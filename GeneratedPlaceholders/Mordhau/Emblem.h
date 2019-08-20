#pragma once

#include "CoreMinimal.h"
#include "Emblem.generated.h"

UCLASS()
class UEmblem : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Texture;


};