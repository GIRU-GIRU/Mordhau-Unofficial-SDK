#pragma once

#include "CoreMinimal.h"
#include "ItemPattern.generated.h"

UCLASS()
class UItemPattern : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Texture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasColor1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasColor2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasColor3;


};