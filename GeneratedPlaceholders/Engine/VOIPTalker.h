#pragma once

#include "CoreMinimal.h"
#include "VOIPTalker.generated.h"

UCLASS()
class UVOIPTalker : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVoiceSettings Settings;

	UFUNCTION(BlueprintCallable, Category = "VOIPTalker")
	void RegisterWithPlayerState(class APlayerState* OwningState);
	UFUNCTION(BlueprintCallable, Category = "VOIPTalker")
		float GetVoiceLevel();
	UFUNCTION(BlueprintCallable, Category = "VOIPTalker")
		class UVOIPTalker* STATIC_CreateTalkerForPlayer(class APlayerState* OwningState);
	UFUNCTION(BlueprintCallable, Category = "VOIPTalker")
		void BPOnTalkingEnd();
	UFUNCTION(BlueprintCallable, Category = "VOIPTalker")
		void BPOnTalkingBegin(class UAudioComponent* AudioComponent);

};