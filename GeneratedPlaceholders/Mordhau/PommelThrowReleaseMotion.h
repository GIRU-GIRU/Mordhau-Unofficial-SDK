#pragma once

#include "CoreMinimal.h"
#include "PommelThrowReleaseMotion.generated.h"

UCLASS()
class UPommelThrowReleaseMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauProjectile> CreatedLocalProjectile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstStageEnd;


};