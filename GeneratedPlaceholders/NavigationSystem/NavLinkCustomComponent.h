#pragma once

#include "CoreMinimal.h"
#include "NavLinkCustomComponent.generated.h"

UCLASS()
class UNavLinkCustomComponent : public UNavRelevantComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NavLinkUserId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* EnabledAreaClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DisabledAreaClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LinkRelativeStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LinkRelativeEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENavLinkDirection> LinkDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLinkEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNotifyWhenEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNotifyWhenDisabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCreateBoxObstacle : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ObstacleOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ObstacleExtent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ObstacleAreaClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BroadcastRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BroadcastInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> BroadcastChannel;


};