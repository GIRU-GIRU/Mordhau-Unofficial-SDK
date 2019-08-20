#pragma once

#include "CoreMinimal.h"
#include "AISense.generated.h"

UCLASS()
class UAISense : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultExpirationAge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAISenseNotifyType NotifyType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWantsNewPawnNotification : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoRegisterAllPawnsAsSources : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAIPerceptionSystem* PerceptionSystemInstance;


};