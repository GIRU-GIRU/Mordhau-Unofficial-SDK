#pragma once

#include "CoreMinimal.h"
#include "Player.generated.h"

UCLASS()
class UPlayer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerController* PlayerController;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurrentNetSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ConfiguredInternetSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ConfiguredLanSpeed;


};