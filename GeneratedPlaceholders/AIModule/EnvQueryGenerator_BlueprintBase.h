#pragma once

#include "CoreMinimal.h"
#include "EnvQueryGenerator_BlueprintBase.generated.h"

UCLASS()
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText GeneratorsActionDescription;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Context;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GeneratedItemType;

	UFUNCTION(BlueprintCallable, Category = "EnvQueryGenerator_BlueprintBase")
	class UObject* GetQuerier();
	UFUNCTION(BlueprintCallable, Category = "EnvQueryGenerator_BlueprintBase")
		void DoItemGeneration(TArray<struct FVector> ContextLocations);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryGenerator_BlueprintBase")
		void AddGeneratedVector(const struct FVector& GeneratedVector);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryGenerator_BlueprintBase")
		void AddGeneratedActor(class AActor* GeneratedActor);

};