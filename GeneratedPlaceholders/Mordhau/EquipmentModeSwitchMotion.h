#pragma once

#include "CoreMinimal.h"
#include "EquipmentModeSwitchMotion.generated.h"

UCLASS()
class UEquipmentModeSwitchMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Stage1Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Stage2Duration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Montage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* SwitchingEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VirtualReparentLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat VirtualReparentRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSwitchingToAlt;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EModeSwitchType SwitchType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasFinishedSwitch;


};