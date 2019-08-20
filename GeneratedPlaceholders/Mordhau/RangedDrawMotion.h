#pragma once

#include "CoreMinimal.h"
#include "RangedDrawMotion.generated.h"

UCLASS()
class URangedDrawMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RandomValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator AimRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator AimVisualRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* DrawMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Draw1PMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* DrawEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* DrawEquipment1PMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* CurrentlyPlayingDraw;


};