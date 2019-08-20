#pragma once

#include "CoreMinimal.h"
#include "DatasmithSceneActor.generated.h"

UCLASS()
class ADatasmithSceneActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDatasmithScene* Scene;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x50];


};