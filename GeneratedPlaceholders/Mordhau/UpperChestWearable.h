#pragma once

#include "CoreMinimal.h"
#include "UpperChestWearable.generated.h"

UCLASS()
class UUpperChestWearable : public UMordhauWearable
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SpineBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BreastBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BellyBouncyLimitsFat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BellyBouncyLimitsSlim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultLowerChest;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultArms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData03[0x10];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultShoulders;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData05[0x10];

	UFUNCTION(BlueprintCallable, Category = "UpperChestWearable")
	int GetShouldersWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearable")
		class UClass* GetShouldersWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearable")
		int GetLowerChestWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearable")
		class UClass* GetLowerChestWearable(int Index);
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearable")
		int GetArmsWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "UpperChestWearable")
		class UClass* GetArmsWearable(int Index);

};