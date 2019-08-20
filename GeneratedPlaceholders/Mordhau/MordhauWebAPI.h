#pragma once

#include "CoreMinimal.h"
#include "MordhauWebAPI.generated.h"

UCLASS()
class UMordhauWebAPI : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPI")
	void RankBackendServers(int InPingedServerCount);
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPI")
		void ProcessRequestQueue();
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPI")
		bool IsAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPI")
		EAuthStatus GetAuthStatus();
	UFUNCTION(BlueprintCallable, Category = "MordhauWebAPI")
		bool Authenticate();

};