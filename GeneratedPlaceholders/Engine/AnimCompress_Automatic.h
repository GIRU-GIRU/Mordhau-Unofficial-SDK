#pragma once

#include "CoreMinimal.h"
#include "AnimCompress_Automatic.generated.h"

UCLASS()
class UAnimCompress_Automatic : public UAnimCompress
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxEndEffectorError;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTryFixedBitwiseCompression : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTryPerTrackBitwiseCompression : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTryLinearKeyRemovalCompression : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTryIntervalKeyRemoval : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRunCurrentDefaultCompressor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoReplaceIfExistingErrorTooGreat : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRaiseMaxErrorToExisting : 1;


};