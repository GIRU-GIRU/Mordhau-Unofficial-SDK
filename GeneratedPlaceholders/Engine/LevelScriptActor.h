#pragma once

#include "CoreMinimal.h"
#include "LevelScriptActor.generated.h"

UCLASS()
class ALevelScriptActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInputEnabled : 1;

	UFUNCTION(BlueprintCallable, Category = "LevelScriptActor")
	void WorldOriginLocationChanged(const struct FIntVector& OldOriginLocation, const struct FIntVector& NewOriginLocation);
	UFUNCTION(BlueprintCallable, Category = "LevelScriptActor")
		void SetCinematicMode(bool bCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
	UFUNCTION(BlueprintCallable, Category = "LevelScriptActor")
		bool RemoteEvent(const struct FName& EventName);
	UFUNCTION(BlueprintCallable, Category = "LevelScriptActor")
		void LevelReset();

};