#pragma once

#include "CoreMinimal.h"
#include "DropEquipmentMotion.generated.h"

UCLASS()
class UDropEquipmentMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsDroppingRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* DroppingEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Montage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DropTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasDropped;


};