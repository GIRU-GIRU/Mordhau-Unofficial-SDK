#pragma once

#include "CoreMinimal.h"
#include "SubsurfaceProfile.generated.h"

UCLASS()
class USubsurfaceProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSubsurfaceProfileStruct Settings;


};