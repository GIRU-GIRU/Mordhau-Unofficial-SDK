#pragma once

#include "CoreMinimal.h"
#include "NavArea.generated.h"

UCLASS()
class UNavArea : public UNavAreaBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FixedAreaEnteringCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor DrawColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAgentSelector SupportedAgents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent0 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent1 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent2 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent3 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent4 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent5 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent6 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent7 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent8 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent9 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent10 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent11 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent12 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent13 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent14 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportsAgent15 : 1;


};