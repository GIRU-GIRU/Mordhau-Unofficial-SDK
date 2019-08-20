#pragma once

#include "CoreMinimal.h"
#include "MordhauEquipmentPart.generated.h"

UCLASS()
class UMordhauEquipmentPart : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* SkeletalMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* AuxiliarySkeletalMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondTrailFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasColor1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasColor2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasColor3;


};