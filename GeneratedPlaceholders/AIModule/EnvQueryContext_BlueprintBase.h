#pragma once

#include "CoreMinimal.h"
#include "EnvQueryContext_BlueprintBase.generated.h"

UCLASS()
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "EnvQueryContext_BlueprintBase")
	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryContext_BlueprintBase")
		void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryContext_BlueprintBase")
		void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet);
	UFUNCTION(BlueprintCallable, Category = "EnvQueryContext_BlueprintBase")
		void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet);

};