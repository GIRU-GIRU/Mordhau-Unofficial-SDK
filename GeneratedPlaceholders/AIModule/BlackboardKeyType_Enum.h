#pragma once

#include "CoreMinimal.h"
#include "BlackboardKeyType_Enum.generated.h"

UCLASS()
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnum* EnumType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString EnumName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsEnumNameValid : 1;


};