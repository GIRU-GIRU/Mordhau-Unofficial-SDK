#pragma once

#include "CoreMinimal.h"
#include "DialogueVoice.generated.h"

UCLASS()
class UDialogueVoice : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EGrammaticalGender> Gender;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EGrammaticalNumber> Plurality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid LocalizationGUID;


};