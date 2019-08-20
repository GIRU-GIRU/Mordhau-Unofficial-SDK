#pragma once

#include "CoreMinimal.h"
#include "TextRenderActor.generated.h"

UCLASS()
class ATextRenderActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextRenderComponent* TextRender;


};