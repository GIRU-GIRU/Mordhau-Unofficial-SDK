#pragma once

#include "CoreMinimal.h"
#include "RichTextBlockImageDecorator.generated.h"

UCLASS()
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDataTable* ImageSet;


};