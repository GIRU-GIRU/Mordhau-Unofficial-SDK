#pragma once

#include "CoreMinimal.h"
#include "LevelStreamingKismet.generated.h"

UCLASS()
class ULevelStreamingKismet : public ULevelStreaming
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInitiallyLoaded : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInitiallyVisible : 1;

	UFUNCTION(BlueprintCallable, Category = "LevelStreamingKismet")
	class ULevelStreamingKismet* STATIC_LoadLevelInstanceBySoftObjectPtr(class UObject* WorldContextObject, const struct FVector& Location, const struct FRotator& Rotation, bool* bOutSuccess);
	UFUNCTION(BlueprintCallable, Category = "LevelStreamingKismet")
		class ULevelStreamingKismet* STATIC_LoadLevelInstance(class UObject* WorldContextObject, const struct FString& LevelName, const struct FVector& Location, const struct FRotator& Rotation, bool* bOutSuccess);

};