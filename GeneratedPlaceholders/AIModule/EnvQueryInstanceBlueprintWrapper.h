#pragma once

#include "CoreMinimal.h"
#include "EnvQueryInstanceBlueprintWrapper.generated.h"

UCLASS()
class UEnvQueryInstanceBlueprintWrapper : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int QueryID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ItemType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OptionIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnQueryFinishedEvent;

	UFUNCTION(BlueprintCallable, Category = "EnvQueryInstanceBlueprintWrapper")
	void SetNamedParam(const struct FName& ParamName, float Value);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryInstanceBlueprintWrapper")
		TArray<struct FVector> GetResultsAsLocations();
	UFUNCTION(BlueprintCallable, Category = "EnvQueryInstanceBlueprintWrapper")
		TArray<class AActor*> GetResultsAsActors();
	UFUNCTION(BlueprintCallable, Category = "EnvQueryInstanceBlueprintWrapper")
		float GetItemScore(int ItemIndex);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryInstanceBlueprintWrapper")
		void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);

};