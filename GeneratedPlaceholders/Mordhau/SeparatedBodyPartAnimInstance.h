#pragma once

#include "CoreMinimal.h"
#include "SeparatedBodyPartAnimInstance.generated.h"

UCLASS()
class USeparatedBodyPartAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLeftForeArmDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRightForeArmDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLeftLegDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRightLegDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLeftFootDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRightFootDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLeftHandDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRightHandDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsLeftArm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsLeftForeArm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsLeftHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsRightArm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsRightForeArm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsLeftUpLeg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsLeftLeg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsLeftFoot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsRightUpLeg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsRightLeg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootIsRightFoot;


};