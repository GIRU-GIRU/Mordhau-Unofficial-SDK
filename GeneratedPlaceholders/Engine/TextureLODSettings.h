#pragma once

#include "CoreMinimal.h"
#include "TextureLODSettings.generated.h"

UCLASS()
class UTextureLODSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTextureLODGroup> TextureLODGroups;


};