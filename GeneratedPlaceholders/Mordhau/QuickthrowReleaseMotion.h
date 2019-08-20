#pragma once

#include "CoreMinimal.h"
#include "QuickthrowReleaseMotion.generated.h"

UCLASS()
class UQuickthrowReleaseMotion : public UMordhauMotion
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