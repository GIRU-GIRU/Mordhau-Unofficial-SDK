#pragma once

#include "CoreMinimal.h"
#include "LocalPlayer.generated.h"

UCLASS()
class ULocalPlayer : public UPlayer
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameViewportClient* ViewportClient;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PendingLevelPlayerControllerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSentSplitJoin : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ControllerId;


};