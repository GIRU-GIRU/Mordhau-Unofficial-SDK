#pragma once

#include "CoreMinimal.h"
#include "LocalizedOverlays.generated.h"

UCLASS()
class ULocalizedOverlays : public UOverlays
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBasicOverlays* DefaultOverlays;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FString, class UBasicOverlays*> LocaleToOverlaysMap;


};