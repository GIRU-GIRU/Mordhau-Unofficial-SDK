#pragma once

#include "CoreMinimal.h"
#include "LevelSequenceBurnInOptions.generated.h"

UCLASS()
class ULevelSequenceBurnInOptions : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseBurnIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath BurnInClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULevelSequenceBurnInInitSettings* Settings;

	UFUNCTION(BlueprintCallable, Category = "LevelSequenceBurnInOptions")
	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);

};