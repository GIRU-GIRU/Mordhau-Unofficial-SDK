#pragma once

#include "CoreMinimal.h"
#include "RangedCancelMotion.generated.h"

UCLASS()
class URangedCancelMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* CurrentlyPlayingRangedCancel;


};