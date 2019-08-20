#pragma once

#include "CoreMinimal.h"
#include "PommelThrowDrawMotion.generated.h"

UCLASS()
class UPommelThrowDrawMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThirdStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasFiredLocally;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsPlaying1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentMontage;


};