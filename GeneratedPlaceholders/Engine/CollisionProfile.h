#pragma once

#include "CoreMinimal.h"
#include "CollisionProfile.generated.h"

UCLASS()
class UCollisionProfile : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCollisionResponseTemplate> Profiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCustomChannelSetup> DefaultChannelResponses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCustomProfile> EditProfiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FRedirector> ProfileRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FRedirector> CollisionChannelRedirects;


};