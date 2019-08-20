#pragma once

#include "CoreMinimal.h"
#include "Badge.generated.h"

UCLASS()
class UBadge : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Texture;


};