#pragma once

#include "CoreMinimal.h"
#include "NavigationSystemModuleConfig.generated.h"

UCLASS()
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStrictlyStatic : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCreateOnClient : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoSpawnMissingNavData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSpawnNavDataInNavBoundsLevel : 1;


};