#pragma once

#include "CoreMinimal.h"
#include "AchievementQueryCallbackProxy.generated.h"

UCLASS()
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "AchievementQueryCallbackProxy")
	class UAchievementQueryCallbackProxy* STATIC_CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "AchievementQueryCallbackProxy")
		class UAchievementQueryCallbackProxy* STATIC_CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController);

};