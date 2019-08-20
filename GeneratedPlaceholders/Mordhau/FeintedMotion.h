#pragma once

#include "CoreMinimal.h"
#include "FeintedMotion.generated.h"

UCLASS()
class UFeintedMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpineSpaceAdditiveBlendOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueueWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CouchFeintLockout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StrikeAndStabLockoutIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StrikeAndStabLockoutOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFeintType Type;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove FromMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasQueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove QueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueuedAngle;


};