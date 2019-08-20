#pragma once

#include "CoreMinimal.h"
#include "SoundGroups.generated.h"

UCLASS()
class USoundGroups : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundGroup> SoundGroupProfiles;


};