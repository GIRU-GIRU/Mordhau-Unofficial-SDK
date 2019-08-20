#pragma once

#include "CoreMinimal.h"
#include "HudSettings.generated.h"

UCLASS()
class UHudSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowHUD : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> DebugDisplay;


};