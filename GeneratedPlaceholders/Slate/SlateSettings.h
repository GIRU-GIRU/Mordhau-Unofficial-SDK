#pragma once

#include "CoreMinimal.h"
#include "SlateSettings.generated.h"

UCLASS()
class USlateSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bExplicitCanvasChildZOrder;


};