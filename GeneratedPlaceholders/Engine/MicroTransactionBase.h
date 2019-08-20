#pragma once

#include "CoreMinimal.h"
#include "MicroTransactionBase.generated.h"

UCLASS()
class UMicroTransactionBase : public UPlatformInterfaceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPurchaseInfo> AvailableProducts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LastError;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LastErrorSolution;


};